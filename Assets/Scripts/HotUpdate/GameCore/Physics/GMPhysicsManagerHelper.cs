using LGameFramework.GameBase;
using UnityEngine;

namespace LGameFramework.GameCore
{
    public class GMPhysicsManagerHelper : MonoBehaviour, IModuleEditorHelper<GMPhysicsManager>
    {
        private GMPhysicsManager m_DataSource;
        public GMPhysicsManager DataSource { get { return m_DataSource; } }

        public void Attach(GMPhysicsManager source)
        {
            m_DataSource = source;
        }

        private void OnDrawGizmos()
        {
            foreach (var item in DataSource.AllCollisions)
            {
                Matrix4x4 oldMatrix = Gizmos.matrix;
                var obb = item.Value as OBBCollision;
                Gizmos.matrix = Matrix4x4.TRS(obb.Position, obb.Rotation, Vector3.one);
                Color color = Color.green;
                switch (obb.CollisionType)
                {
                    case 0:
                        color = Color.green;
                        break;
                    case 1:
                        color = Color.red;
                        break;
                    case 2:
                        color = Color.yellow;
                        break;
                    case 3:
                        color = Color.blue;
                        break;
                    default:
                        break;
                }
                Gizmos.color = color;
                Gizmos.DrawWireCube(Vector3.zero, obb.Scale);

                //Gizmos.color = Color.black;
                //Gizmos.DrawSphere(obb.HitPoint, 0.1f);

                Gizmos.matrix = oldMatrix;
            }
        }
    }
}
