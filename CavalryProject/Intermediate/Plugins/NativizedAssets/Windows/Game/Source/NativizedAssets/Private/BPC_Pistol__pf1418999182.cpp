#include "NativizedAssets.h"
#include "BPC_Pistol__pf1418999182.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
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
#include "Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/VT/RuntimeVirtualTexture.h"
#include "Runtime/Engine/Public/VT/RuntimeVirtualTextureEnum.h"
#include "Runtime/Engine/Classes/VT/VirtualTexture.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColorAtlas.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Landscape/Classes/LandscapeGrassType.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/StaticMeshDescription/Public/StaticMeshDescription.h"
#include "Runtime/MeshDescription/Public/MeshDescriptionBase.h"
#include "Runtime/MeshDescription/Public/MeshTypes.h"
#include "Runtime/Engine/Public/Components.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
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
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/Engine/BrushBuilder.h"
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
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
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
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/NavigationSystem/Public/NavFilters/NavigationQueryFilter.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea.h"
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
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
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
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea_Obstacle.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureRenderTarget.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraCommon.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraSystem.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraEffectType.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraPlatformSet.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraEmitterHandle.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraEmitter.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraScript.h"
#include "../Plugins/FX/Niagara/Source/NiagaraShader/Public/NiagaraScriptBase.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraParameterStore.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraTypes.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterface.h"
#include "../Plugins/FX/Niagara/Source/NiagaraCore/Public/NiagaraDataInterfaceBase.h"
#include "../Plugins/FX/Niagara/Source/NiagaraCore/Public/NiagaraMergeable.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraScriptExecutionParameterStore.h"
#include "../Plugins/FX/Niagara/Source/NiagaraCore/Public/NiagaraCompileHash.h"
#include "../Plugins/FX/Niagara/Source/NiagaraShader/Public/NiagaraShared.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraParameters.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraParameterCollection.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraConvertInPlaceUtilityBase.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraScriptHighlight.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraScriptSourceBase.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataSet.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraRendererProperties.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraSimulationStageBase.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraEditorDataBase.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraMessageDataBase.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraUserRedirectionParameterStore.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraVariant.h"
#include "BP_MotionController__pf563933975.h"
#include "GrabbableObjectSocket__pf2132744816.h"
#include "Hand_Positions_Enum__pf423755669.h"
#include "Runtime/HeadMountedDisplay/Public/MotionControllerComponent.h"
#include "Runtime/HeadMountedDisplay/Public/IMotionController.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "BP_MagneticPlacement__pf3911806087.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "E_Hands__pf1725717533.h"
#include "BP_BulletBase__pf1418999182.h"
#include "BP_AmmoBase__pf1418999182.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "BPI_TakeDamage__pf691914051.h"
#include "BPI_Shootable__pf691914051.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "ENUM_ObjectType__pf3911806087.h"
#include "E_FireMode__pf1725717533.h"
#include "E_LoadType__pf1725717533.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraFunctionLibrary.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraComponentPool.h"
#include "Runtime/Engine/Classes/Engine/VolumeTexture.h"
#include "BP_PlayerGear__pf3324220276.h"
#include "PickupActorInterface__pf563933975.h"
#include "BPI_GrabbableObj__pf691914051.h"
#include "BPI_WeaponControls__pf691914051.h"
#include "BPI_Magnetic__pf691914051.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ABPC_Pistol_C__pf1418999182::ABPC_Pistol_C__pf1418999182(const FObjectInitializer& ObjectInitializer) : Super()
{
	
	auto& __Local__0 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Firearm_SM__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__0 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABPC_Pistol_C__pf1418999182::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__Firearm_SM__pf->BodyInstance.LoadProfileData(false);
	static TWeakFieldPtr<FProperty> __Local__2{};
	const FProperty* __Local__1 = __Local__2.Get();
	if (nullptr == __Local__1)
	{
		__Local__1 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__1);
		__Local__2 = __Local__1;
	}
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Firearm_SM__pf), true, 0));
	auto& __Local__3 = (*(AccessPrivateProperty<FVector >((bpv__Slider_Stopper__pf), UBoxComponent::__PPO__BoxExtent() )));
	__Local__3 = FVector(5.000000, 5.000000, 5.000000);
	bpv__Slider_Stopper__pf->BodyInstance.LoadProfileData(false);
	auto& __Local__4 = (*(AccessPrivateProperty<FVector >((bpv__Slider_Stopper__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__4 = FVector(-17.981445, 0.000000, 9.758469);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Slider_Stopper__pf), true, 0));
	auto& __Local__5 = (*(AccessPrivateProperty<FVector >((bpv__AmmoPortTrigger__pf), UBoxComponent::__PPO__BoxExtent() )));
	__Local__5 = FVector(2.224683, 0.800335, 4.480617);
	bpv__AmmoPortTrigger__pf->BodyInstance.LoadProfileData(false);
	auto& __Local__6 = (*(AccessPrivateProperty<FVector >((bpv__AmmoPortTrigger__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__6 = FVector(-0.892477, 0.000000, -1.786319);
	auto& __Local__7 = (*(AccessPrivateProperty<FRotator >((bpv__AmmoPortTrigger__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__7 = FRotator(163.817993, 0.000015, 0.000015);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__AmmoPortTrigger__pf), true, 0));
	auto& __Local__8 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__Slider_SM__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__8 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABPC_Pistol_C__pf1418999182::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__Slider_SM__pf->BodyInstance.LoadProfileData(false);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Slider_SM__pf), true, 0));
	auto& __Local__9 = (*(AccessPrivateProperty<FVector >((bpv__Slider_Collider__pf), UBoxComponent::__PPO__BoxExtent() )));
	__Local__9 = FVector(10.667076, 1.700899, 3.559110);
	bpv__Slider_Collider__pf->BodyInstance.LoadProfileData(false);
	auto& __Local__10 = (*(AccessPrivateProperty<FVector >((bpv__Slider_Collider__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__10 = FVector(7.263030, 0.000000, 9.779752);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Slider_Collider__pf), true, 0));
	auto& __Local__11 = (*(AccessPrivateProperty<FVector >((bpv__SecondHand_Collider__pf), UBoxComponent::__PPO__BoxExtent() )));
	__Local__11 = FVector(4.199399, 1.700899, 6.721195);
	bpv__SecondHand_Collider__pf->BodyInstance.LoadProfileData(false);
	auto& __Local__12 = (*(AccessPrivateProperty<FVector >((bpv__SecondHand_Collider__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__12 = FVector(-0.172833, -0.000175, -1.060979);
	auto& __Local__13 = (*(AccessPrivateProperty<FRotator >((bpv__SecondHand_Collider__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__13 = FRotator(-15.000000, 0.000000, 0.000000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__SecondHand_Collider__pf), true, 0));
	auto& __Local__14 = (*(AccessPrivateProperty<FVector >((bpv__ShellEjectionPoint__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__14 = FVector(5.167253, 5.001758, 9.084538);
	auto& __Local__15 = (*(AccessPrivateProperty<FRotator >((bpv__ShellEjectionPoint__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__15 = FRotator(45.000000, 90.000282, 0.000040);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__ShellEjectionPoint__pf), false, 0));
	bpv__Slider_ForwardPosition__pf->BodyInstance.LoadProfileData(false);
	auto& __Local__16 = (*(AccessPrivateProperty<FVector >((bpv__Slider_ForwardPosition__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__16 = FVector(18.331345, 0.000000, 9.783066);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Slider_ForwardPosition__pf), true, 0));
	auto& __Local__17 = (*(AccessPrivateProperty<FNiagaraUserRedirectionParameterStore >((bpv__Niagara__pf), UNiagaraComponent::__PPO__OverrideParameters() )));
	auto& __Local__18 = (*(AccessPrivateProperty<FVector >((bpv__Niagara__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__18 = FVector(18.000000, 0.000000, 7.000000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__Niagara__pf), false, 0));
	auto& __Local__19 = (*(AccessPrivateProperty<FVector >((bpv__MagnetCollision__pf), UBoxComponent::__PPO__BoxExtent() )));
	__Local__19 = FVector(12.539828, 2.279732, 10.000000);
	bpv__MagnetCollision__pf->BodyInstance.LoadProfileData(false);
	auto& __Local__20 = (*(AccessPrivateProperty<FVector >((bpv__MagnetCollision__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__20 = FVector(6.000000, 0.000000, 3.000000);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__MagnetCollision__pf), true, 0));
	auto& __Local__21 = (*(AccessPrivateProperty<FVector >((bpv__FireLocation__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__21 = FVector(16.860069, -0.000298, 11.323085);
	(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__FireLocation__pf), false, 0));
	bpv__Timeline_2__Direction_25CBF2834D7F92A4A126DE9144E4D287__pf = ETimelineDirection::Type::Forward;
	bpv__Timeline_2__pf = nullptr;
	bpv__Timeline_1__Direction_E472C5D24B4C5E6EF10997B3927EFF17__pf = ETimelineDirection::Type::Forward;
	bpv__Timeline_1__pf = nullptr;
	bpv__WeaponObjectType__pf = E__ENUM_ObjectType__pf::NewEnumerator1;
	auto& __Local__22 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__22 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABPC_Pistol_C__pf1418999182::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void ABPC_Pistol_C__pf1418999182::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Meshes/Placeholder/Player_Generic/Hand_Positions_Enum.Hand_Positions_Enum")));
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(ABP_Firearm_Base_C__pf1418999182::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__23 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__23);
	auto __Local__24 = NewObject<UTimelineTemplate>(InDynamicClass, UTimelineTemplate::StaticClass(), TEXT("Timeline_1_Template"), (EObjectFlags)0x00280008);
	InDynamicClass->Timelines.Add(__Local__24);
	auto __Local__25 = NewObject<UTimelineTemplate>(InDynamicClass, UTimelineTemplate::StaticClass(), TEXT("Timeline_2_Template"), (EObjectFlags)0x00280008);
	InDynamicClass->Timelines.Add(__Local__25);
	static TWeakFieldPtr<FProperty> __Local__27{};
	const FProperty* __Local__26 = __Local__27.Get();
	if (nullptr == __Local__26)
	{
		__Local__26 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__26);
		__Local__27 = __Local__26;
	}
	(((FBoolProperty*)__Local__26)->SetPropertyValue_InContainer((__Local__23), false, 0));
	__Local__24->TimelineLength = 0.100000f;
	__Local__24->bLoop = true;
	__Local__24->TimelineGuid = FGuid(0xE472C5D2, 0x4B4C5E6E, 0xF10997B3, 0x927EFF17);
	auto& __Local__28 = (*(AccessPrivateProperty<FName >((__Local__24), UTimelineTemplate::__PPO__VariableName() )));
	__Local__28 = FName(TEXT("Timeline_1"));
	auto& __Local__29 = (*(AccessPrivateProperty<FName >((__Local__24), UTimelineTemplate::__PPO__DirectionPropertyName() )));
	__Local__29 = FName(TEXT("Timeline_1__Direction_E472C5D24B4C5E6EF10997B3927EFF17"));
	auto& __Local__30 = (*(AccessPrivateProperty<FName >((__Local__24), UTimelineTemplate::__PPO__UpdateFunctionName() )));
	__Local__30 = FName(TEXT("Timeline_1__UpdateFunc"));
	auto& __Local__31 = (*(AccessPrivateProperty<FName >((__Local__24), UTimelineTemplate::__PPO__FinishedFunctionName() )));
	__Local__31 = FName(TEXT("Timeline_1__FinishedFunc"));
	__Local__25->TimelineLength = 0.100000f;
	__Local__25->bLoop = true;
	__Local__25->TimelineGuid = FGuid(0x25CBF283, 0x4D7F92A4, 0xA126DE91, 0x44E4D287);
	auto& __Local__32 = (*(AccessPrivateProperty<FName >((__Local__25), UTimelineTemplate::__PPO__VariableName() )));
	__Local__32 = FName(TEXT("Timeline_2"));
	auto& __Local__33 = (*(AccessPrivateProperty<FName >((__Local__25), UTimelineTemplate::__PPO__DirectionPropertyName() )));
	__Local__33 = FName(TEXT("Timeline_2__Direction_25CBF2834D7F92A4A126DE9144E4D287"));
	auto& __Local__34 = (*(AccessPrivateProperty<FName >((__Local__25), UTimelineTemplate::__PPO__UpdateFunctionName() )));
	__Local__34 = FName(TEXT("Timeline_2__UpdateFunc"));
	auto& __Local__35 = (*(AccessPrivateProperty<FName >((__Local__25), UTimelineTemplate::__PPO__FinishedFunctionName() )));
	__Local__35 = FName(TEXT("Timeline_2__FinishedFunc"));
}
PRAGMA_ENABLE_OPTIMIZATION
void ABPC_Pistol_C__pf1418999182::bpf__ExecuteUbergraph_BPC_Pistol__pf_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 9);
	return; // KCST_GotoReturn
}
void ABPC_Pistol_C__pf1418999182::bpf__ExecuteUbergraph_BPC_Pistol__pf_1(int32 bpp__EntryPoint__pf)
{
	FTransform bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_InverseTransformLocation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_K2_AttachToComponent_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_4__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue_1__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_VSize_ReturnValue__pf{};
	float bpfv__CallFunc_VSize_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue_1__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpv__OnMagnetMount__pf = false;
			}
		case 2:
			{
				if(::IsValid(bpv__GrabbableObjectSocket__pf))
				{
					bpv__GrabbableObjectSocket__pf->bpf__Grab__pf(bpv__Firearm_SM__pf, this, b1l__K2Node_Event_HandSocket__pf, b1l__K2Node_Event_AttachToMe__pf);
				}
			}
		case 3:
			{
				bpv__FirstHandGrabbed__pf = true;
			}
		case 4:
			{
				bpv__SecondHandGrabbed__pf = false;
			}
		case 5:
			{
				bpv__FirstxHand__pfT = b1l__K2Node_Event_AttachToMe__pf;
			}
		case 6:
			{
				b1l__K2Node_DynamicCast_AsBP_Motion_Controller__pf = Cast<ABP_MotionController_C__pf563933975>(b1l__K2Node_Event_Actor__pf);
				b1l__K2Node_DynamicCast_bSuccess__pf = (b1l__K2Node_DynamicCast_AsBP_Motion_Controller__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 7:
			{
				EControllerHand  __Local__36 = EControllerHand::Left;
				bpv__dominantHand__pf = ((::IsValid(b1l__K2Node_DynamicCast_AsBP_Motion_Controller__pf)) ? (b1l__K2Node_DynamicCast_AsBP_Motion_Controller__pf->bpv__Hand__pf) : (__Local__36));
			}
		case 8:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsBP_Motion_Controller__pf))
				{
					b1l__K2Node_DynamicCast_AsBP_Motion_Controller__pf->bpv__GripState__pf = E__Hand_Positions_Enum__pf::NewEnumerator2;
				}
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				if (!bpv__FirstHandGrabbed__pf)
				{
					__CurrentState = 19;
					break;
				}
			}
		case 11:
			{
				b1l__K2Node_DynamicCast_AsBP_Motion_Controller_1__pf = Cast<ABP_MotionController_C__pf563933975>(b1l__K2Node_Event_Actor__pf);
				b1l__K2Node_DynamicCast_bSuccess_1__pf = (b1l__K2Node_DynamicCast_AsBP_Motion_Controller_1__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 12:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsBP_Motion_Controller_1__pf) && ::IsValid(b1l__K2Node_DynamicCast_AsBP_Motion_Controller_1__pf->bpv__MotionController__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_2__pf = b1l__K2Node_DynamicCast_AsBP_Motion_Controller_1__pf->bpv__MotionController__pf->USceneComponent::K2_GetComponentLocation();
				}
				if(::IsValid(bpv__Slider_Collider__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_3__pf = bpv__Slider_Collider__pf->USceneComponent::K2_GetComponentLocation();
				}
				if(::IsValid(bpv__SecondHand_Collider__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_4__pf = bpv__SecondHand_Collider__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_2__pf, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_3__pf);
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue_1__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_2__pf, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_4__pf);
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf);
				bpfv__CallFunc_VSize_ReturnValue_1__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_Subtract_VectorVector_ReturnValue_1__pf);
				bpfv__CallFunc_Less_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Less_FloatFloat(bpfv__CallFunc_VSize_ReturnValue__pf, bpfv__CallFunc_VSize_ReturnValue_1__pf);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue_1__pf)
				{
					__CurrentState = 21;
					break;
				}
			}
		case 13:
			{
				bpv__SecondHandGrabbed__pf = true;
			}
		case 14:
			{
				bpv__SecondxHandxMotionxController__pfTTT = b1l__K2Node_DynamicCast_AsBP_Motion_Controller_1__pf;
			}
		case 15:
			{
				bpv__SecondxHandxMesh__pfTT = b1l__K2Node_Event_AttachToMe__pf;
			}
		case 16:
			{
				if(::IsValid(bpv__Firearm_SM__pf))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = bpv__Firearm_SM__pf->USceneComponent::K2_GetComponentToWorld();
				}
				if(::IsValid(bpv__SecondxHandxMotionxController__pfTTT) && ::IsValid(bpv__SecondxHandxMotionxController__pfTTT->bpv__MotionController__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__SecondxHandxMotionxController__pfTTT->bpv__MotionController__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_InverseTransformLocation_ReturnValue__pf = UKismetMathLibrary::InverseTransformLocation(bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_InverseTransformLocation_ReturnValue__pf, /*out*/ b1l__CallFunc_BreakVector_X_3__pf, /*out*/ b1l__CallFunc_BreakVector_Y_3__pf, /*out*/ b1l__CallFunc_BreakVector_Z_3__pf);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(b1l__CallFunc_BreakVector_X_3__pf, 0.000000, 0.000000);
				bpv__X_Last_Position__pf = bpfv__CallFunc_MakeVector_ReturnValue__pf;
			}
		case 17:
			{
				if(::IsValid(bpv__SecondxHandxMotionxController__pfTTT))
				{
					bpv__SecondxHandxMotionxController__pfTTT->bpv__GripState__pf = E__Hand_Positions_Enum__pf::NewEnumerator3;
				}
			}
		case 18:
			{
				if(::IsValid(bpv__Timeline_1__pf))
				{
					bpv__Timeline_1__pf->UTimelineComponent::PlayFromStart();
				}
				__CurrentState = -1;
				break;
			}
		case 19:
			{
				if (!bpv__OnMagnetMount__pf)
				{
					__CurrentState = 2;
					break;
				}
			}
		case 20:
			{
				if(::IsValid(bpv__MagnetMount__pf))
				{
					bpv__MagnetMount__pf->bpv__Occupied__pf = false;
				}
				__CurrentState = 1;
				break;
			}
		case 21:
			{
				bpv__SecondHandGrabbed__pf = true;
			}
		case 22:
			{
				if(::IsValid(b1l__K2Node_Event_AttachToMe__pf))
				{
					bpfv__CallFunc_K2_AttachToComponent_ReturnValue__pf = b1l__K2Node_Event_AttachToMe__pf->USceneComponent::K2_AttachToComponent(bpv__Firearm_SM__pf, FName(TEXT("Second_Hand_Socket")), EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::KeepWorld, true);
				}
			}
		case 23:
			{
				bpv__SecondxHandxMotionxController__pfTTT = b1l__K2Node_DynamicCast_AsBP_Motion_Controller_1__pf;
			}
		case 24:
			{
				if(::IsValid(bpv__SecondxHandxMotionxController__pfTTT))
				{
					bpv__SecondxHandxMotionxController__pfTTT->bpv__GripState__pf = E__Hand_Positions_Enum__pf::NewEnumerator3;
				}
			}
		case 25:
			{
				bpv__SecondxHandxMesh__pfTT = b1l__K2Node_Event_AttachToMe__pf;
			}
		case 26:
			{
				if(::IsValid(bpv__Timeline_2__pf))
				{
					bpv__Timeline_2__pf->UTimelineComponent::Play();
				}
				__CurrentState = -1;
				break;
			}
		case 38:
			{
				__CurrentState = 10;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABPC_Pistol_C__pf1418999182::bpf__ExecuteUbergraph_BPC_Pistol__pf_2(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_NotEqual_ByteByte_ReturnValue__pf{};
	FTransform bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_InverseTransformLocation_ReturnValue_1__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue_1__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue_2__pf(EForceInit::ForceInit);
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 27:
			{
				if(::IsValid(bpv__Slider_SM__pf))
				{
					bpv__Slider_SM__pf->USceneComponent::K2_SetRelativeLocation(FVector(-10.000000,0.000000,0.000000), false, /*out*/ b1l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf, false);
				}
				__CurrentState = -1;
				break;
			}
		case 28:
			{
				if(::IsValid(bpv__Slider_SM__pf))
				{
					bpv__Slider_SM__pf->USceneComponent::K2_SetRelativeLocation(FVector(0.000000,0.000000,0.000000), false, /*out*/ b1l__CallFunc_K2_SetRelativeLocation_SweepHitResult_1__pf, false);
				}
				__CurrentState = -1;
				break;
			}
		case 29:
			{
				E__Hand_Positions_Enum__pf  __Local__37 = E__Hand_Positions_Enum__pf::NewEnumerator0;
				bpfv__CallFunc_NotEqual_ByteByte_ReturnValue__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpv__SecondxHandxMotionxController__pfTTT)) ? (bpv__SecondxHandxMotionxController__pfTTT->bpv__GripState__pf) : (__Local__37))), static_cast<uint8>(E__Hand_Positions_Enum__pf::NewEnumerator0));
				if (!bpfv__CallFunc_NotEqual_ByteByte_ReturnValue__pf)
				{
					__CurrentState = 36;
					break;
				}
			}
		case 30:
			{
				if (!bpv__SecondHandGrabbed__pf)
				{
					__CurrentState = 36;
					break;
				}
			}
		case 31:
			{
				UKismetMathLibrary::BreakVector(bpv__X_Last_Position__pf, /*out*/ b1l__CallFunc_BreakVector_X_2__pf, /*out*/ b1l__CallFunc_BreakVector_Y_2__pf, /*out*/ b1l__CallFunc_BreakVector_Z_2__pf);
				if(::IsValid(bpv__Firearm_SM__pf))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_1__pf = bpv__Firearm_SM__pf->USceneComponent::K2_GetComponentToWorld();
				}
				if(::IsValid(bpv__SecondxHandxMotionxController__pfTTT) && ::IsValid(bpv__SecondxHandxMotionxController__pfTTT->bpv__MotionController__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf = bpv__SecondxHandxMotionxController__pfTTT->bpv__MotionController__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_InverseTransformLocation_ReturnValue_1__pf = UKismetMathLibrary::InverseTransformLocation(bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_1__pf, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_InverseTransformLocation_ReturnValue_1__pf, /*out*/ b1l__CallFunc_BreakVector_X_4__pf, /*out*/ b1l__CallFunc_BreakVector_Y_4__pf, /*out*/ b1l__CallFunc_BreakVector_Z_4__pf);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(b1l__CallFunc_BreakVector_X_4__pf, b1l__CallFunc_BreakVector_X_2__pf);
				bpv__X_Delta__pf = bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf;
			}
		case 32:
			{
				UKismetMathLibrary::BreakVector(bpv__X_Last_Position__pf, /*out*/ b1l__CallFunc_BreakVector_X_5__pf, /*out*/ b1l__CallFunc_BreakVector_Y_5__pf, /*out*/ b1l__CallFunc_BreakVector_Z_5__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpv__X_Delta__pf, b1l__CallFunc_BreakVector_X_5__pf);
				bpfv__CallFunc_MakeVector_ReturnValue_2__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, 0.000000, 0.000000);
				bpv__X_Last_Position__pf = bpfv__CallFunc_MakeVector_ReturnValue_2__pf;
			}
		case 33:
			{
				bpfv__CallFunc_MakeVector_ReturnValue_1__pf = UKismetMathLibrary::MakeVector(bpv__X_Delta__pf, 0.000000, 0.000000);
				if(::IsValid(bpv__Slider_SM__pf))
				{
					bpv__Slider_SM__pf->USceneComponent::K2_AddRelativeLocation(bpfv__CallFunc_MakeVector_ReturnValue_1__pf, true, /*out*/ b1l__CallFunc_K2_AddRelativeLocation_SweepHitResult__pf, true);
				}
			}
		case 34:
			{
				FVector  __Local__38 = FVector(0.000000,0.000000,0.000000);
				UKismetMathLibrary::BreakVector(((::IsValid(bpv__Slider_SM__pf)) ? ((*(AccessPrivateProperty<FVector >((bpv__Slider_SM__pf), USceneComponent::__PPO__RelativeLocation() )))) : (__Local__38)), /*out*/ b1l__CallFunc_BreakVector_X_1__pf, /*out*/ b1l__CallFunc_BreakVector_Y_1__pf, /*out*/ b1l__CallFunc_BreakVector_Z_1__pf);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(b1l__CallFunc_BreakVector_X_1__pf, bpv__SliderXMax__pf);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 35;
					break;
				}
				__CurrentState = 28;
				break;
			}
		case 35:
			{
				FVector  __Local__39 = FVector(0.000000,0.000000,0.000000);
				UKismetMathLibrary::BreakVector(((::IsValid(bpv__Slider_SM__pf)) ? ((*(AccessPrivateProperty<FVector >((bpv__Slider_SM__pf), USceneComponent::__PPO__RelativeLocation() )))) : (__Local__39)), /*out*/ b1l__CallFunc_BreakVector_X__pf, /*out*/ b1l__CallFunc_BreakVector_Y__pf, /*out*/ b1l__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(b1l__CallFunc_BreakVector_X__pf, bpv__SliderXMin__pf);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
				__CurrentState = 27;
				break;
			}
		case 36:
			{
				bpf__SliderRevertPosition__pf();
			}
		case 37:
			{
				if(::IsValid(bpv__Timeline_1__pf))
				{
					bpv__Timeline_1__pf->UTimelineComponent::Stop();
				}
				__CurrentState = -1;
				break;
			}
		case 45:
			{
				__CurrentState = 29;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABPC_Pistol_C__pf1418999182::bpf__ExecuteUbergraph_BPC_Pistol__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 44);
	return; // KCST_GotoReturn
}
void ABPC_Pistol_C__pf1418999182::bpf__ExecuteUbergraph_BPC_Pistol__pf_4(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_NotEqual_ByteByte_ReturnValue_1__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 39:
			{
				E__Hand_Positions_Enum__pf  __Local__40 = E__Hand_Positions_Enum__pf::NewEnumerator0;
				bpfv__CallFunc_NotEqual_ByteByte_ReturnValue_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpv__SecondxHandxMotionxController__pfTTT)) ? (bpv__SecondxHandxMotionxController__pfTTT->bpv__GripState__pf) : (__Local__40))), static_cast<uint8>(E__Hand_Positions_Enum__pf::NewEnumerator0));
				if (!bpfv__CallFunc_NotEqual_ByteByte_ReturnValue_1__pf)
				{
					__CurrentState = 41;
					break;
				}
			}
		case 40:
			{
				if (!bpv__SecondHandGrabbed__pf)
				{
					__CurrentState = 41;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 41:
			{
				bpf__SecondHandRelease__pf();
			}
		case 42:
			{
				if(::IsValid(bpv__Timeline_2__pf))
				{
					bpv__Timeline_2__pf->UTimelineComponent::Stop();
				}
				__CurrentState = -1;
				break;
			}
		case 43:
			{
				__CurrentState = 39;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABPC_Pistol_C__pf1418999182::bpf__Grab__pf(FName bpp__HandSocket__pf, USceneComponent* bpp__AttachToMe__pf, AActor* bpp__Actor__pf)
{
	b1l__K2Node_Event_HandSocket__pf = bpp__HandSocket__pf;
	b1l__K2Node_Event_AttachToMe__pf = bpp__AttachToMe__pf;
	b1l__K2Node_Event_Actor__pf = bpp__Actor__pf;
	bpf__ExecuteUbergraph_BPC_Pistol__pf_1(38);
}
void ABPC_Pistol_C__pf1418999182::bpf__Timeline_2__UpdateFunc__pf()
{
	bpf__ExecuteUbergraph_BPC_Pistol__pf_4(43);
}
void ABPC_Pistol_C__pf1418999182::bpf__Timeline_2__FinishedFunc__pf()
{
	bpf__ExecuteUbergraph_BPC_Pistol__pf_3(44);
}
void ABPC_Pistol_C__pf1418999182::bpf__Timeline_1__UpdateFunc__pf()
{
	bpf__ExecuteUbergraph_BPC_Pistol__pf_2(45);
}
void ABPC_Pistol_C__pf1418999182::bpf__Timeline_1__FinishedFunc__pf()
{
	bpf__ExecuteUbergraph_BPC_Pistol__pf_0(9);
}
PRAGMA_DISABLE_OPTIMIZATION
void ABPC_Pistol_C__pf1418999182::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/Meshes/Placeholder/Weapons/Pistol/Pistol_Main.Pistol_Main 
		{110, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/Meshes/Placeholder/Weapons/Pistol/Pistol_Lever.Pistol_Lever 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABPC_Pistol_C__pf1418999182::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{144, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Weapons/BP_Firearm_Base.BP_Firearm_Base_C 
		{4, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneComponent 
		{68, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.BoxComponent 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{27, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{5, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.ArrowComponent 
		{101, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Niagara.NiagaraComponent 
		{102, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  NiagaraSystem /Game/VisualEffects/Niagara/NS_muzzle_flash.NS_muzzle_flash 
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Actor 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/InputCore.EControllerHand 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/HeadMountedDisplay.MotionControllerComponent 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{105, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.TimelineComponent 
		{23, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{91, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/Engine.ETimelineDirection 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SphereComponent 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.MeshComponent 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.ActorComponent 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/VirtualReality/Meshes/BeamMesh.BeamMesh 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/VirtualReality/Materials/M_SplineArcMat.M_SplineArcMat 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  SkeletalMesh /Game/Meshes/Placeholder/Player_Generic/GE_Hand_Master_Grp.GE_Hand_Master_Grp 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SplineComponent 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.WidgetInteractionComponent 
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Engine/BasicShapes/Sphere.Sphere 
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/VirtualReality/Materials/M_ArcEndpoint.M_ArcEndpoint 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Engine/BasicShapes/Cylinder.Cylinder 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Game/VirtualReality/Materials/MI_TeleportCylinderPreview.MI_TeleportCylinderPreview 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/VirtualReality/Meshes/SM_FatCylinder.SM_FatCylinder 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/VirtualReality/Meshes/BeaconDirection.BeaconDirection 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/VirtualReality/Meshes/1x1_cube.1x1_cube 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Game/VirtualReality/Materials/MI_ChaperoneOutline.MI_ChaperoneOutline 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/SteamVR.SteamVRChaperoneComponent 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/Engine.EObjectTypeQuery 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.AnimInstance 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PlayerController 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.GameplayStatics 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  HapticFeedbackEffect_Curve /Game/VirtualRealityBP/Blueprints/MotionControllerHaptics.MotionControllerHaptics 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SplineMeshComponent 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/NavigationSystem.NavigationSystemV1 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetNodeHelperLibrary 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Characters/BPC_Conquest.BPC_Conquest_C 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BPC_Conquest_C /Game/Blueprints/Characters/BPC_Conquest.Default__BPC_Conquest_C 
		{103, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/Engine.EMoveComponentAction 
		{104, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/Engine.ECollisionChannel 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  DelegateFunction /Script/Engine.TimerDynamicDelegate__DelegateSignature 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{90, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Niagara.NiagaraFunctionLibrary 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/Meshes/Placeholder/Player_Generic/SM_FP_Gear_Whitebox.SM_FP_Gear_Whitebox 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.ChildActorComponent 
		{118, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BPC_Rifle_Magazine_C /Game/Blueprints/Weapons/BPC_Rifle_Magazine.Default__BPC_Rifle_Magazine_C 
		{119, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Weapons/BPC_Pistol_Magazine.BPC_Pistol_Magazine_C 
		{120, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BPC_Pistol_Magazine_C /Game/Blueprints/Weapons/BPC_Pistol_Magazine.Default__BPC_Pistol_Magazine_C 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Characters/BPC_Death.BPC_Death_C 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BPC_Death_C /Game/Blueprints/Characters/BPC_Death.Default__BPC_Death_C 
		{111, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Weapons/BPC_Shotgun_Shell.BPC_Shotgun_Shell_C 
		{112, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BPC_Shotgun_Shell_C /Game/Blueprints/Weapons/BPC_Shotgun_Shell.Default__BPC_Shotgun_Shell_C 
		{113, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Weapons/BPC_SMG_Magazine.BPC_SMG_Magazine_C 
		{114, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BPC_SMG_Magazine_C /Game/Blueprints/Weapons/BPC_SMG_Magazine.Default__BPC_SMG_Magazine_C 
		{115, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Weapons/BPC_DMR_Magazine.BPC_DMR_Magazine_C 
		{116, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BPC_DMR_Magazine_C /Game/Blueprints/Weapons/BPC_DMR_Magazine.Default__BPC_DMR_Magazine_C 
		{117, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Weapons/BPC_Rifle_Magazine.BPC_Rifle_Magazine_C 
		{92, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/Meshes/Placeholder/Weapons/Pistol/OLD/Pistol_Magazine_Whitebox_Low.Pistol_Magazine_Whitebox_Low 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Character 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Characters/BPC_Famine.BPC_Famine_C 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BPC_Famine_C /Game/Blueprints/Characters/BPC_Famine.Default__BPC_Famine_C 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.WidgetComponent 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent.Widget3DPassThrough_Translucent 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent_OneSided.Widget3DPassThrough_Translucent_OneSided 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque.Widget3DPassThrough_Opaque 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque_OneSided.Widget3DPassThrough_Opaque_OneSided 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked.Widget3DPassThrough_Masked 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked_OneSided.Widget3DPassThrough_Masked_OneSided 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.UserWidget 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.CameraComponent 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/AIModule.AIController 
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PostProcessComponent 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  TextureCube /Game/Imports/StarterContent/HDRI/HDRI_Epic_Courtyard_Daylight.HDRI_Epic_Courtyard_Daylight 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.CapsuleComponent 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/KatDataPlugin4BP.KatDataPlugin4BPBPLibrary 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.CharacterMovementComponent 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/HUD/Widgets/Widget3DNoPassThrough.Widget3DNoPassThrough 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/HUD/Images/TakeDamage/MAT_TakeDamage.MAT_TakeDamage 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Image 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PlayerCameraManager 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/UMG.WidgetTransform 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Widget 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.WidgetAnimation 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Paper2D.PaperFlipbook 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  PaperFlipbook /Game/HUD/Images/TakeDamage/ShieldDam_V2.ShieldDam_V2 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.TextBlock 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/HUD/Images/Arrow_Render_V2.Arrow_Render_V2 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.UMGSequencePlayer 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Meshes/Placeholder/Player_Generic/HandOpen.HandOpen 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/HUD/Images/ObjectiveMarker_HUD.ObjectiveMarker_HUD 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/HUD/Images/OverlayCombined_HUD.OverlayCombined_HUD 
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.AnimNode_TransitionResult 
		{94, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.PoseLink 
		{95, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.AnimNode_SequencePlayer 
		{96, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_StateResult 
		{97, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.AnimNode_StateMachine 
		{98, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.AnimNode_Root 
		{99, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Meshes/Placeholder/Player_Generic/Pistol_Second_Hand_Grip.Pistol_Second_Hand_Grip 
		{100, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Meshes/Placeholder/Player_Generic/HandPistolGrip.HandPistolGrip 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  AnimSequence /Game/Meshes/Placeholder/Player_Generic/HandClosed.HandClosed 
		{106, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Texture2D /Game/HUD/Images/AmmoMarker_HUD.AmmoMarker_HUD 
		{107, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.ProjectileMovementComponent 
		{108, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Skeleton /Game/Meshes/Placeholder/Player_Generic/GE_Hand_Master_Grp_Skeleton.GE_Hand_Master_Grp_Skeleton 
		{145, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/VirtualRealityBP/Blueprints/BP_MotionController.BP_MotionController_C 
		{147, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/GrabbableObjectSocket.GrabbableObjectSocket_C 
		{146, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Tools/BP_MagneticPlacement.BP_MagneticPlacement_C 
		{148, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Meshes/Placeholder/Player_Generic/Hand_Positions_Enum.Hand_Positions_Enum 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ABPC_Pistol_C__pf1418999182
{
	FRegisterHelper__ABPC_Pistol_C__pf1418999182()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprints/Weapons/BPC_Pistol"), &ABPC_Pistol_C__pf1418999182::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABPC_Pistol_C__pf1418999182 Instance;
};
FRegisterHelper__ABPC_Pistol_C__pf1418999182 FRegisterHelper__ABPC_Pistol_C__pf1418999182::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
