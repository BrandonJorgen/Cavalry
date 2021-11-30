#include "NativizedAssets.h"
#include "BP_PlayerGear__pf3324220276.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/PhysicsCore/Public/BodySetupCore.h"
#include "Runtime/PhysicsCore/Public/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/TaperedCapsuleElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/PhysicsCore/Public/BodyInstanceCore.h"
#include "Runtime/Engine/Classes/Engine/BrushBuilder.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskResource.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/PathFollowingAgentInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardAssetProvider.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraph.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphSchema.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/NavigationSystem/Public/NavFilters/NavigationQueryFilter.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AISense.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/AISubsystem.h"
#include "Runtime/AIModule/Classes/AISystem.h"
#include "Runtime/Engine/Classes/AI/AISystemBase.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeManager.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryManager.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQuery.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryOption.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryGenerator.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryNode.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Items/EnvQueryItemType.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTest.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
#include "Runtime/AIModule/Classes/DataProviders/AIDataProvider.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EQSQueryResultSourceInterface.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryContext.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/AIModule/Classes/HotSpots/AIHotSpotManager.h"
#include "Runtime/AIModule/Classes/Navigation/NavLocalGridManager.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundModulationDestination.h"
#include "Runtime/AudioExtensions/Public/IAudioModulation.h"
#include "Runtime/Engine/Classes/Sound/AudioOutputTarget.h"
#include "Runtime/Engine/Classes/Sound/SoundWaveLoadingBehavior.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmixSend.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/AudioPlatformConfiguration/Public/AudioCompressionSettings.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/CurveTable.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/AudioExtensions/Public/ISoundfieldFormat.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/EditorFramework/ThumbnailInfo.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionComment.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionMaterialFunctionCall.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionInput.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionOutput.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
#include "Runtime/Engine/Classes/VT/RuntimeVirtualTexture.h"
#include "Runtime/Engine/Public/VT/RuntimeVirtualTextureEnum.h"
#include "Runtime/Engine/Classes/VT/VirtualTexture.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColorAtlas.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Landscape/Classes/LandscapeGrassType.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/StaticMeshDescription/Public/StaticMeshDescription.h"
#include "Runtime/MeshDescription/Public/MeshDescriptionBase.h"
#include "Runtime/MeshDescription/Public/MeshTypes.h"
#include "Runtime/Engine/Public/Components.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/ReverbSettings.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/Engine/Classes/Engine/BookmarkBase.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Engine/MaterialMerging.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/CoreUObject/Public/UObject/CoreNetTypes.h"
#include "Runtime/Engine/Classes/Engine/Breakpoint.h"
#include "Runtime/Engine/Public/Blueprint/BlueprintExtension.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Particles/ParticleLODLevel.h"
#include "Runtime/Engine/Classes/Particles/ParticleModuleRequired.h"
#include "Runtime/Engine/Classes/Particles/ParticleModule.h"
#include "Runtime/Engine/Classes/Particles/ParticleSpriteEmitter.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/Distribution.h"
#include "Runtime/Engine/Classes/Particles/SubUVAnimation.h"
#include "Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawn.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawnBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventGenerator.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventSendToGame.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbit.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbitBase.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverBase.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Classes/Animation/Rig.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
#include "Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AssetMappingTable.h"
#include "Runtime/Engine/Classes/Animation/PoseAsset.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h"
#include "Runtime/Engine/Classes/Animation/CustomAttributes.h"
#include "Runtime/Engine/Classes/Curves/StringCurve.h"
#include "Runtime/Engine/Classes/Curves/IntegralCurve.h"
#include "Runtime/Engine/Classes/Curves/SimpleCurve.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshEditorData.h"
#include "Runtime/Engine/Public/LODSyncInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/PropertyAccess/Public/PropertyAccess.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactory.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "Runtime/Engine/Classes/Engine/PoseWatch.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/EngineCustomTimeStep.h"
#include "Runtime/Engine/Classes/Engine/TimecodeProvider.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/MovieScene/Public/MovieSceneSignedObject.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
#include "Runtime/MovieScene/Public/Compilation/MovieSceneCompiledDataManager.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrackEvaluationField.h"
#include "Runtime/MovieScene/Public/MovieSceneSection.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneCompletionMode.h"
#include "Runtime/MovieScene/Public/Evaluation/Blending/MovieSceneBlendType.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingFunction.h"
#include "Runtime/MovieScene/Public/MovieSceneFrameMigration.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingCurves.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackImplementation.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeWarping.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceInstanceData.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationKey.h"
#include "Runtime/MovieScene/Public/MovieSceneFwd.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieSceneFolder.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplateInstance.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemLinker.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemGraphs.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeBase.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeSourceComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/UMG/Public/Animation/UMGSequenceTickManager.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "BP_MagneticPlacement__pf3911806087.h"
#include "BP_GrabAmmoTrigger__pf3324220276.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "BPC_Pistol__pf1418999182.h"
#include "BP_Firearm_Base__pf1418999182.h"
#include "BP_Tool_Base__pf3911806087.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/AudioMixer/Public/Quartz/AudioMixerClockHandle.h"
#include "Runtime/Engine/Classes/Sound/QuartzQuantizationUtilities.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
#include "Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueSoundWaveProxy.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "E_LoadType__pf1725717533.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ABP_PlayerGear_C__pf3324220276::ABP_PlayerGear_C__pf3324220276(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__SM_FP_Gear_Whitebox__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM_FP_Gear_Whitebox"));
	bpv__Magnetx1__pfT = CreateDefaultSubobject<UChildActorComponent>(TEXT("Magnet 1"));
	bpv__Magnetx2__pfT = CreateDefaultSubobject<UChildActorComponent>(TEXT("Magnet 2"));
	bpv__Magnetx3__pfT = CreateDefaultSubobject<UChildActorComponent>(TEXT("Magnet 3"));
	bpv__Magnetx4__pfT = CreateDefaultSubobject<UChildActorComponent>(TEXT("Magnet 4"));
	bpv__Magnetx5__pfT = CreateDefaultSubobject<UChildActorComponent>(TEXT("Magnet 5"));
	bpv__Magnetx6__pfT = CreateDefaultSubobject<UChildActorComponent>(TEXT("Magnet 6"));
	bpv__Magnetx7__pfT = CreateDefaultSubobject<UChildActorComponent>(TEXT("Magnet 7"));
	bpv__Magnetx8__pfT = CreateDefaultSubobject<UChildActorComponent>(TEXT("Magnet 8"));
	RootComponent = bpv__SM_FP_Gear_Whitebox__pf;
	bpv__SM_FP_Gear_Whitebox__pf->CreationMethod = EComponentCreationMethod::Native;
	auto& __Local__0 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__SM_FP_Gear_Whitebox__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__0 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_PlayerGear_C__pf3324220276::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__1 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(bpv__SM_FP_Gear_Whitebox__pf->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
	__Local__1 = ECollisionChannel::ECC_GameTraceChannel3;
	auto& __Local__2 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionEnabled::Type> >(&(bpv__SM_FP_Gear_Whitebox__pf->BodyInstance), FBodyInstance::__PPO__CollisionEnabled() )));
	__Local__2 = ECollisionEnabled::Type::NoCollision;
	auto& __Local__3 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__SM_FP_Gear_Whitebox__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__4 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__3), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__4 = TArray<FResponseChannel> ();
	__Local__4.AddUninitialized(3);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__4.GetData(), 3);
	auto& __Local__5 = __Local__4[0];
	__Local__5.Channel = FName(TEXT("WorldDynamic"));
	__Local__5.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__6 = __Local__4[1];
	__Local__6.Channel = FName(TEXT("WorldStatic"));
	__Local__6.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__7 = __Local__4[2];
	__Local__7.Channel = FName(TEXT("PlayerCollision"));
	__Local__7.Response = ECollisionResponse::ECR_Ignore;
	bpv__SM_FP_Gear_Whitebox__pf->SetCollisionProfileName(FName(TEXT("Custom")));
	static TWeakFieldPtr<FProperty> __Local__9{};
	const FProperty* __Local__8 = __Local__9.Get();
	if (nullptr == __Local__8)
	{
		__Local__8 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__8);
		__Local__9 = __Local__8;
	}
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__SM_FP_Gear_Whitebox__pf), true, 0));
	bpv__Magnetx1__pfT->CreationMethod = EComponentCreationMethod::Native;
	bpv__Magnetx1__pfT->AttachToComponent(bpv__SM_FP_Gear_Whitebox__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__10 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Magnetx1__pfT), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__10 = ABP_MagneticPlacement_C__pf3911806087::StaticClass();
	auto& __Local__11 = (*(AccessPrivateProperty<AActor* >((bpv__Magnetx1__pfT), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__11 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_PlayerGear_C__pf3324220276::StaticClass())->MiscConvertedSubobjects[0]);
	auto& __Local__12 = (*(AccessPrivateProperty<FVector >((bpv__Magnetx1__pfT), USceneComponent::__PPO__RelativeLocation() )));
	__Local__12 = FVector(11.000000, 7.000000, 11.000000);
	auto& __Local__13 = (*(AccessPrivateProperty<FRotator >((bpv__Magnetx1__pfT), USceneComponent::__PPO__RelativeRotation() )));
	__Local__13 = FRotator(0.000000, -90.000183, 0.000000);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__Magnetx1__pfT), false, 0));
	bpv__Magnetx2__pfT->CreationMethod = EComponentCreationMethod::Native;
	bpv__Magnetx2__pfT->AttachToComponent(bpv__SM_FP_Gear_Whitebox__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__14 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Magnetx2__pfT), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__14 = ABP_MagneticPlacement_C__pf3911806087::StaticClass();
	auto& __Local__15 = (*(AccessPrivateProperty<AActor* >((bpv__Magnetx2__pfT), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__15 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_PlayerGear_C__pf3324220276::StaticClass())->MiscConvertedSubobjects[1]);
	auto& __Local__16 = (*(AccessPrivateProperty<FVector >((bpv__Magnetx2__pfT), USceneComponent::__PPO__RelativeLocation() )));
	__Local__16 = FVector(11.000000, -7.000000, 11.000000);
	auto& __Local__17 = (*(AccessPrivateProperty<FRotator >((bpv__Magnetx2__pfT), USceneComponent::__PPO__RelativeRotation() )));
	__Local__17 = FRotator(0.000000, 90.000259, 0.000000);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__Magnetx2__pfT), false, 0));
	bpv__Magnetx3__pfT->CreationMethod = EComponentCreationMethod::Native;
	bpv__Magnetx3__pfT->AttachToComponent(bpv__SM_FP_Gear_Whitebox__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__18 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Magnetx3__pfT), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__18 = ABP_MagneticPlacement_C__pf3911806087::StaticClass();
	auto& __Local__19 = (*(AccessPrivateProperty<AActor* >((bpv__Magnetx3__pfT), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__19 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_PlayerGear_C__pf3324220276::StaticClass())->MiscConvertedSubobjects[2]);
	auto& __Local__20 = (*(AccessPrivateProperty<FVector >((bpv__Magnetx3__pfT), USceneComponent::__PPO__RelativeLocation() )));
	__Local__20 = FVector(15.000000, 0.000000, 1.000000);
	auto& __Local__21 = (*(AccessPrivateProperty<FRotator >((bpv__Magnetx3__pfT), USceneComponent::__PPO__RelativeRotation() )));
	__Local__21 = FRotator(-46.041077, -67.823349, -29.520308);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__Magnetx3__pfT), false, 0));
	bpv__Magnetx4__pfT->CreationMethod = EComponentCreationMethod::Native;
	bpv__Magnetx4__pfT->AttachToComponent(bpv__SM_FP_Gear_Whitebox__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__22 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Magnetx4__pfT), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__22 = ABP_MagneticPlacement_C__pf3911806087::StaticClass();
	auto& __Local__23 = (*(AccessPrivateProperty<AActor* >((bpv__Magnetx4__pfT), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__23 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_PlayerGear_C__pf3324220276::StaticClass())->MiscConvertedSubobjects[3]);
	auto& __Local__24 = (*(AccessPrivateProperty<FVector >((bpv__Magnetx4__pfT), USceneComponent::__PPO__RelativeLocation() )));
	__Local__24 = FVector(1.000000, 18.000000, -13.000000);
	auto& __Local__25 = (*(AccessPrivateProperty<FRotator >((bpv__Magnetx4__pfT), USceneComponent::__PPO__RelativeRotation() )));
	__Local__25 = FRotator(-90.000000, 180.000000, 180.000000);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__Magnetx4__pfT), false, 0));
	bpv__Magnetx5__pfT->CreationMethod = EComponentCreationMethod::Native;
	bpv__Magnetx5__pfT->AttachToComponent(bpv__SM_FP_Gear_Whitebox__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__26 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Magnetx5__pfT), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__26 = ABP_MagneticPlacement_C__pf3911806087::StaticClass();
	auto& __Local__27 = (*(AccessPrivateProperty<AActor* >((bpv__Magnetx5__pfT), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__27 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_PlayerGear_C__pf3324220276::StaticClass())->MiscConvertedSubobjects[4]);
	auto& __Local__28 = (*(AccessPrivateProperty<FVector >((bpv__Magnetx5__pfT), USceneComponent::__PPO__RelativeLocation() )));
	__Local__28 = FVector(1.000000, -18.000000, -13.000000);
	auto& __Local__29 = (*(AccessPrivateProperty<FRotator >((bpv__Magnetx5__pfT), USceneComponent::__PPO__RelativeRotation() )));
	__Local__29 = FRotator(-90.000000, 180.000000, 180.000000);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__Magnetx5__pfT), false, 0));
	bpv__Magnetx6__pfT->CreationMethod = EComponentCreationMethod::Native;
	bpv__Magnetx6__pfT->AttachToComponent(bpv__SM_FP_Gear_Whitebox__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__30 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Magnetx6__pfT), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__30 = ABP_MagneticPlacement_C__pf3911806087::StaticClass();
	auto& __Local__31 = (*(AccessPrivateProperty<AActor* >((bpv__Magnetx6__pfT), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__31 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_PlayerGear_C__pf3324220276::StaticClass())->MiscConvertedSubobjects[5]);
	auto& __Local__32 = (*(AccessPrivateProperty<FVector >((bpv__Magnetx6__pfT), USceneComponent::__PPO__RelativeLocation() )));
	__Local__32 = FVector(17.000000, 7.000000, -17.000000);
	auto& __Local__33 = (*(AccessPrivateProperty<FRotator >((bpv__Magnetx6__pfT), USceneComponent::__PPO__RelativeRotation() )));
	__Local__33 = FRotator(0.000000, -90.000183, 0.000000);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__Magnetx6__pfT), false, 0));
	bpv__Magnetx7__pfT->CreationMethod = EComponentCreationMethod::Native;
	bpv__Magnetx7__pfT->AttachToComponent(bpv__SM_FP_Gear_Whitebox__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__34 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Magnetx7__pfT), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__34 = ABP_MagneticPlacement_C__pf3911806087::StaticClass();
	auto& __Local__35 = (*(AccessPrivateProperty<AActor* >((bpv__Magnetx7__pfT), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__35 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_PlayerGear_C__pf3324220276::StaticClass())->MiscConvertedSubobjects[6]);
	auto& __Local__36 = (*(AccessPrivateProperty<FVector >((bpv__Magnetx7__pfT), USceneComponent::__PPO__RelativeLocation() )));
	__Local__36 = FVector(17.000000, -7.000000, -17.000000);
	auto& __Local__37 = (*(AccessPrivateProperty<FRotator >((bpv__Magnetx7__pfT), USceneComponent::__PPO__RelativeRotation() )));
	__Local__37 = FRotator(0.000000, 90.000259, 0.000000);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__Magnetx7__pfT), false, 0));
	bpv__Magnetx8__pfT->CreationMethod = EComponentCreationMethod::Native;
	bpv__Magnetx8__pfT->AttachToComponent(bpv__SM_FP_Gear_Whitebox__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__38 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Magnetx8__pfT), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__38 = ABP_MagneticPlacement_C__pf3911806087::StaticClass();
	auto& __Local__39 = (*(AccessPrivateProperty<AActor* >((bpv__Magnetx8__pfT), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__39 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_PlayerGear_C__pf3324220276::StaticClass())->MiscConvertedSubobjects[7]);
	auto& __Local__40 = (*(AccessPrivateProperty<FVector >((bpv__Magnetx8__pfT), USceneComponent::__PPO__RelativeLocation() )));
	__Local__40 = FVector(-6.855270, -10.913850, 24.042885);
	auto& __Local__41 = (*(AccessPrivateProperty<FRotator >((bpv__Magnetx8__pfT), USceneComponent::__PPO__RelativeRotation() )));
	__Local__41 = FRotator(0.000000, 90.000259, 0.000000);
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__Magnetx8__pfT), false, 0));
	bpv__Pistol__pf = nullptr;
	bpv__MainWeapon__pf = nullptr;
	bpv__HorsemanToSpawnFor__pf = E__E_Horsemen__pf::NewEnumerator1;
	bpv__AmmoTrigger__pf = nullptr;
	bpv__Tool__pf = nullptr;
	auto& __Local__42 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__42 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_PlayerGear_C__pf3324220276::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__SM_FP_Gear_Whitebox__pf)
	{
		bpv__SM_FP_Gear_Whitebox__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Magnetx1__pfT)
	{
		bpv__Magnetx1__pfT->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Magnetx2__pfT)
	{
		bpv__Magnetx2__pfT->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Magnetx3__pfT)
	{
		bpv__Magnetx3__pfT->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Magnetx4__pfT)
	{
		bpv__Magnetx4__pfT->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Magnetx5__pfT)
	{
		bpv__Magnetx5__pfT->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Magnetx6__pfT)
	{
		bpv__Magnetx6__pfT->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Magnetx7__pfT)
	{
		bpv__Magnetx7__pfT->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Magnetx8__pfT)
	{
		bpv__Magnetx8__pfT->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_PlayerGear_C__pf3324220276::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted enums
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Blueprints/Enums/E_Horsemen.E_Horsemen")));
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(ABP_MagneticPlacement_C__pf3911806087::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_GrabAmmoTrigger_C__pf3324220276::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABPC_Pistol_C__pf1418999182::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_Firearm_Base_C__pf1418999182::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_Tool_Base_C__pf3911806087::StaticClass());
	extern UClass* Z_Construct_UClass_UBPI_GearCommunication_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UBPI_GearCommunication_C());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	ABP_MagneticPlacement_C__pf3911806087::StaticClass()->GetDefaultObject();
	auto __Local__43 = NewObject<ABP_MagneticPlacement_C__pf3911806087>(InDynamicClass, ABP_MagneticPlacement_C__pf3911806087::StaticClass(), TEXT("Magnet 1_GEN_VARIABLE_BP_MagneticPlacement_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__43);
	__Local__43->bpv__ObjectxType__pfT = E__ENUM_ObjectType__pf::NewEnumerator4;
	auto& __Local__44 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__43), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__44 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	ABP_MagneticPlacement_C__pf3911806087::StaticClass()->GetDefaultObject();
	auto __Local__45 = NewObject<ABP_MagneticPlacement_C__pf3911806087>(InDynamicClass, ABP_MagneticPlacement_C__pf3911806087::StaticClass(), TEXT("Magnet 2_GEN_VARIABLE_BP_MagneticPlacement_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__45);
	__Local__45->bpv__ObjectxType__pfT = E__ENUM_ObjectType__pf::NewEnumerator4;
	auto& __Local__46 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__45), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__46 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	ABP_MagneticPlacement_C__pf3911806087::StaticClass()->GetDefaultObject();
	auto __Local__47 = NewObject<ABP_MagneticPlacement_C__pf3911806087>(InDynamicClass, ABP_MagneticPlacement_C__pf3911806087::StaticClass(), TEXT("Magnet 3_GEN_VARIABLE_BP_MagneticPlacement_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__47);
	__Local__47->bpv__ObjectxType__pfT = E__ENUM_ObjectType__pf::NewEnumerator3;
	auto& __Local__48 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__47), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__48 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	ABP_MagneticPlacement_C__pf3911806087::StaticClass()->GetDefaultObject();
	auto __Local__49 = NewObject<ABP_MagneticPlacement_C__pf3911806087>(InDynamicClass, ABP_MagneticPlacement_C__pf3911806087::StaticClass(), TEXT("Magnet 4_GEN_VARIABLE_BP_MagneticPlacement_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__49);
	auto& __Local__50 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__49), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__50 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	ABP_MagneticPlacement_C__pf3911806087::StaticClass()->GetDefaultObject();
	auto __Local__51 = NewObject<ABP_MagneticPlacement_C__pf3911806087>(InDynamicClass, ABP_MagneticPlacement_C__pf3911806087::StaticClass(), TEXT("Magnet 5_GEN_VARIABLE_BP_MagneticPlacement_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__51);
	auto& __Local__52 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__51), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__52 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	ABP_MagneticPlacement_C__pf3911806087::StaticClass()->GetDefaultObject();
	auto __Local__53 = NewObject<ABP_MagneticPlacement_C__pf3911806087>(InDynamicClass, ABP_MagneticPlacement_C__pf3911806087::StaticClass(), TEXT("Magnet 7_GEN_VARIABLE_BP_MagneticPlacement_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__53);
	__Local__53->bpv__ObjectxType__pfT = E__ENUM_ObjectType__pf::NewEnumerator4;
	auto& __Local__54 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__53), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__54 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	ABP_MagneticPlacement_C__pf3911806087::StaticClass()->GetDefaultObject();
	auto __Local__55 = NewObject<ABP_MagneticPlacement_C__pf3911806087>(InDynamicClass, ABP_MagneticPlacement_C__pf3911806087::StaticClass(), TEXT("Magnet 8_GEN_VARIABLE_BP_MagneticPlacement_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__55);
	__Local__55->bpv__ObjectxType__pfT = E__ENUM_ObjectType__pf::NewEnumerator4;
	auto& __Local__56 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__55), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__56 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	ABP_MagneticPlacement_C__pf3911806087::StaticClass()->GetDefaultObject();
	auto __Local__57 = NewObject<ABP_MagneticPlacement_C__pf3911806087>(InDynamicClass, ABP_MagneticPlacement_C__pf3911806087::StaticClass(), TEXT("Magnet 8_GEN_VARIABLE_BP_MagneticPlacement_C_CAT"), (EObjectFlags)0x00280029);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__57);
	__Local__57->bpv__ObjectxType__pfT = E__ENUM_ObjectType__pf::NewEnumerator4;
	auto& __Local__58 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((__Local__57), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__58 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	auto __Local__59 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__59);
	static TWeakFieldPtr<FProperty> __Local__61{};
	const FProperty* __Local__60 = __Local__61.Get();
	if (nullptr == __Local__60)
	{
		__Local__60 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__60);
		__Local__61 = __Local__60;
	}
	(((FBoolProperty*)__Local__60)->SetPropertyValue_InContainer((__Local__59), false, 0));
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_PlayerGear_C__pf3324220276::bpf__ExecuteUbergraph_BP_PlayerGear__pf_0(int32 bpp__EntryPoint__pf)
{
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("[PLAYER GEAR] Tool snapped back to socket")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 5:
			{
				__CurrentState = 6;
				break;
			}
		case 6:
			{
				__StateStack.Push(12);
				__StateStack.Push(8);
			}
		case 7:
			{
				bool  __Local__62 = false;
				if (!((::IsValid(bpv__Pistol__pf)) ? (bpv__Pistol__pf->bpv__FirstHandGrabbed__pf) : (__Local__62)))
				{
					__CurrentState = 16;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 8:
			{
				bool  __Local__63 = false;
				if (!((::IsValid(bpv__MainWeapon__pf)) ? (bpv__MainWeapon__pf->bpv__FirstHandGrabbed__pf) : (__Local__63)))
				{
					__CurrentState = 9;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 9:
			{
				if(::IsValid(bpv__MainWeapon__pf) && ::IsValid(bpv__MainWeapon__pf->bpv__Firearm_SM__pf))
				{
					bpv__MainWeapon__pf->bpv__Firearm_SM__pf->SetSimulatePhysics(false);
				}
			}
		case 10:
			{
				if(::IsValid(bpv__MainWeapon__pf))
				{
					bpv__MainWeapon__pf->AActor::K2_AttachToActor(this, FName(TEXT("Main_Weapon_Socket")), EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, false);
				}
			}
		case 11:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("[PLAYER GEAR] Main Weapon snapped back to socket")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 12:
			{
				bool  __Local__64 = false;
				if (!((::IsValid(bpv__Tool__pf)) ? (bpv__Tool__pf->bpv__isGrabbed__pf) : (__Local__64)))
				{
					__CurrentState = 13;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 13:
			{
				bool  __Local__65 = false;
				if (!((::IsValid(bpv__Tool__pf)) ? (bpv__Tool__pf->bpv__toolActivated__pf) : (__Local__65)))
				{
					__CurrentState = 14;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 14:
			{
				if(::IsValid(bpv__Tool__pf) && ::IsValid(bpv__Tool__pf->bpv__Tool_SkM__pf))
				{
					bpv__Tool__pf->bpv__Tool_SkM__pf->SetSimulatePhysics(false);
				}
			}
		case 15:
			{
				if(::IsValid(bpv__Tool__pf))
				{
					bpv__Tool__pf->AActor::K2_AttachToActor(this, FName(TEXT("Tool_Socket")), EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, false);
				}
				__CurrentState = 1;
				break;
			}
		case 16:
			{
				if(::IsValid(bpv__Pistol__pf) && ::IsValid(bpv__Pistol__pf->bpv__Firearm_SM__pf))
				{
					bpv__Pistol__pf->bpv__Firearm_SM__pf->SetSimulatePhysics(false);
				}
			}
		case 17:
			{
				if(::IsValid(bpv__Pistol__pf))
				{
					bpv__Pistol__pf->AActor::K2_AttachToActor(this, FName(TEXT("Pistol_Socket")), EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, false);
				}
			}
		case 18:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("[PLAYER GEAR] Pistol snapped back to socket")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_PlayerGear_C__pf3324220276::bpf__ExecuteUbergraph_BP_PlayerGear__pf_1(int32 bpp__EntryPoint__pf)
{
	uint8 bpfv__CallFunc_MakeLiteralByte_ReturnValue__pf{};
	uint8 bpfv__CallFunc_MakeLiteralByte_ReturnValue_1__pf{};
	uint8 bpfv__CallFunc_MakeLiteralByte_ReturnValue_2__pf{};
	FVector bpfv__CallFunc_GetSocketLocation_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue_1__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf{};
	ABP_GrabAmmoTrigger_C__pf3324220276* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	ABP_GrabAmmoTrigger_C__pf3324220276* bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf{};
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue_2__pf{};
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue_3__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3__pf{};
	ABP_GrabAmmoTrigger_C__pf3324220276* bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf{};
	ABP_GrabAmmoTrigger_C__pf3324220276* bpfv__CallFunc_FinishSpawningActor_ReturnValue_3__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 2:
			{
				if(::IsValid(bpv__AmmoTrigger__pf))
				{
					bpv__AmmoTrigger__pf->AActor::K2_AttachToActor(this, FName(TEXT("Ammo_Trigger_Socket")), EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, false);
				}
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				if(::IsValid(bpv__AmmoTrigger__pf))
				{
					bpv__AmmoTrigger__pf->AActor::K2_AttachToActor(this, FName(TEXT("Ammo_Trigger_Socket")), EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, false);
				}
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				if(::IsValid(bpv__AmmoTrigger__pf))
				{
					bpv__AmmoTrigger__pf->AActor::K2_AttachToActor(this, FName(TEXT("Ammo_Trigger_Socket")), EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, false);
				}
				__CurrentState = -1;
				break;
			}
		case 19:
			{
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__HorsemanToSpawnFor__pf), static_cast<uint8>(E__E_Horsemen__pf::NewEnumerator0));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 28;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__HorsemanToSpawnFor__pf), static_cast<uint8>(E__E_Horsemen__pf::NewEnumerator1));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 24;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__HorsemanToSpawnFor__pf), static_cast<uint8>(E__E_Horsemen__pf::NewEnumerator2));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 20;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__HorsemanToSpawnFor__pf), static_cast<uint8>(E__E_Horsemen__pf::NewEnumerator3));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 32;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 20:
			{
				if(::IsValid(bpv__SM_FP_Gear_Whitebox__pf))
				{
					bpfv__CallFunc_GetSocketLocation_ReturnValue__pf = bpv__SM_FP_Gear_Whitebox__pf->GetSocketLocation(FName(TEXT("Ammo_Trigger_Socket")));
				}
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_GetSocketLocation_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, ABP_GrabAmmoTrigger_C__pf3324220276::StaticClass(), bpfv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::Undefined, this);
			}
		case 21:
			{
				bpfv__CallFunc_MakeLiteralByte_ReturnValue_2__pf = UKismetSystemLibrary::MakeLiteralByte(2);
				UKismetSystemLibrary::SetBytePropertyByName(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, FName(TEXT("AmmoToSpawn")), bpfv__CallFunc_MakeLiteralByte_ReturnValue_2__pf);
			}
		case 22:
			{
				if(::IsValid(bpv__SM_FP_Gear_Whitebox__pf))
				{
					bpfv__CallFunc_GetSocketLocation_ReturnValue__pf = bpv__SM_FP_Gear_Whitebox__pf->GetSocketLocation(FName(TEXT("Ammo_Trigger_Socket")));
				}
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_GetSocketLocation_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf = CastChecked<ABP_GrabAmmoTrigger_C__pf3324220276>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 23:
			{
				bpv__AmmoTrigger__pf = bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf;
				__CurrentState = 3;
				break;
			}
		case 24:
			{
				if(::IsValid(bpv__SM_FP_Gear_Whitebox__pf))
				{
					bpfv__CallFunc_GetSocketLocation_ReturnValue__pf = bpv__SM_FP_Gear_Whitebox__pf->GetSocketLocation(FName(TEXT("Ammo_Trigger_Socket")));
				}
				bpfv__CallFunc_MakeTransform_ReturnValue_3__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_GetSocketLocation_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, ABP_GrabAmmoTrigger_C__pf3324220276::StaticClass(), bpfv__CallFunc_MakeTransform_ReturnValue_3__pf, ESpawnActorCollisionHandlingMethod::Undefined, this);
			}
		case 25:
			{
				if(::IsValid(bpv__SM_FP_Gear_Whitebox__pf))
				{
					bpfv__CallFunc_GetSocketLocation_ReturnValue__pf = bpv__SM_FP_Gear_Whitebox__pf->GetSocketLocation(FName(TEXT("Ammo_Trigger_Socket")));
				}
				bpfv__CallFunc_MakeTransform_ReturnValue_3__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_GetSocketLocation_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_FinishSpawningActor_ReturnValue_3__pf = CastChecked<ABP_GrabAmmoTrigger_C__pf3324220276>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3__pf, bpfv__CallFunc_MakeTransform_ReturnValue_3__pf), ECastCheckedType::NullAllowed);
			}
		case 26:
			{
				bpv__AmmoTrigger__pf = bpfv__CallFunc_FinishSpawningActor_ReturnValue_3__pf;
			}
		case 27:
			{
				if(::IsValid(bpv__AmmoTrigger__pf))
				{
					bpv__AmmoTrigger__pf->AActor::K2_AttachToActor(this, FName(TEXT("Ammo_Trigger_Socket")), EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, false);
				}
				__CurrentState = -1;
				break;
			}
		case 28:
			{
				if(::IsValid(bpv__SM_FP_Gear_Whitebox__pf))
				{
					bpfv__CallFunc_GetSocketLocation_ReturnValue__pf = bpv__SM_FP_Gear_Whitebox__pf->GetSocketLocation(FName(TEXT("Ammo_Trigger_Socket")));
				}
				bpfv__CallFunc_MakeTransform_ReturnValue_2__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_GetSocketLocation_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, ABP_GrabAmmoTrigger_C__pf3324220276::StaticClass(), bpfv__CallFunc_MakeTransform_ReturnValue_2__pf, ESpawnActorCollisionHandlingMethod::Undefined, this);
			}
		case 29:
			{
				bpfv__CallFunc_MakeLiteralByte_ReturnValue__pf = UKismetSystemLibrary::MakeLiteralByte(1);
				UKismetSystemLibrary::SetBytePropertyByName(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2__pf, FName(TEXT("AmmoToSpawn")), bpfv__CallFunc_MakeLiteralByte_ReturnValue__pf);
			}
		case 30:
			{
				if(::IsValid(bpv__SM_FP_Gear_Whitebox__pf))
				{
					bpfv__CallFunc_GetSocketLocation_ReturnValue__pf = bpv__SM_FP_Gear_Whitebox__pf->GetSocketLocation(FName(TEXT("Ammo_Trigger_Socket")));
				}
				bpfv__CallFunc_MakeTransform_ReturnValue_2__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_GetSocketLocation_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf = CastChecked<ABP_GrabAmmoTrigger_C__pf3324220276>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2__pf, bpfv__CallFunc_MakeTransform_ReturnValue_2__pf), ECastCheckedType::NullAllowed);
			}
		case 31:
			{
				bpv__AmmoTrigger__pf = bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf;
				__CurrentState = 2;
				break;
			}
		case 32:
			{
				if(::IsValid(bpv__SM_FP_Gear_Whitebox__pf))
				{
					bpfv__CallFunc_GetSocketLocation_ReturnValue__pf = bpv__SM_FP_Gear_Whitebox__pf->GetSocketLocation(FName(TEXT("Ammo_Trigger_Socket")));
				}
				bpfv__CallFunc_MakeTransform_ReturnValue_1__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_GetSocketLocation_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, ABP_GrabAmmoTrigger_C__pf3324220276::StaticClass(), bpfv__CallFunc_MakeTransform_ReturnValue_1__pf, ESpawnActorCollisionHandlingMethod::Undefined, this);
			}
		case 33:
			{
				bpfv__CallFunc_MakeLiteralByte_ReturnValue_1__pf = UKismetSystemLibrary::MakeLiteralByte(3);
				UKismetSystemLibrary::SetBytePropertyByName(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf, FName(TEXT("AmmoToSpawn")), bpfv__CallFunc_MakeLiteralByte_ReturnValue_1__pf);
			}
		case 34:
			{
				if(::IsValid(bpv__SM_FP_Gear_Whitebox__pf))
				{
					bpfv__CallFunc_GetSocketLocation_ReturnValue__pf = bpv__SM_FP_Gear_Whitebox__pf->GetSocketLocation(FName(TEXT("Ammo_Trigger_Socket")));
				}
				bpfv__CallFunc_MakeTransform_ReturnValue_1__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_GetSocketLocation_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<ABP_GrabAmmoTrigger_C__pf3324220276>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf, bpfv__CallFunc_MakeTransform_ReturnValue_1__pf), ECastCheckedType::NullAllowed);
			}
		case 35:
			{
				bpv__AmmoTrigger__pf = bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf;
				__CurrentState = 4;
				break;
			}
		case 36:
			{
				__CurrentState = 37;
				break;
			}
		case 37:
			{
				__CurrentState = 19;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_PlayerGear_C__pf3324220276::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_BP_PlayerGear__pf_1(36);
}
void ABP_PlayerGear_C__pf3324220276::bpf__CheckForTeleport__pf()
{
	bpf__ExecuteUbergraph_BP_PlayerGear__pf_0(5);
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_PlayerGear_C__pf3324220276::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Meshes/Placeholder/Player_Generic/SM_FP_Gear_Whitebox.SM_FP_Gear_Whitebox 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_PlayerGear_C__pf3324220276::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{179, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Interfaces/BPI_GearCommunication.BPI_GearCommunication_C 
		{27, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{66, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ChildActorComponent 
		{4, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneComponent 
		{6, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Actor 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{23, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BoxComponent 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/InputCore.EControllerHand 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SphereComponent 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MeshComponent 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ActorComponent 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/VirtualReality/Meshes/BeamMesh.BeamMesh 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/VirtualReality/Materials/M_SplineArcMat.M_SplineArcMat 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/HeadMountedDisplay.MotionControllerComponent 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Meshes/Placeholder/Player_Generic/GE_Hand_Master_Grp.GE_Hand_Master_Grp 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ArrowComponent 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SplineComponent 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetInteractionComponent 
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Sphere.Sphere 
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/VirtualReality/Materials/M_ArcEndpoint.M_ArcEndpoint 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Cylinder.Cylinder 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/VirtualReality/Materials/MI_TeleportCylinderPreview.MI_TeleportCylinderPreview 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/VirtualReality/Meshes/SM_FatCylinder.SM_FatCylinder 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/VirtualReality/Meshes/BeaconDirection.BeaconDirection 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/VirtualReality/Meshes/1x1_cube.1x1_cube 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/VirtualReality/Materials/MI_ChaperoneOutline.MI_ChaperoneOutline 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/SteamVR.SteamVRChaperoneComponent 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EObjectTypeQuery 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AnimInstance 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  HapticFeedbackEffect_Curve /Game/VirtualRealityBP/Blueprints/MotionControllerHaptics.MotionControllerHaptics 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SplineMeshComponent 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavigationSystemV1 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetNodeHelperLibrary 
		{110, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Meshes/Placeholder/Weapons/Pistol/Pistol_Lever.Pistol_Lever 
		{118, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BPC_Rifle_Magazine_C /Game/Blueprints/Weapons/BPC_Rifle_Magazine.Default__BPC_Rifle_Magazine_C 
		{119, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Weapons/BPC_Pistol_Magazine.BPC_Pistol_Magazine_C 
		{120, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BPC_Pistol_Magazine_C /Game/Blueprints/Weapons/BPC_Pistol_Magazine.Default__BPC_Pistol_Magazine_C 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Characters/BPC_Death.BPC_Death_C 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BPC_Death_C /Game/Blueprints/Characters/BPC_Death.Default__BPC_Death_C 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Characters/BPC_Conquest.BPC_Conquest_C 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BPC_Conquest_C /Game/Blueprints/Characters/BPC_Conquest.Default__BPC_Conquest_C 
		{101, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Niagara.NiagaraComponent 
		{102, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  NiagaraSystem /Game/VisualEffects/Niagara/NS_muzzle_flash.NS_muzzle_flash 
		{103, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EMoveComponentAction 
		{104, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ECollisionChannel 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.TimerDynamicDelegate__DelegateSignature 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{105, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TimelineComponent 
		{90, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Niagara.NiagaraFunctionLibrary 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{91, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETimelineDirection 
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Meshes/Placeholder/Weapons/Pistol/Pistol_Main.Pistol_Main 
		{111, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Weapons/BPC_Shotgun_Shell.BPC_Shotgun_Shell_C 
		{112, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BPC_Shotgun_Shell_C /Game/Blueprints/Weapons/BPC_Shotgun_Shell.Default__BPC_Shotgun_Shell_C 
		{113, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Weapons/BPC_SMG_Magazine.BPC_SMG_Magazine_C 
		{114, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BPC_SMG_Magazine_C /Game/Blueprints/Weapons/BPC_SMG_Magazine.Default__BPC_SMG_Magazine_C 
		{115, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Weapons/BPC_DMR_Magazine.BPC_DMR_Magazine_C 
		{116, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BPC_DMR_Magazine_C /Game/Blueprints/Weapons/BPC_DMR_Magazine.Default__BPC_DMR_Magazine_C 
		{117, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Weapons/BPC_Rifle_Magazine.BPC_Rifle_Magazine_C 
		{92, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Meshes/Placeholder/Weapons/Pistol/OLD/Pistol_Magazine_Whitebox_Low.Pistol_Magazine_Whitebox_Low 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Characters/BPC_Famine.BPC_Famine_C 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BPC_Famine_C /Game/Blueprints/Characters/BPC_Famine.Default__BPC_Famine_C 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetComponent 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent.Widget3DPassThrough_Translucent 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent_OneSided.Widget3DPassThrough_Translucent_OneSided 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque.Widget3DPassThrough_Opaque 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque_OneSided.Widget3DPassThrough_Opaque_OneSided 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked.Widget3DPassThrough_Masked 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked_OneSided.Widget3DPassThrough_Masked_OneSided 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CameraComponent 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PostProcessComponent 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  TextureCube /Game/Imports/StarterContent/HDRI/HDRI_Epic_Courtyard_Daylight.HDRI_Epic_Courtyard_Daylight 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CapsuleComponent 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/KatDataPlugin4BP.KatDataPlugin4BPBPLibrary 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CharacterMovementComponent 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/HUD/Widgets/Widget3DNoPassThrough.Widget3DNoPassThrough 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/HUD/Images/TakeDamage/MAT_TakeDamage.MAT_TakeDamage 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerCameraManager 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/UMG.WidgetTransform 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetAnimation 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Paper2D.PaperFlipbook 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/HUD/Images/TakeDamage/ShieldDam_V2.ShieldDam_V2 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Images/Arrow_Render_V2.Arrow_Render_V2 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UMGSequencePlayer 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Meshes/Placeholder/Player_Generic/HandOpen.HandOpen 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Images/ObjectiveMarker_HUD.ObjectiveMarker_HUD 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Images/OverlayCombined_HUD.OverlayCombined_HUD 
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_TransitionResult 
		{94, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PoseLink 
		{95, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_SequencePlayer 
		{96, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_StateResult 
		{97, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_StateMachine 
		{98, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_Root 
		{99, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Meshes/Placeholder/Player_Generic/Pistol_Second_Hand_Grip.Pistol_Second_Hand_Grip 
		{100, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Meshes/Placeholder/Player_Generic/HandPistolGrip.HandPistolGrip 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Meshes/Placeholder/Player_Generic/HandClosed.HandClosed 
		{106, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Images/AmmoMarker_HUD.AmmoMarker_HUD 
		{107, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ProjectileMovementComponent 
		{108, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/Meshes/Placeholder/Player_Generic/GE_Hand_Master_Grp_Skeleton.GE_Hand_Master_Grp_Skeleton 
		{146, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Tools/BP_MagneticPlacement.BP_MagneticPlacement_C 
		{180, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Characters/Gear/BP_GrabAmmoTrigger.BP_GrabAmmoTrigger_C 
		{181, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Weapons/BPC_Pistol.BPC_Pistol_C 
		{144, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Weapons/BP_Firearm_Base.BP_Firearm_Base_C 
		{182, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Tools/BP_Tool_Base.BP_Tool_Base_C 
		{183, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Blueprints/Enums/E_Horsemen.E_Horsemen 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ABP_PlayerGear_C__pf3324220276
{
	FRegisterHelper__ABP_PlayerGear_C__pf3324220276()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprints/Characters/Gear/BP_PlayerGear"), &ABP_PlayerGear_C__pf3324220276::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_PlayerGear_C__pf3324220276 Instance;
};
FRegisterHelper__ABP_PlayerGear_C__pf3324220276 FRegisterHelper__ABP_PlayerGear_C__pf3324220276::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
