using LGameFramework.GameBase.RangeDetection;
using System.Collections.Generic;
using UnityEngine;

public class DebugHelper : MonoBehaviour
{

    public void OnDrawGizmos()
    {
        DrawLabelGizmois();
        DrawSphereGizmois();
        DrawCapsuleGizmois();
        DrawLineGizmois();
        DrawCubeGizmois();
        DrawRectangleGizmois();
        DrawCircleGizmois();
        DrawTriangleGizmois();
        DrawFanshapedGizmois();
        DrawMatrixGizmois();

    }


    #region 绘制文本
    private static Queue<Label> m_LabelGizmos = new Queue<Label>();
    public static void DrawLabel(string text, Vector3 position, Color color, float duration = 0)
    {
        Label label = new Label();
        label.center = position;
        label.label = text;
        label.color = color;
        label.remainingTime = duration;

        m_LabelGizmos.Enqueue(label);
    }

    private void DrawLabelGizmois()
    {
#if UNITY_EDITOR
        int count = m_LabelGizmos.Count;
        for (int i = 0; i < count; i++)
        {
            Label label = m_LabelGizmos.Dequeue();

            var style = new GUIStyle();
            style.normal.textColor = label.color;
            style.fontSize = 20;

            UnityEditor.Handles.Label(label.center, label.label, style);
            if (label.remainingTime > 0)
            {
                label.remainingTime -= Time.deltaTime;
                m_LabelGizmos.Enqueue(label);
            }
        }
#endif
    }

    public struct Label
    {
        public string label;
        public Vector3 center;
        public Color color;
        public float remainingTime;
    }
    #endregion

    #region 绘制球体
    private static Queue<Sphere> m_SphereGizmosQueue = new Queue<Sphere>();
    public static void DrawSphere(Vector3 center, float radius, Color color, float duration = 0, bool isWire = true)
    {
        Sphere sphere = new Sphere();
        sphere.center = center;
        sphere.radius = radius;
        sphere.color = color;
        sphere.isWire = isWire;
        sphere.remainingTime = duration;

        m_SphereGizmosQueue.Enqueue(sphere);
    }

    private void DrawSphereGizmois()
    {
        int count = m_SphereGizmosQueue.Count;
        for (int i = 0; i < count; i++)
        {
            Sphere sphere = m_SphereGizmosQueue.Dequeue();

            Gizmos.color = sphere.color;
            if (sphere.isWire)
                Gizmos.DrawWireSphere(sphere.center, sphere.radius);
            else
                Gizmos.DrawSphere(sphere.center, sphere.radius);

            if (sphere.remainingTime > 0)
            {
                sphere.remainingTime -= Time.deltaTime;
                m_SphereGizmosQueue.Enqueue(sphere);
            }
        }
    }

    public struct Sphere
    {
        public Vector3 center;
        public float radius;
        public Color color;
        public float remainingTime;
        public bool isWire;
    }
    #endregion

    #region 绘制圆柱

    private static Queue<Capsule> m_CapsuleGizmosQueue = new Queue<Capsule>();
    public static void DrawCapsule(Vector3 p1, Vector3 p2, float radius, Color color, float duration = 0)
    {
        Capsule capsule = new Capsule();
        capsule.bot = p1;
        capsule.top = p2;
        capsule.radius = radius;
        capsule.color = color;
        capsule.remainingTime = duration;

        m_CapsuleGizmosQueue.Enqueue(capsule);
    }

    private void DrawCapsuleGizmois()
    {
        int count = m_CapsuleGizmosQueue.Count;
        for (int i = 0; i < count; i++)
        {
            Capsule capsule = m_CapsuleGizmosQueue.Dequeue();

            Gizmos.color = capsule.color;
            Gizmos.DrawWireSphere(capsule.bot, capsule.radius);
            Gizmos.DrawWireSphere(capsule.top, capsule.radius);

            for (int j = 0; j < 4; j++)
            {
                float x = j == 0 ? 1 : j == 2 ? -1 : 0;
                float y = j == 1 ? 1 : j == 3 ? -1 : 0;

                Vector3 offset = new Vector3(x, 0, y) * capsule.radius;
                Vector3 start = capsule.bot + offset;
                Vector3 end = capsule.top + offset;

                Gizmos.DrawLine(start, end);
            }

            if (capsule.remainingTime > 0)
            {
                capsule.remainingTime -= Time.deltaTime;
                m_CapsuleGizmosQueue.Enqueue(capsule);
            }
        }
    }

    public struct Capsule
    {
        public Vector3 bot;
        public Vector3 top;
        public float radius;
        public Color color;
        public float remainingTime;
    }
    #endregion

    #region 绘制线段
    private static Queue<Line> m_LineGizmos = new Queue<Line>();
    public static void DrawLine(Vector3 form, Vector3 to, Color color, float duration = 0)
    {
        Line line = new Line();
        line.form = form;
        line.to = to;
        line.color = color;
        line.remainingTime = duration;

        m_LineGizmos.Enqueue(line);
    }

