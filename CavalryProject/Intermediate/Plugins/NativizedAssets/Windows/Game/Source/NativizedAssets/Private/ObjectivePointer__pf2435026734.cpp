#include "NativizedAssets.h"
#include "ObjectivePointer__pf2435026734.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
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
#include "Runtime/Engine/Classes/Materials/Material.h"
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
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
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
#include "BP_ObjectiveDisplay_Spawner__pf2435026734.h"
#include "BP_ObjectiveDisplay__pf2435026734.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
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
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperFlipbook.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperSprite.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/SpriteEditorOnlyTypes.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "../Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperSpriteAtlas.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UObjectivePointer_C__pf2435026734::UObjectivePointer_C__pf2435026734(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__ObjectiveArrow__pf = nullptr;
	bpv__Objective__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__DamageAnim__pf = CastChecked<UPaperFlipbook>(CastChecked<UDynamicClass>(UObjectivePointer_C__pf2435026734::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__FrameCounter__pf = 0;
	bpv__Delay__pf = 0;
	bpv__IsFadeOnx__pfzy = false;
	bpv__CanAnimatex__pfzy = true;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UObjectivePointer_C__pf2435026734::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UObjectivePointer_C__pf2435026734::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(ABP_ObjectiveDisplay_Spawner_C__pf2435026734::StaticClass());
	extern UClass* Z_Construct_UClass_UBPI_DamageDirection_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UBPI_DamageDirection_C());
	extern UClass* Z_Construct_UClass_UBPI_ToggleObjective_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UBPI_ToggleObjective_C());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("FADE_IN_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	auto __Local__2 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("FADE_OUT_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__2);
	auto __Local__3 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("ON_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__3);
	auto __Local__4 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("OFF_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__4);
	auto __Local__5 = NewObject<UCanvasPanel>(__Local__0, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__6 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__5), UPanelWidget::__PPO__Slots() )));
	__Local__6 = TArray<UPanelSlot*> ();
	__Local__6.Reserve(1);
	auto __Local__7 = NewObject<UCanvasPanelSlot>(__Local__5, TEXT("CanvasPanelSlot_6"), (EObjectFlags)0x00280008);
	__Local__7->LayoutData.Offsets.Left = -400.000000f;
	__Local__7->LayoutData.Offsets.Top = 50.000000f;
	__Local__7->LayoutData.Offsets.Right = 800.000000f;
	__Local__7->LayoutData.Offsets.Bottom = 400.000000f;
	__Local__7->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.000000);
	__Local__7->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.000000);
	__Local__7->Parent = __Local__5;
	auto __Local__8 = NewObject<UImage>(__Local__0, TEXT("ObjectiveArrow"), (EObjectFlags)0x00280008);
	__Local__8->Brush.ImageSize = FVector2D(1920.000000, 1080.000000);
	auto& __Local__9 = (*(AccessPrivateProperty<UObject* >(&(__Local__8->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__9 = CastChecked<UObject>(CastChecked<UDynamicClass>(UObjectivePointer_C__pf2435026734::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__8->Slot = __Local__7;
	__Local__7->Content = __Local__8;
	__Local__6.Add(__Local__7);
	__Local__0->RootWidget = __Local__5;
	auto __Local__10 = NewObject<UMovieScene>(__Local__1, TEXT("FADE_IN"), (EObjectFlags)0x00280008);
	auto& __Local__11 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__10), UMovieScene::__PPO__Possessables() )));
	__Local__11 = TArray<FMovieScenePossessable> ();
	__Local__11.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__11.GetData(), 1);
	auto& __Local__12 = __Local__11[0];
	auto& __Local__13 = (*(AccessPrivateProperty<FGuid >(&(__Local__12), FMovieScenePossessable::__PPO__Guid() )));
	__Local__13 = FGuid(0x715A2340, 0x4CBA584B, 0x029F0F80, 0xF5D2C1B2);
	auto& __Local__14 = (*(AccessPrivateProperty<FString >(&(__Local__12), FMovieScenePossessable::__PPO__Name() )));
	__Local__14 = FString(TEXT("ObjectiveArrow"));
	auto& __Local__15 = (*(AccessPrivateProperty<UClass* >(&(__Local__12), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__15 = UImage::StaticClass();
	auto& __Local__16 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__10), UMovieScene::__PPO__ObjectBindings() )));
	__Local__16 = TArray<FMovieSceneBinding> ();
	__Local__16.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__16.GetData(), 1);
	auto& __Local__17 = __Local__16[0];
	auto& __Local__18 = (*(AccessPrivateProperty<FGuid >(&(__Local__17), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__18 = FGuid(0x715A2340, 0x4CBA584B, 0x029F0F80, 0xF5D2C1B2);
	auto& __Local__19 = (*(AccessPrivateProperty<FString >(&(__Local__17), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__19 = FString(TEXT("TempDamageImage"));
	auto& __Local__20 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__17), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__20 = TArray<UMovieSceneTrack*> ();
	__Local__20.Reserve(1);
	auto __Local__21 = NewObject<UMovieSceneColorTrack>(__Local__10, TEXT("MovieSceneColorTrack_2"), (EObjectFlags)0x00280008);
	auto& __Local__22 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__21), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__22.PropertyName = FName(TEXT("ColorAndOpacity"));
	__Local__22.PropertyPath = FName(TEXT("ColorAndOpacity"));
	__Local__22.bCanUseClassLookup = true;
	auto& __Local__23 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__21), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__23 = TArray<UMovieSceneSection*> ();
	__Local__23.Reserve(1);
	auto __Local__24 = NewObject<UMovieSceneColorSection>(__Local__21, TEXT("MovieSceneColorSection_0"), (EObjectFlags)0x00280008);
	auto __Local__25 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__24->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__26 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__24->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__25)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__26)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__27 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__24), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	auto& __Local__28 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__27), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__28 = TArray<FFrameNumber> ();
	__Local__28.Reserve(2);
	__Local__28.Add(FFrameNumber{});
	__Local__28.Add(FFrameNumber{});
	__Local__28[1].Value = 30000;
	auto& __Local__29 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__27), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__29 = TArray<FMovieSceneFloatValue> ();
	__Local__29.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__29.GetData(), 2);
	auto& __Local__30 = __Local__29[0];
	auto& __Local__31 = __Local__29[1];
	__Local__31.Value = 1.000000f;
	__Local__24->Easing.EaseIn = __Local__25;
	__Local__24->Easing.EaseOut = __Local__26;
	__Local__24->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Inclusive(30000)));
	auto& __Local__32 = (*(AccessPrivateProperty<FGuid >((__Local__24), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__32 = FGuid(0x575EBF6A, 0x48793E20, 0xB61D448D, 0x16792CA0);
	__Local__23.Add(__Local__24);
	auto& __Local__33 = (*(AccessPrivateProperty<FGuid >((__Local__21), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__33 = FGuid(0xAD4B0B8B, 0x4FBF9ADC, 0xDC7BBD98, 0x453E33AF);
	auto& __Local__34 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__21), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__34.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__34.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__34.Entries.GetData(), 1);
	auto& __Local__35 = __Local__34.Entries[0];
	__Local__35.Section = __Local__24;
	static TWeakFieldPtr<FProperty> __Local__37{};
	const FProperty* __Local__36 = __Local__37.Get();
	if (nullptr == __Local__36)
	{
		__Local__36 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRange"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("LowerBound")));
		check(__Local__36);
		__Local__37 = __Local__36;
	}
	auto& __Local__38 = (*(__Local__36->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__35.Range), 0)));
	static TWeakFieldPtr<FProperty> __Local__40{};
	const FProperty* __Local__39 = __Local__40.Get();
	if (nullptr == __Local__39)
	{
		__Local__39 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRangeBound"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Type")));
		check(__Local__39);
		__Local__40 = __Local__39;
	}
	auto& __Local__41 = (*(__Local__39->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__38), 0)));
	__Local__41 = ERangeBoundTypes::Type::Inclusive;
	static TWeakFieldPtr<FProperty> __Local__43{};
	const FProperty* __Local__42 = __Local__43.Get();
	if (nullptr == __Local__42)
	{
		__Local__42 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRange"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("UpperBound")));
		check(__Local__42);
		__Local__43 = __Local__42;
	}
	auto& __Local__44 = (*(__Local__42->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__35.Range), 0)));
	auto& __Local__45 = (*(__Local__39->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__44), 0)));
	__Local__45 = ERangeBoundTypes::Type::Inclusive;
	static TWeakFieldPtr<FProperty> __Local__47{};
	const FProperty* __Local__46 = __Local__47.Get();
	if (nullptr == __Local__46)
	{
		__Local__46 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRangeBound"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Value")));
		check(__Local__46);
		__Local__47 = __Local__46;
	}
	auto& __Local__48 = (*(__Local__46->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__44), 0)));
	__Local__48.Value = 30000;
	__Local__35.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__49 = (*(AccessPrivateProperty<FGuid >((__Local__21), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__49 = FGuid(0xAD4B0B8B, 0x4FBF9ADC, 0xDC7BBD98, 0x453E33AF);
	__Local__20.Add(__Local__21);
	auto& __Local__50 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__10), UMovieScene::__PPO__PlaybackRange() )));
	__Local__50 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(30001)));
	auto& __Local__51 = (*(AccessPrivateProperty<FFrameRate >((__Local__10), UMovieScene::__PPO__DisplayRate() )));
	static TWeakFieldPtr<FProperty> __Local__53{};
	const FProperty* __Local__52 = __Local__53.Get();
	if (nullptr == __Local__52)
	{
		__Local__52 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameRate"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Numerator")));
		check(__Local__52);
		__Local__53 = __Local__52;
	}
	auto& __Local__54 = (*(__Local__52->ContainerPtrToValuePtr<int32 >(&(__Local__51), 0)));
	__Local__54 = 20;
	auto& __Local__55 = (*(AccessPrivateProperty<TArray<FMovieSceneMarkedFrame> >((__Local__10), UMovieScene::__PPO__MarkedFrames() )));
	__Local__55 = TArray<FMovieSceneMarkedFrame> ();
	__Local__55.AddUninitialized(1);
	FMovieSceneMarkedFrame::StaticStruct()->InitializeStruct(__Local__55.GetData(), 1);
	auto& __Local__56 = __Local__55[0];
	__Local__56.FrameNumber.Value = -3000;
	__Local__56.Label = FString(TEXT("A"));
	auto& __Local__57 = (*(AccessPrivateProperty<FGuid >((__Local__10), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__57 = FGuid(0xAA315178, 0x4997F3FD, 0x54A4FD99, 0x080BDDB7);
	__Local__1->MovieScene = __Local__10;
	__Local__1->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__1->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__1->AnimationBindings.GetData(), 1);
	auto& __Local__58 = __Local__1->AnimationBindings[0];
	__Local__58.WidgetName = FName(TEXT("ObjectiveArrow"));
	__Local__58.AnimationGuid = FGuid(0x715A2340, 0x4CBA584B, 0x029F0F80, 0xF5D2C1B2);
	auto& __Local__59 = (*(AccessPrivateProperty<FString >((__Local__1), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__59 = FString(TEXT("FADE_IN"));
	__Local__1->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__60 = (*(AccessPrivateProperty<FGuid >((__Local__1), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__60 = FGuid(0xA8934D3C, 0x4EC6CA46, 0xC39C57A0, 0x79A00A09);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__1);
	auto __Local__61 = NewObject<UMovieScene>(__Local__2, TEXT("FADE_OUT"), (EObjectFlags)0x00280008);
	auto& __Local__62 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__61), UMovieScene::__PPO__Possessables() )));
	__Local__62 = TArray<FMovieScenePossessable> ();
	__Local__62.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__62.GetData(), 1);
	auto& __Local__63 = __Local__62[0];
	auto& __Local__64 = (*(AccessPrivateProperty<FGuid >(&(__Local__63), FMovieScenePossessable::__PPO__Guid() )));
	__Local__64 = FGuid(0x9BB2DEB2, 0x4171C783, 0x69F46A9C, 0x4FE7760D);
	auto& __Local__65 = (*(AccessPrivateProperty<FString >(&(__Local__63), FMovieScenePossessable::__PPO__Name() )));
	__Local__65 = FString(TEXT("ObjectiveArrow"));
	auto& __Local__66 = (*(AccessPrivateProperty<UClass* >(&(__Local__63), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__66 = UImage::StaticClass();
	auto& __Local__67 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__61), UMovieScene::__PPO__ObjectBindings() )));
	__Local__67 = TArray<FMovieSceneBinding> ();
	__Local__67.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__67.GetData(), 1);
	auto& __Local__68 = __Local__67[0];
	auto& __Local__69 = (*(AccessPrivateProperty<FGuid >(&(__Local__68), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__69 = FGuid(0x9BB2DEB2, 0x4171C783, 0x69F46A9C, 0x4FE7760D);
	auto& __Local__70 = (*(AccessPrivateProperty<FString >(&(__Local__68), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__70 = FString(TEXT("TempDamageImage"));
	auto& __Local__71 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__68), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__71 = TArray<UMovieSceneTrack*> ();
	__Local__71.Reserve(1);
	auto __Local__72 = NewObject<UMovieSceneColorTrack>(__Local__61, TEXT("MovieSceneColorTrack_1"), (EObjectFlags)0x00280008);
	auto& __Local__73 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__72), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__73.PropertyName = FName(TEXT("ColorAndOpacity"));
	__Local__73.PropertyPath = FName(TEXT("ColorAndOpacity"));
	__Local__73.bCanUseClassLookup = true;
	auto& __Local__74 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__72), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__74 = TArray<UMovieSceneSection*> ();
	__Local__74.Reserve(1);
	auto __Local__75 = NewObject<UMovieSceneColorSection>(__Local__72, TEXT("MovieSceneColorSection_0"), (EObjectFlags)0x00280008);
	auto __Local__76 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__75->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__77 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__75->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__76)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__77)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__78 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__75), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	auto& __Local__79 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__78), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__79 = TArray<FFrameNumber> ();
	__Local__79.Reserve(2);
	__Local__79.Add(FFrameNumber{});
	__Local__79.Add(FFrameNumber{});
	__Local__79[1].Value = 30000;
	auto& __Local__80 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__78), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__80 = TArray<FMovieSceneFloatValue> ();
	__Local__80.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__80.GetData(), 2);
	auto& __Local__81 = __Local__80[0];
	__Local__81.Value = 1.000000f;
	auto& __Local__82 = __Local__80[1];
	__Local__75->Easing.EaseIn = __Local__76;
	__Local__75->Easing.EaseOut = __Local__77;
	__Local__75->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Inclusive(30000)));
	auto& __Local__83 = (*(AccessPrivateProperty<FGuid >((__Local__75), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__83 = FGuid(0x8F863CED, 0x4F090792, 0xED614EAB, 0x68A08F04);
	__Local__74.Add(__Local__75);
	auto& __Local__84 = (*(AccessPrivateProperty<FGuid >((__Local__72), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__84 = FGuid(0xFAC3CAFA, 0x433AC27E, 0xFB786091, 0x7F158852);
	auto& __Local__85 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__72), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__85.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__85.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__85.Entries.GetData(), 1);
	auto& __Local__86 = __Local__85.Entries[0];
	__Local__86.Section = __Local__75;
	auto& __Local__87 = (*(__Local__36->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__86.Range), 0)));
	auto& __Local__88 = (*(__Local__39->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__87), 0)));
	__Local__88 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__89 = (*(__Local__42->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__86.Range), 0)));
	auto& __Local__90 = (*(__Local__39->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__89), 0)));
	__Local__90 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__91 = (*(__Local__46->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__89), 0)));
	__Local__91.Value = 30000;
	__Local__86.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__92 = (*(AccessPrivateProperty<FGuid >((__Local__72), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__92 = FGuid(0xFAC3CAFA, 0x433AC27E, 0xFB786091, 0x7F158852);
	__Local__71.Add(__Local__72);
	auto& __Local__93 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__61), UMovieScene::__PPO__PlaybackRange() )));
	__Local__93 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(30001)));
	auto& __Local__94 = (*(AccessPrivateProperty<FFrameRate >((__Local__61), UMovieScene::__PPO__DisplayRate() )));
	auto& __Local__95 = (*(__Local__52->ContainerPtrToValuePtr<int32 >(&(__Local__94), 0)));
	__Local__95 = 20;
	auto& __Local__96 = (*(AccessPrivateProperty<FGuid >((__Local__61), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__96 = FGuid(0xD0941C1B, 0x4206AA1E, 0x05D2F496, 0xD9468053);
	__Local__2->MovieScene = __Local__61;
	__Local__2->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__2->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__2->AnimationBindings.GetData(), 1);
	auto& __Local__97 = __Local__2->AnimationBindings[0];
	__Local__97.WidgetName = FName(TEXT("ObjectiveArrow"));
	__Local__97.AnimationGuid = FGuid(0x9BB2DEB2, 0x4171C783, 0x69F46A9C, 0x4FE7760D);
	auto& __Local__98 = (*(AccessPrivateProperty<FString >((__Local__2), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__98 = FString(TEXT("FADE_OUT"));
	__Local__2->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__99 = (*(AccessPrivateProperty<FGuid >((__Local__2), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__99 = FGuid(0x4513F80D, 0x4054AA39, 0xB8FB5C9D, 0x933914B6);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__2);
	auto __Local__100 = NewObject<UMovieScene>(__Local__3, TEXT("ON"), (EObjectFlags)0x00280008);
	auto& __Local__101 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__100), UMovieScene::__PPO__Possessables() )));
	__Local__101 = TArray<FMovieScenePossessable> ();
	__Local__101.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__101.GetData(), 1);
	auto& __Local__102 = __Local__101[0];
	auto& __Local__103 = (*(AccessPrivateProperty<FGuid >(&(__Local__102), FMovieScenePossessable::__PPO__Guid() )));
	__Local__103 = FGuid(0x5DA8DC0F, 0x40132819, 0x908FDEA5, 0xD2F37252);
	auto& __Local__104 = (*(AccessPrivateProperty<FString >(&(__Local__102), FMovieScenePossessable::__PPO__Name() )));
	__Local__104 = FString(TEXT("ObjectiveArrow"));
	auto& __Local__105 = (*(AccessPrivateProperty<UClass* >(&(__Local__102), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__105 = UImage::StaticClass();
	auto& __Local__106 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__100), UMovieScene::__PPO__ObjectBindings() )));
	__Local__106 = TArray<FMovieSceneBinding> ();
	__Local__106.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__106.GetData(), 1);
	auto& __Local__107 = __Local__106[0];
	auto& __Local__108 = (*(AccessPrivateProperty<FGuid >(&(__Local__107), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__108 = FGuid(0x5DA8DC0F, 0x40132819, 0x908FDEA5, 0xD2F37252);
	auto& __Local__109 = (*(AccessPrivateProperty<FString >(&(__Local__107), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__109 = FString(TEXT("ObjectiveArrow"));
	auto& __Local__110 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__107), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__110 = TArray<UMovieSceneTrack*> ();
	__Local__110.Reserve(1);
	auto __Local__111 = NewObject<UMovieSceneColorTrack>(__Local__100, TEXT("MovieSceneColorTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__112 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__111), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__112.PropertyName = FName(TEXT("ColorAndOpacity"));
	__Local__112.PropertyPath = FName(TEXT("ColorAndOpacity"));
	__Local__112.bCanUseClassLookup = true;
	auto& __Local__113 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__111), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__113 = TArray<UMovieSceneSection*> ();
	__Local__113.Reserve(1);
	auto __Local__114 = NewObject<UMovieSceneColorSection>(__Local__111, TEXT("MovieSceneColorSection_0"), (EObjectFlags)0x00280008);
	auto __Local__115 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__114->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__116 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__114->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__115)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__116)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__117 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__114), UMovieSceneColorSection::__PPO__RedCurve() )));
	auto& __Local__118 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__117), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__118 = TArray<FFrameNumber> ();
	__Local__118.Reserve(2);
	__Local__118.Add(FFrameNumber{});
	__Local__118.Add(FFrameNumber{});
	__Local__118[1].Value = 30000;
	auto& __Local__119 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__117), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__119 = TArray<FMovieSceneFloatValue> ();
	__Local__119.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__119.GetData(), 2);
	auto& __Local__120 = __Local__119[0];
	__Local__120.Value = 1.000000f;
	auto& __Local__121 = __Local__119[1];
	__Local__121.Value = 1.000000f;
	auto& __Local__122 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__114), UMovieSceneColorSection::__PPO__GreenCurve() )));
	auto& __Local__123 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__122), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__123 = TArray<FFrameNumber> ();
	__Local__123.Reserve(2);
	__Local__123.Add(FFrameNumber{});
	__Local__123.Add(FFrameNumber{});
	__Local__123[1].Value = 30000;
	auto& __Local__124 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__122), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__124 = TArray<FMovieSceneFloatValue> ();
	__Local__124.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__124.GetData(), 2);
	auto& __Local__125 = __Local__124[0];
	__Local__125.Value = 1.000000f;
	auto& __Local__126 = __Local__124[1];
	__Local__126.Value = 1.000000f;
	auto& __Local__127 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__114), UMovieSceneColorSection::__PPO__BlueCurve() )));
	auto& __Local__128 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__127), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__128 = TArray<FFrameNumber> ();
	__Local__128.Reserve(2);
	__Local__128.Add(FFrameNumber{});
	__Local__128.Add(FFrameNumber{});
	__Local__128[1].Value = 30000;
	auto& __Local__129 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__127), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__129 = TArray<FMovieSceneFloatValue> ();
	__Local__129.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__129.GetData(), 2);
	auto& __Local__130 = __Local__129[0];
	__Local__130.Value = 1.000000f;
	auto& __Local__131 = __Local__129[1];
	__Local__131.Value = 1.000000f;
	auto& __Local__132 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__114), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	auto& __Local__133 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__132), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__133 = TArray<FFrameNumber> ();
	__Local__133.Reserve(2);
	__Local__133.Add(FFrameNumber{});
	__Local__133.Add(FFrameNumber{});
	__Local__133[1].Value = 30000;
	auto& __Local__134 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__132), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__134 = TArray<FMovieSceneFloatValue> ();
	__Local__134.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__134.GetData(), 2);
	auto& __Local__135 = __Local__134[0];
	__Local__135.Value = 1.000000f;
	auto& __Local__136 = __Local__134[1];
	__Local__136.Value = 1.000000f;
	__Local__114->Easing.EaseIn = __Local__115;
	__Local__114->Easing.EaseOut = __Local__116;
	__Local__114->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Inclusive(30000)));
	auto& __Local__137 = (*(AccessPrivateProperty<FGuid >((__Local__114), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__137 = FGuid(0x90D37D36, 0x41DAE1C2, 0xA12CC98F, 0x505467E4);
	__Local__113.Add(__Local__114);
	auto& __Local__138 = (*(AccessPrivateProperty<FGuid >((__Local__111), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__138 = FGuid(0xB3C54A34, 0x45E9F224, 0x5971B5A8, 0x916AEC78);
	auto& __Local__139 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__111), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__139.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__139.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__139.Entries.GetData(), 1);
	auto& __Local__140 = __Local__139.Entries[0];
	__Local__140.Section = __Local__114;
	auto& __Local__141 = (*(__Local__36->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__140.Range), 0)));
	auto& __Local__142 = (*(__Local__39->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__141), 0)));
	__Local__142 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__143 = (*(__Local__42->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__140.Range), 0)));
	auto& __Local__144 = (*(__Local__39->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__143), 0)));
	__Local__144 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__145 = (*(__Local__46->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__143), 0)));
	__Local__145.Value = 30000;
	__Local__140.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__146 = (*(AccessPrivateProperty<FGuid >((__Local__111), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__146 = FGuid(0xB3C54A34, 0x45E9F224, 0x5971B5A8, 0x916AEC78);
	__Local__110.Add(__Local__111);
	auto& __Local__147 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__100), UMovieScene::__PPO__PlaybackRange() )));
	__Local__147 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(30001)));
	auto& __Local__148 = (*(AccessPrivateProperty<FFrameRate >((__Local__100), UMovieScene::__PPO__DisplayRate() )));
	auto& __Local__149 = (*(__Local__52->ContainerPtrToValuePtr<int32 >(&(__Local__148), 0)));
	__Local__149 = 20;
	auto& __Local__150 = (*(AccessPrivateProperty<FGuid >((__Local__100), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__150 = FGuid(0xD26F9C04, 0x4E601453, 0x227A669B, 0x66FD8AE3);
	__Local__3->MovieScene = __Local__100;
	__Local__3->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__3->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__3->AnimationBindings.GetData(), 1);
	auto& __Local__151 = __Local__3->AnimationBindings[0];
	__Local__151.WidgetName = FName(TEXT("ObjectiveArrow"));
	__Local__151.AnimationGuid = FGuid(0x5DA8DC0F, 0x40132819, 0x908FDEA5, 0xD2F37252);
	auto& __Local__152 = (*(AccessPrivateProperty<FString >((__Local__3), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__152 = FString(TEXT("ON"));
	__Local__3->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__153 = (*(AccessPrivateProperty<FGuid >((__Local__3), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__153 = FGuid(0x8ACBFD8F, 0x4E3A2B2B, 0xEE22E886, 0x6040C3F3);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__3);
	auto __Local__154 = NewObject<UMovieScene>(__Local__4, TEXT("OFF"), (EObjectFlags)0x00280008);
	auto& __Local__155 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__154), UMovieScene::__PPO__Possessables() )));
	__Local__155 = TArray<FMovieScenePossessable> ();
	__Local__155.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__155.GetData(), 1);
	auto& __Local__156 = __Local__155[0];
	auto& __Local__157 = (*(AccessPrivateProperty<FGuid >(&(__Local__156), FMovieScenePossessable::__PPO__Guid() )));
	__Local__157 = FGuid(0xFBD696D7, 0x48BD47B0, 0x568DBAB3, 0xDEDB6153);
	auto& __Local__158 = (*(AccessPrivateProperty<FString >(&(__Local__156), FMovieScenePossessable::__PPO__Name() )));
	__Local__158 = FString(TEXT("ObjectiveArrow"));
	auto& __Local__159 = (*(AccessPrivateProperty<UClass* >(&(__Local__156), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__159 = UImage::StaticClass();
	auto& __Local__160 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__154), UMovieScene::__PPO__ObjectBindings() )));
	__Local__160 = TArray<FMovieSceneBinding> ();
	__Local__160.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__160.GetData(), 1);
	auto& __Local__161 = __Local__160[0];
	auto& __Local__162 = (*(AccessPrivateProperty<FGuid >(&(__Local__161), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__162 = FGuid(0xFBD696D7, 0x48BD47B0, 0x568DBAB3, 0xDEDB6153);
	auto& __Local__163 = (*(AccessPrivateProperty<FString >(&(__Local__161), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__163 = FString(TEXT("ObjectiveArrow"));
	auto& __Local__164 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__161), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__164 = TArray<UMovieSceneTrack*> ();
	__Local__164.Reserve(1);
	auto __Local__165 = NewObject<UMovieSceneColorTrack>(__Local__154, TEXT("MovieSceneColorTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__166 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__165), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__166.PropertyName = FName(TEXT("ColorAndOpacity"));
	__Local__166.PropertyPath = FName(TEXT("ColorAndOpacity"));
	__Local__166.bCanUseClassLookup = true;
	auto& __Local__167 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__165), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__167 = TArray<UMovieSceneSection*> ();
	__Local__167.Reserve(1);
	auto __Local__168 = NewObject<UMovieSceneColorSection>(__Local__165, TEXT("MovieSceneColorSection_0"), (EObjectFlags)0x00280008);
	auto __Local__169 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__168->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__170 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__168->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__169)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__170)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__171 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__168), UMovieSceneColorSection::__PPO__RedCurve() )));
	auto& __Local__172 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__171), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__172 = TArray<FFrameNumber> ();
	__Local__172.Reserve(2);
	__Local__172.Add(FFrameNumber{});
	__Local__172.Add(FFrameNumber{});
	__Local__172[1].Value = 30000;
	auto& __Local__173 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__171), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__173 = TArray<FMovieSceneFloatValue> ();
	__Local__173.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__173.GetData(), 2);
	auto& __Local__174 = __Local__173[0];
	__Local__174.Value = 1.000000f;
	auto& __Local__175 = __Local__173[1];
	__Local__175.Value = 1.000000f;
	auto& __Local__176 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__168), UMovieSceneColorSection::__PPO__GreenCurve() )));
	auto& __Local__177 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__176), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__177 = TArray<FFrameNumber> ();
	__Local__177.Reserve(2);
	__Local__177.Add(FFrameNumber{});
	__Local__177.Add(FFrameNumber{});
	__Local__177[1].Value = 30000;
	auto& __Local__178 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__176), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__178 = TArray<FMovieSceneFloatValue> ();
	__Local__178.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__178.GetData(), 2);
	auto& __Local__179 = __Local__178[0];
	__Local__179.Value = 1.000000f;
	auto& __Local__180 = __Local__178[1];
	__Local__180.Value = 1.000000f;
	auto& __Local__181 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__168), UMovieSceneColorSection::__PPO__BlueCurve() )));
	auto& __Local__182 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__181), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__182 = TArray<FFrameNumber> ();
	__Local__182.Reserve(2);
	__Local__182.Add(FFrameNumber{});
	__Local__182.Add(FFrameNumber{});
	__Local__182[1].Value = 30000;
	auto& __Local__183 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__181), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__183 = TArray<FMovieSceneFloatValue> ();
	__Local__183.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__183.GetData(), 2);
	auto& __Local__184 = __Local__183[0];
	__Local__184.Value = 1.000000f;
	auto& __Local__185 = __Local__183[1];
	__Local__185.Value = 1.000000f;
	auto& __Local__186 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__168), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	auto& __Local__187 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__186), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__187 = TArray<FFrameNumber> ();
	__Local__187.Reserve(2);
	__Local__187.Add(FFrameNumber{});
	__Local__187.Add(FFrameNumber{});
	__Local__187[1].Value = 30000;
	auto& __Local__188 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__186), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__188 = TArray<FMovieSceneFloatValue> ();
	__Local__188.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__188.GetData(), 2);
	auto& __Local__189 = __Local__188[0];
	auto& __Local__190 = __Local__188[1];
	__Local__168->Easing.EaseIn = __Local__169;
	__Local__168->Easing.EaseOut = __Local__170;
	__Local__168->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Inclusive(30000)));
	auto& __Local__191 = (*(AccessPrivateProperty<FGuid >((__Local__168), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__191 = FGuid(0x88CDBB4F, 0x44ADD77E, 0x8A023EA1, 0x01EA3B17);
	__Local__167.Add(__Local__168);
	auto& __Local__192 = (*(AccessPrivateProperty<FGuid >((__Local__165), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__192 = FGuid(0x4DC1991F, 0x49AD5F7B, 0x21C13F91, 0x9A14B2A0);
	auto& __Local__193 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__165), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__193.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__193.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__193.Entries.GetData(), 1);
	auto& __Local__194 = __Local__193.Entries[0];
	__Local__194.Section = __Local__168;
	auto& __Local__195 = (*(__Local__36->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__194.Range), 0)));
	auto& __Local__196 = (*(__Local__39->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__195), 0)));
	__Local__196 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__197 = (*(__Local__42->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__194.Range), 0)));
	auto& __Local__198 = (*(__Local__39->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__197), 0)));
	__Local__198 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__199 = (*(__Local__46->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__197), 0)));
	__Local__199.Value = 30000;
	__Local__194.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__200 = (*(AccessPrivateProperty<FGuid >((__Local__165), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__200 = FGuid(0x4DC1991F, 0x49AD5F7B, 0x21C13F91, 0x9A14B2A0);
	__Local__164.Add(__Local__165);
	auto& __Local__201 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__154), UMovieScene::__PPO__PlaybackRange() )));
	__Local__201 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(30001)));
	auto& __Local__202 = (*(AccessPrivateProperty<FFrameRate >((__Local__154), UMovieScene::__PPO__DisplayRate() )));
	auto& __Local__203 = (*(__Local__52->ContainerPtrToValuePtr<int32 >(&(__Local__202), 0)));
	__Local__203 = 20;
	auto& __Local__204 = (*(AccessPrivateProperty<FGuid >((__Local__154), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__204 = FGuid(0x75C6DE65, 0x45F3D3E3, 0xD61ED086, 0xC3A5DE23);
	__Local__4->MovieScene = __Local__154;
	__Local__4->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__4->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__4->AnimationBindings.GetData(), 1);
	auto& __Local__205 = __Local__4->AnimationBindings[0];
	__Local__205.WidgetName = FName(TEXT("ObjectiveArrow"));
	__Local__205.AnimationGuid = FGuid(0xFBD696D7, 0x48BD47B0, 0x568DBAB3, 0xDEDB6153);
	auto& __Local__206 = (*(AccessPrivateProperty<FString >((__Local__4), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__206 = FString(TEXT("OFF"));
	__Local__4->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__207 = (*(AccessPrivateProperty<FGuid >((__Local__4), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__207 = FGuid(0x636932CB, 0x4A01F39D, 0x1D22C481, 0xBEAA3459);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__4);
}
PRAGMA_ENABLE_OPTIMIZATION
void UObjectivePointer_C__pf2435026734::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__208;
	SlotNames.Append(__Local__208);
}
void UObjectivePointer_C__pf2435026734::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__209;
	__Local__209.Reserve(4);
	__Local__209.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UObjectivePointer_C__pf2435026734::StaticClass())->MiscConvertedSubobjects[1]));
	__Local__209.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UObjectivePointer_C__pf2435026734::StaticClass())->MiscConvertedSubobjects[2]));
	__Local__209.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UObjectivePointer_C__pf2435026734::StaticClass())->MiscConvertedSubobjects[3]));
	__Local__209.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UObjectivePointer_C__pf2435026734::StaticClass())->MiscConvertedSubobjects[4]));
	TArray<FDelegateRuntimeBinding>  __Local__210;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UObjectivePointer_C__pf2435026734::StaticClass())->MiscConvertedSubobjects[0]), __Local__209, __Local__210);
}
void UObjectivePointer_C__pf2435026734::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UObjectivePointer_C__pf2435026734::bpf__ExecuteUbergraph_ObjectivePointer__pf_0(int32 bpp__EntryPoint__pf)
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
	bool bpfv__CallFunc_EqualEqual_BoolBool_ReturnValue__pf{};
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue__pf{};
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_2__pf{};
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_3__pf{};
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_4__pf{};
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_5__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 19:
			{
				__CurrentState = 20;
				break;
			}
		case 20:
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
				bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf = UKismetMathLibrary::FindLookAtRotation(bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, bpv__Objective__pf);
				UKismetMathLibrary::BreakRotator(bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf, /*out*/ b0l__CallFunc_BreakRotator_Roll_1__pf, /*out*/ b0l__CallFunc_BreakRotator_Pitch_1__pf, /*out*/ b0l__CallFunc_BreakRotator_Yaw_1__pf);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(b0l__CallFunc_BreakRotator_Yaw_1__pf, b0l__CallFunc_BreakRotator_Yaw__pf);
				UWidget::SetRenderTransformAngle(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf);
			}
		case 21:
			{
				if (!bpv__CanAnimatex__pfzy)
				{
					__CurrentState = 26;
					break;
				}
			}
		case 22:
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
				bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf = UKismetMathLibrary::FindLookAtRotation(bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, bpv__Objective__pf);
				UKismetMathLibrary::BreakRotator(bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf, /*out*/ b0l__CallFunc_BreakRotator_Roll_1__pf, /*out*/ b0l__CallFunc_BreakRotator_Pitch_1__pf, /*out*/ b0l__CallFunc_BreakRotator_Yaw_1__pf);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(b0l__CallFunc_BreakRotator_Yaw_1__pf, b0l__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, 45.000000);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf, -45.000000);
				bpfv__CallFunc_EqualEqual_BoolBool_ReturnValue__pf = UKismetMathLibrary::EqualEqual_BoolBool(bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf, bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf);
				if (!bpfv__CallFunc_EqualEqual_BoolBool_ReturnValue__pf)
				{
					__CurrentState = 27;
					break;
				}
			}
		case 23:
			{
				if (!bpv__IsFadeOnx__pfzy)
				{
					__CurrentState = 31;
					break;
				}
			}
		case 24:
			{
				bpfv__CallFunc_PlayAnimation_ReturnValue_2__pf = UUserWidget::PlayAnimation(bpv__FADE_OUT__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000, false);
			}
		case 25:
			{
				bpv__IsFadeOnx__pfzy = false;
				__CurrentState = -1;
				break;
			}
		case 26:
			{
				bpfv__CallFunc_PlayAnimation_ReturnValue_5__pf = UUserWidget::PlayAnimation(bpv__OFF__pf, 0.000000, 1, EUMGSequencePlayMode::PingPong, 1.000000, false);
				__CurrentState = -1;
				break;
			}
		case 27:
			{
				if (!bpv__IsFadeOnx__pfzy)
				{
					__CurrentState = 29;
					break;
				}
			}
		case 28:
			{
				bpfv__CallFunc_PlayAnimation_ReturnValue_4__pf = UUserWidget::PlayAnimation(bpv__ON__pf, 0.000000, 1, EUMGSequencePlayMode::PingPong, 1.000000, false);
				__CurrentState = -1;
				break;
			}
		case 29:
			{
				bpfv__CallFunc_PlayAnimation_ReturnValue__pf = UUserWidget::PlayAnimation(bpv__FADE_IN__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000, false);
			}
		case 30:
			{
				bpv__IsFadeOnx__pfzy = true;
				__CurrentState = -1;
				break;
			}
		case 31:
			{
				bpfv__CallFunc_PlayAnimation_ReturnValue_3__pf = UUserWidget::PlayAnimation(bpv__OFF__pf, 0.000000, 1, EUMGSequencePlayMode::PingPong, 1.000000, false);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UObjectivePointer_C__pf2435026734::bpf__ExecuteUbergraph_ObjectivePointer__pf_1(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	UUMGSequencePlayer* bpfv__CallFunc_PlayAnimation_ReturnValue_1__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 3:
			{
				__CurrentState = 4;
				break;
			}
		case 4:
			{
				if(::IsValid(bpv__ObjectiveArrow__pf))
				{
					bpv__ObjectiveArrow__pf->SetVisibility(ESlateVisibility::Visible);
				}
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
				if(::IsValid(bpv__ObjectiveArrow__pf))
				{
					bpv__ObjectiveArrow__pf->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 7:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, ABP_ObjectiveDisplay_Spawner_C__pf2435026734::StaticClass(), /*out*/ TArrayCaster<ABP_ObjectiveDisplay_Spawner_C__pf2435026734*>(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf).Get<AActor*>());
			}
		case 8:
			{
				b0l__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 9:
			{
				b0l__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 10:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 11:
			{
				b0l__Temp_int_Array_Index_Variable__pf = b0l__Temp_int_Loop_Counter_Variable__pf;
			}
		case 12:
			{
				__StateStack.Push(18);
			}
		case 13:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate__pf.BindUFunction(this,FName(TEXT("Set Objective Direction")));
				FCustomThunkTemplates::Array_Get(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf, b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				if(::IsValid(b0l__CallFunc_Array_Get_Item__pf))
				{
					b0l__CallFunc_Array_Get_Item__pf->bpv__UpdatexObjectivexLoc__pfTT.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate__pf);
				}
			}
		case 14:
			{
				bpfv__CallFunc_PlayAnimation_ReturnValue_1__pf = UUserWidget::PlayAnimation(bpv__FADE_OUT__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000, false);
			}
		case 15:
			{
				bpv__IsFadeOnx__pfzy = false;
			}
		case 16:
			{
				bpv__FrameCounter__pf = 0;
			}
		case 17:
			{
				UKismetSystemLibrary::Delay(this, 0.500000, FLatentActionInfo(3, -650123215, TEXT("ExecuteUbergraph_ObjectivePointer_1"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 18:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 10;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UObjectivePointer_C__pf2435026734::bpf__ExecuteUbergraph_ObjectivePointer__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 35);
	// optimized KCST_UnconditionalGoto
	bpv__Objective__pf = b0l__K2Node_CustomEvent_Objective_Loc__pf;
	return; //KCST_EndOfThread
}
void UObjectivePointer_C__pf2435026734::bpf__ExecuteUbergraph_ObjectivePointer__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 34);
	return; //KCST_EndOfThread
}
void UObjectivePointer_C__pf2435026734::bpf__ExecuteUbergraph_ObjectivePointer__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 33);
	return; //KCST_EndOfThread
}
void UObjectivePointer_C__pf2435026734::bpf__ExecuteUbergraph_ObjectivePointer__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 32);
	return; //KCST_EndOfThread
}
void UObjectivePointer_C__pf2435026734::bpf__ExecuteUbergraph_ObjectivePointer__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 1);
	// optimized KCST_UnconditionalGoto
	bpv__Objective__pf = b0l__K2Node_CustomEvent_Objective__pf;
	return; //KCST_EndOfThread
}
void UObjectivePointer_C__pf2435026734::bpf__UpdateLocation__pf(FVector bpp__Objective__pf)
{
	b0l__K2Node_CustomEvent_Objective__pf = bpp__Objective__pf;
	bpf__ExecuteUbergraph_ObjectivePointer__pf_6(1);
}
void UObjectivePointer_C__pf2435026734::bpf__SetxObjectivexDirection__pfTT(FVector bpp__Objective_Loc__pf)
{
	b0l__K2Node_CustomEvent_Objective_Loc__pf = bpp__Objective_Loc__pf;
	bpf__ExecuteUbergraph_ObjectivePointer__pf_2(35);
}
void UObjectivePointer_C__pf2435026734::bpf__ToggleObjetiveBool__pf(bool bpp__Objectivex__pfzy)
{
	b0l__K2Node_Event_Objective___pf = bpp__Objectivex__pfzy;
	bpf__ExecuteUbergraph_ObjectivePointer__pf_3(34);
}
void UObjectivePointer_C__pf2435026734::bpf__Player_Was_Hit__pf(bool bpp__CurrentlyHit__pf)
{
	b0l__K2Node_Event_CurrentlyHit__pf = bpp__CurrentlyHit__pf;
	bpf__ExecuteUbergraph_ObjectivePointer__pf_4(33);
}
void UObjectivePointer_C__pf2435026734::bpf__Damage_Source__pf(FVector bpp__Source__pf)
{
	b0l__K2Node_Event_Source__pf = bpp__Source__pf;
	bpf__ExecuteUbergraph_ObjectivePointer__pf_5(32);
}
void UObjectivePointer_C__pf2435026734::bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf)
{
	b0l__K2Node_Event_MyGeometry__pf = bpp__MyGeometry__pf;
	b0l__K2Node_Event_InDeltaTime__pf = bpp__InDeltaTime__pf;
	bpf__ExecuteUbergraph_ObjectivePointer__pf_0(19);
}
void UObjectivePointer_C__pf2435026734::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_ObjectivePointer__pf_1(5);
}
PRAGMA_DISABLE_OPTIMIZATION
void UObjectivePointer_C__pf2435026734::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperFlipbook /Game/HUD/Images/TakeDamage/ShieldDam_V2.ShieldDam_V2 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Images/Arrow_Render_V2.Arrow_Render_V2 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UObjectivePointer_C__pf2435026734::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{141, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/HUD/Widgets/Damage_Display/BPI_DamageDirection.BPI_DamageDirection_C 
		{151, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/HUD/Widgets/Objective_Display/BPI_ToggleObjective.BPI_ToggleObjective_C 
		{47, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{48, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerCameraManager 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UMGSequencePlayer 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{36, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{44, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetAnimation 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{23, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Paper2D.PaperFlipbook 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ArrowComponent 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetComponent 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent.Widget3DPassThrough_Translucent 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent_OneSided.Widget3DPassThrough_Translucent_OneSided 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque.Widget3DPassThrough_Opaque 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque_OneSided.Widget3DPassThrough_Opaque_OneSided 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked.Widget3DPassThrough_Masked 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked_OneSided.Widget3DPassThrough_Masked_OneSided 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/HUD/Widgets/Widget3DNoPassThrough.Widget3DNoPassThrough 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Characters/BPC_Famine.BPC_Famine_C 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BPC_Famine_C /Game/Blueprints/Characters/BPC_Famine.Default__BPC_Famine_C 
		{59, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Characters/BPC_Death.BPC_Death_C 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BPC_Death_C /Game/Blueprints/Characters/BPC_Death.Default__BPC_Death_C 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Characters/BPC_Conquest.BPC_Conquest_C 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BPC_Conquest_C /Game/Blueprints/Characters/BPC_Conquest.Default__BPC_Conquest_C 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CameraComponent 
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PostProcessComponent 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  TextureCube /Game/Imports/StarterContent/HDRI/HDRI_Epic_Courtyard_Daylight.HDRI_Epic_Courtyard_Daylight 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EObjectTypeQuery 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.TimerDynamicDelegate__DelegateSignature 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CapsuleComponent 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/KatDataPlugin4BP.KatDataPlugin4BPBPLibrary 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CharacterMovementComponent 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/UMG.WidgetTransform 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/HUD/Images/TakeDamage/MAT_TakeDamage.MAT_TakeDamage 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Images/OverlayCombined_HUD.OverlayCombined_HUD 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Meshes/Placeholder/Player_Generic/SM_FP_Gear_Whitebox.SM_FP_Gear_Whitebox 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ChildActorComponent 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/InputCore.EControllerHand 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SphereComponent 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MeshComponent 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ActorComponent 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.BoxComponent 
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
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_TransitionResult 
		{94, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PoseLink 
		{95, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_SequencePlayer 
		{96, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_StateResult 
		{97, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_StateMachine 
		{98, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_Root 
		{99, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Meshes/Placeholder/Player_Generic/Pistol_Second_Hand_Grip.Pistol_Second_Hand_Grip 
		{100, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Meshes/Placeholder/Player_Generic/HandPistolGrip.HandPistolGrip 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Meshes/Placeholder/Player_Generic/HandClosed.HandClosed 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Meshes/Placeholder/Player_Generic/HandOpen.HandOpen 
		{101, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Niagara.NiagaraComponent 
		{102, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  NiagaraSystem /Game/VisualEffects/Niagara/NS_muzzle_flash.NS_muzzle_flash 
		{103, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EMoveComponentAction 
		{104, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ECollisionChannel 
		{105, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TimelineComponent 
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
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/HUD/Images/ObjectiveMarker_HUD.ObjectiveMarker_HUD 
		{156, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/HUD/Widgets/Objective_Display/BP_ObjectiveDisplay_Spawner.BP_ObjectiveDisplay_Spawner_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UObjectivePointer_C__pf2435026734
{
	FRegisterHelper__UObjectivePointer_C__pf2435026734()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/HUD/Widgets/Objective_Display/ObjectivePointer"), &UObjectivePointer_C__pf2435026734::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UObjectivePointer_C__pf2435026734 Instance;
};
FRegisterHelper__UObjectivePointer_C__pf2435026734 FRegisterHelper__UObjectivePointer_C__pf2435026734::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
