#include "NativizedAssets.h"
#include "BP_CavalryController__pf1490413170.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputAxisDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
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
#include "BP_PlayerCharacter_Base__pf1490413170.h"
#include "BPC_War__pf1490413170.h"
#include "BP_Firearm_Base__pf1418999182.h"
#include "BP_Tool_Base__pf3911806087.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "BP_MotionController__pf563933975.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "BP_PlayerGear__pf3324220276.h"
#include "E_Hands__pf1725717533.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ABP_CavalryController_C__pf1490413170::ABP_CavalryController_C__pf1490413170(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	auto __Local__0 = CastChecked<USceneComponent>(this->GetDefaultSubobjectByName(TEXT("TransformComponent0")), ECastCheckedType::NullAllowed);
	if(__Local__0)
	{
		// --- Default subobject 'TransformComponent0' //
		static TWeakFieldPtr<FProperty> __Local__2{};
		const FProperty* __Local__1 = __Local__2.Get();
		if (nullptr == __Local__1)
		{
			__Local__1 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
			check(__Local__1);
			__Local__2 = __Local__1;
		}
		(((FBoolProperty*)__Local__1)->SetPropertyValue_InContainer((__Local__0), false, 0));
		// --- END default subobject 'TransformComponent0' //
	}
	bpv__possessedCharacter__pf = nullptr;
	bpv__ownedGear__pf = nullptr;
	bpv__SmoothxRotation__pfT = false;
	bpv__TurnxDeadzone__pfT = 0.400000f;
	bpv__SmoothxRotationxSpeed__pfTT = 1.000000f;
	bpv__SnapxRotationxDegrees__pfTT = 30.000000f;
	bpv__RotationxAngle__pfT = 0.000000f;
	bpv__BodyYaw__pf = 0.000000f;
	InputYawScale = 2.500000f;
	InputPitchScale = -2.500000f;
	InputRollScale = 1.000000f;
	ForceFeedbackScale = 1.000000f;
	auto& __Local__3 = (*(AccessPrivateProperty<USceneComponent*>((this), AController::__PPO__TransformComponent() )));
	__Local__3 = __Local__0;
	auto& __Local__4 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__4 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_CavalryController_C__pf1490413170::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_CavalryController_C__pf1490413170::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(ABP_PlayerCharacter_Base_C__pf1490413170::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABPC_War_C__pf1490413170::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_Firearm_Base_C__pf1418999182::StaticClass());
	extern UClass* Z_Construct_UClass_UBPI_WeaponControls_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UBPI_WeaponControls_C());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_Tool_Base_C__pf3911806087::StaticClass());
	extern UClass* Z_Construct_UClass_UBPI_ToolControls_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UBPI_ToolControls_C());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_MotionController_C__pf563933975::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_PlayerGear_C__pf3324220276::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__5 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__5);
	auto __Local__6 = NewObject<UInputActionDelegateBinding>(InDynamicClass, UInputActionDelegateBinding::StaticClass(), TEXT("InputActionDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__6);
	auto __Local__7 = NewObject<UInputAxisDelegateBinding>(InDynamicClass, UInputAxisDelegateBinding::StaticClass(), TEXT("InputAxisDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__7);
	static TWeakFieldPtr<FProperty> __Local__9{};
	const FProperty* __Local__8 = __Local__9.Get();
	if (nullptr == __Local__8)
	{
		__Local__8 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__8);
		__Local__9 = __Local__8;
	}
	(((FBoolProperty*)__Local__8)->SetPropertyValue_InContainer((__Local__5), false, 0));
	__Local__6->InputActionDelegateBindings = TArray<FBlueprintInputActionDelegateBinding> ();
	__Local__6->InputActionDelegateBindings.AddUninitialized(11);
	FBlueprintInputActionDelegateBinding::StaticStruct()->InitializeStruct(__Local__6->InputActionDelegateBindings.GetData(), 11);
	auto& __Local__10 = __Local__6->InputActionDelegateBindings[0];
	__Local__10.InputActionName = FName(TEXT("PrimaryButtonRight"));
	__Local__10.FunctionNameToBind = FName(TEXT("InpActEvt_PrimaryButtonRight_K2Node_InputActionEvent_2"));
	auto& __Local__11 = __Local__6->InputActionDelegateBindings[1];
	__Local__11.InputActionName = FName(TEXT("SecondaryButtonRight"));
	__Local__11.FunctionNameToBind = FName(TEXT("InpActEvt_SecondaryButtonRight_K2Node_InputActionEvent_1"));
	auto& __Local__12 = __Local__6->InputActionDelegateBindings[2];
	__Local__12.InputActionName = FName(TEXT("GrabLeft"));
	__Local__12.InputKeyEvent = EInputEvent::IE_Released;
	__Local__12.FunctionNameToBind = FName(TEXT("InpActEvt_GrabLeft_K2Node_InputActionEvent_10"));
	auto& __Local__13 = __Local__6->InputActionDelegateBindings[3];
	__Local__13.InputActionName = FName(TEXT("PrimaryButtonLeft"));
	__Local__13.FunctionNameToBind = FName(TEXT("InpActEvt_PrimaryButtonLeft_K2Node_InputActionEvent_0"));
	auto& __Local__14 = __Local__6->InputActionDelegateBindings[4];
	__Local__14.InputActionName = FName(TEXT("GrabLeft"));
	__Local__14.FunctionNameToBind = FName(TEXT("InpActEvt_GrabLeft_K2Node_InputActionEvent_9"));
	auto& __Local__15 = __Local__6->InputActionDelegateBindings[5];
	__Local__15.InputActionName = FName(TEXT("GrabRight"));
	__Local__15.InputKeyEvent = EInputEvent::IE_Released;
	__Local__15.FunctionNameToBind = FName(TEXT("InpActEvt_GrabRight_K2Node_InputActionEvent_8"));
	auto& __Local__16 = __Local__6->InputActionDelegateBindings[6];
	__Local__16.InputActionName = FName(TEXT("GrabRight"));
	__Local__16.FunctionNameToBind = FName(TEXT("InpActEvt_GrabRight_K2Node_InputActionEvent_7"));
	auto& __Local__17 = __Local__6->InputActionDelegateBindings[7];
	__Local__17.InputActionName = FName(TEXT("PrimaryTriggerLeft"));
	__Local__17.InputKeyEvent = EInputEvent::IE_Released;
	__Local__17.FunctionNameToBind = FName(TEXT("InpActEvt_PrimaryTriggerLeft_K2Node_InputActionEvent_6"));
	auto& __Local__18 = __Local__6->InputActionDelegateBindings[8];
	__Local__18.InputActionName = FName(TEXT("PrimaryTriggerLeft"));
	__Local__18.FunctionNameToBind = FName(TEXT("InpActEvt_PrimaryTriggerLeft_K2Node_InputActionEvent_5"));
	auto& __Local__19 = __Local__6->InputActionDelegateBindings[9];
	__Local__19.InputActionName = FName(TEXT("PrimaryTriggerRight"));
	__Local__19.InputKeyEvent = EInputEvent::IE_Released;
	__Local__19.FunctionNameToBind = FName(TEXT("InpActEvt_PrimaryTriggerRight_K2Node_InputActionEvent_4"));
	auto& __Local__20 = __Local__6->InputActionDelegateBindings[10];
	__Local__20.InputActionName = FName(TEXT("PrimaryTriggerRight"));
	__Local__20.FunctionNameToBind = FName(TEXT("InpActEvt_PrimaryTriggerRight_K2Node_InputActionEvent_3"));
	__Local__7->InputAxisDelegateBindings = TArray<FBlueprintInputAxisDelegateBinding> ();
	__Local__7->InputAxisDelegateBindings.AddUninitialized(3);
	FBlueprintInputAxisDelegateBinding::StaticStruct()->InitializeStruct(__Local__7->InputAxisDelegateBindings.GetData(), 3);
	auto& __Local__21 = __Local__7->InputAxisDelegateBindings[0];
	__Local__21.InputAxisName = FName(TEXT("MotionControllerThumbRight_X"));
	__Local__21.FunctionNameToBind = FName(TEXT("InpAxisEvt_MotionControllerThumbRight_X_K2Node_InputAxisEvent_2"));
	auto& __Local__22 = __Local__7->InputAxisDelegateBindings[1];
	__Local__22.InputAxisName = FName(TEXT("MotionControllerThumbLeft_Y"));
	__Local__22.FunctionNameToBind = FName(TEXT("InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_1"));
	auto& __Local__23 = __Local__7->InputAxisDelegateBindings[2];
	__Local__23.InputAxisName = FName(TEXT("MotionControllerThumbLeft_X"));
	__Local__23.FunctionNameToBind = FName(TEXT("InpAxisEvt_MotionControllerThumbLeft_X_K2Node_InputAxisEvent_0"));
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_CavalryController_C__pf1490413170::bpf__ExecuteUbergraph_BP_CavalryController__pf_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 85);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable_3__pf = b0l__K2Node_InputActionEvent_Key_10__pf;
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__possessedCharacter__pf) && ::IsValid(bpv__possessedCharacter__pf->bpv__LeftxController__pfT))
	{
		bpv__possessedCharacter__pf->bpv__LeftxController__pfT->bpf__ReleaseActor__pf();
	}
	return; //KCST_EndOfThread
}
void ABP_CavalryController_C__pf1490413170::bpf__ExecuteUbergraph_BP_CavalryController__pf_1(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValid_ReturnValue_5__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 33:
			{
				AActor*  __Local__24 = ((AActor*)nullptr);
				b0l__K2Node_DynamicCast_AsBP_Tool_Base__pf = Cast<ABP_Tool_Base_C__pf3911806087>(((::IsValid(bpv__possessedCharacter__pf) && ::IsValid(bpv__possessedCharacter__pf->bpv__RightxController__pfT)) ? (bpv__possessedCharacter__pf->bpv__RightxController__pfT->bpv__AttachedActor__pf) : (__Local__24)));
				b0l__K2Node_DynamicCast_bSuccess_9__pf = (b0l__K2Node_DynamicCast_AsBP_Tool_Base__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_9__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 34:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsBP_Tool_Base__pf))
				{
					IBPI_ToolControls_C::Execute_bpf__ActivateTool__pf(b0l__K2Node_DynamicCast_AsBP_Tool_Base__pf , true);
				}
				__CurrentState = -1;
				break;
			}
		case 35:
			{
				AActor*  __Local__25 = ((AActor*)nullptr);
				b0l__K2Node_DynamicCast_AsBP_Firearm_Base_2__pf = Cast<ABP_Firearm_Base_C__pf1418999182>(((::IsValid(bpv__possessedCharacter__pf) && ::IsValid(bpv__possessedCharacter__pf->bpv__RightxController__pfT)) ? (bpv__possessedCharacter__pf->bpv__RightxController__pfT->bpv__AttachedActor__pf) : (__Local__25)));
				b0l__K2Node_DynamicCast_bSuccess_10__pf = (b0l__K2Node_DynamicCast_AsBP_Firearm_Base_2__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_10__pf)
				{
					__CurrentState = 33;
					break;
				}
			}
		case 36:
			{
				if ( b0l__K2Node_DynamicCast_AsBP_Firearm_Base_2__pf && b0l__K2Node_DynamicCast_AsBP_Firearm_Base_2__pf->GetClass()->ImplementsInterface(UBPI_WeaponControls_C::StaticClass()) )
				{
					b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_2__pf.SetObject(b0l__K2Node_DynamicCast_AsBP_Firearm_Base_2__pf);
					void* IAddress = b0l__K2Node_DynamicCast_AsBP_Firearm_Base_2__pf->GetInterfaceAddress(UBPI_WeaponControls_C::StaticClass());
					b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_2__pf.SetInterface(IAddress);
				}
				else
				{
					b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_2__pf.SetObject(nullptr);
				}
				b0l__K2Node_DynamicCast_bSuccess_11__pf = (b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_2__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_11__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 37:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_2__pf))
				{
					IBPI_WeaponControls_C::Execute_bpf__ChangeFiremode__pf(b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_2__pf.GetObject() );
				}
				__CurrentState = -1;
				break;
			}
		case 38:
			{
				AActor*  __Local__26 = ((AActor*)nullptr);
				bpfv__CallFunc_IsValid_ReturnValue_5__pf = UKismetSystemLibrary::IsValid(((::IsValid(bpv__possessedCharacter__pf) && ::IsValid(bpv__possessedCharacter__pf->bpv__RightxController__pfT)) ? (bpv__possessedCharacter__pf->bpv__RightxController__pfT->bpv__AttachedActor__pf) : (__Local__26)));
				if (!bpfv__CallFunc_IsValid_ReturnValue_5__pf)
				{
					__CurrentState = 39;
					break;
				}
				__CurrentState = 35;
				break;
			}
		case 39:
			{
				AActor*  __Local__27 = ((AActor*)nullptr);
				b0l__K2Node_DynamicCast_AsBP_Firearm_Base_4__pf = Cast<ABP_Firearm_Base_C__pf1418999182>(((::IsValid(bpv__possessedCharacter__pf) && ::IsValid(bpv__possessedCharacter__pf->bpv__LeftxController__pfT)) ? (bpv__possessedCharacter__pf->bpv__LeftxController__pfT->bpv__AttachedActor__pf) : (__Local__27)));
				b0l__K2Node_DynamicCast_bSuccess_16__pf = (b0l__K2Node_DynamicCast_AsBP_Firearm_Base_4__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_16__pf)
				{
					__CurrentState = 42;
					break;
				}
			}
		case 40:
			{
				if ( b0l__K2Node_DynamicCast_AsBP_Firearm_Base_4__pf && b0l__K2Node_DynamicCast_AsBP_Firearm_Base_4__pf->GetClass()->ImplementsInterface(UBPI_WeaponControls_C::StaticClass()) )
				{
					b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_5__pf.SetObject(b0l__K2Node_DynamicCast_AsBP_Firearm_Base_4__pf);
					void* IAddress = b0l__K2Node_DynamicCast_AsBP_Firearm_Base_4__pf->GetInterfaceAddress(UBPI_WeaponControls_C::StaticClass());
					b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_5__pf.SetInterface(IAddress);
				}
				else
				{
					b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_5__pf.SetObject(nullptr);
				}
				b0l__K2Node_DynamicCast_bSuccess_17__pf = (b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_5__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_17__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 41:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_5__pf))
				{
					IBPI_WeaponControls_C::Execute_bpf__ChangeFiremode__pf(b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_5__pf.GetObject() );
				}
				__CurrentState = -1;
				break;
			}
		case 42:
			{
				AActor*  __Local__28 = ((AActor*)nullptr);
				b0l__K2Node_DynamicCast_AsBP_Tool_Base_1__pf = Cast<ABP_Tool_Base_C__pf3911806087>(((::IsValid(bpv__possessedCharacter__pf) && ::IsValid(bpv__possessedCharacter__pf->bpv__LeftxController__pfT)) ? (bpv__possessedCharacter__pf->bpv__LeftxController__pfT->bpv__AttachedActor__pf) : (__Local__28)));
				b0l__K2Node_DynamicCast_bSuccess_13__pf = (b0l__K2Node_DynamicCast_AsBP_Tool_Base_1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_13__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 43:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsBP_Tool_Base_1__pf))
				{
					IBPI_ToolControls_C::Execute_bpf__ActivateTool__pf(b0l__K2Node_DynamicCast_AsBP_Tool_Base_1__pf , true);
				}
				__CurrentState = -1;
				break;
			}
		case 87:
			{
				__CurrentState = 38;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_CavalryController_C__pf1490413170::bpf__ExecuteUbergraph_BP_CavalryController__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 82);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable_3__pf = b0l__K2Node_InputActionEvent_Key_9__pf;
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__possessedCharacter__pf) && ::IsValid(bpv__possessedCharacter__pf->bpv__LeftxController__pfT))
	{
		bpv__possessedCharacter__pf->bpv__LeftxController__pfT->bpf__GrabActor__pf();
	}
	return; //KCST_EndOfThread
}
void ABP_CavalryController_C__pf1490413170::bpf__ExecuteUbergraph_BP_CavalryController__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 84);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__possessedCharacter__pf))
	{
		bpv__possessedCharacter__pf->bpf__NightxVisionxTrigger__pfTT();
	}
	return; //KCST_EndOfThread
}
void ABP_CavalryController_C__pf1490413170::bpf__ExecuteUbergraph_BP_CavalryController__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 79);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable_2__pf = b0l__K2Node_InputActionEvent_Key_8__pf;
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__possessedCharacter__pf) && ::IsValid(bpv__possessedCharacter__pf->bpv__RightxController__pfT))
	{
		bpv__possessedCharacter__pf->bpv__RightxController__pfT->bpf__ReleaseActor__pf();
	}
	return; //KCST_EndOfThread
}
void ABP_CavalryController_C__pf1490413170::bpf__ExecuteUbergraph_BP_CavalryController__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 81);
	return; //KCST_EndOfThread
}
void ABP_CavalryController_C__pf1490413170::bpf__ExecuteUbergraph_BP_CavalryController__pf_6(int32 bpp__EntryPoint__pf)
{
	APawn* bpfv__CallFunc_K2_GetPawn_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_1__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_2__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_3__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_4__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 9:
			{
				__CurrentState = 10;
				break;
			}
		case 10:
			{
				__CurrentState = 11;
				break;
			}
		case 11:
			{
				__StateStack.Push(24);
				__StateStack.Push(21);
				__StateStack.Push(18);
				__StateStack.Push(15);
			}
		case 12:
			{
				bpfv__CallFunc_K2_GetPawn_ReturnValue__pf = AController::K2_GetPawn();
				b0l__K2Node_DynamicCast_AsBPC_Conquest__pf = NoNativeCast<ABP_PlayerCharacter_Base_C__pf1490413170>(CastChecked<UClass>(CastChecked<UDynamicClass>(ABP_CavalryController_C__pf1490413170::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed), bpfv__CallFunc_K2_GetPawn_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess_4__pf = (b0l__K2Node_DynamicCast_AsBPC_Conquest__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_4__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 13:
			{
				bpfv__CallFunc_IsValid_ReturnValue_4__pf = UKismetSystemLibrary::IsValid(b0l__K2Node_DynamicCast_AsBPC_Conquest__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_4__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 14:
			{
				bpv__possessedCharacter__pf = b0l__K2Node_DynamicCast_AsBPC_Conquest__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 15:
			{
				bpfv__CallFunc_K2_GetPawn_ReturnValue__pf = AController::K2_GetPawn();
				b0l__K2Node_DynamicCast_AsBPC_War__pf = Cast<ABPC_War_C__pf1490413170>(bpfv__CallFunc_K2_GetPawn_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess_3__pf = (b0l__K2Node_DynamicCast_AsBPC_War__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_3__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 16:
			{
				bpfv__CallFunc_IsValid_ReturnValue_2__pf = UKismetSystemLibrary::IsValid(b0l__K2Node_DynamicCast_AsBPC_War__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 17:
			{
				bpv__possessedCharacter__pf = b0l__K2Node_DynamicCast_AsBPC_War__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 18:
			{
				bpfv__CallFunc_K2_GetPawn_ReturnValue__pf = AController::K2_GetPawn();
				b0l__K2Node_DynamicCast_AsBPC_Death__pf = NoNativeCast<ABP_PlayerCharacter_Base_C__pf1490413170>(CastChecked<UClass>(CastChecked<UDynamicClass>(ABP_CavalryController_C__pf1490413170::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed), bpfv__CallFunc_K2_GetPawn_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess_2__pf = (b0l__K2Node_DynamicCast_AsBPC_Death__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 19:
			{
				bpfv__CallFunc_IsValid_ReturnValue_3__pf = UKismetSystemLibrary::IsValid(b0l__K2Node_DynamicCast_AsBPC_Death__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_3__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 20:
			{
				bpv__possessedCharacter__pf = b0l__K2Node_DynamicCast_AsBPC_Death__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 21:
			{
				bpfv__CallFunc_K2_GetPawn_ReturnValue__pf = AController::K2_GetPawn();
				b0l__K2Node_DynamicCast_AsBPC_Famine__pf = NoNativeCast<ABP_PlayerCharacter_Base_C__pf1490413170>(CastChecked<UClass>(CastChecked<UDynamicClass>(ABP_CavalryController_C__pf1490413170::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed), bpfv__CallFunc_K2_GetPawn_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess_1__pf = (b0l__K2Node_DynamicCast_AsBPC_Famine__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 22:
			{
				bpfv__CallFunc_IsValid_ReturnValue_1__pf = UKismetSystemLibrary::IsValid(b0l__K2Node_DynamicCast_AsBPC_Famine__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 23:
			{
				bpv__possessedCharacter__pf = b0l__K2Node_DynamicCast_AsBPC_Famine__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 24:
			{
				bpfv__CallFunc_K2_GetPawn_ReturnValue__pf = AController::K2_GetPawn();
				b0l__K2Node_DynamicCast_AsBP_Player_Character_Base__pf = Cast<ABP_PlayerCharacter_Base_C__pf1490413170>(bpfv__CallFunc_K2_GetPawn_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsBP_Player_Character_Base__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 25:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(b0l__K2Node_DynamicCast_AsBP_Player_Character_Base__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 26:
			{
				bpv__possessedCharacter__pf = b0l__K2Node_DynamicCast_AsBP_Player_Character_Base__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_CavalryController_C__pf1490413170::bpf__ExecuteUbergraph_BP_CavalryController__pf_7(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 77);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable_2__pf = b0l__K2Node_InputActionEvent_Key_7__pf;
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__possessedCharacter__pf) && ::IsValid(bpv__possessedCharacter__pf->bpv__RightxController__pfT))
	{
		bpv__possessedCharacter__pf->bpv__RightxController__pfT->bpf__GrabActor__pf();
	}
	return; //KCST_EndOfThread
}
void ABP_CavalryController_C__pf1490413170::bpf__ExecuteUbergraph_BP_CavalryController__pf_8(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Abs_ReturnValue__pf{};
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 31:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 32:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 59:
			{
				__StateStack.Push(62);
			}
		case 60:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable__pf)
				{
					__CurrentState = 61;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 61:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable__pf = true;
				__CurrentState = 31;
				break;
			}
		case 62:
			{
				if (!b0l__Temp_bool_IsClosed_Variable__pf)
				{
					__CurrentState = 63;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 63:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
			}
		case 64:
			{
				if(::IsValid(bpv__possessedCharacter__pf))
				{
					bpv__possessedCharacter__pf->bpf__Rotation__pf(b0l__K2Node_InputAxisEvent_AxisValue__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 65:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 72:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = false;
				__CurrentState = 65;
				break;
			}
		case 73:
			{
				__CurrentState = 74;
				break;
			}
		case 74:
			{
				bpfv__CallFunc_Abs_ReturnValue__pf = UKismetMathLibrary::Abs(b0l__K2Node_InputAxisEvent_AxisValue__pf);
				bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpfv__CallFunc_Abs_ReturnValue__pf, bpv__TurnxDeadzone__pfT);
				if (!bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 72;
					break;
				}
				__CurrentState = 59;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_CavalryController_C__pf1490413170::bpf__ExecuteUbergraph_BP_CavalryController__pf_9(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 75);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable_1__pf = b0l__K2Node_InputActionEvent_Key_6__pf;
	// optimized KCST_UnconditionalGoto
	if ( b0l__K2Node_DynamicCast_AsBP_Firearm_Base_5__pf && b0l__K2Node_DynamicCast_AsBP_Firearm_Base_5__pf->GetClass()->ImplementsInterface(UBPI_WeaponControls_C::StaticClass()) )
	{
		b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_7__pf.SetObject(b0l__K2Node_DynamicCast_AsBP_Firearm_Base_5__pf);
		void* IAddress = b0l__K2Node_DynamicCast_AsBP_Firearm_Base_5__pf->GetInterfaceAddress(UBPI_WeaponControls_C::StaticClass());
		b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_7__pf.SetInterface(IAddress);
	}
	else
	{
		b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_7__pf.SetObject(nullptr);
	}
	b0l__K2Node_DynamicCast_bSuccess_20__pf = (b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_7__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess_20__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_7__pf))
	{
		IBPI_WeaponControls_C::Execute_bpf__ShootRelease__pf(b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_7__pf.GetObject() );
	}
	return; //KCST_EndOfThread
}
void ABP_CavalryController_C__pf1490413170::bpf__ExecuteUbergraph_BP_CavalryController__pf_10(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 70);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable_1__pf = b0l__K2Node_InputActionEvent_Key_5__pf;
	// optimized KCST_UnconditionalGoto
	AActor*  __Local__29 = ((AActor*)nullptr);
	b0l__K2Node_DynamicCast_AsBP_Firearm_Base_5__pf = Cast<ABP_Firearm_Base_C__pf1418999182>(((::IsValid(bpv__possessedCharacter__pf) && ::IsValid(bpv__possessedCharacter__pf->bpv__LeftxController__pfT)) ? (bpv__possessedCharacter__pf->bpv__LeftxController__pfT->bpv__AttachedActor__pf) : (__Local__29)));
	b0l__K2Node_DynamicCast_bSuccess_18__pf = (b0l__K2Node_DynamicCast_AsBP_Firearm_Base_5__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess_18__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if ( b0l__K2Node_DynamicCast_AsBP_Firearm_Base_5__pf && b0l__K2Node_DynamicCast_AsBP_Firearm_Base_5__pf->GetClass()->ImplementsInterface(UBPI_WeaponControls_C::StaticClass()) )
	{
		b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_6__pf.SetObject(b0l__K2Node_DynamicCast_AsBP_Firearm_Base_5__pf);
		void* IAddress = b0l__K2Node_DynamicCast_AsBP_Firearm_Base_5__pf->GetInterfaceAddress(UBPI_WeaponControls_C::StaticClass());
		b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_6__pf.SetInterface(IAddress);
	}
	else
	{
		b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_6__pf.SetObject(nullptr);
	}
	b0l__K2Node_DynamicCast_bSuccess_19__pf = (b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_6__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess_19__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_6__pf))
	{
		IBPI_WeaponControls_C::Execute_bpf__Shoot__pf(b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_6__pf.GetObject() , E__E_Hands__pf::NewEnumerator1);
	}
	return; //KCST_EndOfThread
}
void ABP_CavalryController_C__pf1490413170::bpf__ExecuteUbergraph_BP_CavalryController__pf_11(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 68);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable__pf = b0l__K2Node_InputActionEvent_Key_4__pf;
	// optimized KCST_UnconditionalGoto
	if ( b0l__K2Node_DynamicCast_AsBP_Firearm_Base_3__pf && b0l__K2Node_DynamicCast_AsBP_Firearm_Base_3__pf->GetClass()->ImplementsInterface(UBPI_WeaponControls_C::StaticClass()) )
	{
		b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_4__pf.SetObject(b0l__K2Node_DynamicCast_AsBP_Firearm_Base_3__pf);
		void* IAddress = b0l__K2Node_DynamicCast_AsBP_Firearm_Base_3__pf->GetInterfaceAddress(UBPI_WeaponControls_C::StaticClass());
		b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_4__pf.SetInterface(IAddress);
	}
	else
	{
		b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_4__pf.SetObject(nullptr);
	}
	b0l__K2Node_DynamicCast_bSuccess_15__pf = (b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_4__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess_15__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_4__pf))
	{
		IBPI_WeaponControls_C::Execute_bpf__ShootRelease__pf(b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_4__pf.GetObject() );
	}
	return; //KCST_EndOfThread
}
void ABP_CavalryController_C__pf1490413170::bpf__ExecuteUbergraph_BP_CavalryController__pf_12(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 66);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable__pf = b0l__K2Node_InputActionEvent_Key_3__pf;
	// optimized KCST_UnconditionalGoto
	AActor*  __Local__30 = ((AActor*)nullptr);
	b0l__K2Node_DynamicCast_AsBP_Firearm_Base_3__pf = Cast<ABP_Firearm_Base_C__pf1418999182>(((::IsValid(bpv__possessedCharacter__pf) && ::IsValid(bpv__possessedCharacter__pf->bpv__RightxController__pfT)) ? (bpv__possessedCharacter__pf->bpv__RightxController__pfT->bpv__AttachedActor__pf) : (__Local__30)));
	b0l__K2Node_DynamicCast_bSuccess_12__pf = (b0l__K2Node_DynamicCast_AsBP_Firearm_Base_3__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess_12__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if ( b0l__K2Node_DynamicCast_AsBP_Firearm_Base_3__pf && b0l__K2Node_DynamicCast_AsBP_Firearm_Base_3__pf->GetClass()->ImplementsInterface(UBPI_WeaponControls_C::StaticClass()) )
	{
		b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_3__pf.SetObject(b0l__K2Node_DynamicCast_AsBP_Firearm_Base_3__pf);
		void* IAddress = b0l__K2Node_DynamicCast_AsBP_Firearm_Base_3__pf->GetInterfaceAddress(UBPI_WeaponControls_C::StaticClass());
		b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_3__pf.SetInterface(IAddress);
	}
	else
	{
		b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_3__pf.SetObject(nullptr);
	}
	b0l__K2Node_DynamicCast_bSuccess_14__pf = (b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_3__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess_14__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_3__pf))
	{
		IBPI_WeaponControls_C::Execute_bpf__Shoot__pf(b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_3__pf.GetObject() , E__E_Hands__pf::NewEnumerator0);
	}
	return; //KCST_EndOfThread
}
void ABP_CavalryController_C__pf1490413170::bpf__ExecuteUbergraph_BP_CavalryController__pf_13(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValid_ReturnValue_6__pf{};
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
				AActor*  __Local__31 = ((AActor*)nullptr);
				bpfv__CallFunc_IsValid_ReturnValue_6__pf = UKismetSystemLibrary::IsValid(((::IsValid(bpv__possessedCharacter__pf) && ::IsValid(bpv__possessedCharacter__pf->bpv__LeftxController__pfT)) ? (bpv__possessedCharacter__pf->bpv__LeftxController__pfT->bpv__AttachedActor__pf) : (__Local__31)));
				if (!bpfv__CallFunc_IsValid_ReturnValue_6__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 3:
			{
				AActor*  __Local__32 = ((AActor*)nullptr);
				b0l__K2Node_DynamicCast_AsBP_Firearm_Base__pf = Cast<ABP_Firearm_Base_C__pf1418999182>(((::IsValid(bpv__possessedCharacter__pf) && ::IsValid(bpv__possessedCharacter__pf->bpv__LeftxController__pfT)) ? (bpv__possessedCharacter__pf->bpv__LeftxController__pfT->bpv__AttachedActor__pf) : (__Local__32)));
				b0l__K2Node_DynamicCast_bSuccess_5__pf = (b0l__K2Node_DynamicCast_AsBP_Firearm_Base__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_5__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 4:
			{
				if ( b0l__K2Node_DynamicCast_AsBP_Firearm_Base__pf && b0l__K2Node_DynamicCast_AsBP_Firearm_Base__pf->GetClass()->ImplementsInterface(UBPI_WeaponControls_C::StaticClass()) )
				{
					b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls__pf.SetObject(b0l__K2Node_DynamicCast_AsBP_Firearm_Base__pf);
					void* IAddress = b0l__K2Node_DynamicCast_AsBP_Firearm_Base__pf->GetInterfaceAddress(UBPI_WeaponControls_C::StaticClass());
					b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls__pf.SetInterface(IAddress);
				}
				else
				{
					b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls__pf.SetObject(nullptr);
				}
				b0l__K2Node_DynamicCast_bSuccess_7__pf = (b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_7__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 5:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls__pf))
				{
					IBPI_WeaponControls_C::Execute_bpf__ReleaseMagazine__pf(b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls__pf.GetObject() );
				}
				__CurrentState = -1;
				break;
			}
		case 6:
			{
				AActor*  __Local__33 = ((AActor*)nullptr);
				b0l__K2Node_DynamicCast_AsBP_Firearm_Base_1__pf = Cast<ABP_Firearm_Base_C__pf1418999182>(((::IsValid(bpv__possessedCharacter__pf) && ::IsValid(bpv__possessedCharacter__pf->bpv__RightxController__pfT)) ? (bpv__possessedCharacter__pf->bpv__RightxController__pfT->bpv__AttachedActor__pf) : (__Local__33)));
				b0l__K2Node_DynamicCast_bSuccess_6__pf = (b0l__K2Node_DynamicCast_AsBP_Firearm_Base_1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_6__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 7:
			{
				if ( b0l__K2Node_DynamicCast_AsBP_Firearm_Base_1__pf && b0l__K2Node_DynamicCast_AsBP_Firearm_Base_1__pf->GetClass()->ImplementsInterface(UBPI_WeaponControls_C::StaticClass()) )
				{
					b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_1__pf.SetObject(b0l__K2Node_DynamicCast_AsBP_Firearm_Base_1__pf);
					void* IAddress = b0l__K2Node_DynamicCast_AsBP_Firearm_Base_1__pf->GetInterfaceAddress(UBPI_WeaponControls_C::StaticClass());
					b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_1__pf.SetInterface(IAddress);
				}
				else
				{
					b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_1__pf.SetObject(nullptr);
				}
				b0l__K2Node_DynamicCast_bSuccess_8__pf = (b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_8__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 8:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_1__pf))
				{
					IBPI_WeaponControls_C::Execute_bpf__ReleaseMagazine__pf(b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_1__pf.GetObject() );
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_CavalryController_C__pf1490413170::bpf__ExecuteUbergraph_BP_CavalryController__pf_14(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 29);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__possessedCharacter__pf))
	{
		bpv__possessedCharacter__pf->bpf__Movement__pf(b0l__K2Node_InputAxisEvent_AxisValue_1__pf);
	}
	return; //KCST_EndOfThread
}
void ABP_CavalryController_C__pf1490413170::bpf__ExecuteUbergraph_BP_CavalryController__pf_15(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 27);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__possessedCharacter__pf))
	{
		bpv__possessedCharacter__pf->bpf__Strafe__pf(b0l__K2Node_InputAxisEvent_AxisValue_2__pf);
	}
	return; //KCST_EndOfThread
}
void ABP_CavalryController_C__pf1490413170::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_BP_CavalryController__pf_5(81);
}
void ABP_CavalryController_C__pf1490413170::bpf__InpAxisEvt_MotionControllerThumbRight_X_K2Node_InputAxisEvent_2__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_BP_CavalryController__pf_8(73);
}
void ABP_CavalryController_C__pf1490413170::bpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_1__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue_1__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_BP_CavalryController__pf_14(29);
}
void ABP_CavalryController_C__pf1490413170::bpf__InpAxisEvt_MotionControllerThumbLeft_X_K2Node_InputAxisEvent_0__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue_2__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_BP_CavalryController__pf_15(27);
}
void ABP_CavalryController_C__pf1490413170::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_BP_CavalryController__pf_6(9);
}
void ABP_CavalryController_C__pf1490413170::bpf__InpActEvt_PrimaryButtonLeft_K2Node_InputActionEvent_0__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_CavalryController__pf_3(84);
}
void ABP_CavalryController_C__pf1490413170::bpf__InpActEvt_SecondaryButtonRight_K2Node_InputActionEvent_1__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_1__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_CavalryController__pf_1(87);
}
void ABP_CavalryController_C__pf1490413170::bpf__InpActEvt_PrimaryButtonRight_K2Node_InputActionEvent_2__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_2__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_CavalryController__pf_13(1);
}
void ABP_CavalryController_C__pf1490413170::bpf__InpActEvt_PrimaryTriggerRight_K2Node_InputActionEvent_3__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_3__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_CavalryController__pf_12(66);
}
void ABP_CavalryController_C__pf1490413170::bpf__InpActEvt_PrimaryTriggerRight_K2Node_InputActionEvent_4__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_4__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_CavalryController__pf_11(68);
}
void ABP_CavalryController_C__pf1490413170::bpf__InpActEvt_PrimaryTriggerLeft_K2Node_InputActionEvent_5__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_5__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_CavalryController__pf_10(70);
}
void ABP_CavalryController_C__pf1490413170::bpf__InpActEvt_PrimaryTriggerLeft_K2Node_InputActionEvent_6__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_6__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_CavalryController__pf_9(75);
}
void ABP_CavalryController_C__pf1490413170::bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_7__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_7__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_CavalryController__pf_7(77);
}
void ABP_CavalryController_C__pf1490413170::bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_8__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_8__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_CavalryController__pf_4(79);
}
void ABP_CavalryController_C__pf1490413170::bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_9__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_9__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_CavalryController__pf_2(82);
}
void ABP_CavalryController_C__pf1490413170::bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_10__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key_10__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_CavalryController__pf_0(85);
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_CavalryController_C__pf1490413170::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Characters/BPC_Conquest.BPC_Conquest_C 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Characters/BPC_Death.BPC_Death_C 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Characters/BPC_Famine.BPC_Famine_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_CavalryController_C__pf1490413170::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{4, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{214, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{215, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BPC_Famine_C /Game/Blueprints/Characters/BPC_Famine.Default__BPC_Famine_C 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BPC_Death_C /Game/Blueprints/Characters/BPC_Death.Default__BPC_Death_C 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BPC_Conquest_C /Game/Blueprints/Characters/BPC_Conquest.Default__BPC_Conquest_C 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{216, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Controller 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{49, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{23, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{217, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CheatManager 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Meshes/Placeholder/Player_Generic/SM_FP_Gear_Whitebox.SM_FP_Gear_Whitebox 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ChildActorComponent 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BoxComponent 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/InputCore.EControllerHand 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SphereComponent 
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
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  HapticFeedbackEffect_Curve /Game/VirtualRealityBP/Blueprints/MotionControllerHaptics.MotionControllerHaptics 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SplineMeshComponent 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavigationSystemV1 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetNodeHelperLibrary 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked_OneSided.Widget3DPassThrough_Masked_OneSided 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CameraComponent 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
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
		{92, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Meshes/Placeholder/Weapons/Pistol/OLD/Pistol_Magazine_Whitebox_Low.Pistol_Magazine_Whitebox_Low 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetComponent 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent.Widget3DPassThrough_Translucent 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent_OneSided.Widget3DPassThrough_Translucent_OneSided 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque.Widget3DPassThrough_Opaque 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque_OneSided.Widget3DPassThrough_Opaque_OneSided 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked.Widget3DPassThrough_Masked 
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
		{121, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Characters/BP_PlayerCharacter_Base.BP_PlayerCharacter_Base_C 
		{154, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Characters/BPC_War.BPC_War_C 
		{144, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Weapons/BP_Firearm_Base.BP_Firearm_Base_C 
		{171, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Interfaces/BPI_WeaponControls.BPI_WeaponControls_C 
		{182, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Tools/BP_Tool_Base.BP_Tool_Base_C 
		{178, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Interfaces/BPI_ToolControls.BPI_ToolControls_C 
		{145, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/VirtualRealityBP/Blueprints/BP_MotionController.BP_MotionController_C 
		{175, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Characters/Gear/BP_PlayerGear.BP_PlayerGear_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ABP_CavalryController_C__pf1490413170
{
	FRegisterHelper__ABP_CavalryController_C__pf1490413170()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprints/Characters/BP_CavalryController"), &ABP_CavalryController_C__pf1490413170::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_CavalryController_C__pf1490413170 Instance;
};
FRegisterHelper__ABP_CavalryController_C__pf1490413170 FRegisterHelper__ABP_CavalryController_C__pf1490413170::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
