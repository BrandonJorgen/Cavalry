#include "NativizedAssets.h"
#include "BP_PlayerCharacter_Base__pf1490413170.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
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
#include "Runtime/Engine/Classes/Components/PostProcessComponent.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PostProcessVolume.h"
#include "BP_MotionController__pf563933975.h"
#include "BP_PlayerGear__pf3324220276.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
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
#include "Runtime/HeadMountedDisplay/Public/HeadMountedDisplayFunctionLibrary.h"
#include "Runtime/HeadMountedDisplay/Public/HeadMountedDisplayTypes.h"
#include "Runtime/HeadMountedDisplay/Public/IIdentifiableXRDevice.h"
#include "Runtime/HeadMountedDisplay/Public/IMotionController.h"
#include "Runtime/HeadMountedDisplay/Public/XRGestureConfig.h"
#include "../Plugins/KatDataPlugin4BP/Source/KatDataPlugin4BP/Public/KatDataPlugin4BPBPLibrary.h"
#include "BP_HorsemenHUD__pf760233656.h"
#include "Runtime/ClothingSystemRuntimeNv/Public/ClothingSimulationFactoryNv.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea_Obstacle.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ABP_PlayerCharacter_Base_C__pf1490413170::ABP_PlayerCharacter_Base_C__pf1490413170(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	auto __Local__0 = CastChecked<UCapsuleComponent>(this->GetDefaultSubobjectByName(TEXT("CollisionCylinder")), ECastCheckedType::NullAllowed);
	auto __Local__1 = CastChecked<UCharacterMovementComponent>(this->GetDefaultSubobjectByName(TEXT("CharMoveComp")), ECastCheckedType::NullAllowed);
	auto __Local__2 = CastChecked<USkeletalMeshComponent>(this->GetDefaultSubobjectByName(TEXT("CharacterMesh0")), ECastCheckedType::NullAllowed);
	if(__Local__0)
	{
		// --- Default subobject 'CollisionCylinder' //
		__Local__0->AreaClass = UNavArea_Obstacle::StaticClass();
		__Local__0->ShapeColor = FColor(255, 0, 0, 255);
		auto& __Local__3 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(__Local__0->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
		__Local__3 = ECollisionChannel::ECC_GameTraceChannel3;
		auto& __Local__4 = (*(AccessPrivateProperty<FCollisionResponse >(&(__Local__0->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
		auto& __Local__5 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__4), FCollisionResponse::__PPO__ResponseArray() )));
		__Local__5 = TArray<FResponseChannel> ();
		__Local__5.AddUninitialized(2);
		FResponseChannel::StaticStruct()->InitializeStruct(__Local__5.GetData(), 2);
		auto& __Local__6 = __Local__5[0];
		__Local__6.Channel = FName(TEXT("Visibility"));
		__Local__6.Response = ECollisionResponse::ECR_Ignore;
		auto& __Local__7 = __Local__5[1];
		__Local__7.Channel = FName(TEXT("PlayerCollision"));
		__Local__7.Response = ECollisionResponse::ECR_Ignore;
		__Local__0->SetCollisionProfileName(FName(TEXT("Custom")));
		__Local__0->bHiddenInGame = false;
		static TWeakFieldPtr<FProperty> __Local__9{};
		const FProperty* __Local__8 = __Local__9.Get();
		if (nullptr == __Local__8)
		{
			__Local__8 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__8);
			__Local__9 = __Local__8;
		}
		(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((__Local__0), false, 0));
		// --- END default subobject 'CollisionCylinder' //
	}
	if(__Local__1)
	{
		// --- Default subobject 'CharMoveComp' //
		static TWeakFieldPtr<FProperty> __Local__11{};
		const FProperty* __Local__10 = __Local__11.Get();
		if (nullptr == __Local__10)
		{
			__Local__10 = (UNavMovementComponent::StaticClass())->FindPropertyByName(FName(TEXT("bUseAccelerationForPaths")));
			check(__Local__10);
			__Local__11 = __Local__10;
		}
		(((FBoolProperty*)__Local__10)->SetPropertyValue_InContainer((__Local__1), false, 0));
		static TWeakFieldPtr<FProperty> __Local__13{};
		const FProperty* __Local__12 = __Local__13.Get();
		if (nullptr == __Local__12)
		{
			__Local__12 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__12);
			__Local__13 = __Local__12;
		}
		(((FBoolProperty*)__Local__12)->SetPropertyValue_InContainer((__Local__1), false, 0));
		// --- END default subobject 'CharMoveComp' //
	}
	if(__Local__2)
	{
		// --- Default subobject 'CharacterMesh0' //
		__Local__2->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
		__Local__2->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPose;
		auto& __Local__14 = (*(AccessPrivateProperty<UCapsuleComponent*>((__Local__2), USceneComponent::__PPO__AttachParent() )));
		__Local__14 = __Local__0;
		static TWeakFieldPtr<FProperty> __Local__16{};
		const FProperty* __Local__15 = __Local__16.Get();
		if (nullptr == __Local__15)
		{
			__Local__15 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__15);
			__Local__16 = __Local__15;
		}
		(((FBoolProperty*)__Local__15)->SetPropertyValue_InContainer((__Local__2), false, 0));
		// --- END default subobject 'CharacterMesh0' //
	}
	bpv__Camera__pf = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	bpv__NightxVisionxPP__pfTT = CreateDefaultSubobject<UPostProcessComponent>(TEXT("Night Vision PP"));
	bpv__GearLocationBase__pf = CreateDefaultSubobject<USceneComponent>(TEXT("GearLocationBase"));
	bpv__GearLoction__pf = CreateDefaultSubobject<UArrowComponent>(TEXT("GearLoction"));
	bpv__Camera__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Camera__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__17 = (*(AccessPrivateProperty<FVector >((bpv__Camera__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__17 = FVector(0.000000, 0.000000, -90.000000);
	auto& __Local__18 = (*(AccessPrivateProperty<FRotator >((bpv__Camera__pf), USceneComponent::__PPO__RelativeRotation() )));
	__Local__18 = FRotator(0.000215, 0.000000, 0.000000);
	static TWeakFieldPtr<FProperty> __Local__20{};
	const FProperty* __Local__19 = __Local__20.Get();
	if (nullptr == __Local__19)
	{
		__Local__19 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__19);
		__Local__20 = __Local__19;
	}
	(((FBoolProperty*)__Local__19)->SetPropertyValue_InContainer((bpv__Camera__pf), false, 0));
	bpv__NightxVisionxPP__pfTT->CreationMethod = EComponentCreationMethod::Native;
	bpv__NightxVisionxPP__pfTT->AttachToComponent(bpv__Camera__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__NightxVisionxPP__pfTT->Settings.bOverride_WhiteTemp = true;
	bpv__NightxVisionxPP__pfTT->Settings.bOverride_WhiteTint = true;
	bpv__NightxVisionxPP__pfTT->Settings.bOverride_ColorSaturation = true;
	bpv__NightxVisionxPP__pfTT->Settings.bOverride_ColorContrast = true;
	bpv__NightxVisionxPP__pfTT->Settings.bOverride_ColorGamma = true;
	bpv__NightxVisionxPP__pfTT->Settings.bOverride_AmbientCubemapIntensity = true;
	bpv__NightxVisionxPP__pfTT->Settings.bOverride_BloomThreshold = true;
	bpv__NightxVisionxPP__pfTT->Settings.bOverride_AutoExposureMethod = true;
	bpv__NightxVisionxPP__pfTT->Settings.bOverride_AutoExposureLowPercent = true;
	bpv__NightxVisionxPP__pfTT->Settings.bOverride_AutoExposureHighPercent = true;
	bpv__NightxVisionxPP__pfTT->Settings.bOverride_AutoExposureMinBrightness = true;
	bpv__NightxVisionxPP__pfTT->Settings.bOverride_AutoExposureMaxBrightness = true;
	bpv__NightxVisionxPP__pfTT->Settings.bOverride_HistogramLogMin = true;
	bpv__NightxVisionxPP__pfTT->Settings.bOverride_HistogramLogMax = true;
	bpv__NightxVisionxPP__pfTT->Settings.bOverride_VignetteIntensity = true;
	bpv__NightxVisionxPP__pfTT->Settings.bOverride_GrainIntensity = true;
	bpv__NightxVisionxPP__pfTT->Settings.bOverride_ColorGradingIntensity = true;
	bpv__NightxVisionxPP__pfTT->Settings.bOverride_ColorGradingLUT = true;
	bpv__NightxVisionxPP__pfTT->Settings.bOverride_MotionBlurAmount = true;
	bpv__NightxVisionxPP__pfTT->Settings.WhiteTemp = 4957.000000f;
	bpv__NightxVisionxPP__pfTT->Settings.WhiteTint = 0.430000f;
	bpv__NightxVisionxPP__pfTT->Settings.ColorSaturation.X = 0.560000f;
	bpv__NightxVisionxPP__pfTT->Settings.ColorSaturation.Y = 0.560000f;
	bpv__NightxVisionxPP__pfTT->Settings.ColorSaturation.Z = 0.560000f;
	bpv__NightxVisionxPP__pfTT->Settings.ColorSaturation.W = 0.590000f;
	bpv__NightxVisionxPP__pfTT->Settings.ColorContrast.X = 1.340000f;
	bpv__NightxVisionxPP__pfTT->Settings.ColorContrast.Y = 1.340000f;
	bpv__NightxVisionxPP__pfTT->Settings.ColorContrast.Z = 1.340000f;
	bpv__NightxVisionxPP__pfTT->Settings.ColorGamma.X = 1.500000f;
	bpv__NightxVisionxPP__pfTT->Settings.ColorGamma.Y = 1.500000f;
	bpv__NightxVisionxPP__pfTT->Settings.ColorGamma.Z = 1.500000f;
	bpv__NightxVisionxPP__pfTT->Settings.ColorGain.X = 0.000000f;
	bpv__NightxVisionxPP__pfTT->Settings.ColorGain.Y = 0.000000f;
	bpv__NightxVisionxPP__pfTT->Settings.ColorGain.Z = 0.000000f;
	bpv__NightxVisionxPP__pfTT->Settings.ColorOffset.X = 0.016000f;
	bpv__NightxVisionxPP__pfTT->Settings.ColorOffset.Y = 0.016000f;
	bpv__NightxVisionxPP__pfTT->Settings.ColorOffset.Z = 0.016000f;
	bpv__NightxVisionxPP__pfTT->Settings.BloomThreshold = 8.000000f;
	bpv__NightxVisionxPP__pfTT->Settings.AmbientCubemapIntensity = 0.352381f;
	bpv__NightxVisionxPP__pfTT->Settings.AmbientCubemap = CastChecked<UTextureCube>(CastChecked<UDynamicClass>(ABP_PlayerCharacter_Base_C__pf1490413170::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__NightxVisionxPP__pfTT->Settings.AutoExposureBias = 10.714286f;
	bpv__NightxVisionxPP__pfTT->Settings.AutoExposureLowPercent = 0.000000f;
	bpv__NightxVisionxPP__pfTT->Settings.AutoExposureHighPercent = 92.380951f;
	bpv__NightxVisionxPP__pfTT->Settings.HistogramLogMin = -16.000000f;
	bpv__NightxVisionxPP__pfTT->Settings.HistogramLogMax = 16.000000f;
	bpv__NightxVisionxPP__pfTT->Settings.VignetteIntensity = 1.400000f;
	bpv__NightxVisionxPP__pfTT->Settings.GrainIntensity = 0.066667f;
	bpv__NightxVisionxPP__pfTT->Settings.ColorGradingIntensity = 0.638095f;
	bpv__NightxVisionxPP__pfTT->Settings.MotionBlurAmount = 0.000000f;
	bpv__NightxVisionxPP__pfTT->Settings.WeightedBlendables.Array = TArray<FWeightedBlendable> ();
	bpv__NightxVisionxPP__pfTT->Settings.WeightedBlendables.Array.AddUninitialized(1);
	FWeightedBlendable::StaticStruct()->InitializeStruct(bpv__NightxVisionxPP__pfTT->Settings.WeightedBlendables.Array.GetData(), 1);
	auto& __Local__21 = bpv__NightxVisionxPP__pfTT->Settings.WeightedBlendables.Array[0];
	__Local__21.Weight = 1.000000f;
	auto& __Local__22 = (*(AccessPrivateProperty<FVector >((bpv__NightxVisionxPP__pfTT), USceneComponent::__PPO__RelativeLocation() )));
	__Local__22 = FVector(0.000337, 0.000000, 90.000000);
	auto& __Local__23 = (*(AccessPrivateProperty<FRotator >((bpv__NightxVisionxPP__pfTT), USceneComponent::__PPO__RelativeRotation() )));
	__Local__23 = FRotator(-0.000219, 0.000000, 0.000000);
	(((FBoolProperty*)__Local__19)->SetPropertyValue_InContainer((bpv__NightxVisionxPP__pfTT), false, 0));
	bpv__GearLocationBase__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__GearLocationBase__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	(((FBoolProperty*)__Local__19)->SetPropertyValue_InContainer((bpv__GearLocationBase__pf), false, 0));
	bpv__GearLoction__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__GearLoction__pf->AttachToComponent(bpv__GearLocationBase__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__24 = (*(AccessPrivateProperty<FVector >((bpv__GearLoction__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__24 = FVector(-15.000000, 0.000000, -30.000000);
	(((FBoolProperty*)__Local__19)->SetPropertyValue_InContainer((bpv__GearLoction__pf), false, 0));
	bpv__LeftxController__pfT = nullptr;
	bpv__RightxController__pfT = nullptr;
	bpv__DeltaxRotation__pfT = FRotator(0.000000, 0.000000, 0.000000);
	bpv__maxShields__pf = 100;
	bpv__currentShields__pf = 100;
	bpv__maxHealthHits__pf = 3;
	bpv__healthHits__pf = 0;
	bpv__recentlyHit__pf = false;
	bpv__PlayerGear__pf = nullptr;
	bpv__HorsemanxtoxSpawnxFor__pfTTT = E__E_Horsemen__pf::NewEnumerator1;
	bpv__bSmoothRotation__pf = false;
	bpv__TurnxDeadzone__pfT = 0.400000f;
	bpv__SmoothxRotationxSpeed__pfTT = 1.000000f;
	bpv__SnapxRotationxDegrees__pfTT = 45.000000f;
	bpv__RotationxAngle__pfT = 0.000000f;
	bpv__Character__pf = nullptr;
	bpv__PreviousxCapsulexHalfxHeight__pfTTG = 0.000000f;
	bpv__HMD_Origin__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__WidgetHandler__pf = nullptr;
	auto& __Local__25 = (*(AccessPrivateProperty<USkeletalMeshComponent*>((this), ACharacter::__PPO__Mesh() )));
	__Local__25 = __Local__2;
	auto& __Local__26 = (*(AccessPrivateProperty<UCharacterMovementComponent*>((this), ACharacter::__PPO__CharacterMovement() )));
	__Local__26 = __Local__1;
	auto& __Local__27 = (*(AccessPrivateProperty<UCapsuleComponent*>((this), ACharacter::__PPO__CapsuleComponent() )));
	__Local__27 = __Local__0;
	bUseControllerRotationYaw = false;
	auto& __Local__28 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__28 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
	Tags = TArray<FName> ();
	Tags.Reserve(1);
	Tags.Add(FName(TEXT("Player")));
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_PlayerCharacter_Base_C__pf1490413170::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__Camera__pf)
	{
		bpv__Camera__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__NightxVisionxPP__pfTT)
	{
		bpv__NightxVisionxPP__pfTT->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__GearLocationBase__pf)
	{
		bpv__GearLocationBase__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__GearLoction__pf)
	{
		bpv__GearLoction__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_PlayerCharacter_Base_C__pf1490413170::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(ABP_MotionController_C__pf563933975::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_PlayerGear_C__pf3324220276::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_HorsemenHUD_C__pf760233656::StaticClass());
	extern UClass* Z_Construct_UClass_UBPI_TakeDamage_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UBPI_TakeDamage_C());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__29 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__29);
	static TWeakFieldPtr<FProperty> __Local__31{};
	const FProperty* __Local__30 = __Local__31.Get();
	if (nullptr == __Local__30)
	{
		__Local__30 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__30);
		__Local__31 = __Local__30;
	}
	(((FBoolProperty*)__Local__30)->SetPropertyValue_InContainer((__Local__29), false, 0));
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_PlayerCharacter_Base_C__pf1490413170::bpf__ExecuteUbergraph_BP_PlayerCharacter_Base__pf_0(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MakeRotFromXZ_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 50);
	// optimized KCST_UnconditionalGoto
	if(::IsValid((*(AccessPrivateProperty<UCapsuleComponent* >((this), ACharacter::__PPO__CapsuleComponent() )))))
	{
		bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_2__pf = (*(AccessPrivateProperty<UCapsuleComponent* >((this), ACharacter::__PPO__CapsuleComponent() )))->USceneComponent::K2_GetComponentLocation();
	}
	bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf = UKismetMathLibrary::Add_VectorVector(bpv__HMD_Origin__pf, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_2__pf);
	if(::IsValid(bpv__Camera__pf))
	{
		bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_3__pf = bpv__Camera__pf->USceneComponent::K2_GetComponentLocation();
	}
	if(::IsValid(bpv__Camera__pf))
	{
		bpfv__CallFunc_GetForwardVector_ReturnValue__pf = bpv__Camera__pf->USceneComponent::GetForwardVector();
	}
	bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_3__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue_1__pf);
	bpfv__CallFunc_MakeRotFromXZ_ReturnValue__pf = UKismetMathLibrary::MakeRotFromXZ(bpfv__CallFunc_GetForwardVector_ReturnValue__pf, bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf);
	if(::IsValid(bpv__GearLocationBase__pf))
	{
		bpv__GearLocationBase__pf->USceneComponent::K2_SetWorldRotation(bpfv__CallFunc_MakeRotFromXZ_ReturnValue__pf, false, /*out*/ b0l__CallFunc_K2_SetWorldRotation_SweepHitResult__pf, false);
	}
	if(::IsValid(bpv__Camera__pf))
	{
		bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__Camera__pf->USceneComponent::K2_GetComponentLocation();
	}
	if(::IsValid(bpv__GearLocationBase__pf))
	{
		bpv__GearLocationBase__pf->USceneComponent::K2_SetWorldLocation(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, false, /*out*/ b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf, false);
	}
	FRotator  __Local__32 = FRotator(0.000000,0.000000,0.000000);
	UKismetMathLibrary::BreakRotator(((::IsValid(bpv__GearLocationBase__pf)) ? ((*(AccessPrivateProperty<FRotator >((bpv__GearLocationBase__pf), USceneComponent::__PPO__RelativeRotation() )))) : (__Local__32)), /*out*/ b0l__CallFunc_BreakRotator_Roll__pf, /*out*/ b0l__CallFunc_BreakRotator_Pitch__pf, /*out*/ b0l__CallFunc_BreakRotator_Yaw__pf);
	bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(b0l__CallFunc_BreakRotator_Roll__pf, 0.000000, b0l__CallFunc_BreakRotator_Yaw__pf);
	if(::IsValid(bpv__GearLocationBase__pf))
	{
		bpv__GearLocationBase__pf->USceneComponent::K2_SetRelativeRotation(bpfv__CallFunc_MakeRotator_ReturnValue__pf, false, /*out*/ b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf, false);
	}
	return; //KCST_EndOfThread
}
void ABP_PlayerCharacter_Base_C__pf1490413170::bpf__ExecuteUbergraph_BP_PlayerCharacter_Base__pf_1(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf{};
	FTimerHandle bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__CurrentState = 2;
				break;
			}
		case 2:
			{
				if (!bpv__recentlyHit__pf)
				{
					__CurrentState = 3;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__currentShields__pf, b0l__K2Node_Event_DamageAmount_1__pf);
				bpv__currentShields__pf = bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf;
			}
		case 4:
			{
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(bpv__currentShields__pf, 0);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 5:
			{
				bpv__currentShields__pf = 0;
			}
		case 6:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpv__healthHits__pf, 1);
				b0l__Temp_int_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
			}
		case 7:
			{
				bpv__healthHits__pf = b0l__Temp_int_Variable__pf;
			}
		case 8:
			{
				bpv__recentlyHit__pf = true;
			}
		case 9:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate__pf.BindUFunction(this,FName(TEXT("ResetHitTimer")));
				bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue__pf = UKismetSystemLibrary::K2_SetTimerDelegate(b0l__K2Node_CreateDelegate_OutputDelegate__pf, 3.000000, false, 0.000000, 0.000000);
			}
		case 10:
			{
				bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_IntInt(bpv__healthHits__pf, bpv__maxHealthHits__pf);
				if (!bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 11:
			{
				bpf__Death__pf();
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_PlayerCharacter_Base_C__pf1490413170::bpf__ExecuteUbergraph_BP_PlayerCharacter_Base__pf_2(int32 bpp__EntryPoint__pf)
{
	uint8 bpfv__CallFunc_MakeLiteralByte_ReturnValue__pf{};
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf{};
	ABP_MotionController_C__pf563933975* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	ABP_MotionController_C__pf563933975* bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf{};
	FName bpfv__CallFunc_GetHMDDeviceName_ReturnValue__pf{};
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue_1__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2__pf{};
	ABP_PlayerGear_C__pf3324220276* bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 14:
			{
				__StateStack.Push(24);
				__StateStack.Push(19);
			}
		case 15:
			{
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, ABP_MotionController_C__pf563933975::StaticClass(), bpfv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, this);
			}
		case 16:
			{
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<ABP_MotionController_C__pf563933975>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1__pf, bpfv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 17:
			{
				bpv__LeftxController__pfT = bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf;
			}
		case 18:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf->AActor::K2_AttachToComponent((*(AccessPrivateProperty<UCapsuleComponent* >((this), ACharacter::__PPO__CapsuleComponent() ))), FName(TEXT("None")), EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::KeepWorld, false);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 19:
			{
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, ABP_MotionController_C__pf563933975::StaticClass(), bpfv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, this);
			}
		case 20:
			{
				bpfv__CallFunc_MakeLiteralByte_ReturnValue__pf = UKismetSystemLibrary::MakeLiteralByte(1);
				UKismetSystemLibrary::SetBytePropertyByName(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, FName(TEXT("Hand")), bpfv__CallFunc_MakeLiteralByte_ReturnValue__pf);
			}
		case 21:
			{
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf = CastChecked<ABP_MotionController_C__pf563933975>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 22:
			{
				bpv__RightxController__pfT = bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf;
			}
		case 23:
			{
				if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue_1__pf->AActor::K2_AttachToComponent((*(AccessPrivateProperty<UCapsuleComponent* >((this), ACharacter::__PPO__CapsuleComponent() ))), FName(TEXT("None")), EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::KeepWorld, false);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 24:
			{
				bpfv__CallFunc_MakeTransform_ReturnValue_1__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, ABP_PlayerGear_C__pf3324220276::StaticClass(), bpfv__CallFunc_MakeTransform_ReturnValue_1__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, this);
			}
		case 25:
			{
				UKismetSystemLibrary::SetBytePropertyByName(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2__pf, FName(TEXT("HorsemanToSpawnFor")), static_cast<uint8>(bpv__HorsemanxtoxSpawnxFor__pfTTT));
			}
		case 26:
			{
				bpfv__CallFunc_MakeTransform_ReturnValue_1__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf = CastChecked<ABP_PlayerGear_C__pf3324220276>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2__pf, bpfv__CallFunc_MakeTransform_ReturnValue_1__pf), ECastCheckedType::NullAllowed);
			}
		case 27:
			{
				bpv__PlayerGear__pf = bpfv__CallFunc_FinishSpawningActor_ReturnValue_2__pf;
			}
		case 28:
			{
				if(::IsValid(bpv__PlayerGear__pf))
				{
					bpv__PlayerGear__pf->AActor::K2_AttachToComponent(bpv__GearLoction__pf, FName(TEXT("None")), EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, false);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 29:
			{
				UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(EHMDTrackingOrigin::Floor);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 30:
			{
				bpfv__CallFunc_GetHMDDeviceName_ReturnValue__pf = UHeadMountedDisplayFunctionLibrary::GetHMDDeviceName();
				b0l__K2Node_SwitchName_CmpSuccess__pf = UKismetMathLibrary::NotEqual_NameName(bpfv__CallFunc_GetHMDDeviceName_ReturnValue__pf, FName(TEXT("Oculus HMD")));
				if (!b0l__K2Node_SwitchName_CmpSuccess__pf)
				{
					__CurrentState = 29;
					break;
				}
				b0l__K2Node_SwitchName_CmpSuccess__pf = UKismetMathLibrary::NotEqual_NameName(bpfv__CallFunc_GetHMDDeviceName_ReturnValue__pf, FName(TEXT("Windows Mixed Reality")));
				if (!b0l__K2Node_SwitchName_CmpSuccess__pf)
				{
					__CurrentState = 29;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 31:
			{
				__StateStack.Push(32);
				__StateStack.Push(33);
				__StateStack.Push(14);
				__CurrentState = 30;
				break;
			}
		case 32:
			{
				bpf__CalibratexHMDxFloorxPosition__pfTTT();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 33:
			{
				if(::IsValid(bpv__NightxVisionxPP__pfTT))
				{
					bpv__NightxVisionxPP__pfTT->bEnabled = false;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 36:
			{
				__CurrentState = 31;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_PlayerCharacter_Base_C__pf1490413170::bpf__ExecuteUbergraph_BP_PlayerCharacter_Base__pf_3(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf{};
	bool bpfv__CallFunc_LineTraceSingleForObjects_ReturnValue__pf{};
	FVector bpfv__CallFunc_InverseTransformLocation_ReturnValue__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 54);
	// optimized KCST_UnconditionalGoto
	b0l__K2Node_MakeArray_Array__pf.SetNum(1, true);
	b0l__K2Node_MakeArray_Array__pf[0] = EObjectTypeQuery::ObjectTypeQuery1;
	if(::IsValid(bpv__Camera__pf))
	{
		bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf = bpv__Camera__pf->USceneComponent::K2_GetComponentLocation();
	}
	bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf, FVector(0.000000,0.000000,-1000.000000));
	bpfv__CallFunc_LineTraceSingleForObjects_ReturnValue__pf = UKismetSystemLibrary::LineTraceSingleForObjects(this, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, b0l__K2Node_MakeArray_Array__pf, false, b0l__Temp_object_Variable__pf, EDrawDebugTrace::None, /*out*/ b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 5.000000);
	if(::IsValid((*(AccessPrivateProperty<UCapsuleComponent* >((this), ACharacter::__PPO__CapsuleComponent() )))))
	{
		bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = (*(AccessPrivateProperty<UCapsuleComponent* >((this), ACharacter::__PPO__CapsuleComponent() )))->USceneComponent::K2_GetComponentToWorld();
	}
	UGameplayStatics::BreakHitResult(b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Distance__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
	bpfv__CallFunc_InverseTransformLocation_ReturnValue__pf = UKismetMathLibrary::InverseTransformLocation(bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf, b0l__CallFunc_BreakHitResult_Location__pf);
	bpv__HMD_Origin__pf = bpfv__CallFunc_InverseTransformLocation_ReturnValue__pf;
	return; //KCST_EndOfThread
}
void ABP_PlayerCharacter_Base_C__pf1490413170::bpf__ExecuteUbergraph_BP_PlayerCharacter_Base__pf_4(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	ABP_PlayerCharacter_Base_C__pf1490413170* bpfv__CallFunc_GetActorOfClass_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 39:
			{
				__CurrentState = 40;
				break;
			}
		case 40:
			{
				bpfv__CallFunc_GetActorOfClass_ReturnValue__pf = CastChecked<ABP_PlayerCharacter_Base_C__pf1490413170>(UGameplayStatics::GetActorOfClass(this, CastChecked<UClass>(CastChecked<UDynamicClass>(ABP_PlayerCharacter_Base_C__pf1490413170::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed)), ECastCheckedType::NullAllowed);
			}
		case 41:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpfv__CallFunc_GetActorOfClass_ReturnValue__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 49;
					break;
				}
			}
		case 42:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Night Vision Trigger Success: Famine in Scene")), true, true, FLinearColor(0.000000,1.000000,0.193288,1.000000), 2.000000);
			}
		case 43:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(b0l__Temp_bool_Variable__pf);
				b0l__Temp_bool_Variable__pf = bpfv__CallFunc_Not_PreBool_ReturnValue__pf;
			}
		case 44:
			{
				if (!b0l__Temp_bool_Variable__pf)
				{
					__CurrentState = 47;
					break;
				}
			}
		case 45:
			{
				if(::IsValid(bpv__NightxVisionxPP__pfTT))
				{
					bpv__NightxVisionxPP__pfTT->bEnabled = true;
				}
			}
		case 46:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Night Vision Trigger ON")), true, true, FLinearColor(0.000000,1.000000,0.193288,1.000000), 2.000000);
				__CurrentState = -1;
				break;
			}
		case 47:
			{
				if(::IsValid(bpv__NightxVisionxPP__pfTT))
				{
					bpv__NightxVisionxPP__pfTT->bEnabled = false;
				}
			}
		case 48:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Night Vision Trigger OFF")), true, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), 2.000000);
				__CurrentState = -1;
				break;
			}
		case 49:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Night Vision Trigger Failure: Famine not in Scene")), true, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), 2.000000);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_PlayerCharacter_Base_C__pf1490413170::bpf__ExecuteUbergraph_BP_PlayerCharacter_Base__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 38);
	return; //KCST_EndOfThread
}
void ABP_PlayerCharacter_Base_C__pf1490413170::bpf__ExecuteUbergraph_BP_PlayerCharacter_Base__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 37);
	return; //KCST_EndOfThread
}
void ABP_PlayerCharacter_Base_C__pf1490413170::bpf__ExecuteUbergraph_BP_PlayerCharacter_Base__pf_7(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 34);
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::PrintString(this, FString(TEXT("You are dead :)")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
	return; //KCST_EndOfThread
}
void ABP_PlayerCharacter_Base_C__pf1490413170::bpf__ExecuteUbergraph_BP_PlayerCharacter_Base__pf_8(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 12);
	// optimized KCST_UnconditionalGoto
	bpv__recentlyHit__pf = false;
	return; //KCST_EndOfThread
}
void ABP_PlayerCharacter_Base_C__pf1490413170::bpf__CalibratexHMDxFloorxPosition__pfTTT()
{
	bpf__ExecuteUbergraph_BP_PlayerCharacter_Base__pf_3(54);
}
void ABP_PlayerCharacter_Base_C__pf1490413170::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_BP_PlayerCharacter_Base__pf_0(50);
}
void ABP_PlayerCharacter_Base_C__pf1490413170::bpf__NightxVisionxTrigger__pfTT()
{
	bpf__ExecuteUbergraph_BP_PlayerCharacter_Base__pf_4(39);
}
void ABP_PlayerCharacter_Base_C__pf1490413170::bpf__InitializexCapsulexHeight__pfTT()
{
	bpf__ExecuteUbergraph_BP_PlayerCharacter_Base__pf_5(38);
}
void ABP_PlayerCharacter_Base_C__pf1490413170::bpf__TakeDamageActor__pf(int32 bpp__DamageAmount__pf, AActor* bpp__DamagingActor__pf)
{
	b0l__K2Node_Event_DamageAmount__pf = bpp__DamageAmount__pf;
	b0l__K2Node_Event_DamagingActor__pf = bpp__DamagingActor__pf;
	bpf__ExecuteUbergraph_BP_PlayerCharacter_Base__pf_6(37);
}
void ABP_PlayerCharacter_Base_C__pf1490413170::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_BP_PlayerCharacter_Base__pf_2(36);
}
void ABP_PlayerCharacter_Base_C__pf1490413170::bpf__Death__pf()
{
	bpf__ExecuteUbergraph_BP_PlayerCharacter_Base__pf_7(34);
}
void ABP_PlayerCharacter_Base_C__pf1490413170::bpf__ResetHitTimer__pf()
{
	bpf__ExecuteUbergraph_BP_PlayerCharacter_Base__pf_8(12);
}
void ABP_PlayerCharacter_Base_C__pf1490413170::bpf__TakeDamage__pf(int32 bpp__DamageAmount__pf)
{
	b0l__K2Node_Event_DamageAmount_1__pf = bpp__DamageAmount__pf;
	bpf__ExecuteUbergraph_BP_PlayerCharacter_Base__pf_1(1);
}
void ABP_PlayerCharacter_Base_C__pf1490413170::bpf__Movement__pf(float bpp__Value__pf)
{
	FVector bpfv__CallFunc_GetForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	if(::IsValid(bpv__Camera__pf))
	{
		bpfv__CallFunc_GetForwardVector_ReturnValue__pf = bpv__Camera__pf->USceneComponent::GetForwardVector();
	}
	AddMovementInput(bpfv__CallFunc_GetForwardVector_ReturnValue__pf, bpp__Value__pf, false);
}
void ABP_PlayerCharacter_Base_C__pf1490413170::bpf__Strafe__pf(float bpp__value__pf)
{
	FVector bpfv__CallFunc_GetRightVector_ReturnValue__pf(EForceInit::ForceInit);
	if(::IsValid(bpv__Camera__pf))
	{
		bpfv__CallFunc_GetRightVector_ReturnValue__pf = bpv__Camera__pf->USceneComponent::GetRightVector();
	}
	AddMovementInput(bpfv__CallFunc_GetRightVector_ReturnValue__pf, bpp__value__pf, false);
}
void ABP_PlayerCharacter_Base_C__pf1490413170::bpf__Rotation__pf(float bpp__value__pf)
{
	float bpfv__CallFunc_SignOfFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_K2_AddActorWorldRotation_SweepHitResult__pf{};
	bpfv__CallFunc_SignOfFloat_ReturnValue__pf = UKismetMathLibrary::SignOfFloat(bpp__value__pf);
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_SignOfFloat_ReturnValue__pf, bpv__SnapxRotationxDegrees__pfTT);
	bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
	AActor::K2_AddActorWorldRotation(bpfv__CallFunc_MakeRotator_ReturnValue__pf, false, /*out*/ bpfv__CallFunc_K2_AddActorWorldRotation_SweepHitResult__pf, false);
}
void ABP_PlayerCharacter_Base_C__pf1490413170::bpf__KATMovement__pf(float bpp__BodyYawVar__pf)
{
	FVector bpfv__CallFunc_GetActorForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	float bpfv__CallFunc_WalkPower_KatDataPlugin4BP_ReturnValue__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_IsMoving_KatDataPlugin4BP_ReturnValue__pf{};
	int32 bpfv__CallFunc_MoveDirection_KatDataPlugin4BP_ReturnValue__pf{};
	float bpfv__CallFunc_BodyYaw_KatDataPlugin4BP_ReturnValue__pf{};
	int32 bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf{};
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_K2_AddActorWorldOffset_SweepHitResult__pf{};
	bpfv__CallFunc_BodyYaw_KatDataPlugin4BP_ReturnValue__pf = UKatDataPlugin4BPBPLibrary::BodyYaw_KatDataPlugin4BP();
	bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_BodyYaw_KatDataPlugin4BP_ReturnValue__pf, bpp__BodyYawVar__pf);
	bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf);
	if(::IsValid((*(AccessPrivateProperty<UCapsuleComponent* >((this), ACharacter::__PPO__CapsuleComponent() )))))
	{
		(*(AccessPrivateProperty<UCapsuleComponent* >((this), ACharacter::__PPO__CapsuleComponent() )))->USceneComponent::K2_SetRelativeRotation(bpfv__CallFunc_MakeRotator_ReturnValue__pf, false, /*out*/ bpfv__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf, false);
	}
	bpfv__CallFunc_GetActorForwardVector_ReturnValue__pf = AActor::GetActorForwardVector();
	UKismetMathLibrary::BreakVector(bpfv__CallFunc_GetActorForwardVector_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
	bpfv__CallFunc_WalkPower_KatDataPlugin4BP_ReturnValue__pf = UKatDataPlugin4BPBPLibrary::WalkPower_KatDataPlugin4BP();
	bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X__pf, bpfv__CallFunc_BreakVector_Y__pf, 0.000000);
	bpfv__CallFunc_IsMoving_KatDataPlugin4BP_ReturnValue__pf = UKatDataPlugin4BPBPLibrary::IsMoving_KatDataPlugin4BP();
	bpfv__CallFunc_MoveDirection_KatDataPlugin4BP_ReturnValue__pf = UKatDataPlugin4BPBPLibrary::MoveDirection_KatDataPlugin4BP();
	bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf = UKismetMathLibrary::Multiply_IntInt(bpfv__CallFunc_MoveDirection_KatDataPlugin4BP_ReturnValue__pf, bpfv__CallFunc_IsMoving_KatDataPlugin4BP_ReturnValue__pf);
	bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_IntFloat(bpfv__CallFunc_Multiply_IntInt_ReturnValue__pf, bpfv__CallFunc_WalkPower_KatDataPlugin4BP_ReturnValue__pf);
	float  __Local__33 = 0.000000;
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf, ((::IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() ))))) ? ((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->MaxWalkSpeed) : (__Local__33)));
	bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_MakeVector_ReturnValue__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
	AActor::K2_AddActorWorldOffset(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf, true, /*out*/ bpfv__CallFunc_K2_AddActorWorldOffset_SweepHitResult__pf, false);
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_PlayerCharacter_Base_C__pf1490413170::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  TextureCube /Game/Imports/StarterContent/HDRI/HDRI_Epic_Courtyard_Daylight.HDRI_Epic_Courtyard_Daylight 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Characters/BPC_Famine.BPC_Famine_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_PlayerCharacter_Base_C__pf1490413170::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{157, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Interfaces/BPI_TakeDamage.BPI_TakeDamage_C 
		{1, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CameraComponent 
		{2, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PostProcessComponent 
		{4, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{5, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ArrowComponent 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BPC_Famine_C /Game/Blueprints/Characters/BPC_Famine.Default__BPC_Famine_C 
		{9, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EObjectTypeQuery 
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.TimerDynamicDelegate__DelegateSignature 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{18, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CapsuleComponent 
		{19, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/KatDataPlugin4BP.KatDataPlugin4BPBPLibrary 
		{22, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CharacterMovementComponent 
		{23, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetComponent 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent.Widget3DPassThrough_Translucent 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent_OneSided.Widget3DPassThrough_Translucent_OneSided 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque.Widget3DPassThrough_Opaque 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque_OneSided.Widget3DPassThrough_Opaque_OneSided 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked.Widget3DPassThrough_Masked 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked_OneSided.Widget3DPassThrough_Masked_OneSided 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/HUD/Widgets/Widget3DNoPassThrough.Widget3DNoPassThrough 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/UMG.WidgetTransform 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetAnimation 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Paper2D.PaperFlipbook 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/HUD/Images/TakeDamage/ShieldDam_V2.ShieldDam_V2 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Meshes/Placeholder/Player_Generic/HandOpen.HandOpen 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/HUD/Images/TakeDamage/MAT_TakeDamage.MAT_TakeDamage 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerCameraManager 
		{67, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{100, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Meshes/Placeholder/Player_Generic/HandPistolGrip.HandPistolGrip 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Meshes/Placeholder/Player_Generic/HandClosed.HandClosed 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Meshes/Placeholder/Player_Generic/SM_FP_Gear_Whitebox.SM_FP_Gear_Whitebox 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ChildActorComponent 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BoxComponent 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/InputCore.EControllerHand 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SphereComponent 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MeshComponent 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ActorComponent 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/VirtualReality/Meshes/BeamMesh.BeamMesh 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/VirtualReality/Materials/M_SplineArcMat.M_SplineArcMat 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/HeadMountedDisplay.MotionControllerComponent 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Meshes/Placeholder/Player_Generic/GE_Hand_Master_Grp.GE_Hand_Master_Grp 
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
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AnimInstance 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  HapticFeedbackEffect_Curve /Game/VirtualRealityBP/Blueprints/MotionControllerHaptics.MotionControllerHaptics 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SplineMeshComponent 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavigationSystemV1 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetNodeHelperLibrary 
		{90, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Niagara.NiagaraFunctionLibrary 
		{91, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETimelineDirection 
		{92, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Meshes/Placeholder/Weapons/Pistol/OLD/Pistol_Magazine_Whitebox_Low.Pistol_Magazine_Whitebox_Low 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BPC_Conquest_C /Game/Blueprints/Characters/BPC_Conquest.Default__BPC_Conquest_C 
		{106, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Images/AmmoMarker_HUD.AmmoMarker_HUD 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{107, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ProjectileMovementComponent 
		{108, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/Meshes/Placeholder/Player_Generic/GE_Hand_Master_Grp_Skeleton.GE_Hand_Master_Grp_Skeleton 
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_TransitionResult 
		{94, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PoseLink 
		{95, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_SequencePlayer 
		{96, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_StateResult 
		{97, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_StateMachine 
		{98, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_Root 
		{99, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Meshes/Placeholder/Player_Generic/Pistol_Second_Hand_Grip.Pistol_Second_Hand_Grip 
		{101, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Niagara.NiagaraComponent 
		{102, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  NiagaraSystem /Game/VisualEffects/Niagara/NS_muzzle_flash.NS_muzzle_flash 
		{103, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EMoveComponentAction 
		{104, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ECollisionChannel 
		{105, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TimelineComponent 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Characters/BPC_Death.BPC_Death_C 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BPC_Death_C /Game/Blueprints/Characters/BPC_Death.Default__BPC_Death_C 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Characters/BPC_Conquest.BPC_Conquest_C 
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Meshes/Placeholder/Weapons/Pistol/Pistol_Main.Pistol_Main 
		{110, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Meshes/Placeholder/Weapons/Pistol/Pistol_Lever.Pistol_Lever 
		{111, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Weapons/BPC_Shotgun_Shell.BPC_Shotgun_Shell_C 
		{112, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BPC_Shotgun_Shell_C /Game/Blueprints/Weapons/BPC_Shotgun_Shell.Default__BPC_Shotgun_Shell_C 
		{113, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Weapons/BPC_SMG_Magazine.BPC_SMG_Magazine_C 
		{114, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BPC_SMG_Magazine_C /Game/Blueprints/Weapons/BPC_SMG_Magazine.Default__BPC_SMG_Magazine_C 
		{115, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Weapons/BPC_DMR_Magazine.BPC_DMR_Magazine_C 
		{116, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BPC_DMR_Magazine_C /Game/Blueprints/Weapons/BPC_DMR_Magazine.Default__BPC_DMR_Magazine_C 
		{117, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Weapons/BPC_Rifle_Magazine.BPC_Rifle_Magazine_C 
		{118, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BPC_Rifle_Magazine_C /Game/Blueprints/Weapons/BPC_Rifle_Magazine.Default__BPC_Rifle_Magazine_C 
		{119, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Weapons/BPC_Pistol_Magazine.BPC_Pistol_Magazine_C 
		{120, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BPC_Pistol_Magazine_C /Game/Blueprints/Weapons/BPC_Pistol_Magazine.Default__BPC_Pistol_Magazine_C 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Images/Arrow_Render_V2.Arrow_Render_V2 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UMGSequencePlayer 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Images/ObjectiveMarker_HUD.ObjectiveMarker_HUD 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Images/OverlayCombined_HUD.OverlayCombined_HUD 
		{145, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/VirtualRealityBP/Blueprints/BP_MotionController.BP_MotionController_C 
		{175, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Characters/Gear/BP_PlayerGear.BP_PlayerGear_C 
		{150, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/HUD/Widgets/Damage_Display/BP_HorsemenHUD.BP_HorsemenHUD_C 
		{183, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Blueprints/Enums/E_Horsemen.E_Horsemen 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ABP_PlayerCharacter_Base_C__pf1490413170
{
	FRegisterHelper__ABP_PlayerCharacter_Base_C__pf1490413170()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprints/Characters/BP_PlayerCharacter_Base"), &ABP_PlayerCharacter_Base_C__pf1490413170::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_PlayerCharacter_Base_C__pf1490413170 Instance;
};
FRegisterHelper__ABP_PlayerCharacter_Base_C__pf1490413170 FRegisterHelper__ABP_PlayerCharacter_Base_C__pf1490413170::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
