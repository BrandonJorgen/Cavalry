#include "NativizedAssets.h"
#include "BP_Firearm_Base__pf1418999182.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
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
#include "GrabbableObjectSocket__pf2132744816.h"
#include "BP_MotionController__pf563933975.h"
#include "BP_BulletBase__pf1418999182.h"
#include "BP_AmmoBase__pf1418999182.h"
#include "BP_MagneticPlacement__pf3911806087.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraFunctionLibrary.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraComponentPool.h"
#include "Runtime/Engine/Classes/Engine/VolumeTexture.h"
#include "Hand_Positions_Enum__pf423755669.h"
#include "Runtime/HeadMountedDisplay/Public/MotionControllerComponent.h"
#include "Runtime/HeadMountedDisplay/Public/IMotionController.h"
#include "BP_PlayerGear__pf3324220276.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ABP_Firearm_Base_C__pf1418999182::ABP_Firearm_Base_C__pf1418999182(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__Firearm_SM__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Firearm_SM"));
	bpv__Slider_Stopper__pf = CreateDefaultSubobject<UBoxComponent>(TEXT("Slider_Stopper"));
	bpv__AmmoPortTrigger__pf = CreateDefaultSubobject<UBoxComponent>(TEXT("AmmoPortTrigger"));
	bpv__Slider_SM__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Slider_SM"));
	bpv__Slider_Collider__pf = CreateDefaultSubobject<UBoxComponent>(TEXT("Slider_Collider"));
	bpv__SecondHand_Collider__pf = CreateDefaultSubobject<UBoxComponent>(TEXT("SecondHand_Collider"));
	bpv__ShellEjectionPoint__pf = CreateDefaultSubobject<UArrowComponent>(TEXT("ShellEjectionPoint"));
	bpv__Slider_ForwardPosition__pf = CreateDefaultSubobject<UBoxComponent>(TEXT("Slider_ForwardPosition"));
	bpv__Niagara__pf = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Niagara"));
	bpv__MagnetCollision__pf = CreateDefaultSubobject<UBoxComponent>(TEXT("MagnetCollision"));
	bpv__FireLocation__pf = CreateDefaultSubobject<UArrowComponent>(TEXT("FireLocation"));
	RootComponent = bpv__Firearm_SM__pf;
	bpv__GrabbableObjectSocket__pf = CreateDefaultSubobject<UGrabbableObjectSocket_C__pf2132744816>(TEXT("GrabbableObjectSocket"));
	bpv__Firearm_SM__pf->CreationMethod = EComponentCreationMethod::Native;
	auto& __Local__0 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__Firearm_SM__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__1 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__0), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__1 = TArray<FResponseChannel> ();
	__Local__1.AddUninitialized(3);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__1.GetData(), 3);
	auto& __Local__2 = __Local__1[0];
	__Local__2.Channel = FName(TEXT("PlayerCollision"));
	__Local__2.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__3 = __Local__1[1];
	__Local__3.Channel = FName(TEXT("PlayerHands"));
	auto& __Local__4 = __Local__1[2];
	__Local__4.Channel = FName(TEXT("Tool"));
	__Local__4.Response = ECollisionResponse::ECR_Overlap;
	bpv__Firearm_SM__pf->SetCollisionProfileName(FName(TEXT("Custom")));
	static TWeakFieldPtr<FProperty> __Local__6{};
	const FProperty* __Local__5 = __Local__6.Get();
	if (nullptr == __Local__5)
	{
		__Local__5 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__5);
		__Local__6 = __Local__5;
	}
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__Firearm_SM__pf), true, 0));
	bpv__Slider_Stopper__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Slider_Stopper__pf->AttachToComponent(bpv__Firearm_SM__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Slider_Stopper__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	auto& __Local__7 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__Slider_Stopper__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__8 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__7), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__8 = TArray<FResponseChannel> ();
	__Local__8.AddUninitialized(11);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__8.GetData(), 11);
	auto& __Local__9 = __Local__8[0];
	__Local__9.Channel = FName(TEXT("Visibility"));
	__Local__9.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__10 = __Local__8[1];
	__Local__10.Channel = FName(TEXT("Camera"));
	__Local__10.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__11 = __Local__8[2];
	__Local__11.Channel = FName(TEXT("WorldStatic"));
	__Local__11.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__12 = __Local__8[3];
	__Local__12.Channel = FName(TEXT("WorldDynamic"));
	__Local__12.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__13 = __Local__8[4];
	__Local__13.Channel = FName(TEXT("Pawn"));
	__Local__13.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__14 = __Local__8[5];
	__Local__14.Channel = FName(TEXT("PhysicsBody"));
	__Local__14.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__15 = __Local__8[6];
	__Local__15.Channel = FName(TEXT("Vehicle"));
	__Local__15.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__16 = __Local__8[7];
	__Local__16.Channel = FName(TEXT("Destructible"));
	__Local__16.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__17 = __Local__8[8];
	__Local__17.Channel = FName(TEXT("Enemy"));
	__Local__17.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__18 = __Local__8[9];
	__Local__18.Channel = FName(TEXT("PlayerCollision"));
	__Local__18.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__19 = __Local__8[10];
	__Local__19.Channel = FName(TEXT("PlayerHands"));
	__Local__19.Response = ECollisionResponse::ECR_Overlap;
	bpv__Slider_Stopper__pf->SetCollisionProfileName(FName(TEXT("Custom")));
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__Slider_Stopper__pf), true, 0));
	bpv__AmmoPortTrigger__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__AmmoPortTrigger__pf->AttachToComponent(bpv__Firearm_SM__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__AmmoPortTrigger__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	auto& __Local__20 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__AmmoPortTrigger__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__21 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__20), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__21 = TArray<FResponseChannel> ();
	__Local__21.AddUninitialized(12);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__21.GetData(), 12);
	auto& __Local__22 = __Local__21[0];
	__Local__22.Channel = FName(TEXT("Visibility"));
	__Local__22.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__23 = __Local__21[1];
	__Local__23.Channel = FName(TEXT("Camera"));
	__Local__23.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__24 = __Local__21[2];
	__Local__24.Channel = FName(TEXT("WorldStatic"));
	__Local__24.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__25 = __Local__21[3];
	__Local__25.Channel = FName(TEXT("WorldDynamic"));
	__Local__25.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__26 = __Local__21[4];
	__Local__26.Channel = FName(TEXT("Pawn"));
	__Local__26.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__27 = __Local__21[5];
	__Local__27.Channel = FName(TEXT("PhysicsBody"));
	__Local__27.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__28 = __Local__21[6];
	__Local__28.Channel = FName(TEXT("Vehicle"));
	__Local__28.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__29 = __Local__21[7];
	__Local__29.Channel = FName(TEXT("Destructible"));
	__Local__29.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__30 = __Local__21[8];
	__Local__30.Channel = FName(TEXT("Enemy"));
	__Local__30.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__31 = __Local__21[9];
	__Local__31.Channel = FName(TEXT("PlayerCollision"));
	__Local__31.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__32 = __Local__21[10];
	__Local__32.Channel = FName(TEXT("PlayerHands"));
	__Local__32.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__33 = __Local__21[11];
	__Local__33.Channel = FName(TEXT("Ammo"));
	__Local__33.Response = ECollisionResponse::ECR_Overlap;
	bpv__AmmoPortTrigger__pf->SetCollisionProfileName(FName(TEXT("Custom")));
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__AmmoPortTrigger__pf), true, 0));
	bpv__Slider_SM__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Slider_SM__pf->AttachToComponent(bpv__Firearm_SM__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Slider_SM__pf->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_No;
	auto& __Local__34 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionEnabled::Type> >(&(bpv__Slider_SM__pf->BodyInstance), FBodyInstance::__PPO__CollisionEnabled() )));
	__Local__34 = ECollisionEnabled::Type::NoCollision;
	auto& __Local__35 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__Slider_SM__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__36 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__35), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__36 = TArray<FResponseChannel> ();
	__Local__36.AddUninitialized(10);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__36.GetData(), 10);
	auto& __Local__37 = __Local__36[0];
	__Local__37.Channel = FName(TEXT("PlayerCollision"));
	__Local__37.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__38 = __Local__36[1];
	__Local__38.Channel = FName(TEXT("WorldStatic"));
	__Local__38.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__39 = __Local__36[2];
	__Local__39.Channel = FName(TEXT("WorldDynamic"));
	__Local__39.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__40 = __Local__36[3];
	__Local__40.Channel = FName(TEXT("Pawn"));
	__Local__40.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__41 = __Local__36[4];
	__Local__41.Channel = FName(TEXT("Visibility"));
	__Local__41.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__42 = __Local__36[5];
	__Local__42.Channel = FName(TEXT("Camera"));
	__Local__42.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__43 = __Local__36[6];
	__Local__43.Channel = FName(TEXT("PhysicsBody"));
	__Local__43.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__44 = __Local__36[7];
	__Local__44.Channel = FName(TEXT("Vehicle"));
	__Local__44.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__45 = __Local__36[8];
	__Local__45.Channel = FName(TEXT("Destructible"));
	__Local__45.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__46 = __Local__36[9];
	__Local__46.Channel = FName(TEXT("Enemy"));
	__Local__46.Response = ECollisionResponse::ECR_Ignore;
	bpv__Slider_SM__pf->SetCollisionProfileName(FName(TEXT("Custom")));
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__Slider_SM__pf), true, 0));
	bpv__Slider_Collider__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Slider_Collider__pf->AttachToComponent(bpv__Slider_SM__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Slider_Collider__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	auto& __Local__47 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__Slider_Collider__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__48 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__47), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__48 = TArray<FResponseChannel> ();
	__Local__48.AddUninitialized(11);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__48.GetData(), 11);
	auto& __Local__49 = __Local__48[0];
	__Local__49.Channel = FName(TEXT("Visibility"));
	__Local__49.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__50 = __Local__48[1];
	__Local__50.Channel = FName(TEXT("Camera"));
	__Local__50.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__51 = __Local__48[2];
	__Local__51.Channel = FName(TEXT("WorldStatic"));
	__Local__51.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__52 = __Local__48[3];
	__Local__52.Channel = FName(TEXT("WorldDynamic"));
	__Local__52.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__53 = __Local__48[4];
	__Local__53.Channel = FName(TEXT("Pawn"));
	__Local__53.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__54 = __Local__48[5];
	__Local__54.Channel = FName(TEXT("PhysicsBody"));
	__Local__54.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__55 = __Local__48[6];
	__Local__55.Channel = FName(TEXT("Vehicle"));
	__Local__55.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__56 = __Local__48[7];
	__Local__56.Channel = FName(TEXT("Destructible"));
	__Local__56.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__57 = __Local__48[8];
	__Local__57.Channel = FName(TEXT("Enemy"));
	__Local__57.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__58 = __Local__48[9];
	__Local__58.Channel = FName(TEXT("PlayerCollision"));
	__Local__58.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__59 = __Local__48[10];
	__Local__59.Channel = FName(TEXT("PlayerHands"));
	__Local__59.Response = ECollisionResponse::ECR_Overlap;
	bpv__Slider_Collider__pf->SetCollisionProfileName(FName(TEXT("Custom")));
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__Slider_Collider__pf), true, 0));
	bpv__SecondHand_Collider__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SecondHand_Collider__pf->AttachToComponent(bpv__Firearm_SM__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__SecondHand_Collider__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	auto& __Local__60 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__SecondHand_Collider__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__61 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__60), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__61 = TArray<FResponseChannel> ();
	__Local__61.AddUninitialized(11);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__61.GetData(), 11);
	auto& __Local__62 = __Local__61[0];
	__Local__62.Channel = FName(TEXT("WorldStatic"));
	__Local__62.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__63 = __Local__61[1];
	__Local__63.Channel = FName(TEXT("WorldDynamic"));
	__Local__63.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__64 = __Local__61[2];
	__Local__64.Channel = FName(TEXT("Pawn"));
	__Local__64.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__65 = __Local__61[3];
	__Local__65.Channel = FName(TEXT("Visibility"));
	__Local__65.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__66 = __Local__61[4];
	__Local__66.Channel = FName(TEXT("Camera"));
	__Local__66.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__67 = __Local__61[5];
	__Local__67.Channel = FName(TEXT("PhysicsBody"));
	__Local__67.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__68 = __Local__61[6];
	__Local__68.Channel = FName(TEXT("Vehicle"));
	__Local__68.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__69 = __Local__61[7];
	__Local__69.Channel = FName(TEXT("Destructible"));
	__Local__69.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__70 = __Local__61[8];
	__Local__70.Channel = FName(TEXT("Enemy"));
	__Local__70.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__71 = __Local__61[9];
	__Local__71.Channel = FName(TEXT("PlayerCollision"));
	__Local__71.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__72 = __Local__61[10];
	__Local__72.Channel = FName(TEXT("PlayerHands"));
	__Local__72.Response = ECollisionResponse::ECR_Overlap;
	bpv__SecondHand_Collider__pf->SetCollisionProfileName(FName(TEXT("Custom")));
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__SecondHand_Collider__pf), true, 0));
	bpv__ShellEjectionPoint__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ShellEjectionPoint__pf->AttachToComponent(bpv__Firearm_SM__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__ShellEjectionPoint__pf->ArrowSize = 0.250000f;
	bpv__ShellEjectionPoint__pf->ArrowLength = 40.000000f;
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__ShellEjectionPoint__pf), false, 0));
	bpv__Slider_ForwardPosition__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Slider_ForwardPosition__pf->AttachToComponent(bpv__Firearm_SM__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__73 = (*(AccessPrivateProperty<FVector >((bpv__Slider_ForwardPosition__pf), UBoxComponent::__PPO__BoxExtent() )));
	__Local__73 = FVector(1.000000, 4.000000, 4.000000);
	bpv__Slider_ForwardPosition__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	auto& __Local__74 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__Slider_ForwardPosition__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__75 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__74), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__75 = TArray<FResponseChannel> ();
	__Local__75.AddUninitialized(11);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__75.GetData(), 11);
	auto& __Local__76 = __Local__75[0];
	__Local__76.Channel = FName(TEXT("WorldStatic"));
	__Local__76.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__77 = __Local__75[1];
	__Local__77.Channel = FName(TEXT("WorldDynamic"));
	__Local__77.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__78 = __Local__75[2];
	__Local__78.Channel = FName(TEXT("Pawn"));
	__Local__78.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__79 = __Local__75[3];
	__Local__79.Channel = FName(TEXT("Visibility"));
	__Local__79.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__80 = __Local__75[4];
	__Local__80.Channel = FName(TEXT("Camera"));
	__Local__80.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__81 = __Local__75[5];
	__Local__81.Channel = FName(TEXT("PhysicsBody"));
	__Local__81.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__82 = __Local__75[6];
	__Local__82.Channel = FName(TEXT("Vehicle"));
	__Local__82.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__83 = __Local__75[7];
	__Local__83.Channel = FName(TEXT("Destructible"));
	__Local__83.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__84 = __Local__75[8];
	__Local__84.Channel = FName(TEXT("Enemy"));
	__Local__84.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__85 = __Local__75[9];
	__Local__85.Channel = FName(TEXT("PlayerCollision"));
	__Local__85.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__86 = __Local__75[10];
	__Local__86.Channel = FName(TEXT("PlayerHands"));
	__Local__86.Response = ECollisionResponse::ECR_Overlap;
	bpv__Slider_ForwardPosition__pf->SetCollisionProfileName(FName(TEXT("Custom")));
	auto& __Local__87 = (*(AccessPrivateProperty<FVector >((bpv__Slider_ForwardPosition__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__87 = FVector(29.621521, 0.000000, 2.853271);
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__Slider_ForwardPosition__pf), true, 0));
	bpv__Niagara__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Niagara__pf->AttachToComponent(bpv__Firearm_SM__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__88 = (*(AccessPrivateProperty<UNiagaraSystem* >((bpv__Niagara__pf), UNiagaraComponent::__PPO__Asset() )));
	__Local__88 = CastChecked<UNiagaraSystem>(CastChecked<UDynamicClass>(ABP_Firearm_Base_C__pf1418999182::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__89 = (*(AccessPrivateProperty<FNiagaraUserRedirectionParameterStore >((bpv__Niagara__pf), UNiagaraComponent::__PPO__OverrideParameters() )));
	auto& __Local__90 = (*(AccessPrivateProperty<FVector >((bpv__Niagara__pf), USceneComponent::__PPO__RelativeLocation() )));
	__Local__90 = FVector(30.000000, 0.000000, 0.000000);
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__Niagara__pf), false, 0));
	bpv__MagnetCollision__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__MagnetCollision__pf->AttachToComponent(bpv__Firearm_SM__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__MagnetCollision__pf->AreaClass = UNavArea_Obstacle::StaticClass();
	auto& __Local__91 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__MagnetCollision__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__92 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__91), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__92 = TArray<FResponseChannel> ();
	__Local__92.AddUninitialized(11);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__92.GetData(), 11);
	auto& __Local__93 = __Local__92[0];
	__Local__93.Channel = FName(TEXT("WorldStatic"));
	__Local__93.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__94 = __Local__92[1];
	__Local__94.Channel = FName(TEXT("WorldDynamic"));
	__Local__94.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__95 = __Local__92[2];
	__Local__95.Channel = FName(TEXT("Pawn"));
	__Local__95.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__96 = __Local__92[3];
	__Local__96.Channel = FName(TEXT("Visibility"));
	__Local__96.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__97 = __Local__92[4];
	__Local__97.Channel = FName(TEXT("Camera"));
	__Local__97.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__98 = __Local__92[5];
	__Local__98.Channel = FName(TEXT("PhysicsBody"));
	__Local__98.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__99 = __Local__92[6];
	__Local__99.Channel = FName(TEXT("Vehicle"));
	__Local__99.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__100 = __Local__92[7];
	__Local__100.Channel = FName(TEXT("Destructible"));
	__Local__100.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__101 = __Local__92[8];
	__Local__101.Channel = FName(TEXT("Enemy"));
	__Local__101.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__102 = __Local__92[9];
	__Local__102.Channel = FName(TEXT("PlayerCollision"));
	__Local__102.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__103 = __Local__92[10];
	__Local__103.Channel = FName(TEXT("Tool"));
	__Local__103.Response = ECollisionResponse::ECR_Overlap;
	bpv__MagnetCollision__pf->SetCollisionProfileName(FName(TEXT("Custom")));
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__MagnetCollision__pf), true, 0));
	bpv__FireLocation__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__FireLocation__pf->AttachToComponent(bpv__Firearm_SM__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__FireLocation__pf->ArrowSize = 0.200000f;
	bpv__FireLocation__pf->ArrowLength = 100.000000f;
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__FireLocation__pf), false, 0));
	bpv__GrabbableObjectSocket__pf->CreationMethod = EComponentCreationMethod::Native;
	(((FBoolProperty*)__Local__5)->SetPropertyValue_InContainer((bpv__GrabbableObjectSocket__pf), false, 0));
	bpv__Timeline_0__Direction_7E26919544842D5F87A9D98504B37796__pf = ETimelineDirection::Type::Forward;
	bpv__Timeline_0__pf = nullptr;
	bpv__SliderMovementTimeline__Direction_B8326A684FCD6305B503B8A84BCC6A99__pf = ETimelineDirection::Type::Forward;
	bpv__SliderMovementTimeline__pf = nullptr;
	bpv__FirstHandGrabbed__pf = false;
	bpv__canFire__pf = false;
	bpv__SecondHandGrabbed__pf = false;
	bpv__dominantHand__pf = EControllerHand::Right;
	bpv__currentFireMode__pf = E__E_FireMode__pf::NewEnumerator0;
	bpv__canAutomatic__pf = false;
	bpv__currentAmmo__pf = 0;
	bpv__isFiring__pf = false;
	bpv__loadType__pf = E__E_LoadType__pf::NewEnumerator0;
	bpv__isLoaded__pf = false;
	bpv__firerate__pf = 1.000000f;
	bpv__spentShells__pf = 0;
	bpv__magazineObj__pf = nullptr;
	bpv__damageAmount__pf = 10;
	bpv__FirstxHand__pfT = nullptr;
	bpv__SecondxHandxMotionxController__pfTTT = nullptr;
	bpv__SecondxHandxMesh__pfTT = nullptr;
	bpv__X_Last_Position__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__X_Delta__pf = 0.000000f;
	bpv__OwningGear__pf = nullptr;
	bpv__SliderXMax__pf = 0.000000f;
	bpv__SliderXMin__pf = -10.000000f;
	bpv__CockedBack__pf = false;
	bpv__OnMagnetMount__pf = false;
	bpv__MagnetMount__pf = nullptr;
	bpv__OverlappingMagnets__pf = TArray<ABP_MagneticPlacement_C__pf3911806087*> ();
	bpv__ClosestMount__pf = nullptr;
	bpv__WeaponObjectType__pf = E__ENUM_ObjectType__pf::NewEnumerator3;
	auto& __Local__104 = (*(AccessPrivateProperty<EActorUpdateOverlapsMethod >((this), AActor::__PPO__DefaultUpdateOverlapsMethodDuringLevelStreaming() )));
	__Local__104 = EActorUpdateOverlapsMethod::OnlyUpdateMovable;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_Firearm_Base_C__pf1418999182::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__Firearm_SM__pf)
	{
		bpv__Firearm_SM__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Slider_Stopper__pf)
	{
		bpv__Slider_Stopper__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__AmmoPortTrigger__pf)
	{
		bpv__AmmoPortTrigger__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Slider_SM__pf)
	{
		bpv__Slider_SM__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Slider_Collider__pf)
	{
		bpv__Slider_Collider__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SecondHand_Collider__pf)
	{
		bpv__SecondHand_Collider__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__ShellEjectionPoint__pf)
	{
		bpv__ShellEjectionPoint__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Slider_ForwardPosition__pf)
	{
		bpv__Slider_ForwardPosition__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Niagara__pf)
	{
		bpv__Niagara__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__MagnetCollision__pf)
	{
		bpv__MagnetCollision__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__FireLocation__pf)
	{
		bpv__FireLocation__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__GrabbableObjectSocket__pf)
	{
		bpv__GrabbableObjectSocket__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Firearm_Base_C__pf1418999182::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Blueprints/Enums/E_Hands.E_Hands")));
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Blueprints/Tools/ENUM_ObjectType.ENUM_ObjectType")));
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Blueprints/Enums/E_FireMode.E_FireMode")));
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Blueprints/Enums/E_LoadType.E_LoadType")));
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Meshes/Placeholder/Player_Generic/Hand_Positions_Enum.Hand_Positions_Enum")));
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(UGrabbableObjectSocket_C__pf2132744816::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_MotionController_C__pf563933975::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_BulletBase_C__pf1418999182::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_AmmoBase_C__pf1418999182::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_MagneticPlacement_C__pf3911806087::StaticClass());
	extern UClass* Z_Construct_UClass_UBPI_TakeDamage_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UBPI_TakeDamage_C());
	extern UClass* Z_Construct_UClass_UBPI_Shootable_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UBPI_Shootable_C());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_PlayerGear_C__pf3324220276::StaticClass());
	extern UClass* Z_Construct_UClass_UPickupActorInterface_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UPickupActorInterface_C());
	extern UClass* Z_Construct_UClass_UBPI_GrabbableObj_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UBPI_GrabbableObj_C());
	extern UClass* Z_Construct_UClass_UBPI_WeaponControls_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UBPI_WeaponControls_C());
	extern UClass* Z_Construct_UClass_UBPI_Magnetic_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UBPI_Magnetic_C());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__105 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"), (EObjectFlags)0x00280029);
	InDynamicClass->ComponentTemplates.Add(__Local__105);
	auto __Local__106 = NewObject<UTimelineTemplate>(InDynamicClass, UTimelineTemplate::StaticClass(), TEXT("SliderMovementTimeline_Template"), (EObjectFlags)0x00280008);
	InDynamicClass->Timelines.Add(__Local__106);
	auto __Local__107 = NewObject<UTimelineTemplate>(InDynamicClass, UTimelineTemplate::StaticClass(), TEXT("Timeline_0_Template"), (EObjectFlags)0x00280008);
	InDynamicClass->Timelines.Add(__Local__107);
	auto __Local__108 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__108);
	static TWeakFieldPtr<FProperty> __Local__110{};
	const FProperty* __Local__109 = __Local__110.Get();
	if (nullptr == __Local__109)
	{
		__Local__109 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__109);
		__Local__110 = __Local__109;
	}
	(((FBoolProperty*)__Local__109)->SetPropertyValue_InContainer((__Local__105), false, 0));
	__Local__106->TimelineLength = 0.100000f;
	__Local__106->bLoop = true;
	__Local__106->TimelineGuid = FGuid(0xB8326A68, 0x4FCD6305, 0xB503B8A8, 0x4BCC6A99);
	auto& __Local__111 = (*(AccessPrivateProperty<FName >((__Local__106), UTimelineTemplate::__PPO__VariableName() )));
	__Local__111 = FName(TEXT("SliderMovementTimeline"));
	auto& __Local__112 = (*(AccessPrivateProperty<FName >((__Local__106), UTimelineTemplate::__PPO__DirectionPropertyName() )));
	__Local__112 = FName(TEXT("SliderMovementTimeline__Direction_B8326A684FCD6305B503B8A84BCC6A99"));
	auto& __Local__113 = (*(AccessPrivateProperty<FName >((__Local__106), UTimelineTemplate::__PPO__UpdateFunctionName() )));
	__Local__113 = FName(TEXT("SliderMovementTimeline__UpdateFunc"));
	auto& __Local__114 = (*(AccessPrivateProperty<FName >((__Local__106), UTimelineTemplate::__PPO__FinishedFunctionName() )));
	__Local__114 = FName(TEXT("SliderMovementTimeline__FinishedFunc"));
	__Local__107->TimelineLength = 0.100000f;
	__Local__107->bLoop = true;
	__Local__107->TimelineGuid = FGuid(0x7E269195, 0x44842D5F, 0x87A9D985, 0x04B37796);
	auto& __Local__115 = (*(AccessPrivateProperty<FName >((__Local__107), UTimelineTemplate::__PPO__VariableName() )));
	__Local__115 = FName(TEXT("Timeline_0"));
	auto& __Local__116 = (*(AccessPrivateProperty<FName >((__Local__107), UTimelineTemplate::__PPO__DirectionPropertyName() )));
	__Local__116 = FName(TEXT("Timeline_0__Direction_7E26919544842D5F87A9D98504B37796"));
	auto& __Local__117 = (*(AccessPrivateProperty<FName >((__Local__107), UTimelineTemplate::__PPO__UpdateFunctionName() )));
	__Local__117 = FName(TEXT("Timeline_0__UpdateFunc"));
	auto& __Local__118 = (*(AccessPrivateProperty<FName >((__Local__107), UTimelineTemplate::__PPO__FinishedFunctionName() )));
	__Local__118 = FName(TEXT("Timeline_0__FinishedFunc"));
	__Local__108->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__108->ComponentDelegateBindings.AddUninitialized(4);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__108->ComponentDelegateBindings.GetData(), 4);
	auto& __Local__119 = __Local__108->ComponentDelegateBindings[0];
	__Local__119.ComponentPropertyName = FName(TEXT("MagnetCollision"));
	__Local__119.DelegatePropertyName = FName(TEXT("OnComponentEndOverlap"));
	__Local__119.FunctionNameToBind = FName(TEXT("BndEvt__BP_Firearm_Base_MagnetCollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature"));
	auto& __Local__120 = __Local__108->ComponentDelegateBindings[1];
	__Local__120.ComponentPropertyName = FName(TEXT("MagnetCollision"));
	__Local__120.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__120.FunctionNameToBind = FName(TEXT("BndEvt__BP_Firearm_Base_MagnetCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
	auto& __Local__121 = __Local__108->ComponentDelegateBindings[2];
	__Local__121.ComponentPropertyName = FName(TEXT("Slider_ForwardPosition"));
	__Local__121.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__121.FunctionNameToBind = FName(TEXT("BndEvt__BPC_Shotgun_Slider_ForwardPosition_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature"));
	auto& __Local__122 = __Local__108->ComponentDelegateBindings[3];
	__Local__122.ComponentPropertyName = FName(TEXT("Slider_Stopper"));
	__Local__122.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__122.FunctionNameToBind = FName(TEXT("BndEvt__BP_Firearm_Base_Slider_Stopper_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature"));
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_Firearm_Base_C__pf1418999182::bpf__ExecuteUbergraph_BP_Firearm_Base__pf_0(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	FTransform bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_3__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	ABP_BulletBase_C__pf1418999182* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	UNiagaraComponent* bpfv__CallFunc_SpawnSystemAttached_ReturnValue__pf{};
	FRotator bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorInt_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_9__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_LineTraceSingleForObjects_ReturnValue__pf{};
	TEnumAsByte<ECollisionChannel> bpfv__CallFunc_GetCollisionObjectType_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 8:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Gun hit Static Geo")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = -1;
				break;
			}
		case 9:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Gun hit Enemy")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
			}
		case 10:
			{
				UGameplayStatics::BreakHitResult(b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Distance__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
				if ( b0l__CallFunc_BreakHitResult_HitComponent__pf && b0l__CallFunc_BreakHitResult_HitComponent__pf->GetClass()->ImplementsInterface(UBPI_TakeDamage_C::StaticClass()) )
				{
					b0l__K2Node_DynamicCast_AsBPI_Take_Damage__pf.SetObject(b0l__CallFunc_BreakHitResult_HitComponent__pf);
					void* IAddress = b0l__CallFunc_BreakHitResult_HitComponent__pf->GetInterfaceAddress(UBPI_TakeDamage_C::StaticClass());
					b0l__K2Node_DynamicCast_AsBPI_Take_Damage__pf.SetInterface(IAddress);
				}
				else
				{
					b0l__K2Node_DynamicCast_AsBPI_Take_Damage__pf.SetObject(nullptr);
				}
				b0l__K2Node_DynamicCast_bSuccess_4__pf = (b0l__K2Node_DynamicCast_AsBPI_Take_Damage__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_4__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 11:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsBPI_Take_Damage__pf))
				{
					IBPI_TakeDamage_C::Execute_bpf__TakeDamage__pf(b0l__K2Node_DynamicCast_AsBPI_Take_Damage__pf.GetObject() , bpv__damageAmount__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 52:
			{
				b0l__K2Node_SwitchEnum_CmpSuccess_3__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__loadType__pf), static_cast<uint8>(E__E_LoadType__pf::NewEnumerator0));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess_3__pf)
				{
					__CurrentState = 54;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess_3__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__loadType__pf), static_cast<uint8>(E__E_LoadType__pf::NewEnumerator2));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess_3__pf)
				{
					__CurrentState = 54;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess_3__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__loadType__pf), static_cast<uint8>(E__E_LoadType__pf::NewEnumerator3));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess_3__pf)
				{
					__CurrentState = 54;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess_3__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__loadType__pf), static_cast<uint8>(E__E_LoadType__pf::NewEnumerator4));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess_3__pf)
				{
					__CurrentState = 54;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess_3__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__loadType__pf), static_cast<uint8>(E__E_LoadType__pf::NewEnumerator1));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess_3__pf)
				{
					__CurrentState = 53;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 53:
			{
				bpv__canFire__pf = false;
			}
		case 54:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__currentAmmo__pf, 1);
				b0l__Temp_int_Variable__pf = bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf;
			}
		case 55:
			{
				bpv__currentAmmo__pf = b0l__Temp_int_Variable__pf;
			}
		case 56:
			{
				if(::IsValid(bpv__magazineObj__pf))
				{
					bpv__magazineObj__pf->bpf__OnAmmoChange__pf(b0l__Temp_int_Variable__pf);
				}
			}
		case 57:
			{
				if(::IsValid(bpv__ShellEjectionPoint__pf))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_3__pf = bpv__ShellEjectionPoint__pf->USceneComponent::K2_GetComponentToWorld();
				}
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, ABP_BulletBase_C__pf1418999182::StaticClass(), bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_3__pf, ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn, ((AActor*)nullptr));
			}
		case 58:
			{
				if(::IsValid(bpv__ShellEjectionPoint__pf))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_3__pf = bpv__ShellEjectionPoint__pf->USceneComponent::K2_GetComponentToWorld();
				}
				bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<ABP_BulletBase_C__pf1418999182>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_3__pf), ECastCheckedType::NullAllowed);
			}
		case 59:
			{
				b0l__K2Node_MakeArray_Array__pf.SetNum(4, true);
				b0l__K2Node_MakeArray_Array__pf[0] = EObjectTypeQuery::ObjectTypeQuery7;
				b0l__K2Node_MakeArray_Array__pf[1] = EObjectTypeQuery::ObjectTypeQuery1;
				b0l__K2Node_MakeArray_Array__pf[2] = EObjectTypeQuery::ObjectTypeQuery10;
				b0l__K2Node_MakeArray_Array__pf[3] = EObjectTypeQuery::ObjectTypeQuery6;
				if(::IsValid(bpv__FireLocation__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__FireLocation__pf->USceneComponent::K2_GetComponentRotation();
				}
				bpfv__CallFunc_GetForwardVector_ReturnValue__pf = UKismetMathLibrary::GetForwardVector(bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf);
				bpfv__CallFunc_Multiply_VectorInt_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorInt(bpfv__CallFunc_GetForwardVector_ReturnValue__pf, 5000);
				if(::IsValid(bpv__FireLocation__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_9__pf = bpv__FireLocation__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_9__pf, bpfv__CallFunc_Multiply_VectorInt_ReturnValue__pf);
				bpfv__CallFunc_LineTraceSingleForObjects_ReturnValue__pf = UKismetSystemLibrary::LineTraceSingleForObjects(this, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_9__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, b0l__K2Node_MakeArray_Array__pf, false, b0l__Temp_object_Variable__pf, EDrawDebugTrace::Persistent, /*out*/ b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 5.000000);
			}
		case 60:
			{
				bpfv__CallFunc_SpawnSystemAttached_ReturnValue__pf = UNiagaraFunctionLibrary::SpawnSystemAttached(CastChecked<UNiagaraSystem>(CastChecked<UDynamicClass>(ABP_Firearm_Base_C__pf1418999182::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed), bpv__Niagara__pf, FName(TEXT("None")), FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), EAttachLocation::KeepRelativeOffset, false, true, ENCPoolMethod::None, true);
			}
		case 61:
			{
				UGameplayStatics::BreakHitResult(b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Distance__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
				if(::IsValid(b0l__CallFunc_BreakHitResult_HitComponent__pf))
				{
					bpfv__CallFunc_GetCollisionObjectType_ReturnValue__pf = b0l__CallFunc_BreakHitResult_HitComponent__pf->GetCollisionObjectType();
				}
				b0l__K2Node_SwitchEnum_CmpSuccess_5__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpfv__CallFunc_GetCollisionObjectType_ReturnValue__pf), static_cast<uint8>(ECollisionChannel::ECC_WorldStatic));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess_5__pf)
				{
					__CurrentState = 8;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess_5__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpfv__CallFunc_GetCollisionObjectType_ReturnValue__pf), static_cast<uint8>(ECollisionChannel::ECC_Destructible));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess_5__pf)
				{
					__CurrentState = 63;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess_5__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpfv__CallFunc_GetCollisionObjectType_ReturnValue__pf), static_cast<uint8>(ECollisionChannel::ECC_GameTraceChannel1));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess_5__pf)
				{
					__CurrentState = 9;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess_5__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpfv__CallFunc_GetCollisionObjectType_ReturnValue__pf), static_cast<uint8>(ECollisionChannel::ECC_GameTraceChannel4));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess_5__pf)
				{
					__CurrentState = 62;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 62:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Gun hit Shield")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = -1;
				break;
			}
		case 63:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Gun hit Laptop")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
			}
		case 64:
			{
				UGameplayStatics::BreakHitResult(b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Distance__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
				if ( b0l__CallFunc_BreakHitResult_HitActor__pf && b0l__CallFunc_BreakHitResult_HitActor__pf->GetClass()->ImplementsInterface(UBPI_Shootable_C::StaticClass()) )
				{
					b0l__K2Node_DynamicCast_AsBPI_Shootable__pf.SetObject(b0l__CallFunc_BreakHitResult_HitActor__pf);
					void* IAddress = b0l__CallFunc_BreakHitResult_HitActor__pf->GetInterfaceAddress(UBPI_Shootable_C::StaticClass());
					b0l__K2Node_DynamicCast_AsBPI_Shootable__pf.SetInterface(IAddress);
				}
				else
				{
					b0l__K2Node_DynamicCast_AsBPI_Shootable__pf.SetObject(nullptr);
				}
				b0l__K2Node_DynamicCast_bSuccess_5__pf = (b0l__K2Node_DynamicCast_AsBPI_Shootable__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_5__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 65:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsBPI_Shootable__pf))
				{
					IBPI_Shootable_C::Execute_bpf__Shot__pf(b0l__K2Node_DynamicCast_AsBPI_Shootable__pf.GetObject() );
				}
				__CurrentState = -1;
				break;
			}
		case 86:
			{
				if (!bpv__isLoaded__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 87:
			{
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpv__currentAmmo__pf, 0);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue__pf)
				{
					__CurrentState = 88;
					break;
				}
				__CurrentState = 52;
				break;
			}
		case 88:
			{
				bpv__canFire__pf = false;
				__CurrentState = -1;
				break;
			}
		case 144:
			{
				if (!bpv__canFire__pf)
				{
					__CurrentState = -1;
					break;
				}
				__CurrentState = 86;
				break;
			}
		case 163:
			{
				__CurrentState = 144;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Firearm_Base_C__pf1418999182::bpf__ExecuteUbergraph_BP_Firearm_Base__pf_1(int32 bpp__EntryPoint__pf)
{
	FTimerHandle bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 6:
			{
				__CurrentState = 7;
				break;
			}
		case 7:
			{
				bpv__isFiring__pf = false;
				__CurrentState = -1;
				break;
			}
		case 113:
			{
				bpf__Fire__pf();
			}
		case 114:
			{
				UKismetSystemLibrary::Delay(this, bpv__firerate__pf, FLatentActionInfo(6, -1497001243, TEXT("ExecuteUbergraph_BP_Firearm_Base_1"), this));
				__CurrentState = -1;
				break;
			}
		case 115:
			{
				__CurrentState = 116;
				break;
			}
		case 116:
			{
				bpv__isFiring__pf = true;
			}
		case 117:
			{
				b0l__K2Node_SwitchEnum_CmpSuccess_4__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__currentFireMode__pf), static_cast<uint8>(E__E_FireMode__pf::NewEnumerator0));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess_4__pf)
				{
					__CurrentState = 113;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess_4__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__currentFireMode__pf), static_cast<uint8>(E__E_FireMode__pf::NewEnumerator2));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess_4__pf)
				{
					__CurrentState = 118;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 118:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate__pf.BindUFunction(this,FName(TEXT("Fire")));
				bpfv__CallFunc_K2_SetTimerDelegate_ReturnValue__pf = UKismetSystemLibrary::K2_SetTimerDelegate(b0l__K2Node_CreateDelegate_OutputDelegate__pf, bpv__firerate__pf, bpv__isFiring__pf, 0.000000, 0.000000);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Firearm_Base_C__pf1418999182::bpf__ExecuteUbergraph_BP_Firearm_Base__pf_2(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 41:
			{
				if (!bpv__isFiring__pf)
				{
					__CurrentState = 42;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 42:
			{
				b0l__K2Node_SwitchEnum_CmpSuccess_2__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__loadType__pf), static_cast<uint8>(E__E_LoadType__pf::NewEnumerator0));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess_2__pf)
				{
					__CurrentState = 49;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess_2__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__loadType__pf), static_cast<uint8>(E__E_LoadType__pf::NewEnumerator2));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess_2__pf)
				{
					__CurrentState = 49;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess_2__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__loadType__pf), static_cast<uint8>(E__E_LoadType__pf::NewEnumerator3));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess_2__pf)
				{
					__CurrentState = 49;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess_2__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__loadType__pf), static_cast<uint8>(E__E_LoadType__pf::NewEnumerator4));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess_2__pf)
				{
					__CurrentState = 49;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess_2__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__loadType__pf), static_cast<uint8>(E__E_LoadType__pf::NewEnumerator1));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess_2__pf)
				{
					__CurrentState = 43;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 43:
			{
				bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Less_IntInt(bpv__currentAmmo__pf, 6);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 44:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpv__currentAmmo__pf, 1);
				b0l__Temp_int_Variable_1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
			}
		case 45:
			{
				bpv__currentAmmo__pf = b0l__Temp_int_Variable_1__pf;
			}
		case 46:
			{
				if(::IsValid(b0l__K2Node_CustomEvent_BP_AmmoBase__pf))
				{
					b0l__K2Node_CustomEvent_BP_AmmoBase__pf->K2_DestroyActor();
				}
			}
		case 47:
			{
				bpv__isLoaded__pf = true;
			}
		case 48:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("00000000000000000000000000000000")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = -1;
				break;
			}
		case 49:
			{
				bpv__magazineObj__pf = b0l__K2Node_CustomEvent_BP_AmmoBase__pf;
			}
		case 50:
			{
				bpv__currentAmmo__pf = b0l__K2Node_CustomEvent_Magazine_Base__pf;
			}
		case 51:
			{
				if(::IsValid(b0l__K2Node_CustomEvent_BP_AmmoBase__pf))
				{
					b0l__K2Node_CustomEvent_BP_AmmoBase__pf->bpf__OnAmmoChange__pf(b0l__K2Node_CustomEvent_Magazine_Base__pf);
				}
				__CurrentState = 47;
				break;
			}
		case 151:
			{
				__CurrentState = 152;
				break;
			}
		case 152:
			{
				E__E_LoadType__pf  __Local__124 = E__E_LoadType__pf::NewEnumerator0;
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_CustomEvent_BP_AmmoBase__pf)) ? (b0l__K2Node_CustomEvent_BP_AmmoBase__pf->bpv__AmmoType__pf) : (__Local__124))), static_cast<uint8>(bpv__loadType__pf));
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
				__CurrentState = 41;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Firearm_Base_C__pf1418999182::bpf__ExecuteUbergraph_BP_Firearm_Base__pf_3(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_NotEqual_ByteByte_ReturnValue__pf{};
	FTransform bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_2__pf(EForceInit::ForceInit);
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
		case 126:
			{
				if(::IsValid(bpv__Slider_SM__pf))
				{
					bpv__Slider_SM__pf->USceneComponent::K2_SetRelativeLocation(FVector(-10.000000,0.000000,0.000000), false, /*out*/ b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf, false);
				}
				__CurrentState = -1;
				break;
			}
		case 127:
			{
				if(::IsValid(bpv__Slider_SM__pf))
				{
					bpv__Slider_SM__pf->USceneComponent::K2_SetRelativeLocation(FVector(0.000000,0.000000,0.000000), false, /*out*/ b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult_1__pf, false);
				}
				__CurrentState = -1;
				break;
			}
		case 128:
			{
				E__Hand_Positions_Enum__pf  __Local__125 = E__Hand_Positions_Enum__pf::NewEnumerator0;
				bpfv__CallFunc_NotEqual_ByteByte_ReturnValue__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpv__SecondxHandxMotionxController__pfTTT)) ? (bpv__SecondxHandxMotionxController__pfTTT->bpv__GripState__pf) : (__Local__125))), static_cast<uint8>(E__Hand_Positions_Enum__pf::NewEnumerator0));
				if (!bpfv__CallFunc_NotEqual_ByteByte_ReturnValue__pf)
				{
					__CurrentState = 135;
					break;
				}
			}
		case 129:
			{
				if (!bpv__SecondHandGrabbed__pf)
				{
					__CurrentState = 135;
					break;
				}
			}
		case 130:
			{
				UKismetMathLibrary::BreakVector(bpv__X_Last_Position__pf, /*out*/ b0l__CallFunc_BreakVector_X_2__pf, /*out*/ b0l__CallFunc_BreakVector_Y_2__pf, /*out*/ b0l__CallFunc_BreakVector_Z_2__pf);
				if(::IsValid(bpv__Firearm_SM__pf))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_1__pf = bpv__Firearm_SM__pf->USceneComponent::K2_GetComponentToWorld();
				}
				if(::IsValid(bpv__SecondxHandxMotionxController__pfTTT) && ::IsValid(bpv__SecondxHandxMotionxController__pfTTT->bpv__MotionController__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_2__pf = bpv__SecondxHandxMotionxController__pfTTT->bpv__MotionController__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_InverseTransformLocation_ReturnValue_1__pf = UKismetMathLibrary::InverseTransformLocation(bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_1__pf, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_2__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_InverseTransformLocation_ReturnValue_1__pf, /*out*/ b0l__CallFunc_BreakVector_X_4__pf, /*out*/ b0l__CallFunc_BreakVector_Y_4__pf, /*out*/ b0l__CallFunc_BreakVector_Z_4__pf);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(b0l__CallFunc_BreakVector_X_4__pf, b0l__CallFunc_BreakVector_X_2__pf);
				bpv__X_Delta__pf = bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf;
			}
		case 131:
			{
				UKismetMathLibrary::BreakVector(bpv__X_Last_Position__pf, /*out*/ b0l__CallFunc_BreakVector_X_5__pf, /*out*/ b0l__CallFunc_BreakVector_Y_5__pf, /*out*/ b0l__CallFunc_BreakVector_Z_5__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpv__X_Delta__pf, b0l__CallFunc_BreakVector_X_5__pf);
				bpfv__CallFunc_MakeVector_ReturnValue_2__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, 0.000000, 0.000000);
				bpv__X_Last_Position__pf = bpfv__CallFunc_MakeVector_ReturnValue_2__pf;
			}
		case 132:
			{
				bpfv__CallFunc_MakeVector_ReturnValue_1__pf = UKismetMathLibrary::MakeVector(bpv__X_Delta__pf, 0.000000, 0.000000);
				if(::IsValid(bpv__Slider_SM__pf))
				{
					bpv__Slider_SM__pf->USceneComponent::K2_AddRelativeLocation(bpfv__CallFunc_MakeVector_ReturnValue_1__pf, true, /*out*/ b0l__CallFunc_K2_AddRelativeLocation_SweepHitResult__pf, true);
				}
			}
		case 133:
			{
				FVector  __Local__126 = FVector(0.000000,0.000000,0.000000);
				UKismetMathLibrary::BreakVector(((::IsValid(bpv__Slider_SM__pf)) ? ((*(AccessPrivateProperty<FVector >((bpv__Slider_SM__pf), USceneComponent::__PPO__RelativeLocation() )))) : (__Local__126)), /*out*/ b0l__CallFunc_BreakVector_X_1__pf, /*out*/ b0l__CallFunc_BreakVector_Y_1__pf, /*out*/ b0l__CallFunc_BreakVector_Z_1__pf);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(b0l__CallFunc_BreakVector_X_1__pf, bpv__SliderXMax__pf);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 134;
					break;
				}
				__CurrentState = 127;
				break;
			}
		case 134:
			{
				FVector  __Local__127 = FVector(0.000000,0.000000,0.000000);
				UKismetMathLibrary::BreakVector(((::IsValid(bpv__Slider_SM__pf)) ? ((*(AccessPrivateProperty<FVector >((bpv__Slider_SM__pf), USceneComponent::__PPO__RelativeLocation() )))) : (__Local__127)), /*out*/ b0l__CallFunc_BreakVector_X__pf, /*out*/ b0l__CallFunc_BreakVector_Y__pf, /*out*/ b0l__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(b0l__CallFunc_BreakVector_X__pf, bpv__SliderXMin__pf);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
				__CurrentState = 126;
				break;
			}
		case 135:
			{
				bpf__SliderRevertPosition__pf();
			}
		case 136:
			{
				if(::IsValid(bpv__SliderMovementTimeline__pf))
				{
					bpv__SliderMovementTimeline__pf->UTimelineComponent::Stop();
				}
				__CurrentState = -1;
				break;
			}
		case 177:
			{
				__CurrentState = 128;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Firearm_Base_C__pf1418999182::bpf__ExecuteUbergraph_BP_Firearm_Base__pf_4(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_6__pf(EForceInit::ForceInit);
	USceneComponent* bpfv__CallFunc_K2_GetRootComponent_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_7__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_2__pf{};
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue_2__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_VSize_ReturnValue_2__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf{};
	USceneComponent* bpfv__CallFunc_K2_GetRootComponent_ReturnValue_1__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_8__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue_3__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_VSize_ReturnValue_3__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue_2__pf{};
	USceneComponent* bpfv__CallFunc_K2_GetRootComponent_ReturnValue_2__pf{};
	bool bpfv__CallFunc_K2_AttachToComponent_ReturnValue_2__pf{};
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_3__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 12:
			{
				b0l__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 13:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__OverlappingMagnets__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue_2__pf)
				{
					__CurrentState = 17;
					break;
				}
			}
		case 14:
			{
				b0l__Temp_int_Array_Index_Variable__pf = b0l__Temp_int_Loop_Counter_Variable__pf;
			}
		case 15:
			{
				__StateStack.Push(23);
			}
		case 16:
			{
				FCustomThunkTemplates::Array_Get(bpv__OverlappingMagnets__pf, b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				bool  __Local__128 = false;
				if (!((::IsValid(b0l__CallFunc_Array_Get_Item__pf)) ? (b0l__CallFunc_Array_Get_Item__pf->bpv__Occupied__pf) : (__Local__128)))
				{
					__CurrentState = 24;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 17:
			{
				bpfv__CallFunc_IsValid_ReturnValue_1__pf = UKismetSystemLibrary::IsValid(bpv__ClosestMount__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue_1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 18:
			{
				if(::IsValid(bpv__Firearm_SM__pf))
				{
					bpv__Firearm_SM__pf->SetSimulatePhysics(false);
				}
			}
		case 19:
			{
				if(::IsValid(bpv__ClosestMount__pf))
				{
					bpfv__CallFunc_K2_GetRootComponent_ReturnValue_2__pf = bpv__ClosestMount__pf->AActor::K2_GetRootComponent();
				}
				if(::IsValid(bpv__Firearm_SM__pf))
				{
					bpfv__CallFunc_K2_AttachToComponent_ReturnValue_2__pf = bpv__Firearm_SM__pf->USceneComponent::K2_AttachToComponent(bpfv__CallFunc_K2_GetRootComponent_ReturnValue_2__pf, FName(TEXT("None")), EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::KeepWorld, false);
				}
			}
		case 20:
			{
				bpv__OnMagnetMount__pf = true;
			}
		case 21:
			{
				bpv__MagnetMount__pf = bpv__ClosestMount__pf;
			}
		case 22:
			{
				if(::IsValid(bpv__MagnetMount__pf))
				{
					bpv__MagnetMount__pf->bpv__Occupied__pf = true;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 23:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue_1__pf;
				__CurrentState = 13;
				break;
			}
		case 24:
			{
				FCustomThunkTemplates::Array_Get(bpv__OverlappingMagnets__pf, b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				E__ENUM_ObjectType__pf  __Local__129 = E__ENUM_ObjectType__pf::NewEnumerator0;
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_2__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__CallFunc_Array_Get_Item__pf)) ? (b0l__CallFunc_Array_Get_Item__pf->bpv__ObjectxType__pfT) : (__Local__129))), static_cast<uint8>(E__ENUM_ObjectType__pf::NewEnumerator0));
				E__ENUM_ObjectType__pf  __Local__130 = E__ENUM_ObjectType__pf::NewEnumerator0;
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_3__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(bpv__WeaponObjectType__pf), static_cast<uint8>(((::IsValid(b0l__CallFunc_Array_Get_Item__pf)) ? (b0l__CallFunc_Array_Get_Item__pf->bpv__ObjectxType__pfT) : (__Local__130))));
				bpfv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_3__pf, bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_2__pf);
				if (!bpfv__CallFunc_BooleanOR_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 25:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__ClosestMount__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 28;
					break;
				}
			}
		case 26:
			{
				FCustomThunkTemplates::Array_Get(bpv__OverlappingMagnets__pf, b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpv__MagnetCollision__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_6__pf = bpv__MagnetCollision__pf->USceneComponent::K2_GetComponentLocation();
				}
				if(::IsValid(b0l__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_K2_GetRootComponent_ReturnValue__pf = b0l__CallFunc_Array_Get_Item__pf->AActor::K2_GetRootComponent();
				}
				if(::IsValid(bpfv__CallFunc_K2_GetRootComponent_ReturnValue__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_7__pf = bpfv__CallFunc_K2_GetRootComponent_ReturnValue__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue_2__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_6__pf, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_7__pf);
				bpfv__CallFunc_VSize_ReturnValue_2__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_Subtract_VectorVector_ReturnValue_2__pf);
				if(::IsValid(bpv__ClosestMount__pf))
				{
					bpfv__CallFunc_K2_GetRootComponent_ReturnValue_1__pf = bpv__ClosestMount__pf->AActor::K2_GetRootComponent();
				}
				if(::IsValid(bpfv__CallFunc_K2_GetRootComponent_ReturnValue_1__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_8__pf = bpfv__CallFunc_K2_GetRootComponent_ReturnValue_1__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue_3__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_6__pf, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_8__pf);
				bpfv__CallFunc_VSize_ReturnValue_3__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_Subtract_VectorVector_ReturnValue_3__pf);
				bpfv__CallFunc_Less_FloatFloat_ReturnValue_2__pf = UKismetMathLibrary::Less_FloatFloat(bpfv__CallFunc_VSize_ReturnValue_2__pf, bpfv__CallFunc_VSize_ReturnValue_3__pf);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue_2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 27:
			{
				FCustomThunkTemplates::Array_Get(bpv__OverlappingMagnets__pf, b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				bpv__ClosestMount__pf = b0l__CallFunc_Array_Get_Item__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 28:
			{
				FCustomThunkTemplates::Array_Get(bpv__OverlappingMagnets__pf, b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				bpv__ClosestMount__pf = b0l__CallFunc_Array_Get_Item__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 66:
			{
				b0l__Temp_int_Loop_Counter_Variable__pf = 0;
				__CurrentState = 12;
				break;
			}
		case 167:
			{
				__CurrentState = 168;
				break;
			}
		case 168:
			{
				bpv__ClosestMount__pf = ((ABP_MagneticPlacement_C__pf3911806087*)nullptr);
			}
		case 169:
			{
				if (!bpv__FirstHandGrabbed__pf)
				{
					__CurrentState = 66;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Firearm_Base_C__pf1418999182::bpf__ExecuteUbergraph_BP_Firearm_Base__pf_5(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_InverseTransformLocation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_4__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue_1__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_VSize_ReturnValue__pf{};
	float bpfv__CallFunc_VSize_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue_1__pf{};
	bool bpfv__CallFunc_K2_AttachToComponent_ReturnValue_1__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 4:
			{
				__CurrentState = 5;
				break;
			}
		case 5:
			{
				if(::IsValid(bpv__Timeline_0__pf))
				{
					bpv__Timeline_0__pf->UTimelineComponent::Play();
				}
				__CurrentState = -1;
				break;
			}
		case 73:
			{
				bpv__FirstHandGrabbed__pf = true;
			}
		case 74:
			{
				bpv__SecondHandGrabbed__pf = false;
			}
		case 75:
			{
				bpv__FirstxHand__pfT = b0l__K2Node_Event_AttachToMe__pf;
			}
		case 76:
			{
				b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf = Cast<ABP_MotionController_C__pf563933975>(b0l__K2Node_Event_Actor__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 77:
			{
				EControllerHand  __Local__131 = EControllerHand::Left;
				bpv__dominantHand__pf = ((::IsValid(b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf)) ? (b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf->bpv__Hand__pf) : (__Local__131));
			}
		case 78:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf))
				{
					b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf->bpv__GripState__pf = E__Hand_Positions_Enum__pf::NewEnumerator2;
				}
				__CurrentState = -1;
				break;
			}
		case 89:
			{
				__CurrentState = 90;
				break;
			}
		case 90:
			{
				if (!bpv__FirstHandGrabbed__pf)
				{
					__CurrentState = 105;
					break;
				}
			}
		case 91:
			{
				b0l__K2Node_DynamicCast_AsBP_Motion_Controller_1__pf = Cast<ABP_MotionController_C__pf563933975>(b0l__K2Node_Event_Actor__pf);
				b0l__K2Node_DynamicCast_bSuccess_1__pf = (b0l__K2Node_DynamicCast_AsBP_Motion_Controller_1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess_1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 92:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsBP_Motion_Controller_1__pf) && ::IsValid(b0l__K2Node_DynamicCast_AsBP_Motion_Controller_1__pf->bpv__MotionController__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = b0l__K2Node_DynamicCast_AsBP_Motion_Controller_1__pf->bpv__MotionController__pf->USceneComponent::K2_GetComponentLocation();
				}
				if(::IsValid(bpv__Slider_Collider__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_3__pf = bpv__Slider_Collider__pf->USceneComponent::K2_GetComponentLocation();
				}
				if(::IsValid(bpv__SecondHand_Collider__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_4__pf = bpv__SecondHand_Collider__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_3__pf);
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue_1__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_4__pf);
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf);
				bpfv__CallFunc_VSize_ReturnValue_1__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_Subtract_VectorVector_ReturnValue_1__pf);
				bpfv__CallFunc_Less_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Less_FloatFloat(bpfv__CallFunc_VSize_ReturnValue__pf, bpfv__CallFunc_VSize_ReturnValue_1__pf);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue_1__pf)
				{
					__CurrentState = 99;
					break;
				}
			}
		case 93:
			{
				bpv__SecondHandGrabbed__pf = true;
			}
		case 94:
			{
				bpv__SecondxHandxMotionxController__pfTTT = b0l__K2Node_DynamicCast_AsBP_Motion_Controller_1__pf;
			}
		case 95:
			{
				bpv__SecondxHandxMesh__pfTT = b0l__K2Node_Event_AttachToMe__pf;
			}
		case 96:
			{
				if(::IsValid(bpv__Firearm_SM__pf))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = bpv__Firearm_SM__pf->USceneComponent::K2_GetComponentToWorld();
				}
				if(::IsValid(bpv__SecondxHandxMotionxController__pfTTT) && ::IsValid(bpv__SecondxHandxMotionxController__pfTTT->bpv__MotionController__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf = bpv__SecondxHandxMotionxController__pfTTT->bpv__MotionController__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_InverseTransformLocation_ReturnValue__pf = UKismetMathLibrary::InverseTransformLocation(bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_1__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_InverseTransformLocation_ReturnValue__pf, /*out*/ b0l__CallFunc_BreakVector_X_3__pf, /*out*/ b0l__CallFunc_BreakVector_Y_3__pf, /*out*/ b0l__CallFunc_BreakVector_Z_3__pf);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(b0l__CallFunc_BreakVector_X_3__pf, 0.000000, 0.000000);
				bpv__X_Last_Position__pf = bpfv__CallFunc_MakeVector_ReturnValue__pf;
			}
		case 97:
			{
				if(::IsValid(bpv__SecondxHandxMotionxController__pfTTT))
				{
					bpv__SecondxHandxMotionxController__pfTTT->bpv__GripState__pf = E__Hand_Positions_Enum__pf::NewEnumerator3;
				}
			}
		case 98:
			{
				if(::IsValid(bpv__SliderMovementTimeline__pf))
				{
					bpv__SliderMovementTimeline__pf->UTimelineComponent::PlayFromStart();
				}
				__CurrentState = -1;
				break;
			}
		case 99:
			{
				bpv__SecondHandGrabbed__pf = true;
			}
		case 100:
			{
				if(::IsValid(b0l__K2Node_Event_AttachToMe__pf))
				{
					bpfv__CallFunc_K2_AttachToComponent_ReturnValue_1__pf = b0l__K2Node_Event_AttachToMe__pf->USceneComponent::K2_AttachToComponent(bpv__Firearm_SM__pf, FName(TEXT("Second_Hand_Socket")), EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::KeepWorld, true);
				}
			}
		case 101:
			{
				bpv__SecondxHandxMotionxController__pfTTT = b0l__K2Node_DynamicCast_AsBP_Motion_Controller_1__pf;
			}
		case 102:
			{
				if(::IsValid(bpv__SecondxHandxMotionxController__pfTTT))
				{
					bpv__SecondxHandxMotionxController__pfTTT->bpv__GripState__pf = E__Hand_Positions_Enum__pf::NewEnumerator3;
				}
			}
		case 103:
			{
				bpv__SecondxHandxMesh__pfTT = b0l__K2Node_Event_AttachToMe__pf;
			}
		case 104:
			{
				UKismetSystemLibrary::Delay(this, 0.100000, FLatentActionInfo(4, -1820527713, TEXT("ExecuteUbergraph_BP_Firearm_Base_5"), this));
				__CurrentState = -1;
				break;
			}
		case 105:
			{
				if (!bpv__OnMagnetMount__pf)
				{
					__CurrentState = 109;
					break;
				}
			}
		case 106:
			{
				if(::IsValid(bpv__MagnetMount__pf))
				{
					bpv__MagnetMount__pf->bpv__Occupied__pf = false;
				}
			}
		case 107:
			{
				bpv__OnMagnetMount__pf = false;
			}
		case 108:
			{
				bpv__ClosestMount__pf = ((ABP_MagneticPlacement_C__pf3911806087*)nullptr);
			}
		case 109:
			{
				if(::IsValid(bpv__GrabbableObjectSocket__pf))
				{
					bpv__GrabbableObjectSocket__pf->bpf__Grab__pf(bpv__Firearm_SM__pf, this, b0l__K2Node_Event_HandSocket__pf, b0l__K2Node_Event_AttachToMe__pf);
				}
				__CurrentState = 73;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Firearm_Base_C__pf1418999182::bpf__ExecuteUbergraph_BP_Firearm_Base__pf_6(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Array_Length_ReturnValue_1__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 79:
			{
				bpv__FirstHandGrabbed__pf = false;
			}
		case 80:
			{
				if (!bpv__SecondHandGrabbed__pf)
				{
					__CurrentState = 84;
					break;
				}
			}
		case 81:
			{
				bpv__SecondHandGrabbed__pf = false;
			}
		case 82:
			{
				if(::IsValid(bpv__SecondxHandxMotionxController__pfTTT))
				{
					bpv__SecondxHandxMotionxController__pfTTT->bpv__GripState__pf = E__Hand_Positions_Enum__pf::NewEnumerator0;
				}
			}
		case 83:
			{
				bpv__isFiring__pf = false;
			}
		case 84:
			{
				bpfv__CallFunc_Array_Length_ReturnValue_1__pf = FCustomThunkTemplates::Array_Length(bpv__OverlappingMagnets__pf);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpfv__CallFunc_Array_Length_ReturnValue_1__pf, 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 85;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 85:
			{
				IBPI_Magnetic_C::Execute_bpf__Magnetize__pf(this , ((AActor*)nullptr));
				__CurrentState = -1;
				break;
			}
		case 110:
			{
				if(::IsValid(bpv__GrabbableObjectSocket__pf))
				{
					bpv__GrabbableObjectSocket__pf->bpf__Release__pf();
				}
				__CurrentState = 79;
				break;
			}
		case 111:
			{
				__CurrentState = 110;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Firearm_Base_C__pf1418999182::bpf__ExecuteUbergraph_BP_Firearm_Base__pf_7(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 176);
	// optimized KCST_UnconditionalGoto
	bpv__isFiring__pf = false;
	return; //KCST_EndOfThread
}
void ABP_Firearm_Base_C__pf1418999182::bpf__ExecuteUbergraph_BP_Firearm_Base__pf_8(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_NotEqual_ByteByte_ReturnValue_1__pf{};
	FTransform bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_2__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_5__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf(EForceInit::ForceInit);
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 67:
			{
				__CurrentState = 68;
				break;
			}
		case 68:
			{
				E__Hand_Positions_Enum__pf  __Local__133 = E__Hand_Positions_Enum__pf::NewEnumerator0;
				bpfv__CallFunc_NotEqual_ByteByte_ReturnValue_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(bpv__SecondxHandxMotionxController__pfTTT)) ? (bpv__SecondxHandxMotionxController__pfTTT->bpv__GripState__pf) : (__Local__133))), static_cast<uint8>(E__Hand_Positions_Enum__pf::NewEnumerator0));
				if (!bpfv__CallFunc_NotEqual_ByteByte_ReturnValue_1__pf)
				{
					__CurrentState = 71;
					break;
				}
			}
		case 69:
			{
				if (!bpv__SecondHandGrabbed__pf)
				{
					__CurrentState = 71;
					break;
				}
			}
		case 70:
			{
				if(::IsValid(bpv__Firearm_SM__pf))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_2__pf = bpv__Firearm_SM__pf->USceneComponent::K2_GetComponentToWorld();
				}
				UKismetMathLibrary::BreakTransform(bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue_2__pf, /*out*/ b0l__CallFunc_BreakTransform_Location__pf, /*out*/ b0l__CallFunc_BreakTransform_Rotation__pf, /*out*/ b0l__CallFunc_BreakTransform_Scale__pf);
				if(::IsValid(bpv__SecondxHandxMotionxController__pfTTT) && ::IsValid(bpv__SecondxHandxMotionxController__pfTTT->bpv__MotionController__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_5__pf = bpv__SecondxHandxMotionxController__pfTTT->bpv__MotionController__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf = UKismetMathLibrary::FindLookAtRotation(b0l__CallFunc_BreakTransform_Location__pf, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue_5__pf);
				if(::IsValid(bpv__Firearm_SM__pf))
				{
					bpv__Firearm_SM__pf->USceneComponent::K2_SetWorldRotation(bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf, false, /*out*/ b0l__CallFunc_K2_SetWorldRotation_SweepHitResult__pf, false);
				}
				__CurrentState = -1;
				break;
			}
		case 71:
			{
				bpf__SecondHandRelease__pf();
			}
		case 72:
			{
				if(::IsValid(bpv__Timeline_0__pf))
				{
					bpv__Timeline_0__pf->UTimelineComponent::Stop();
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Firearm_Base_C__pf1418999182::bpf__ExecuteUbergraph_BP_Firearm_Base__pf_9(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Array_RemoveItem_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 173);
	// optimized KCST_UnconditionalGoto
	b0l__K2Node_DynamicCast_AsBP_Magnetic_Placement_1__pf = Cast<ABP_MagneticPlacement_C__pf3911806087>(b0l__K2Node_ComponentBoundEvent_OtherActor__pf);
	b0l__K2Node_DynamicCast_bSuccess_3__pf = (b0l__K2Node_DynamicCast_AsBP_Magnetic_Placement_1__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess_3__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpfv__CallFunc_Array_RemoveItem_ReturnValue__pf = FCustomThunkTemplates::Array_RemoveItem(bpv__OverlappingMagnets__pf, b0l__K2Node_DynamicCast_AsBP_Magnetic_Placement_1__pf);
	return; //KCST_EndOfThread
}
void ABP_Firearm_Base_C__pf1418999182::bpf__ExecuteUbergraph_BP_Firearm_Base__pf_10(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Array_Add_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 170);
	// optimized KCST_UnconditionalGoto
	b0l__K2Node_DynamicCast_AsBP_Magnetic_Placement__pf = Cast<ABP_MagneticPlacement_C__pf3911806087>(b0l__K2Node_ComponentBoundEvent_OtherActor_1__pf);
	b0l__K2Node_DynamicCast_bSuccess_2__pf = (b0l__K2Node_DynamicCast_AsBP_Magnetic_Placement__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess_2__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpfv__CallFunc_Array_Add_ReturnValue__pf = FCustomThunkTemplates::Array_Add(bpv__OverlappingMagnets__pf, b0l__K2Node_DynamicCast_AsBP_Magnetic_Placement__pf);
	return; //KCST_EndOfThread
}
void ABP_Firearm_Base_C__pf1418999182::bpf__ExecuteUbergraph_BP_Firearm_Base__pf_11(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 2:
			{
				__CurrentState = 3;
				break;
			}
		case 3:
			{
				bpv__SecondHandGrabbed__pf = false;
				__CurrentState = -1;
				break;
			}
		case 141:
			{
				__CurrentState = 142;
				break;
			}
		case 142:
			{
				b0l__Temp_byte_Variable__pf = EMoveComponentAction::Move;
			}
		case 143:
			{
				UKismetSystemLibrary::MoveComponentTo(bpv__Slider_SM__pf, FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), false, false, 0.100000, false, b0l__Temp_byte_Variable__pf, FLatentActionInfo(2, 655709112, TEXT("ExecuteUbergraph_BP_Firearm_Base_11"), this));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Firearm_Base_C__pf1418999182::bpf__ExecuteUbergraph_BP_Firearm_Base__pf_12(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_1__pf{};
	bool bpfv__CallFunc_K2_AttachToComponent_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 154:
			{
				__CurrentState = 155;
				break;
			}
		case 155:
			{
				if(::IsValid(bpv__SecondxHandxMesh__pfTT))
				{
					bpv__SecondxHandxMesh__pfTT->USceneComponent::K2_DetachFromComponent(EDetachmentRule::KeepWorld, EDetachmentRule::KeepWorld, EDetachmentRule::KeepWorld, true);
				}
			}
		case 156:
			{
				if(::IsValid(bpv__SecondxHandxMesh__pfTT))
				{
					UMotionControllerComponent*  __Local__135 = ((UMotionControllerComponent*)nullptr);
					bpfv__CallFunc_K2_AttachToComponent_ReturnValue__pf = bpv__SecondxHandxMesh__pfTT->USceneComponent::K2_AttachToComponent(((::IsValid(bpv__SecondxHandxMotionxController__pfTTT)) ? (bpv__SecondxHandxMotionxController__pfTTT->bpv__MotionController__pf) : (__Local__135)), FName(), EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::KeepWorld, true);
				}
			}
		case 157:
			{
				if(::IsValid(bpv__SecondxHandxMesh__pfTT))
				{
					bpv__SecondxHandxMesh__pfTT->USceneComponent::K2_SetRelativeRotation(FRotator(0.000000,0.000000,-90.000000), false, /*out*/ b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult_2__pf, false);
				}
			}
		case 158:
			{
				if(::IsValid(bpv__SecondxHandxMesh__pfTT))
				{
					bpv__SecondxHandxMesh__pfTT->USceneComponent::K2_SetRelativeLocation(FVector(-15.000000,0.000000,0.000000), false, /*out*/ b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult_2__pf, false);
				}
			}
		case 159:
			{
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_1__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(bpv__dominantHand__pf), static_cast<uint8>(EControllerHand::Left));
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue_1__pf)
				{
					__CurrentState = 161;
					break;
				}
			}
		case 160:
			{
				if(::IsValid(bpv__Firearm_SM__pf))
				{
					bpv__Firearm_SM__pf->USceneComponent::K2_SetRelativeRotation(FRotator(0.000000,0.000000,0.000000), false, /*out*/ b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf, false);
				}
				__CurrentState = -1;
				break;
			}
		case 161:
			{
				if(::IsValid(bpv__Firearm_SM__pf))
				{
					bpv__Firearm_SM__pf->USceneComponent::K2_SetRelativeRotation(FRotator(0.000000,0.000000,180.000000), false, /*out*/ b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult_1__pf, false);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Firearm_Base_C__pf1418999182::bpf__ExecuteUbergraph_BP_Firearm_Base__pf_13(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 33:
			{
				if (!bpv__isFiring__pf)
				{
					__CurrentState = 34;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 34:
			{
				b0l__K2Node_SwitchEnum_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__loadType__pf), static_cast<uint8>(E__E_LoadType__pf::NewEnumerator0));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess_1__pf)
				{
					__CurrentState = 38;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__loadType__pf), static_cast<uint8>(E__E_LoadType__pf::NewEnumerator2));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess_1__pf)
				{
					__CurrentState = 38;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__loadType__pf), static_cast<uint8>(E__E_LoadType__pf::NewEnumerator3));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess_1__pf)
				{
					__CurrentState = 38;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__loadType__pf), static_cast<uint8>(E__E_LoadType__pf::NewEnumerator4));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess_1__pf)
				{
					__CurrentState = 38;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess_1__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__loadType__pf), static_cast<uint8>(E__E_LoadType__pf::NewEnumerator1));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess_1__pf)
				{
					__CurrentState = 35;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 35:
			{
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpv__currentAmmo__pf, 1);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 36:
			{
				bpv__isLoaded__pf = false;
			}
		case 37:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("BP_Firearm_Base: magazine has been dropped")), true, true, FLinearColor(0.042945,0.000000,1.000000,1.000000), 15.000000);
				__CurrentState = -1;
				break;
			}
		case 38:
			{
				bpv__currentAmmo__pf = 0;
			}
		case 39:
			{
				if(::IsValid(bpv__magazineObj__pf))
				{
					bpv__magazineObj__pf->AActor::K2_DetachFromActor(EDetachmentRule::KeepWorld, EDetachmentRule::KeepWorld, EDetachmentRule::KeepWorld);
				}
			}
		case 40:
			{
				if(::IsValid(bpv__magazineObj__pf) && ::IsValid(bpv__magazineObj__pf->bpv__Ammo_SM__pf))
				{
					bpv__magazineObj__pf->bpv__Ammo_SM__pf->SetSimulatePhysics(true);
				}
				__CurrentState = 36;
				break;
			}
		case 124:
			{
				__CurrentState = 33;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Firearm_Base_C__pf1418999182::bpf__ExecuteUbergraph_BP_Firearm_Base__pf_14(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 166);
	return; //KCST_EndOfThread
}
void ABP_Firearm_Base_C__pf1418999182::bpf__ExecuteUbergraph_BP_Firearm_Base__pf_15(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 165);
	return; //KCST_EndOfThread
}
void ABP_Firearm_Base_C__pf1418999182::bpf__ExecuteUbergraph_BP_Firearm_Base__pf_16(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 164);
	return; //KCST_EndOfThread
}
void ABP_Firearm_Base_C__pf1418999182::bpf__ExecuteUbergraph_BP_Firearm_Base__pf_17(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 162);
	return; //KCST_EndOfThread
}
void ABP_Firearm_Base_C__pf1418999182::bpf__ExecuteUbergraph_BP_Firearm_Base__pf_18(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 29:
			{
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__currentFireMode__pf), static_cast<uint8>(E__E_FireMode__pf::NewEnumerator0));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 31;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__currentFireMode__pf), static_cast<uint8>(E__E_FireMode__pf::NewEnumerator2));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 30;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 30:
			{
				bpv__currentFireMode__pf = E__E_FireMode__pf::NewEnumerator0;
				__CurrentState = -1;
				break;
			}
		case 31:
			{
				bpv__currentFireMode__pf = E__E_FireMode__pf::NewEnumerator2;
				__CurrentState = -1;
				break;
			}
		case 32:
			{
				if (!bpv__isFiring__pf)
				{
					__CurrentState = 29;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 145:
			{
				if (!bpv__canAutomatic__pf)
				{
					__CurrentState = -1;
					break;
				}
				__CurrentState = 32;
				break;
			}
		case 153:
			{
				__CurrentState = 145;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Firearm_Base_C__pf1418999182::bpf__ExecuteUbergraph_BP_Firearm_Base__pf_19(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 147);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ObjectObject(b0l__K2Node_ComponentBoundEvent_OtherComp_2__pf, bpv__Slider_Collider__pf);
	if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if (!bpv__CockedBack__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpv__CockedBack__pf = false;
	// optimized KCST_UnconditionalGoto
	bpv__canFire__pf = true;
	return; //KCST_EndOfThread
}
void ABP_Firearm_Base_C__pf1418999182::bpf__ExecuteUbergraph_BP_Firearm_Base__pf_20(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_1__pf{};
	check(bpp__EntryPoint__pf == 138);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_1__pf = UKismetMathLibrary::EqualEqual_ObjectObject(b0l__K2Node_ComponentBoundEvent_OtherComp_3__pf, bpv__Slider_Collider__pf);
	if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue_1__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpv__CockedBack__pf = true;
	return; //KCST_EndOfThread
}
void ABP_Firearm_Base_C__pf1418999182::bpf__ExecuteUbergraph_BP_Firearm_Base__pf_21(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 122);
	// optimized KCST_UnconditionalGoto
	if (!bpv__FirstHandGrabbed__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	// optimized KCST_UnconditionalGoto
	bpf__ReleasexMagazine__pfT();
	return; //KCST_EndOfThread
}
void ABP_Firearm_Base_C__pf1418999182::bpf__ExecuteUbergraph_BP_Firearm_Base__pf_22(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 119);
	// optimized KCST_UnconditionalGoto
	if (!bpv__FirstHandGrabbed__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpf__ChangexFirexMode__pfTT();
	return; //KCST_EndOfThread
}
void ABP_Firearm_Base_C__pf1418999182::bpf__ExecuteUbergraph_BP_Firearm_Base__pf_23(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 125);
	return; //KCST_EndOfThread
}
void ABP_Firearm_Base_C__pf1418999182::bpf__ExecuteUbergraph_BP_Firearm_Base__pf_24(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 1);
	return; //KCST_EndOfThread
}
void ABP_Firearm_Base_C__pf1418999182::bpf__ShootRelease__pf()
{
	bpf__ExecuteUbergraph_BP_Firearm_Base__pf_7(176);
}
void ABP_Firearm_Base_C__pf1418999182::bpf__BndEvt__BP_Firearm_Base_MagnetCollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf)
{
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = bpp__OtherBodyIndex__pf;
	bpf__ExecuteUbergraph_BP_Firearm_Base__pf_9(173);
}
void ABP_Firearm_Base_C__pf1418999182::bpf__BndEvt__BP_Firearm_Base_MagnetCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__136;
	T__Local__136& bpp__SweepResult__pf = *const_cast<T__Local__136 *>(&bpp__SweepResult__pf__const);
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent_1__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor_1__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp_1__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex_1__pf = bpp__OtherBodyIndex__pf;
	b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = bpp__bFromSweep__pf;
	b0l__K2Node_ComponentBoundEvent_SweepResult__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_BP_Firearm_Base__pf_10(170);
}
void ABP_Firearm_Base_C__pf1418999182::bpf__Magnetize__pf(AActor* bpp__Magnet__pf)
{
	b0l__K2Node_Event_Magnet__pf = bpp__Magnet__pf;
	bpf__ExecuteUbergraph_BP_Firearm_Base__pf_4(167);
}
void ABP_Firearm_Base_C__pf1418999182::bpf__SecondHandRelease__pf()
{
	bpf__ExecuteUbergraph_BP_Firearm_Base__pf_12(154);
}
void ABP_Firearm_Base_C__pf1418999182::bpf__Reload__pf(ABP_AmmoBase_C__pf1418999182* bpp__BP_AmmoBase__pf, int32 bpp__MagazinexBase__pfT)
{
	b0l__K2Node_CustomEvent_BP_AmmoBase__pf = bpp__BP_AmmoBase__pf;
	b0l__K2Node_CustomEvent_Magazine_Base__pf = bpp__MagazinexBase__pfT;
	bpf__ExecuteUbergraph_BP_Firearm_Base__pf_2(151);
}
void ABP_Firearm_Base_C__pf1418999182::bpf__BndEvt__BPC_Shotgun_Slider_ForwardPosition_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__137;
	T__Local__137& bpp__SweepResult__pf = *const_cast<T__Local__137 *>(&bpp__SweepResult__pf__const);
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent_2__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor_2__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp_2__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex_2__pf = bpp__OtherBodyIndex__pf;
	b0l__K2Node_ComponentBoundEvent_bFromSweep_1__pf = bpp__bFromSweep__pf;
	b0l__K2Node_ComponentBoundEvent_SweepResult_1__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_BP_Firearm_Base__pf_19(147);
}
void ABP_Firearm_Base_C__pf1418999182::bpf__SliderRevertPosition__pf()
{
	bpf__ExecuteUbergraph_BP_Firearm_Base__pf_11(141);
}
void ABP_Firearm_Base_C__pf1418999182::bpf__BndEvt__BP_Firearm_Base_Slider_Stopper_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__138;
	T__Local__138& bpp__SweepResult__pf = *const_cast<T__Local__138 *>(&bpp__SweepResult__pf__const);
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent_3__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor_3__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp_3__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex_3__pf = bpp__OtherBodyIndex__pf;
	b0l__K2Node_ComponentBoundEvent_bFromSweep_2__pf = bpp__bFromSweep__pf;
	b0l__K2Node_ComponentBoundEvent_SweepResult_2__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_BP_Firearm_Base__pf_20(138);
}
void ABP_Firearm_Base_C__pf1418999182::bpf__ReleaseMagazine__pf()
{
	bpf__ExecuteUbergraph_BP_Firearm_Base__pf_21(122);
}
void ABP_Firearm_Base_C__pf1418999182::bpf__ChangeFiremode__pf()
{
	bpf__ExecuteUbergraph_BP_Firearm_Base__pf_22(119);
}
void ABP_Firearm_Base_C__pf1418999182::bpf__Shoot__pf(E__E_Hands__pf bpp__Hand__pf)
{
	b0l__K2Node_Event_Hand__pf = bpp__Hand__pf;
	bpf__ExecuteUbergraph_BP_Firearm_Base__pf_1(115);
}
void ABP_Firearm_Base_C__pf1418999182::bpf__Release__pf(EControllerHand bpp__NewParam__pf)
{
	b0l__K2Node_Event_NewParam__pf = bpp__NewParam__pf;
	bpf__ExecuteUbergraph_BP_Firearm_Base__pf_6(111);
}
void ABP_Firearm_Base_C__pf1418999182::bpf__Grab__pf(FName bpp__HandSocket__pf, USceneComponent* bpp__AttachToMe__pf, AActor* bpp__Actor__pf)
{
	b0l__K2Node_Event_HandSocket__pf = bpp__HandSocket__pf;
	b0l__K2Node_Event_AttachToMe__pf = bpp__AttachToMe__pf;
	b0l__K2Node_Event_Actor__pf = bpp__Actor__pf;
	bpf__ExecuteUbergraph_BP_Firearm_Base__pf_5(89);
}
void ABP_Firearm_Base_C__pf1418999182::bpf__ReleasexMagazine__pfT()
{
	bpf__ExecuteUbergraph_BP_Firearm_Base__pf_13(124);
}
void ABP_Firearm_Base_C__pf1418999182::bpf__ChangexFirexMode__pfTT()
{
	bpf__ExecuteUbergraph_BP_Firearm_Base__pf_18(153);
}
void ABP_Firearm_Base_C__pf1418999182::bpf__Pickup__pf(USceneComponent* bpp__AttachTo__pf)
{
	b0l__K2Node_Event_AttachTo__pf = bpp__AttachTo__pf;
	bpf__ExecuteUbergraph_BP_Firearm_Base__pf_17(162);
}
void ABP_Firearm_Base_C__pf1418999182::bpf__Fire__pf()
{
	bpf__ExecuteUbergraph_BP_Firearm_Base__pf_0(163);
}
void ABP_Firearm_Base_C__pf1418999182::bpf__Drop__pf()
{
	bpf__ExecuteUbergraph_BP_Firearm_Base__pf_16(164);
}
void ABP_Firearm_Base_C__pf1418999182::bpf__TakeDamageActor__pf(int32 bpp__DamageAmount__pf, AActor* bpp__DamagingActor__pf)
{
	b0l__K2Node_Event_DamageAmount__pf = bpp__DamageAmount__pf;
	b0l__K2Node_Event_DamagingActor__pf = bpp__DamagingActor__pf;
	bpf__ExecuteUbergraph_BP_Firearm_Base__pf_15(165);
}
void ABP_Firearm_Base_C__pf1418999182::bpf__TakeDamage__pf(int32 bpp__DamageAmount__pf)
{
	b0l__K2Node_Event_DamageAmount_1__pf = bpp__DamageAmount__pf;
	bpf__ExecuteUbergraph_BP_Firearm_Base__pf_14(166);
}
void ABP_Firearm_Base_C__pf1418999182::bpf__Timeline_0__UpdateFunc__pf()
{
	bpf__ExecuteUbergraph_BP_Firearm_Base__pf_8(67);
}
void ABP_Firearm_Base_C__pf1418999182::bpf__Timeline_0__FinishedFunc__pf()
{
	bpf__ExecuteUbergraph_BP_Firearm_Base__pf_23(125);
}
void ABP_Firearm_Base_C__pf1418999182::bpf__SliderMovementTimeline__UpdateFunc__pf()
{
	bpf__ExecuteUbergraph_BP_Firearm_Base__pf_3(177);
}
void ABP_Firearm_Base_C__pf1418999182::bpf__SliderMovementTimeline__FinishedFunc__pf()
{
	bpf__ExecuteUbergraph_BP_Firearm_Base__pf_24(1);
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Firearm_Base_C__pf1418999182::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{102, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  NiagaraSystem /Game/VisualEffects/Niagara/NS_muzzle_flash.NS_muzzle_flash 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Firearm_Base_C__pf1418999182::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{157, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Interfaces/BPI_TakeDamage.BPI_TakeDamage_C 
		{170, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/VirtualRealityBP/Blueprints/PickupActorInterface.PickupActorInterface_C 
		{167, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Interfaces/BPI_GrabbableObj.BPI_GrabbableObj_C 
		{171, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Interfaces/BPI_WeaponControls.BPI_WeaponControls_C 
		{164, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Interfaces/BPI_Magnetic.BPI_Magnetic_C 
		{27, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{68, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.BoxComponent 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{5, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.ArrowComponent 
		{101, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Niagara.NiagaraComponent 
		{4, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneComponent 
		{9, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/Engine.EObjectTypeQuery 
		{6, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Actor 
		{69, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/InputCore.EControllerHand 
		{10, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{103, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/Engine.EMoveComponentAction 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{104, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/Engine.ECollisionChannel 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  DelegateFunction /Script/Engine.TimerDynamicDelegate__DelegateSignature 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{105, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.TimelineComponent 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.GameplayStatics 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{90, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Niagara.NiagaraFunctionLibrary 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/HeadMountedDisplay.MotionControllerComponent 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{23, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{91, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Enum /Script/Engine.ETimelineDirection 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/Meshes/Placeholder/Player_Generic/SM_FP_Gear_Whitebox.SM_FP_Gear_Whitebox 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.ChildActorComponent 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SphereComponent 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.MeshComponent 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.ActorComponent 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/VirtualReality/Meshes/BeamMesh.BeamMesh 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Material /Game/VirtualReality/Materials/M_SplineArcMat.M_SplineArcMat 
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
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.AnimInstance 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PlayerController 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  HapticFeedbackEffect_Curve /Game/VirtualRealityBP/Blueprints/MotionControllerHaptics.MotionControllerHaptics 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SplineMeshComponent 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/NavigationSystem.NavigationSystemV1 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.KismetNodeHelperLibrary 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked_OneSided.Widget3DPassThrough_Masked_OneSided 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.UserWidget 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.CameraComponent 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.Character 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Characters/BPC_Famine.BPC_Famine_C 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BPC_Famine_C /Game/Blueprints/Characters/BPC_Famine.Default__BPC_Famine_C 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Characters/BPC_Death.BPC_Death_C 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BPC_Death_C /Game/Blueprints/Characters/BPC_Death.Default__BPC_Death_C 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Characters/BPC_Conquest.BPC_Conquest_C 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BPC_Conquest_C /Game/Blueprints/Characters/BPC_Conquest.Default__BPC_Conquest_C 
		{92, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/Meshes/Placeholder/Weapons/Pistol/OLD/Pistol_Magazine_Whitebox_Low.Pistol_Magazine_Whitebox_Low 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.WidgetComponent 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent.Widget3DPassThrough_Translucent 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent_OneSided.Widget3DPassThrough_Translucent_OneSided 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque.Widget3DPassThrough_Opaque 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque_OneSided.Widget3DPassThrough_Opaque_OneSided 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked.Widget3DPassThrough_Masked 
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
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/Meshes/Placeholder/Weapons/Pistol/Pistol_Main.Pistol_Main 
		{110, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  StaticMesh /Game/Meshes/Placeholder/Weapons/Pistol/Pistol_Lever.Pistol_Lever 
		{111, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Weapons/BPC_Shotgun_Shell.BPC_Shotgun_Shell_C 
		{112, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BPC_Shotgun_Shell_C /Game/Blueprints/Weapons/BPC_Shotgun_Shell.Default__BPC_Shotgun_Shell_C 
		{113, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Weapons/BPC_SMG_Magazine.BPC_SMG_Magazine_C 
		{114, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BPC_SMG_Magazine_C /Game/Blueprints/Weapons/BPC_SMG_Magazine.Default__BPC_SMG_Magazine_C 
		{115, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Weapons/BPC_DMR_Magazine.BPC_DMR_Magazine_C 
		{116, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BPC_DMR_Magazine_C /Game/Blueprints/Weapons/BPC_DMR_Magazine.Default__BPC_DMR_Magazine_C 
		{117, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Weapons/BPC_Rifle_Magazine.BPC_Rifle_Magazine_C 
		{118, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BPC_Rifle_Magazine_C /Game/Blueprints/Weapons/BPC_Rifle_Magazine.Default__BPC_Rifle_Magazine_C 
		{119, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Weapons/BPC_Pistol_Magazine.BPC_Pistol_Magazine_C 
		{120, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BPC_Pistol_Magazine_C /Game/Blueprints/Weapons/BPC_Pistol_Magazine.Default__BPC_Pistol_Magazine_C 
		{147, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/GrabbableObjectSocket.GrabbableObjectSocket_C 
		{145, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/VirtualRealityBP/Blueprints/BP_MotionController.BP_MotionController_C 
		{172, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Weapons/BP_BulletBase.BP_BulletBase_C 
		{173, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Weapons/BP_AmmoBase.BP_AmmoBase_C 
		{146, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Tools/BP_MagneticPlacement.BP_MagneticPlacement_C 
		{174, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Interfaces/BPI_Shootable.BPI_Shootable_C 
		{175, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Characters/Gear/BP_PlayerGear.BP_PlayerGear_C 
		{176, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Blueprints/Enums/E_Hands.E_Hands 
		{165, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Blueprints/Tools/ENUM_ObjectType.ENUM_ObjectType 
		{177, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Blueprints/Enums/E_FireMode.E_FireMode 
		{169, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Blueprints/Enums/E_LoadType.E_LoadType 
		{148, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Meshes/Placeholder/Player_Generic/Hand_Positions_Enum.Hand_Positions_Enum 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ABP_Firearm_Base_C__pf1418999182
{
	FRegisterHelper__ABP_Firearm_Base_C__pf1418999182()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprints/Weapons/BP_Firearm_Base"), &ABP_Firearm_Base_C__pf1418999182::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_Firearm_Base_C__pf1418999182 Instance;
};
FRegisterHelper__ABP_Firearm_Base_C__pf1418999182 FRegisterHelper__ABP_Firearm_Base_C__pf1418999182::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
