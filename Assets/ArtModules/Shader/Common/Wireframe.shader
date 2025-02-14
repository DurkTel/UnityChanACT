Shader "Custom/Common/Wireframe"
{
    Properties
    {
        _Color ("Main Color", Color) = (1, 1, 1, 1)
    }
    SubShader
    {
        Pass
        {
            CGPROGRAM
            #pragma vertex vert
            #pragma geometry geom
            #pragma fragment frag
            #include "UnityCG.cginc"

            struct appdata
            {
                float4 vertex : POSITION;
            };

            struct v2f
            {
                float4 pos : POSITION;
            };

            struct geomOut
            {
                float4 pos : SV_POSITION;
            };

            fixed4 _Color;

            v2f vert(appdata v)
            {
                v2f o;
                o.pos = UnityObjectToClipPos(v.vertex);
                return o;
            }

            [maxvertexcount(24)]
            void geom(triangle v2f input[3], inout LineStream<geomOut> output)
            {
                for (uint i = 0; i < 3; i++)
                {
                    geomOut o;
                    o.pos = input[i].pos;
                    output.Append(o);
                    o.pos = input[(i + 1) % 3].pos;
                    output.Append(o);
                }
            }

            fixed4 frag(geomOut i) : SV_Target
            {
                return _Color;
            }
            ENDCG
        }
    }
}