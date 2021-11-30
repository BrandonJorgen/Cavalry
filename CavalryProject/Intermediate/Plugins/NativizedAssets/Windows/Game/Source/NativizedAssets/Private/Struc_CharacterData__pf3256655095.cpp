#include "NativizedAssets.h"
#include "Struc_CharacterData__pf3256655095.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "BP_PlayerCharacter_Base__pf1490413170.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
FStruc_CharacterData__pf3256655095::FStruc_CharacterData__pf3256655095()
{
	bpv__ID_2_5AC298EC41D84DAAA3A5C5BB5E2C75C3__pf = 0;
	bpv__Name_11_7C49E5F347C142A89A1C7BA4644CC9A0__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[E350A72E4B3D5482E74591B18BAB1A66]\", \"956312D7445C85BCDB8D84B389C2432F\", \"Name\")")	);
	bpv__Description_12_F4B3087547A8585A495D1FA2957C210D__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[E350A72E4B3D5482E74591B18BAB1A66]\", \"483994AF4EFBBB87766695B39E468731\", \"Description\")")	);
	bpv__Character_17_1A17CA034A492038F4A2DDABFAE689BC__pf = nullptr;
	bpv__Image_14_3FAA3787483113AC10F5E88AFFE6745A__pf = nullptr;
}
PRAGMA_DISABLE_OPTIMIZATION
void FStruc_CharacterData__pf3256655095::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{0, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.Texture 
		{1, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.CameraComponent 
		{2, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.PostProcessComponent 
		{3, FBlueprintDependencyType(false, true, false, false)},  //  TextureCube /Game/Imports/StarterContent/HDRI/HDRI_Epic_Courtyard_Daylight.HDRI_Epic_Courtyard_Daylight 
		{4, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.SceneComponent 
		{5, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.ArrowComponent 
		{6, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.Actor 
		{7, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Characters/BPC_Famine.BPC_Famine_C 
		{8, FBlueprintDependencyType(false, true, false, false)},  //  BPC_Famine_C /Game/Blueprints/Characters/BPC_Famine.Default__BPC_Famine_C 
		{9, FBlueprintDependencyType(false, true, false, false)},  //  Enum /Script/Engine.EObjectTypeQuery 
		{10, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{11, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{12, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{13, FBlueprintDependencyType(false, true, false, false)},  //  DelegateFunction /Script/Engine.TimerDynamicDelegate__DelegateSignature 
		{14, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{15, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{16, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{17, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{18, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.CapsuleComponent 
		{19, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.Character 
		{20, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary 
		{21, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/KatDataPlugin4BP.KatDataPlugin4BPBPLibrary 
		{22, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.CharacterMovementComponent 
		{23, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{24, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv 
		{25, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{26, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/AIModule.AIController 
		{27, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{28, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.WidgetComponent 
		{29, FBlueprintDependencyType(false, true, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent.Widget3DPassThrough_Translucent 
		{30, FBlueprintDependencyType(false, true, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent_OneSided.Widget3DPassThrough_Translucent_OneSided 
		{31, FBlueprintDependencyType(false, true, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque.Widget3DPassThrough_Opaque 
		{32, FBlueprintDependencyType(false, true, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque_OneSided.Widget3DPassThrough_Opaque_OneSided 
		{33, FBlueprintDependencyType(false, true, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked.Widget3DPassThrough_Masked 
		{34, FBlueprintDependencyType(false, true, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked_OneSided.Widget3DPassThrough_Masked_OneSided 
		{35, FBlueprintDependencyType(false, true, false, false)},  //  Material /Game/HUD/Widgets/Widget3DNoPassThrough.Widget3DNoPassThrough 
		{36, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.UserWidget 
		{37, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{38, FBlueprintDependencyType(false, true, false, false)},  //  PaperFlipbook /Game/HUD/Images/TakeDamage/ShieldDam_V2.ShieldDam_V2 
		{39, FBlueprintDependencyType(false, true, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{40, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.TextBlock 
		{41, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{42, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.Widget 
		{43, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{44, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.WidgetAnimation 
		{45, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Paper2D.PaperFlipbook 
		{46, FBlueprintDependencyType(false, true, false, false)},  //  Material /Game/HUD/Images/TakeDamage/MAT_TakeDamage.MAT_TakeDamage 
		{47, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.Image 
		{48, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{49, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.PlayerController 
		{50, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.PlayerCameraManager 
		{51, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/UMG.WidgetTransform 
		{52, FBlueprintDependencyType(false, true, false, false)},  //  Texture2D /Game/HUD/Images/Arrow_Render_V2.Arrow_Render_V2 
		{53, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.UMGSequencePlayer 
		{54, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.SphereComponent 
		{55, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.MeshComponent 
		{56, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.ActorComponent 
		{57, FBlueprintDependencyType(false, true, false, false)},  //  AnimSequence /Game/Meshes/Placeholder/Player_Generic/HandClosed.HandClosed 
		{58, FBlueprintDependencyType(false, true, false, false)},  //  AnimSequence /Game/Meshes/Placeholder/Player_Generic/HandOpen.HandOpen 
		{59, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Characters/BPC_Death.BPC_Death_C 
		{60, FBlueprintDependencyType(false, true, false, false)},  //  BPC_Death_C /Game/Blueprints/Characters/BPC_Death.Default__BPC_Death_C 
		{61, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Characters/BPC_Conquest.BPC_Conquest_C 
		{62, FBlueprintDependencyType(false, true, false, false)},  //  BPC_Conquest_C /Game/Blueprints/Characters/BPC_Conquest.Default__BPC_Conquest_C 
		{63, FBlueprintDependencyType(false, true, false, false)},  //  Texture2D /Game/HUD/Images/ObjectiveMarker_HUD.ObjectiveMarker_HUD 
		{64, FBlueprintDependencyType(false, true, false, false)},  //  Texture2D /Game/HUD/Images/OverlayCombined_HUD.OverlayCombined_HUD 
		{65, FBlueprintDependencyType(false, true, false, false)},  //  StaticMesh /Game/Meshes/Placeholder/Player_Generic/SM_FP_Gear_Whitebox.SM_FP_Gear_Whitebox 
		{66, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.ChildActorComponent 
		{67, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{68, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.BoxComponent 
		{69, FBlueprintDependencyType(false, true, false, false)},  //  Enum /Script/InputCore.EControllerHand 
		{70, FBlueprintDependencyType(false, true, false, false)},  //  StaticMesh /Game/VirtualReality/Meshes/BeamMesh.BeamMesh 
		{71, FBlueprintDependencyType(false, true, false, false)},  //  Material /Game/VirtualReality/Materials/M_SplineArcMat.M_SplineArcMat 
		{72, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/HeadMountedDisplay.MotionControllerComponent 
		{73, FBlueprintDependencyType(false, true, false, false)},  //  SkeletalMesh /Game/Meshes/Placeholder/Player_Generic/GE_Hand_Master_Grp.GE_Hand_Master_Grp 
		{74, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.SplineComponent 
		{75, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/UMG.WidgetInteractionComponent 
		{76, FBlueprintDependencyType(false, true, false, false)},  //  StaticMesh /Engine/BasicShapes/Sphere.Sphere 
		{77, FBlueprintDependencyType(false, true, false, false)},  //  Material /Game/VirtualReality/Materials/M_ArcEndpoint.M_ArcEndpoint 
		{78, FBlueprintDependencyType(false, true, false, false)},  //  StaticMesh /Engine/BasicShapes/Cylinder.Cylinder 
		{79, FBlueprintDependencyType(false, true, false, false)},  //  MaterialInstanceConstant /Game/VirtualReality/Materials/MI_TeleportCylinderPreview.MI_TeleportCylinderPreview 
		{80, FBlueprintDependencyType(false, true, false, false)},  //  StaticMesh /Game/VirtualReality/Meshes/SM_FatCylinder.SM_FatCylinder 
		{81, FBlueprintDependencyType(false, true, false, false)},  //  StaticMesh /Game/VirtualReality/Meshes/BeaconDirection.BeaconDirection 
		{82, FBlueprintDependencyType(false, true, false, false)},  //  StaticMesh /Game/VirtualReality/Meshes/1x1_cube.1x1_cube 
		{83, FBlueprintDependencyType(false, true, false, false)},  //  MaterialInstanceConstant /Game/VirtualReality/Materials/MI_ChaperoneOutline.MI_ChaperoneOutline 
		{84, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/SteamVR.SteamVRChaperoneComponent 
		{85, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.AnimInstance 
		{86, FBlueprintDependencyType(false, true, false, false)},  //  HapticFeedbackEffect_Curve /Game/VirtualRealityBP/Blueprints/MotionControllerHaptics.MotionControllerHaptics 
		{87, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.SplineMeshComponent 
		{88, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/NavigationSystem.NavigationSystemV1 
		{89, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.KismetNodeHelperLibrary 
		{90, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Niagara.NiagaraFunctionLibrary 
		{91, FBlueprintDependencyType(false, true, false, false)},  //  Enum /Script/Engine.ETimelineDirection 
		{92, FBlueprintDependencyType(false, true, false, false)},  //  StaticMesh /Game/Meshes/Placeholder/Weapons/Pistol/OLD/Pistol_Magazine_Whitebox_Low.Pistol_Magazine_Whitebox_Low 
		{93, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_TransitionResult 
		{94, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/Engine.PoseLink 
		{95, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_SequencePlayer 
		{96, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_StateResult 
		{97, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_StateMachine 
		{98, FBlueprintDependencyType(false, true, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_Root 
		{99, FBlueprintDependencyType(false, true, false, false)},  //  AnimSequence /Game/Meshes/Placeholder/Player_Generic/Pistol_Second_Hand_Grip.Pistol_Second_Hand_Grip 
		{100, FBlueprintDependencyType(false, true, false, false)},  //  AnimSequence /Game/Meshes/Placeholder/Player_Generic/HandPistolGrip.HandPistolGrip 
		{101, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Niagara.NiagaraComponent 
		{102, FBlueprintDependencyType(false, true, false, false)},  //  NiagaraSystem /Game/VisualEffects/Niagara/NS_muzzle_flash.NS_muzzle_flash 
		{103, FBlueprintDependencyType(false, true, false, false)},  //  Enum /Script/Engine.EMoveComponentAction 
		{104, FBlueprintDependencyType(false, true, false, false)},  //  Enum /Script/Engine.ECollisionChannel 
		{105, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.TimelineComponent 
		{106, FBlueprintDependencyType(false, true, false, false)},  //  Texture2D /Game/HUD/Images/AmmoMarker_HUD.AmmoMarker_HUD 
		{107, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.ProjectileMovementComponent 
		{108, FBlueprintDependencyType(false, true, false, false)},  //  Skeleton /Game/Meshes/Placeholder/Player_Generic/GE_Hand_Master_Grp_Skeleton.GE_Hand_Master_Grp_Skeleton 
		{109, FBlueprintDependencyType(false, true, false, false)},  //  StaticMesh /Game/Meshes/Placeholder/Weapons/Pistol/Pistol_Main.Pistol_Main 
		{110, FBlueprintDependencyType(false, true, false, false)},  //  StaticMesh /Game/Meshes/Placeholder/Weapons/Pistol/Pistol_Lever.Pistol_Lever 
		{111, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Weapons/BPC_Shotgun_Shell.BPC_Shotgun_Shell_C 
		{112, FBlueprintDependencyType(false, true, false, false)},  //  BPC_Shotgun_Shell_C /Game/Blueprints/Weapons/BPC_Shotgun_Shell.Default__BPC_Shotgun_Shell_C 
		{113, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Weapons/BPC_SMG_Magazine.BPC_SMG_Magazine_C 
		{114, FBlueprintDependencyType(false, true, false, false)},  //  BPC_SMG_Magazine_C /Game/Blueprints/Weapons/BPC_SMG_Magazine.Default__BPC_SMG_Magazine_C 
		{115, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Weapons/BPC_DMR_Magazine.BPC_DMR_Magazine_C 
		{116, FBlueprintDependencyType(false, true, false, false)},  //  BPC_DMR_Magazine_C /Game/Blueprints/Weapons/BPC_DMR_Magazine.Default__BPC_DMR_Magazine_C 
		{117, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Weapons/BPC_Rifle_Magazine.BPC_Rifle_Magazine_C 
		{118, FBlueprintDependencyType(false, true, false, false)},  //  BPC_Rifle_Magazine_C /Game/Blueprints/Weapons/BPC_Rifle_Magazine.Default__BPC_Rifle_Magazine_C 
		{119, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Weapons/BPC_Pistol_Magazine.BPC_Pistol_Magazine_C 
		{120, FBlueprintDependencyType(false, true, false, false)},  //  BPC_Pistol_Magazine_C /Game/Blueprints/Weapons/BPC_Pistol_Magazine.Default__BPC_Pistol_Magazine_C 
		{121, FBlueprintDependencyType(false, true, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Characters/BP_PlayerCharacter_Base.BP_PlayerCharacter_Base_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__FStruc_CharacterData__pf3256655095
{
	FRegisterHelper__FStruc_CharacterData__pf3256655095()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/HUD/Main_Menu/Struc_CharacterData"), &FStruc_CharacterData__pf3256655095::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FStruc_CharacterData__pf3256655095 Instance;
};
FRegisterHelper__FStruc_CharacterData__pf3256655095 FRegisterHelper__FStruc_CharacterData__pf3256655095::Instance;