    private void DrawLineGizmois()
    {
        int count = m_LineGizmos.Count;
        for (int i = 0; i < count; i++)
        {
            Line line = m_LineGizmos.Dequeue();

            Gizmos.color = line.color;
            Gizmos.DrawLine(line.form, line.to);

            if (line.remainingTime > 0)
            {
                line.remainingTime -= Time.deltaTime;
                m_LineGizmos.Enqueue(line);
            }
        }
    }

    public class Line
    {
        public Vector3 form;
        public Vector3 to;
        public Color color;
        public float remainingTime;
    }
    #endregion

    #region 绘制立方体
    private static Queue<Cube> m_CubeGizmosQueue = new Queue<Cube>();
    public static void DrawCube(Vector3 center, Vector3 size, Color color, float duration = 0, bool isWire = true)
    {
        Cube cube = new Cube();
        cube.center = center;
        cube.size = size;
        cube.color = color;
        cube.isWire = isWire;
        cube.remainingTime = duration;

        m_CubeGizmosQueue.Enqueue(cube);
    }

    private void DrawCubeGizmois()
    {
        int count = m_CubeGizmosQueue.Count;
        for (int i = 0; i < count; i++)
        {
            Cube cube = m_CubeGizmosQueue.Dequeue();

            Gizmos.color = cube.color;
            if (cube.isWire)
                Gizmos.DrawWireCube(cube.center, cube.size);
            else
                Gizmos.DrawCube(cube.center, cube.size);

            if (cube.remainingTime > 0)
            {
                cube.remainingTime -= Time.deltaTime;
                m_CubeGizmosQueue.Enqueue(cube);
            }
        }
    }

    public struct Cube
    {
        public Vector3 center;
        public Vector3 size;
        public Color color;
        public float remainingTime;
        public bool isWire;
    }
    #endregion

    #region 绘制矩形
    private static Queue<Line[]> m_RectangleGizmos = new Queue<Line[]>();
    public static void DrawRectangle(Rectangle rectangle, Color color, float duration = 0)
    {
        Line[] rect = new Line[4];
        for (int i = 0; i < rect.Length; i++)
        {
            int nextIndex = i + 1 >= rect.Length ? 0 : i + 1;
            rect[i] = new Line();   
            rect[i].form = rectangle[i];
            rect[i].to = rectangle[nextIndex];
            rect[i].color = color;
            rect[i].remainingTime = duration;
        }
        
        m_RectangleGizmos.Enqueue(rect);
    }
    private void DrawRectangleGizmois()
    {
        int count = m_RectangleGizmos.Count;
        for (int i = 0; i < count; i++)
        {
            Line[] rect = m_RectangleGizmos.Dequeue();

            foreach (var line in rect)
            {
                Gizmos.color = line.color;
                Gizmos.DrawLine(line.form, line.to);

                if (line.remainingTime > 0)
                {
                    line.remainingTime -= Time.deltaTime;
                    m_LineGizmos.Enqueue(line);
                }
            }
        }
    }
    #endregion

    #region 绘制圆形
    private static Queue<CircleGizmos> m_CircleGizmos = new Queue<CircleGizmos>();
    public static void DrawCircle(Circle circle, Color color, float duration = 0)
    {
        CircleGizmos cg = new CircleGizmos();
        cg.color = color;
        cg.center = circle.center; 
        cg.radius = circle.radius;
        cg.remainingTime = duration;
        m_CircleGizmos.Enqueue(cg);
    }
    private void DrawCircleGizmois()
    {
        int count = m_CircleGizmos.Count;
        for (int i = 0; i < count; i++)
        {
            CircleGizmos circle = m_CircleGizmos.Dequeue();

            Gizmos.color = circle.color;
            int num = 40;
            float radian = 2f * Mathf.PI / num;
            for (int j = 1; j < num; j++)
            {
                Gizmos.DrawSphere(new Vector3(circle.center.x + (circle.radius * Mathf.Cos(j * radian)), 0, circle.center.z + (circle.radius * Mathf.Sin(j * radian))), 0.05f);
            }

            if (circle.remainingTime > 0)
            {
                circle.remainingTime -= Time.deltaTime;
                m_CircleGizmos.Enqueue(circle);
            }
        }
    }


    public struct CircleGizmos
    {
        public Vector3 center;
        public float radius;
        public Color color;
        public float remainingTime;
    }
    #endregion

