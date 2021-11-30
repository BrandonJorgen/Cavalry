#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Animation/AnimClassData.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_TransitionResult.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_SequencePlayer.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_StateResult.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_StateMachine.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_Root.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Hand_Positions_Enum__pf423755669.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
class ABP_MotionController_C__pf563933975;
#include "ABP_Hand__pf423755669.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Meshes/Placeholder/Player_Generic/ABP_Hand.ABP_Hand_C", OverrideNativeName="ABP_Hand_C"))
class UABP_Hand_C__pf423755669 : public UAnimInstance
{
public:
	GENERATED_BODY()
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_11"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_11__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_10"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_10__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_9"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_9__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_8"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_8__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_7"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_7__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_6"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_6__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_5"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_5__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_4"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_4__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_3"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_3__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_2"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_1"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_3"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_3__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_3"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_3__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_2"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_2"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_1"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_1"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateMachine"))
	FAnimNode_StateMachine bpv__AnimGraphNode_StateMachine__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_Root"))
	FAnimNode_Root bpv__AnimGraphNode_Root__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Grip", Category="Default", MultiLine="true", OverrideNativeName="Grip"))
	float bpv__Grip__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Interp Speed", Category="Default", MultiLine="true", OverrideNativeName="InterpSpeed"))
	float bpv__InterpSpeed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Hand Enum", Category="Default", MultiLine="true", OverrideNativeName="HandEnum"))
	EControllerHand bpv__HandEnum__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Grip State", Category="Default", MultiLine="true", OverrideNativeName="GripState"))
	E__Hand_Positions_Enum__pf bpv__GripState__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Motion_Controller"))
	ABP_MotionController_C__pf563933975* b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaTimeX"))
	float b0l__K2Node_Event_DeltaTimeX__pf;
	UABP_Hand_C__pf423755669(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void __InitAllAnimNodes();
	void __InitAnimNode__AnimGraphNode_TransitionResult_11();
	void __InitAnimNode__AnimGraphNode_TransitionResult_10();
	void __InitAnimNode__AnimGraphNode_TransitionResult_9();
	void __InitAnimNode__AnimGraphNode_TransitionResult_8();
	void __InitAnimNode__AnimGraphNode_TransitionResult_7();
	void __InitAnimNode__AnimGraphNode_TransitionResult_6();
	void __InitAnimNode__AnimGraphNode_TransitionResult_5();
	void __InitAnimNode__AnimGraphNode_TransitionResult_4();
	void __InitAnimNode__AnimGraphNode_TransitionResult_3();
	void __InitAnimNode__AnimGraphNode_TransitionResult_2();
	void __InitAnimNode__AnimGraphNode_TransitionResult_1();
	void __InitAnimNode__AnimGraphNode_TransitionResult();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_3();
	void __InitAnimNode__AnimGraphNode_StateResult_3();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_2();
	void __InitAnimNode__AnimGraphNode_StateResult_2();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_1();
	void __InitAnimNode__AnimGraphNode_StateResult_1();
	void __InitAnimNode__AnimGraphNode_SequencePlayer();
	void __InitAnimNode__AnimGraphNode_StateResult();
	void __InitAnimNode__AnimGraphNode_StateMachine();
	void __InitAnimNode__AnimGraphNode_Root();
	void bpf__ExecuteUbergraph_ABP_Hand__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Hand__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Hand__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Hand__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Hand__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Hand__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Hand__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Hand__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Hand__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Hand__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Hand__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Hand__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Hand__pf_12(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ABP_Hand__pf_13(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Executed when begin play is called on the owning component */", ToolTip="Executed when begin play is called on the owning component", CppFromBpEvent, OverrideNativeName="BlueprintBeginPlay"))
	virtual void bpf__BlueprintBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Hand_AnimGraphNode_TransitionResult_B725B8B542BDB9D732D9F9BD6B5E6F61"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Hand_AnimGraphNode_TransitionResult_B725B8B542BDB9D732D9F9BD6B5E6F61__pf();
	UFUNCTION(meta=(Comment="/** Executed when the Animation is updated */", ToolTip="Executed when the Animation is updated", CppFromBpEvent, OverrideNativeName="BlueprintUpdateAnimation"))
	virtual void bpf__BlueprintUpdateAnimation__pf(float bpp__DeltaTimeX__pf);
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Hand_AnimGraphNode_TransitionResult_D8F1A59E463D7C4D7F6169B534BF925F"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Hand_AnimGraphNode_TransitionResult_D8F1A59E463D7C4D7F6169B534BF925F__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Hand_AnimGraphNode_TransitionResult_9ED7C4C54EC247F38C0EC3AA5BBE45C7"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Hand_AnimGraphNode_TransitionResult_9ED7C4C54EC247F38C0EC3AA5BBE45C7__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Hand_AnimGraphNode_TransitionResult_4ED61E8E458915B89BB45CBD60421A59"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Hand_AnimGraphNode_TransitionResult_4ED61E8E458915B89BB45CBD60421A59__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Hand_AnimGraphNode_TransitionResult_E1CF62F347860646112E3AA3452E6285"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Hand_AnimGraphNode_TransitionResult_E1CF62F347860646112E3AA3452E6285__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Hand_AnimGraphNode_TransitionResult_5AE22EDF48F8C75CDEF0AFBF2CF97D53"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Hand_AnimGraphNode_TransitionResult_5AE22EDF48F8C75CDEF0AFBF2CF97D53__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Hand_AnimGraphNode_TransitionResult_DBAD76C74BABB28D69835C95A3066AEA"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Hand_AnimGraphNode_TransitionResult_DBAD76C74BABB28D69835C95A3066AEA__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Hand_AnimGraphNode_TransitionResult_DECF184347CFA701FA88BFAB3EC3162B"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Hand_AnimGraphNode_TransitionResult_DECF184347CFA701FA88BFAB3EC3162B__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Hand_AnimGraphNode_TransitionResult_F3553F9E494F245EDCA0C8AB8F84016A"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Hand_AnimGraphNode_TransitionResult_F3553F9E494F245EDCA0C8AB8F84016A__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Hand_AnimGraphNode_TransitionResult_4528F0E4407B55CCCE2A33BFEEF474CD"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Hand_AnimGraphNode_TransitionResult_4528F0E4407B55CCCE2A33BFEEF474CD__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Hand_AnimGraphNode_TransitionResult_82BA86A34AA11A3040DB619383A89CB1"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Hand_AnimGraphNode_TransitionResult_82BA86A34AA11A3040DB619383A89CB1__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Hand_AnimGraphNode_TransitionResult_E3D4A37D4642D9A4BE276CBB7EAE6B16"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Hand_AnimGraphNode_TransitionResult_E3D4A37D4642D9A4BE276CBB7EAE6B16__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", AnimBlueprintFunction="true", Category, OverrideNativeName="AnimGraph"))
	virtual void bpf__AnimGraph__pf(/*out*/ FPoseLink& bpp__AnimGraph__pf);
public:
};
