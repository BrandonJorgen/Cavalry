#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UButton;
class UTextBlock;
#include "Widget_CharacterSelect_Button__pf3256655095.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/HUD/Main_Menu/Widget_CharacterSelect_Button.Widget_CharacterSelect_Button_C", OverrideNativeName="Widget_CharacterSelect_Button_C"))
class UWidget_CharacterSelect_Button_C__pf3256655095 : public UUserWidget
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="OnCharacterSelected__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterSelected__pf__Widget_CharacterSelect_Button_C__pf__MulticastDelegate , int32 , bpp__Index__pf);
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_CharacterSelectionButton", Category="Widget_CharacterSelect_Button", OverrideNativeName="Button_CharacterSelectionButton"))
	UButton* bpv__Button_CharacterSelectionButton__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="TextBlock_CharacterName", Category="Widget_CharacterSelect_Button", OverrideNativeName="TextBlock_CharacterName"))
	UTextBlock* bpv__TextBlock_CharacterName__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Selected Button Style", Category="Default", MultiLine="true", OverrideNativeName="SelectedButtonStyle"))
	FButtonStyle bpv__SelectedButtonStyle__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Slection Index", Category="Default", MultiLine="true", ExposeOnSpawn="true", OverrideNativeName="SlectionIndex"))
	int32 bpv__SlectionIndex__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Display Name", Category="Default", MultiLine="true", ExposeOnSpawn="true", OverrideNativeName="DisplayName"))
	FText bpv__DisplayName__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="On Character Selected", Category="Default", MultiLine="true", OverrideNativeName="OnCharacterSelected"))
	FOnCharacterSelected__pf__Widget_CharacterSelect_Button_C__pf__MulticastDelegate bpv__OnCharacterSelected__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Deselected Button Style", Category="Default", MultiLine="true", OverrideNativeName="DeselectedButtonStyle"))
	FButtonStyle bpv__DeselectedButtonStyle__pf;
	UWidget_CharacterSelect_Button_C__pf3256655095(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Widget_CharacterSelect_Button__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Widget_CharacterSelect_Button__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Widget_CharacterSelect_Button__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Widget_CharacterSelect_Button__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="IsDeselected"))
	virtual void bpf__IsDeselected__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="IsSelected"))
	virtual void bpf__IsSelected__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Widget_LevelSelect_Button_Button_LevelSelectionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Widget_LevelSelect_Button_Button_LevelSelectionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetSelectionIndex"))
	virtual void bpf__GetSelectionIndex__pf(/*out*/ int32& bpp__SlectionIndex__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