    #region 绘制三角形
    private static Queue<TriangleGizmos> m_TriangleGizmos = new Queue<TriangleGizmos>();
    public static void DrawTriangle(Triangle triangle, Color color, float duration = 0)
    {
        TriangleGizmos tr = new TriangleGizmos();
        tr.color = color;
        tr.point1 = triangle.corner1;
        tr.point2 = triangle.corner2;
        tr.point3 = triangle.corner3;

        tr.remainingTime = duration;
        m_TriangleGizmos.Enqueue(tr);
    }
    private void DrawTriangleGizmois()
    {
        int count = m_TriangleGizmos.Count;
        for (int i = 0; i < count; i++)
        {
            TriangleGizmos triangle = m_TriangleGizmos.Dequeue();

            Gizmos.color = triangle.color;
            Gizmos.DrawLine(triangle.point1, triangle.point2);
            Gizmos.DrawLine(triangle.point2, triangle.point3);
            Gizmos.DrawLine(triangle.point3, triangle.point1);


            if (triangle.remainingTime > 0)
            {
                triangle.remainingTime -= Time.deltaTime;
                m_TriangleGizmos.Enqueue(triangle);
            }
        }
    }

    public struct TriangleGizmos
    {
        public Vector3 point1;
        public Vector3 point2;
        public Vector3 point3;
        public Color color;
        public float remainingTime;
    }
    #endregion

    #region 绘制扇形
    private static Queue<FanshapedGizmos> m_FanshapedGizmos = new Queue<FanshapedGizmos>();
    public static void DrawFanshaped(Fanshaped fanshaped, Vector3 start, Vector3 dir, Color color, float duration = 0)
    {
        FanshapedGizmos tr = new FanshapedGizmos();
        tr.color = color;
        tr.start = start;
        tr.dir = dir;
        tr.angel = fanshaped.angel;
        tr.radius = fanshaped.radius;

        tr.remainingTime = duration;
        m_FanshapedGizmos.Enqueue(tr);
    }
    private void DrawFanshapedGizmois()
    {
        int count = m_FanshapedGizmos.Count;
        for (int i = 0; i < count; i++)
        {
            FanshapedGizmos triangle = m_FanshapedGizmos.Dequeue();

            Gizmos.color = triangle.color;
            float x = triangle.radius * Mathf.Sin(triangle.angel / 2 * Mathf.Deg2Rad);
            float y = Mathf.Sqrt(Mathf.Pow(triangle.radius, 2) - Mathf.Pow(x, 2f));
            float dir = triangle.dir.z > 0 ? 1f : -1f;   
            Vector3 a = new Vector3(triangle.start.x - x, 0, (triangle.start.z + y * dir));
            Vector3 b = new Vector3(triangle.start.x + x, 0, triangle.start.z + y * dir);

            Gizmos.DrawLine(triangle.start, a);
            Gizmos.DrawLine(triangle.start, b);

            float half = triangle.angel / 2;
            int num = 10;
            for (int j = 0; j < num; j++)
            {
                float temp = half / num;
                temp *= j;
                x = triangle.radius * Mathf.Sin(temp * Mathf.Deg2Rad);
                y = Mathf.Sqrt(Mathf.Pow(triangle.radius, 2) - Mathf.Pow(x, 2f));
                a = new Vector3(triangle.start.x - x, 0, triangle.start.z + y * dir);
                Gizmos.DrawSphere(a, 0.05f);
                x = triangle.radius * Mathf.Sin(-temp * Mathf.Deg2Rad);
                y = Mathf.Sqrt(Mathf.Pow(triangle.radius, 2) - Mathf.Pow(x, 2f));
                a = new Vector3(triangle.start.x - x, 0, triangle.start.z + y * dir);
                Gizmos.DrawSphere(a, 0.05f);
            }

            if (triangle.remainingTime > 0)
            {
                triangle.remainingTime -= Time.deltaTime;
                m_FanshapedGizmos.Enqueue(triangle);
            }
        }
    }

    public struct FanshapedGizmos
    {
        public Vector3 start;
        public Vector3 dir;
        public float angel;
        public float radius;
        public Color color;
        public float remainingTime;
    }
    #endregion

    #region 绘制矩阵
    private static Queue<GizmoisMatrix> m_MatrixGizmosQueue = new Queue<GizmoisMatrix>();
    public static void DrawMatrix(Matrix4x4 matrix, Color color, float duration = 0, bool isWire = true)
    {
        GizmoisMatrix cube = new GizmoisMatrix();
        cube.matrix = matrix;
        cube.color = color;
        cube.isWire = isWire;
        cube.remainingTime = duration;

        m_MatrixGizmosQueue.Enqueue(cube);
    }

    private void DrawMatrixGizmois()
    {
        int count = m_MatrixGizmosQueue.Count;
        for (int i = 0; i < count; i++)
        {
            GizmoisMatrix cube = m_MatrixGizmosQueue.Dequeue();

            Gizmos.color = cube.color;
            Gizmos.matrix = cube.matrix;

            if (cube.isWire)
                Gizmos.DrawWireCube(Vector3.zero, Vector3.one);
            else
                Gizmos.DrawCube(Vector3.zero, Vector3.one);

            if (cube.remainingTime > 0)
            {
                cube.remainingTime -= Time.deltaTime;
                m_MatrixGizmosQueue.Enqueue(cube);
            }
        }
    }

    public struct GizmoisMatrix
    {
        public Matrix4x4 matrix;
        public Color color;
        public bool isWire;
        public float remainingTime;
    }

    #endregion
}
