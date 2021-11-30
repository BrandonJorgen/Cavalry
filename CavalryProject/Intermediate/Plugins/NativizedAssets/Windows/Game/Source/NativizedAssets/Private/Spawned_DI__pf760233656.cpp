#include "NativizedAssets.h"
#include "Spawned_DI__pf760233656.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
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
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/EditorFramework/ThumbnailInfo.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionComment.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionMaterialFunctionCall.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionInput.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionOutput.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
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
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/CustomAttributes.h"
#include "Runtime/Engine/Classes/Curves/StringCurve.h"
#include "Runtime/Engine/Classes/Curves/IntegralCurve.h"
#include "Runtime/Engine/Classes/Curves/SimpleCurve.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/CoreUObject/Public/UObject/CoreNetTypes.h"
#include "Runtime/Engine/Classes/Engine/Breakpoint.h"
#include "Runtime/Engine/Public/Blueprint/BlueprintExtension.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshEditorData.h"
#include "Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h"
#include "Runtime/Engine/Public/LODSyncInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/PropertyAccess/Public/PropertyAccess.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactory.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "Runtime/Engine/Classes/Engine/PoseWatch.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/Rig.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AssetMappingTable.h"
#include "Runtime/Engine/Classes/Animation/PoseAsset.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
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
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
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
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplateInstance.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemLinker.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemGraphs.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeBase.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeSourceComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
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
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/UMG/Public/Animation/UMGSequenceTickManager.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/ReverbSettings.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Engine/BookmarkBase.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Engine/MaterialMerging.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/EngineCustomTimeStep.h"
#include "Runtime/Engine/Classes/Engine/TimecodeProvider.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieSceneColorTrack.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneColorSection.h"
#include "DamageIndicator_Actor__pf760233656.h"
#include "Runtime/UMG/Public/Components/WidgetComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureRenderTarget2D.h"
#include "Runtime/Engine/Classes/Engine/TextureRenderTarget.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperFlipbook.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperSprite.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/SpriteEditorOnlyTypes.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperSpriteAtlas.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
USpawned_DI_C__pf760233656::USpawned_DI_C__pf760233656(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__TempDamageImage__pf = nullptr;
	bpv__DamageDirection__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__DamageAnim__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(USpawned_DI_C__pf760233656::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__FrameCounter__pf = 0;
	bpv__Delay__pf = 0;
	bpv__IsPlaying__pf = false;
	bpv__Destroyx__pfzy = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void USpawned_DI_C__pf760233656::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void USpawned_DI_C__pf760233656::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(ADamageIndicator_Actor_C__pf760233656::StaticClass());
	extern UClass* Z_Construct_UClass_UBPI_DamageDirection_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UBPI_DamageDirection_C());
	extern UClass* Z_Construct_UClass_UBPI_TakeDamage_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UBPI_TakeDamage_C());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("FADE_IN_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	auto __Local__2 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("FADE_OUT_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__2);
	auto __Local__3 = NewObject<UCanvasPanel>(__Local__0, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__4 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__3), UPanelWidget::__PPO__Slots() )));
	__Local__4 = TArray<UPanelSlot*> ();
	__Local__4.Reserve(1);
	auto __Local__5 = NewObject<UCanvasPanelSlot>(__Local__3, TEXT("CanvasPanelSlot_6"), (EObjectFlags)0x00280008);
	__Local__5->LayoutData.Offsets.Left = 704.000000f;
	__Local__5->LayoutData.Offsets.Top = -50.000000f;
	__Local__5->LayoutData.Offsets.Right = 512.000000f;
	__Local__5->LayoutData.Offsets.Bottom = 512.000000f;
	__Local__5->Parent = __Local__3;
	auto __Local__6 = NewObject<UImage>(__Local__0, TEXT("TempDamageImage"), (EObjectFlags)0x00280008);
	__Local__6->Brush.ImageSize = FVector2D(1920.000000, 1080.000000);
	auto& __Local__7 = (*(AccessPrivateProperty<UObject* >(&(__Local__6->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__7 = CastChecked<UObject>(CastChecked<UDynamicClass>(USpawned_DI_C__pf760233656::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__6->Slot = __Local__5;
	__Local__5->Content = __Local__6;
	__Local__4.Add(__Local__5);
	__Local__0->RootWidget = __Local__3;
	auto __Local__8 = NewObject<UMovieScene>(__Local__1, TEXT("FADE_IN"), (EObjectFlags)0x00280008);
	auto& __Local__9 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__8), UMovieScene::__PPO__Possessables() )));
	__Local__9 = TArray<FMovieScenePossessable> ();
	__Local__9.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__9.GetData(), 1);
	auto& __Local__10 = __Local__9[0];
	auto& __Local__11 = (*(AccessPrivateProperty<FGuid >(&(__Local__10), FMovieScenePossessable::__PPO__Guid() )));
	__Local__11 = FGuid(0x715A2340, 0x4CBA584B, 0x029F0F80, 0xF5D2C1B2);
	auto& __Local__12 = (*(AccessPrivateProperty<FString >(&(__Local__10), FMovieScenePossessable::__PPO__Name() )));
	__Local__12 = FString(TEXT("TempDamageImage"));
	auto& __Local__13 = (*(AccessPrivateProperty<UClass* >(&(__Local__10), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__13 = UImage::StaticClass();
	auto& __Local__14 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__8), UMovieScene::__PPO__ObjectBindings() )));
	__Local__14 = TArray<FMovieSceneBinding> ();
	__Local__14.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__14.GetData(), 1);
	auto& __Local__15 = __Local__14[0];
	auto& __Local__16 = (*(AccessPrivateProperty<FGuid >(&(__Local__15), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__16 = FGuid(0x715A2340, 0x4CBA584B, 0x029F0F80, 0xF5D2C1B2);
	auto& __Local__17 = (*(AccessPrivateProperty<FString >(&(__Local__15), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__17 = FString(TEXT("TempDamageImage"));
	auto& __Local__18 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__15), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__18 = TArray<UMovieSceneTrack*> ();
	__Local__18.Reserve(1);
	auto __Local__19 = NewObject<UMovieSceneColorTrack>(__Local__8, TEXT("MovieSceneColorTrack_2"), (EObjectFlags)0x00280008);
	auto& __Local__20 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__19), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__20.PropertyName = FName(TEXT("ColorAndOpacity"));
	__Local__20.PropertyPath = FName(TEXT("ColorAndOpacity"));
	__Local__20.bCanUseClassLookup = true;
	auto& __Local__21 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__19), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__21 = TArray<UMovieSceneSection*> ();
	__Local__21.Reserve(1);
	auto __Local__22 = NewObject<UMovieSceneColorSection>(__Local__19, TEXT("MovieSceneColorSection_0"), (EObjectFlags)0x00280008);
	auto __Local__23 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__22->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__24 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__22->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__23)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__24)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__25 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__22), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	auto& __Local__26 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__25), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__26 = TArray<FFrameNumber> ();
	__Local__26.Reserve(2);
	__Local__26.Add(FFrameNumber{});
	__Local__26.Add(FFrameNumber{});
	__Local__26[1].Value = 30000;
	auto& __Local__27 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__25), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__27 = TArray<FMovieSceneFloatValue> ();
	__Local__27.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__27.GetData(), 2);
	auto& __Local__28 = __Local__27[0];
	auto& __Local__29 = __Local__27[1];
	__Local__29.Value = 10.000000f;
	__Local__22->Easing.EaseIn = __Local__23;
	__Local__22->Easing.EaseOut = __Local__24;
	__Local__22->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Inclusive(30000)));
	auto& __Local__30 = (*(AccessPrivateProperty<FGuid >((__Local__22), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__30 = FGuid(0x49FFADBB, 0x42057527, 0x8B1F1D81, 0x578209A0);
	__Local__21.Add(__Local__22);
	auto& __Local__31 = (*(AccessPrivateProperty<FGuid >((__Local__19), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__31 = FGuid(0xDFE80E47, 0x42265BE6, 0xFCFB50BB, 0x64973B66);
	auto& __Local__32 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__19), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__32.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__32.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__32.Entries.GetData(), 1);
	auto& __Local__33 = __Local__32.Entries[0];
	__Local__33.Section = __Local__22;
	static TWeakFieldPtr<FProperty> __Local__35{};
	const FProperty* __Local__34 = __Local__35.Get();
	if (nullptr == __Local__34)
	{
		__Local__34 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRange"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("LowerBound")));
		check(__Local__34);
		__Local__35 = __Local__34;
	}
	auto& __Local__36 = (*(__Local__34->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__33.Range), 0)));
	static TWeakFieldPtr<FProperty> __Local__38{};
	const FProperty* __Local__37 = __Local__38.Get();
	if (nullptr == __Local__37)
	{
		__Local__37 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRangeBound"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Type")));
		check(__Local__37);
		__Local__38 = __Local__37;
	}
	auto& __Local__39 = (*(__Local__37->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__36), 0)));
	__Local__39 = ERangeBoundTypes::Type::Inclusive;
	static TWeakFieldPtr<FProperty> __Local__41{};
	const FProperty* __Local__40 = __Local__41.Get();
	if (nullptr == __Local__40)
	{
		__Local__40 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRange"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("UpperBound")));
		check(__Local__40);
		__Local__41 = __Local__40;
	}
	auto& __Local__42 = (*(__Local__40->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__33.Range), 0)));
	auto& __Local__43 = (*(__Local__37->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__42), 0)));
	__Local__43 = ERangeBoundTypes::Type::Inclusive;
	static TWeakFieldPtr<FProperty> __Local__45{};
	const FProperty* __Local__44 = __Local__45.Get();
	if (nullptr == __Local__44)
	{
		__Local__44 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRangeBound"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Value")));
		check(__Local__44);
		__Local__45 = __Local__44;
	}
	auto& __Local__46 = (*(__Local__44->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__42), 0)));
	__Local__46.Value = 30000;
	__Local__33.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__47 = (*(AccessPrivateProperty<FGuid >((__Local__19), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__47 = FGuid(0xDFE80E47, 0x42265BE6, 0xFCFB50BB, 0x64973B66);
	__Local__18.Add(__Local__19);
	auto& __Local__48 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__8), UMovieScene::__PPO__PlaybackRange() )));
	__Local__48 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(30001)));
	auto& __Local__49 = (*(AccessPrivateProperty<FFrameRate >((__Local__8), UMovieScene::__PPO__DisplayRate() )));
	static TWeakFieldPtr<FProperty> __Local__51{};
	const FProperty* __Local__50 = __Local__51.Get();
	if (nullptr == __Local__50)
	{
		__Local__50 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameRate"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Numerator")));
		check(__Local__50);
		__Local__51 = __Local__50;
	}
	auto& __Local__52 = (*(__Local__50->ContainerPtrToValuePtr<int32 >(&(__Local__49), 0)));
	__Local__52 = 20;
	auto& __Local__53 = (*(AccessPrivateProperty<TArray<FMovieSceneMarkedFrame> >((__Local__8), UMovieScene::__PPO__MarkedFrames() )));
	__Local__53 = TArray<FMovieSceneMarkedFrame> ();
	__Local__53.AddUninitialized(1);
	FMovieSceneMarkedFrame::StaticStruct()->InitializeStruct(__Local__53.GetData(), 1);
	auto& __Local__54 = __Local__53[0];
	__Local__54.FrameNumber.Value = -3000;
	__Local__54.Label = FString(TEXT("A"));
	auto& __Local__55 = (*(AccessPrivateProperty<FGuid >((__Local__8), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__55 = FGuid(0x64B3FF6D, 0x4D775EA4, 0x9F8800B7, 0x533E0E3E);
	__Local__1->MovieScene = __Local__8;
	__Local__1->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__1->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__1->AnimationBindings.GetData(), 1);
	auto& __Local__56 = __Local__1->AnimationBindings[0];
	__Local__56.WidgetName = FName(TEXT("TempDamageImage"));
	__Local__56.AnimationGuid = FGuid(0x715A2340, 0x4CBA584B, 0x029F0F80, 0xF5D2C1B2);
	auto& __Local__57 = (*(AccessPrivateProperty<FString >((__Local__1), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__57 = FString(TEXT("FADE_IN"));
	__Local__1->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__58 = (*(AccessPrivateProperty<FGuid >((__Local__1), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__58 = FGuid(0xFFD511A5, 0x42D5970A, 0x17FE2380, 0x3FA0EA19);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__1);
	auto __Local__59 = NewObject<UMovieScene>(__Local__2, TEXT("FADE_OUT"), (EObjectFlags)0x00280008);
	auto& __Local__60 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__59), UMovieScene::__PPO__Possessables() )));
	__Local__60 = TArray<FMovieScenePossessable> ();
	__Local__60.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__60.GetData(), 1);
	auto& __Local__61 = __Local__60[0];
	auto& __Local__62 = (*(AccessPrivateProperty<FGuid >(&(__Local__61), FMovieScenePossessable::__PPO__Guid() )));
	__Local__62 = FGuid(0x9BB2DEB2, 0x4171C783, 0x69F46A9C, 0x4FE7760D);
	auto& __Local__63 = (*(AccessPrivateProperty<FString >(&(__Local__61), FMovieScenePossessable::__PPO__Name() )));
	__Local__63 = FString(TEXT("TempDamageImage"));
	auto& __Local__64 = (*(AccessPrivateProperty<UClass* >(&(__Local__61), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__64 = UImage::StaticClass();
	auto& __Local__65 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__59), UMovieScene::__PPO__ObjectBindings() )));
	__Local__65 = TArray<FMovieSceneBinding> ();
	__Local__65.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__65.GetData(), 1);
	auto& __Local__66 = __Local__65[0];
	auto& __Local__67 = (*(AccessPrivateProperty<FGuid >(&(__Local__66), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__67 = FGuid(0x9BB2DEB2, 0x4171C783, 0x69F46A9C, 0x4FE7760D);
	auto& __Local__68 = (*(AccessPrivateProperty<FString >(&(__Local__66), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__68 = FString(TEXT("TempDamageImage"));
	auto& __Local__69 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__66), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__69 = TArray<UMovieSceneTrack*> ();
	__Local__69.Reserve(1);
	auto __Local__70 = NewObject<UMovieSceneColorTrack>(__Local__59, TEXT("MovieSceneColorTrack_1"), (EObjectFlags)0x00280008);
	auto& __Local__71 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__70), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__71.PropertyName = FName(TEXT("ColorAndOpacity"));
	__Local__71.PropertyPath = FName(TEXT("ColorAndOpacity"));
	__Local__71.bCanUseClassLookup = true;
	auto& __Local__72 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__70), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__72 = TArray<UMovieSceneSection*> ();
	__Local__72.Reserve(1);
	auto __Local__73 = NewObject<UMovieSceneColorSection>(__Local__70, TEXT("MovieSceneColorSection_0"), (EObjectFlags)0x00280008);
	auto __Local__74 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__73->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__75 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__73->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__74)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__75)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__76 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__73), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	auto& __Local__77 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__76), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__77 = TArray<FFrameNumber> ();
	__Local__77.Reserve(2);
	__Local__77.Add(FFrameNumber{});
	__Local__77.Add(FFrameNumber{});
	__Local__77[1].Value = 30000;
	auto& __Local__78 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__76), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__78 = TArray<FMovieSceneFloatValue> ();
	__Local__78.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__78.GetData(), 2);
	auto& __Local__79 = __Local__78[0];
	__Local__79.Value = 10.000000f;
	auto& __Local__80 = __Local__78[1];
	__Local__73->Easing.EaseIn = __Local__74;
	__Local__73->Easing.EaseOut = __Local__75;
	__Local__73->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Inclusive(30000)));
	auto& __Local__81 = (*(AccessPrivateProperty<FGuid >((__Local__73), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__81 = FGuid(0x1F78C24D, 0x46E96323, 0xD418E1AE, 0x18A36631);
	__Local__72.Add(__Local__73);
	auto& __Local__82 = (*(AccessPrivateProperty<FGuid >((__Local__70), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__82 = FGuid(0xBC672924, 0x43F5E772, 0x4C0FFDB0, 0xB210FC21);
	auto& __Local__83 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__70), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__83.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__83.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__83.Entries.GetData(), 1);
	auto& __Local__84 = __Local__83.Entries[0];
	__Local__84.Section = __Local__73;
	auto& __Local__85 = (*(__Local__34->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__84.Range), 0)));
	auto& __Local__86 = (*(__Local__37->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__85), 0)));
	__Local__86 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__87 = (*(__Local__40->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__84.Range), 0)));
	auto& __Local__88 = (*(__Local__37->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__87), 0)));
	__Local__88 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__89 = (*(__Local__44->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__87), 0)));
	__Local__89.Value = 30000;
	__Local__84.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__90 = (*(AccessPrivateProperty<FGuid >((__Local__70), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__90 = FGuid(0xBC672924, 0x43F5E772, 0x4C0FFDB0, 0xB210FC21);
	__Local__69.Add(__Local__70);
	auto& __Local__91 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__59), UMovieScene::__PPO__PlaybackRange() )));
	__Local__91 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(30001)));
	auto& __Local__92 = (*(AccessPrivateProperty<FFrameRate >((__Local__59), UMovieScene::__PPO__DisplayRate() )));
	auto& __Local__93 = (*(__Local__50->ContainerPtrToValuePtr<int32 >(&(__Local__92), 0)));
	__Local__93 = 20;
	auto& __Local__94 = (*(AccessPrivateProperty<FGuid >((__Local__59), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__94 = FGuid(0x7A2A022C, 0x4CB88F7F, 0x9E553195, 0xDBF5B65A);
	__Local__2->MovieScene = __Local__59;
	__Local__2->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__2->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__2->AnimationBindings.GetData(), 1);
	auto& __Local__95 = __Local__2->AnimationBindings[0];
	__Local__95.WidgetName = FName(TEXT("TempDamageImage"));
	__Local__95.AnimationGuid = FGuid(0x9BB2DEB2, 0x4171C783, 0x69F46A9C, 0x4FE7760D);
	auto& __Local__96 = (*(AccessPrivateProperty<FString >((__Local__2), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__96 = FString(TEXT("FADE_OUT"));
	__Local__2->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__97 = (*(AccessPrivateProperty<FGuid >((__Local__2), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__97 = FGuid(0x9CEF4CA6, 0x4CCCF651, 0xD9714BAA, 0xA554A0EC);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__2);
}
PRAGMA_ENABLE_OPTIMIZATION
void USpawned_DI_C__pf760233656::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__98;
	SlotNames.Append(__Local__98);
}
void USpawned_DI_C__pf760233656::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__99;
	__Local__99.Reserve(2);
	__Local__99.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(USpawned_DI_C__pf760233656::StaticClass())->MiscConvertedSubobjects[1]));
	__Local__99.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(USpawned_DI_C__pf760233656::StaticClass())->MiscConvertedSubobjects[2]));
	TArray<FDelegateRuntimeBinding>  __Local__100;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(USpawned_DI_C__pf760233656::StaticClass())->MiscConvertedSubobjects[0]), __Local__99, __Local__100);
}
void USpawned_DI_C__pf760233656::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void USpawned_DI_C__pf760233656::bpf__ExecuteUbergraph_Spawned_DI__pf_0(int32 bpp__EntryPoint__pf)
{
	FString bpfv__CallFunc_Conv_VectorToString_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 21);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Conv_VectorToString_ReturnValue__pf = UKismetStringLibrary::Conv_VectorToString(b0l__K2Node_Event_Source__pf);
	UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_Conv_VectorToString_ReturnValue__pf, true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::PrintString(this, FString(TEXT("Interface recieved a call")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
	return; //KCST_EndOfThread
}
void USpawned_DI_C__pf760233656::bpf__ExecuteUbergraph_Spawned_DI__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 19);
	// optimized KCST_UnconditionalGoto
	bpv__DamageDirection__pf = b0l__K2Node_CustomEvent_Widget_Direction__pf;
	return; //KCST_EndOfThread
}
void USpawned_DI_C__pf760233656::bpf__ExecuteUbergraph_Spawned_DI__pf_2(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 2:
			{
				__StateStack.Push(4);
			}
		case 3:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate__pf.BindUFunction(this,FName(TEXT("Update Direction")));
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				if(::IsValid(b0l__CallFunc_Array_Get_Item__pf))
				{
					b0l__CallFunc_Array_Get_Item__pf->bpv__UpdatexWidgetxDirection__pfTT.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 4:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
			}
		case 5:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 6:
			{
				b0l__Temp_int_Array_Index_Variable__pf = b0l__Temp_int_Loop_Counter_Variable__pf;
				__CurrentState = 2;
				break;
			}
		case 7:
			{
				b0l__Temp_int_Array_Index_Variable__pf = 0;
				__CurrentState = 5;
				break;
			}
		case 8:
			{
				b0l__Temp_int_Loop_Counter_Variable__pf = 0;
				__CurrentState = 7;
				break;
			}
		case 17:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, ADamageIndicator_Actor_C__pf760233656::StaticClass(), /*out*/ TArrayCaster<ADamageIndicator_Actor_C__pf760233656*>(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf).Get<AActor*>());
				__CurrentState = 8;
				break;
			}
		case 18:
			{
				__CurrentState = 17;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void USpawned_DI_C__pf760233656::bpf__ExecuteUbergraph_Spawned_DI__pf_3(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf{};
	APlayerCameraManager* bpfv__CallFunc_GetOwningPlayerCameraManager_ReturnValue__pf{};
	AActor* bpfv__CallFunc_GetViewTarget_ReturnValue__pf{};
	FRotator bpfv__CallFunc_GetCameraRotation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Lerp_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_BoolBool_ReturnValue__pf{};
	FVector2D bpfv__CallFunc_MakeVector2D_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue_1__pf{};
	bool bpfv__CallFunc_EqualEqual_BoolBool_ReturnValue_1__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue__pf{};
	float bpfv__CallFunc_Lerp_ReturnValue_1__pf{};
	FVector2D bpfv__CallFunc_MakeVector2D_ReturnValue_1__pf(EForceInit::ForceInit);
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 12:
			{
				__CurrentState = 13;
				break;
			}
		case 13:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf = GetOwningPlayer();
				bpfv__CallFunc_GetOwningPlayerCameraManager_ReturnValue__pf = UUserWidget::GetOwningPlayerCameraManager();
				if(::IsValid(bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf))
				{
					bpfv__CallFunc_GetViewTarget_ReturnValue__pf = bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf->GetViewTarget();
				}
				if(::IsValid(bpfv__CallFunc_GetOwningPlayerCameraManager_ReturnValue__pf))
				{
					bpfv__CallFunc_GetCameraRotation_ReturnValue__pf = bpfv__CallFunc_GetOwningPlayerCameraManager_ReturnValue__pf->GetCameraRotation();
				}
				if(::IsValid(bpfv__CallFunc_GetViewTarget_ReturnValue__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = bpfv__CallFunc_GetViewTarget_ReturnValue__pf->AActor::K2_GetActorLocation();
				}
				UKismetMathLibrary::BreakRotator(bpfv__CallFunc_GetCameraRotation_ReturnValue__pf, /*out*/ b0l__CallFunc_BreakRotator_Roll__pf, /*out*/ b0l__CallFunc_BreakRotator_Pitch__pf, /*out*/ b0l__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf = UKismetMathLibrary::FindLookAtRotation(bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, bpv__DamageDirection__pf);
				UKismetMathLibrary::BreakRotator(bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf, /*out*/ b0l__CallFunc_BreakRotator_Roll_1__pf, /*out*/ b0l__CallFunc_BreakRotator_Pitch_1__pf, /*out*/ b0l__CallFunc_BreakRotator_Yaw_1__pf);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(b0l__CallFunc_BreakRotator_Yaw_1__pf, b0l__CallFunc_BreakRotator_Yaw__pf);
				UWidget::SetRenderTransformAngle(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf);
			}
		case 14:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf = GetOwningPlayer();
				bpfv__CallFunc_GetOwningPlayerCameraManager_ReturnValue__pf = UUserWidget::GetOwningPlayerCameraManager();
				if(::IsValid(bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf))
				{
					bpfv__CallFunc_GetViewTarget_ReturnValue__pf = bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf->GetViewTarget();
				}
				if(::IsValid(bpfv__CallFunc_GetOwningPlayerCameraManager_ReturnValue__pf))
				{
					bpfv__CallFunc_GetCameraRotation_ReturnValue__pf = bpfv__CallFunc_GetOwningPlayerCameraManager_ReturnValue__pf->GetCameraRotation();
				}
				if(::IsValid(bpfv__CallFunc_GetViewTarget_ReturnValue__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = bpfv__CallFunc_GetViewTarget_ReturnValue__pf->AActor::K2_GetActorLocation();
				}
				UKismetMathLibrary::BreakRotator(bpfv__CallFunc_GetCameraRotation_ReturnValue__pf, /*out*/ b0l__CallFunc_BreakRotator_Roll__pf, /*out*/ b0l__CallFunc_BreakRotator_Pitch__pf, /*out*/ b0l__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf = UKismetMathLibrary::FindLookAtRotation(bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, bpv__DamageDirection__pf);
				UKismetMathLibrary::BreakRotator(bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf, /*out*/ b0l__CallFunc_BreakRotator_Roll_1__pf, /*out*/ b0l__CallFunc_BreakRotator_Pitch_1__pf, /*out*/ b0l__CallFunc_BreakRotator_Yaw_1__pf);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(b0l__CallFunc_BreakRotator_Yaw_1__pf, b0l__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, -120.000000);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, -60.000000);
				bpfv__CallFunc_EqualEqual_BoolBool_ReturnValue__pf = UKismetMathLibrary::EqualEqual_BoolBool(bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf, bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Less_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Less_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, 120.000000);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, 60.000000);
				bpfv__CallFunc_EqualEqual_BoolBool_ReturnValue_1__pf = UKismetMathLibrary::EqualEqual_BoolBool(bpfv__CallFunc_Greater_FloatFloat_ReturnValue_1__pf, bpfv__CallFunc_Less_FloatFloat_ReturnValue_1__pf);
				bpfv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_EqualEqual_BoolBool_ReturnValue_1__pf, bpfv__CallFunc_EqualEqual_BoolBool_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanOR_ReturnValue__pf)
				{
					__CurrentState = 16;
					break;
				}
			}
		case 15:
			{
				FVector2D  __Local__101 = FVector2D(0.000000,0.000000);
				UKismetMathLibrary::BreakVector2D(((::IsValid(bpv__TempDamageImage__pf)) ? (bpv__TempDamageImage__pf->RenderTransform.Translation) : (__Local__101)), /*out*/ b0l__CallFunc_BreakVector2D_X__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y__pf);
				bpfv__CallFunc_Lerp_ReturnValue__pf = UKismetMathLibrary::Lerp(b0l__CallFunc_BreakVector2D_Y__pf, -120.000000, 1.000000);
				bpfv__CallFunc_MakeVector2D_ReturnValue__pf = UKismetMathLibrary::MakeVector2D(0.000000, bpfv__CallFunc_Lerp_ReturnValue__pf);
				b0l__K2Node_MakeStruct_WidgetTransform__pf.Translation = bpfv__CallFunc_MakeVector2D_ReturnValue__pf;
				b0l__K2Node_MakeStruct_WidgetTransform__pf.Scale = FVector2D(1.000000,1.000000);
				b0l__K2Node_MakeStruct_WidgetTransform__pf.Shear = FVector2D(0.000000,0.000000);
				b0l__K2Node_MakeStruct_WidgetTransform__pf.Angle = 0.000000;
				if(::IsValid(bpv__TempDamageImage__pf))
				{
					bpv__TempDamageImage__pf->UWidget::SetRenderTransform(b0l__K2Node_MakeStruct_WidgetTransform__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 16:
			{
				FVector2D  __Local__102 = FVector2D(0.000000,0.000000);
				UKismetMathLibrary::BreakVector2D(((::IsValid(bpv__TempDamageImage__pf)) ? (bpv__TempDamageImage__pf->RenderTransform.Translation) : (__Local__102)), /*out*/ b0l__CallFunc_BreakVector2D_X_1__pf, /*out*/ b0l__CallFunc_BreakVector2D_Y_1__pf);
				bpfv__CallFunc_Lerp_ReturnValue_1__pf = UKismetMathLibrary::Lerp(b0l__CallFunc_BreakVector2D_Y_1__pf, -50.000000, 1.000000);
				bpfv__CallFunc_MakeVector2D_ReturnValue_1__pf = UKismetMathLibrary::MakeVector2D(0.000000, bpfv__CallFunc_Lerp_ReturnValue_1__pf);
				b0l__K2Node_MakeStruct_WidgetTransform_1__pf.Translation = bpfv__CallFunc_MakeVector2D_ReturnValue_1__pf;
				b0l__K2Node_MakeStruct_WidgetTransform_1__pf.Scale = FVector2D(1.000000,1.000000);
				b0l__K2Node_MakeStruct_WidgetTransform_1__pf.Shear = FVector2D(0.000000,0.000000);
				b0l__K2Node_MakeStruct_WidgetTransform_1__pf.Angle = 0.000000;
				if(::IsValid(bpv__TempDamageImage__pf))
				{
					bpv__TempDamageImage__pf->UWidget::SetRenderTransform(b0l__K2Node_MakeStruct_WidgetTransform_1__pf);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void USpawned_DI_C__pf760233656::bpf__ExecuteUbergraph_Spawned_DI__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 11);
	return; //KCST_EndOfThread
}
void USpawned_DI_C__pf760233656::bpf__ExecuteUbergraph_Spawned_DI__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 10);
	return; //KCST_EndOfThread
}
void USpawned_DI_C__pf760233656::bpf__ExecuteUbergraph_Spawned_DI__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 9);
	return; //KCST_EndOfThread
}
void USpawned_DI_C__pf760233656::bpf__Damage_Source__pf(FVector bpp__Source__pf)
{
	b0l__K2Node_Event_Source__pf = bpp__Source__pf;
	bpf__ExecuteUbergraph_Spawned_DI__pf_0(21);
}
void USpawned_DI_C__pf760233656::bpf__UpdatexDirection__pfT(FVector bpp__WidgetxDirection__pfT)
{
	b0l__K2Node_CustomEvent_Widget_Direction__pf = bpp__WidgetxDirection__pfT;
	bpf__ExecuteUbergraph_Spawned_DI__pf_1(19);
}
void USpawned_DI_C__pf760233656::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_Spawned_DI__pf_2(18);
}
void USpawned_DI_C__pf760233656::bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf)
{
	b0l__K2Node_Event_MyGeometry__pf = bpp__MyGeometry__pf;
	b0l__K2Node_Event_InDeltaTime__pf = bpp__InDeltaTime__pf;
	bpf__ExecuteUbergraph_Spawned_DI__pf_3(12);
}
void USpawned_DI_C__pf760233656::bpf__Player_Was_Hit__pf(bool bpp__CurrentlyHit__pf)
{
	b0l__K2Node_Event_CurrentlyHit__pf = bpp__CurrentlyHit__pf;
	bpf__ExecuteUbergraph_Spawned_DI__pf_4(11);
}
void USpawned_DI_C__pf760233656::bpf__TakeDamageActor__pf(int32 bpp__DamageAmount__pf, AActor* bpp__DamagingActor__pf)
{
	b0l__K2Node_Event_DamageAmount__pf = bpp__DamageAmount__pf;
	b0l__K2Node_Event_DamagingActor__pf = bpp__DamagingActor__pf;
	bpf__ExecuteUbergraph_Spawned_DI__pf_5(10);
}
void USpawned_DI_C__pf760233656::bpf__TakeDamage__pf(int32 bpp__DamageAmount__pf)
{
	b0l__K2Node_Event_DamageAmount_1__pf = bpp__DamageAmount__pf;
	bpf__ExecuteUbergraph_Spawned_DI__pf_6(9);
}
PRAGMA_DISABLE_OPTIMIZATION
void USpawned_DI_C__pf760233656::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/HUD/Images/TakeDamage/ShieldDam_V2.ShieldDam_V2 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/HUD/Images/TakeDamage/MAT_TakeDamage.MAT_TakeDamage 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void USpawned_DI_C__pf760233656::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{141, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/HUD/Widgets/Damage_Display/BPI_DamageDirection.BPI_DamageDirection_C 
		{157, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Interfaces/BPI_TakeDamage.BPI_TakeDamage_C 
		{47, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{48, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerCameraManager 
		{51, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/UMG.WidgetTransform 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{36, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{23, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{44, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetAnimation 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Paper2D.PaperFlipbook 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetComponent 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent.Widget3DPassThrough_Translucent 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent_OneSided.Widget3DPassThrough_Translucent_OneSided 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque.Widget3DPassThrough_Opaque 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque_OneSided.Widget3DPassThrough_Opaque_OneSided 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked.Widget3DPassThrough_Masked 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked_OneSided.Widget3DPassThrough_Masked_OneSided 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{158, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/HUD/Widgets/Damage_Display/DamageIndicator_Actor.DamageIndicator_Actor_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__USpawned_DI_C__pf760233656
{
	FRegisterHelper__USpawned_DI_C__pf760233656()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/HUD/Widgets/Damage_Display/Spawned_DI"), &USpawned_DI_C__pf760233656::__StaticDependenciesAssets);
	}
	static FRegisterHelper__USpawned_DI_C__pf760233656 Instance;
};
FRegisterHelper__USpawned_DI_C__pf760233656 FRegisterHelper__USpawned_DI_C__pf760233656::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
