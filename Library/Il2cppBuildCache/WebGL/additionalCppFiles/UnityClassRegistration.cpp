extern "C" void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CrashReporting();
	RegisterModule_CrashReporting();

	void RegisterModule_InputLegacy();
	RegisterModule_InputLegacy();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_PerformanceReporting();
	RegisterModule_PerformanceReporting();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_RuntimeInitializeOnLoadManagerInitializer();
	RegisterModule_RuntimeInitializeOnLoadManagerInitializer();

	void RegisterModule_Terrain();
	RegisterModule_Terrain();

	void RegisterModule_TerrainPhysics();
	RegisterModule_TerrainPhysics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_TextCore();
	RegisterModule_TextCore();

	void RegisterModule_TLS();
	RegisterModule_TLS();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UIElementsNative();
	RegisterModule_UIElementsNative();

	void RegisterModule_UIElements();
	RegisterModule_UIElements();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_Video();
	RegisterModule_Video();

	void RegisterModule_WebGL();
	RegisterModule_WebGL();

}

template <typename T> void RegisterUnityClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

class EditorExtension; template <> void RegisterUnityClass<EditorExtension>(const char*);
namespace Unity { class Component; } template <> void RegisterUnityClass<Unity::Component>(const char*);
class Behaviour; template <> void RegisterUnityClass<Behaviour>(const char*);
class Animation; template <> void RegisterUnityClass<Animation>(const char*);
class Animator; template <> void RegisterUnityClass<Animator>(const char*);
namespace Unity { class ArticulationBody; } 
class AudioBehaviour; template <> void RegisterUnityClass<AudioBehaviour>(const char*);
class AudioListener; template <> void RegisterUnityClass<AudioListener>(const char*);
class AudioSource; template <> void RegisterUnityClass<AudioSource>(const char*);
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterUnityClass<Camera>(const char*);
namespace UI { class Canvas; } template <> void RegisterUnityClass<UI::Canvas>(const char*);
namespace UI { class CanvasGroup; } template <> void RegisterUnityClass<UI::CanvasGroup>(const char*);
namespace Unity { class Cloth; } 
class Collider2D; 
class BoxCollider2D; 
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class TilemapCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; 
class GridLayout; 
class Grid; 
class Tilemap; 
class Halo; 
class IConstraint; 
class AimConstraint; 
class LookAtConstraint; 
class ParentConstraint; 
class PositionConstraint; 
class RotationConstraint; 
class ScaleConstraint; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterUnityClass<Light>(const char*);
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterUnityClass<MonoBehaviour>(const char*);
class NavMeshAgent; template <> void RegisterUnityClass<NavMeshAgent>(const char*);
class NavMeshObstacle; 
class OffMeshLink; 
class ParticleSystemForceField; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; 
class Projector; 
class ReflectionProbe; template <> void RegisterUnityClass<ReflectionProbe>(const char*);
class Skybox; 
class SortingGroup; 
class StreamingController; 
class Terrain; template <> void RegisterUnityClass<Terrain>(const char*);
class VideoPlayer; template <> void RegisterUnityClass<VideoPlayer>(const char*);
class VisualEffect; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterUnityClass<UI::CanvasRenderer>(const char*);
class Collider; template <> void RegisterUnityClass<Collider>(const char*);
class BoxCollider; template <> void RegisterUnityClass<BoxCollider>(const char*);
class CapsuleCollider; template <> void RegisterUnityClass<CapsuleCollider>(const char*);
class CharacterController; 
class MeshCollider; template <> void RegisterUnityClass<MeshCollider>(const char*);
class SphereCollider; 
class TerrainCollider; template <> void RegisterUnityClass<TerrainCollider>(const char*);
class WheelCollider; 
namespace Unity { class Joint; } 
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } 
class LODGroup; 
class MeshFilter; template <> void RegisterUnityClass<MeshFilter>(const char*);
class OcclusionArea; 
class OcclusionPortal; 
class ParticleSystem; 
class Renderer; template <> void RegisterUnityClass<Renderer>(const char*);
class BillboardRenderer; 
class LineRenderer; 
class MeshRenderer; template <> void RegisterUnityClass<MeshRenderer>(const char*);
class ParticleSystemRenderer; 
class SkinnedMeshRenderer; template <> void RegisterUnityClass<SkinnedMeshRenderer>(const char*);
class SpriteMask; 
class SpriteRenderer; 
class SpriteShapeRenderer; 
class TilemapRenderer; 
class TrailRenderer; 
class VFXRenderer; 
class Rigidbody; template <> void RegisterUnityClass<Rigidbody>(const char*);
class Rigidbody2D; 
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterUnityClass<Transform>(const char*);
namespace UI { class RectTransform; } template <> void RegisterUnityClass<UI::RectTransform>(const char*);
class Tree; 
class GameObject; template <> void RegisterUnityClass<GameObject>(const char*);
class NamedObject; template <> void RegisterUnityClass<NamedObject>(const char*);
class AssetBundle; 
class AssetBundleManifest; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; template <> void RegisterUnityClass<Avatar>(const char*);
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; template <> void RegisterUnityClass<ComputeShader>(const char*);
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterUnityClass<TextRendering::Font>(const char*);
class LightProbes; template <> void RegisterUnityClass<LightProbes>(const char*);
class LightingSettings; template <> void RegisterUnityClass<LightingSettings>(const char*);
class LocalizationAsset; 
class Material; template <> void RegisterUnityClass<Material>(const char*);
class ProceduralMaterial; 
class Mesh; template <> void RegisterUnityClass<Mesh>(const char*);
class Motion; template <> void RegisterUnityClass<Motion>(const char*);
class AnimationClip; template <> void RegisterUnityClass<AnimationClip>(const char*);
class NavMeshData; template <> void RegisterUnityClass<NavMeshData>(const char*);
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterUnityClass<PreloadData>(const char*);
class RayTracingShader; 
class RuntimeAnimatorController; template <> void RegisterUnityClass<RuntimeAnimatorController>(const char*);
class AnimatorController; template <> void RegisterUnityClass<AnimatorController>(const char*);
class AnimatorOverrideController; template <> void RegisterUnityClass<AnimatorOverrideController>(const char*);
class SampleClip; template <> void RegisterUnityClass<SampleClip>(const char*);
class AudioClip; template <> void RegisterUnityClass<AudioClip>(const char*);
class Shader; template <> void RegisterUnityClass<Shader>(const char*);
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterUnityClass<Sprite>(const char*);
class SpriteAtlas; template <> void RegisterUnityClass<SpriteAtlas>(const char*);
class SubstanceArchive; 
class TerrainData; template <> void RegisterUnityClass<TerrainData>(const char*);
class TerrainLayer; 
class TextAsset; template <> void RegisterUnityClass<TextAsset>(const char*);
class MonoScript; template <> void RegisterUnityClass<MonoScript>(const char*);
class Texture; template <> void RegisterUnityClass<Texture>(const char*);
class BaseVideoTexture; 
class WebCamTexture; 
class CubemapArray; template <> void RegisterUnityClass<CubemapArray>(const char*);
class LowerResBlitTexture; template <> void RegisterUnityClass<LowerResBlitTexture>(const char*);
class ProceduralTexture; 
class RenderTexture; template <> void RegisterUnityClass<RenderTexture>(const char*);
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterUnityClass<Texture2D>(const char*);
class Cubemap; template <> void RegisterUnityClass<Cubemap>(const char*);
class Texture2DArray; template <> void RegisterUnityClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterUnityClass<Texture3D>(const char*);
class VideoClip; template <> void RegisterUnityClass<VideoClip>(const char*);
class VisualEffectObject; 
class VisualEffectAsset; 
class VisualEffectSubgraph; 
class GameManager; template <> void RegisterUnityClass<GameManager>(const char*);
class GlobalGameManager; template <> void RegisterUnityClass<GlobalGameManager>(const char*);
class AudioManager; template <> void RegisterUnityClass<AudioManager>(const char*);
class BuildSettings; template <> void RegisterUnityClass<BuildSettings>(const char*);
class DelayedCallManager; template <> void RegisterUnityClass<DelayedCallManager>(const char*);
class GraphicsSettings; template <> void RegisterUnityClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterUnityClass<InputManager>(const char*);
class MonoManager; template <> void RegisterUnityClass<MonoManager>(const char*);
class NavMeshProjectSettings; template <> void RegisterUnityClass<NavMeshProjectSettings>(const char*);
class Physics2DSettings; 
class PhysicsManager; template <> void RegisterUnityClass<PhysicsManager>(const char*);
class PlayerSettings; template <> void RegisterUnityClass<PlayerSettings>(const char*);
class QualitySettings; template <> void RegisterUnityClass<QualitySettings>(const char*);
class ResourceManager; template <> void RegisterUnityClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterUnityClass<RuntimeInitializeOnLoadManager>(const char*);
class ShaderNameRegistry; template <> void RegisterUnityClass<ShaderNameRegistry>(const char*);
class StreamingManager; 
class TagManager; template <> void RegisterUnityClass<TagManager>(const char*);
class TimeManager; template <> void RegisterUnityClass<TimeManager>(const char*);
class UnityConnectSettings; template <> void RegisterUnityClass<UnityConnectSettings>(const char*);
class VFXManager; 
class LevelGameManager; template <> void RegisterUnityClass<LevelGameManager>(const char*);
class LightmapSettings; template <> void RegisterUnityClass<LightmapSettings>(const char*);
class NavMeshSettings; template <> void RegisterUnityClass<NavMeshSettings>(const char*);
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterUnityClass<RenderSettings>(const char*);

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 86 non stripped classes
	//0. NavMeshAgent
	RegisterUnityClass<NavMeshAgent>("AI");
	//1. NavMeshData
	RegisterUnityClass<NavMeshData>("AI");
	//2. NavMeshProjectSettings
	RegisterUnityClass<NavMeshProjectSettings>("AI");
	//3. NavMeshSettings
	RegisterUnityClass<NavMeshSettings>("AI");
	//4. Animation
	RegisterUnityClass<Animation>("Animation");
	//5. AnimationClip
	RegisterUnityClass<AnimationClip>("Animation");
	//6. Animator
	RegisterUnityClass<Animator>("Animation");
	//7. AnimatorController
	RegisterUnityClass<AnimatorController>("Animation");
	//8. AnimatorOverrideController
	RegisterUnityClass<AnimatorOverrideController>("Animation");
	//9. Avatar
	RegisterUnityClass<Avatar>("Animation");
	//10. Motion
	RegisterUnityClass<Motion>("Animation");
	//11. RuntimeAnimatorController
	RegisterUnityClass<RuntimeAnimatorController>("Animation");
	//12. AudioBehaviour
	RegisterUnityClass<AudioBehaviour>("Audio");
	//13. AudioClip
	RegisterUnityClass<AudioClip>("Audio");
	//14. AudioListener
	RegisterUnityClass<AudioListener>("Audio");
	//15. AudioManager
	RegisterUnityClass<AudioManager>("Audio");
	//16. AudioSource
	RegisterUnityClass<AudioSource>("Audio");
	//17. SampleClip
	RegisterUnityClass<SampleClip>("Audio");
	//18. Behaviour
	RegisterUnityClass<Behaviour>("Core");
	//19. BuildSettings
	RegisterUnityClass<BuildSettings>("Core");
	//20. Camera
	RegisterUnityClass<Camera>("Core");
	//21. Unity::Component
	RegisterUnityClass<Unity::Component>("Core");
	//22. ComputeShader
	RegisterUnityClass<ComputeShader>("Core");
	//23. Cubemap
	RegisterUnityClass<Cubemap>("Core");
	//24. CubemapArray
	RegisterUnityClass<CubemapArray>("Core");
	//25. DelayedCallManager
	RegisterUnityClass<DelayedCallManager>("Core");
	//26. EditorExtension
	RegisterUnityClass<EditorExtension>("Core");
	//27. GameManager
	RegisterUnityClass<GameManager>("Core");
	//28. GameObject
	RegisterUnityClass<GameObject>("Core");
	//29. GlobalGameManager
	RegisterUnityClass<GlobalGameManager>("Core");
	//30. GraphicsSettings
	RegisterUnityClass<GraphicsSettings>("Core");
	//31. InputManager
	RegisterUnityClass<InputManager>("Core");
	//32. LevelGameManager
	RegisterUnityClass<LevelGameManager>("Core");
	//33. Light
	RegisterUnityClass<Light>("Core");
	//34. LightingSettings
	RegisterUnityClass<LightingSettings>("Core");
	//35. LightmapSettings
	RegisterUnityClass<LightmapSettings>("Core");
	//36. LightProbes
	RegisterUnityClass<LightProbes>("Core");
	//37. LowerResBlitTexture
	RegisterUnityClass<LowerResBlitTexture>("Core");
	//38. Material
	RegisterUnityClass<Material>("Core");
	//39. Mesh
	RegisterUnityClass<Mesh>("Core");
	//40. MeshFilter
	RegisterUnityClass<MeshFilter>("Core");
	//41. MeshRenderer
	RegisterUnityClass<MeshRenderer>("Core");
	//42. MonoBehaviour
	RegisterUnityClass<MonoBehaviour>("Core");
	//43. MonoManager
	RegisterUnityClass<MonoManager>("Core");
	//44. MonoScript
	RegisterUnityClass<MonoScript>("Core");
	//45. NamedObject
	RegisterUnityClass<NamedObject>("Core");
	//46. Object
	//Skipping Object
	//47. PlayerSettings
	RegisterUnityClass<PlayerSettings>("Core");
	//48. PreloadData
	RegisterUnityClass<PreloadData>("Core");
	//49. QualitySettings
	RegisterUnityClass<QualitySettings>("Core");
	//50. UI::RectTransform
	RegisterUnityClass<UI::RectTransform>("Core");
	//51. ReflectionProbe
	RegisterUnityClass<ReflectionProbe>("Core");
	//52. Renderer
	RegisterUnityClass<Renderer>("Core");
	//53. RenderSettings
	RegisterUnityClass<RenderSettings>("Core");
	//54. RenderTexture
	RegisterUnityClass<RenderTexture>("Core");
	//55. ResourceManager
	RegisterUnityClass<ResourceManager>("Core");
	//56. RuntimeInitializeOnLoadManager
	RegisterUnityClass<RuntimeInitializeOnLoadManager>("Core");
	//57. Shader
	RegisterUnityClass<Shader>("Core");
	//58. ShaderNameRegistry
	RegisterUnityClass<ShaderNameRegistry>("Core");
	//59. SkinnedMeshRenderer
	RegisterUnityClass<SkinnedMeshRenderer>("Core");
	//60. Sprite
	RegisterUnityClass<Sprite>("Core");
	//61. SpriteAtlas
	RegisterUnityClass<SpriteAtlas>("Core");
	//62. TagManager
	RegisterUnityClass<TagManager>("Core");
	//63. TextAsset
	RegisterUnityClass<TextAsset>("Core");
	//64. Texture
	RegisterUnityClass<Texture>("Core");
	//65. Texture2D
	RegisterUnityClass<Texture2D>("Core");
	//66. Texture2DArray
	RegisterUnityClass<Texture2DArray>("Core");
	//67. Texture3D
	RegisterUnityClass<Texture3D>("Core");
	//68. TimeManager
	RegisterUnityClass<TimeManager>("Core");
	//69. Transform
	RegisterUnityClass<Transform>("Core");
	//70. BoxCollider
	RegisterUnityClass<BoxCollider>("Physics");
	//71. CapsuleCollider
	RegisterUnityClass<CapsuleCollider>("Physics");
	//72. Collider
	RegisterUnityClass<Collider>("Physics");
	//73. MeshCollider
	RegisterUnityClass<MeshCollider>("Physics");
	//74. PhysicsManager
	RegisterUnityClass<PhysicsManager>("Physics");
	//75. Rigidbody
	RegisterUnityClass<Rigidbody>("Physics");
	//76. Terrain
	RegisterUnityClass<Terrain>("Terrain");
	//77. TerrainData
	RegisterUnityClass<TerrainData>("Terrain");
	//78. TerrainCollider
	RegisterUnityClass<TerrainCollider>("TerrainPhysics");
	//79. TextRendering::Font
	RegisterUnityClass<TextRendering::Font>("TextRendering");
	//80. UI::Canvas
	RegisterUnityClass<UI::Canvas>("UI");
	//81. UI::CanvasGroup
	RegisterUnityClass<UI::CanvasGroup>("UI");
	//82. UI::CanvasRenderer
	RegisterUnityClass<UI::CanvasRenderer>("UI");
	//83. UnityConnectSettings
	RegisterUnityClass<UnityConnectSettings>("UnityConnect");
	//84. VideoClip
	RegisterUnityClass<VideoClip>("Video");
	//85. VideoPlayer
	RegisterUnityClass<VideoPlayer>("Video");

}
