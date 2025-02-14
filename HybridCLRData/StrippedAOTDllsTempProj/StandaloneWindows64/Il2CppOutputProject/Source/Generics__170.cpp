#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3*, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2*, T3*, T4, T5>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4, T5 p5)
	{
		R ret;
		void* params[5] = { p1, p2, p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct ConstrainedFuncInvoker1;
template <typename R, typename T1>
struct ConstrainedFuncInvoker1<R, T1*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

struct IEnumerator_1_tED119945D72D744D23DFDC6843191AAB874E1A68;
struct IEnumerator_1_t6DAAEDCDB0B61C12A3B6A0A1A7865C9F6F3231F2;
struct UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct Exception_t;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3;

IL2CPP_EXTERN_C RuntimeClass* AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral08C6D00ED24B7C6D6B098C63F3DF60E72309D959;
IL2CPP_EXTERN_C String_t* _stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F;
IL2CPP_EXTERN_C String_t* _stringLiteral352E7122B0DE6CCD5D3EE15BBDB0146E12829A52;
IL2CPP_EXTERN_C String_t* _stringLiteral3EF31B73D0B6BCC1365FEEA9C031B0C6E2F8BD6E;
IL2CPP_EXTERN_C String_t* _stringLiteral50078E6885204BADA7C4D8AF0169823A59C3BD81;
IL2CPP_EXTERN_C String_t* _stringLiteral5251CAC1BCE4AF2A35283EDB521F6110A8B98A71;
IL2CPP_EXTERN_C String_t* _stringLiteral68B688C01BCBF69859DF1A84C9E7E103147E76DB;
IL2CPP_EXTERN_C String_t* _stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F;
IL2CPP_EXTERN_C String_t* _stringLiteral9316BB61AE75FFC69C97AE05928643FC2067D945;
IL2CPP_EXTERN_C String_t* _stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457;
IL2CPP_EXTERN_C String_t* _stringLiteralDFDEA45BDE2DE7BA24A83DDEBF6D1722801A1BCD;
IL2CPP_EXTERN_C String_t* _stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246;
IL2CPP_EXTERN_C String_t* _stringLiteralF6174C62DAADCBD566E6B0784CA0CCE4BADBB7E7;
IL2CPP_EXTERN_C String_t* _stringLiteralF703F3F0F7C845BF62BD938758D234649F062C71;
IL2CPP_EXTERN_C const RuntimeMethod* IJobExtensions_Schedule_TisUnsafeDisposeJob_tABDA7829E812471BAF5A6B390D41BCD0260753E8_m3CBEEFA6594925B10D274167F130C7536F6BC43D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Enumerator_t31F4DCDA175D00FF707A4AECC69C81E422EC2E5D 
{
	WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* ___m_Ptr;
	int32_t ___m_Length;
	int32_t ___m_Index;
};
struct NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC 
{
	int32_t ___key;
	int32_t ___NextEntryIndex;
	int32_t ___EntryIndex;
};
struct NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2 
{
	uint16_t ___key;
	int32_t ___NextEntryIndex;
	int32_t ___EntryIndex;
};
typedef Il2CppFullySharedGenericStruct NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51;
struct ParallelReader_t9C18D46113B1C6AAEAD1DBF950354C8B60A07E44 
{
	WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* ___Ptr;
	int32_t ___Length;
};
struct ParallelWriter_t44CFE37FDC25ADFD53664D63793BA9A6C6D48FA4 
{
	UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* ___ListData;
};
struct ParallelWriter_tBD6FA796E098328FD0D7184B017B198502BFFB3D 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_ThreadIndex;
};
struct UnsafeParallelHashMapBase_2_t7515170A4FECF42BAB61A21C7F58CCEDB271F583 
{
};
struct UnsafeParallelHashMapBase_2_t6CB9F52AD722940CC408F97574E31F8BA952860E 
{
};
struct UnsafeParallelHashMapBase_2_t1974D8A21AC8F349CCFED6168093C9FE5AE773C4 
{
};
struct UnsafeParallelHashMapBase_2_t63AB50A8CB3F02324A63D9EA2022DD39A7615318 
{
};
struct UnsafeParallelHashMapBase_2_tE2E760660607234BF636DBCD1366F75110384922 
{
};
struct UnsafeParallelHashMapBase_2_t5AC7AFD2739A2B0ED318BB990074EB63948BB2BD 
{
};
struct UnsafeParallelHashMapBase_2_t079A4E31B80E76065CB122F5F9A04BAC90FF4E30 
{
};
struct UnsafeParallelHashMapBase_2_t4C5206FEF6E4181BBC6793BBF4B865D638D445C4 
{
};
struct UnsafeParallelHashMapBase_2_tC9A90870EF7154E90FC350CFEC5BAF8C8F35A4C0 
{
};
struct UnsafeParallelHashMapBase_2_tE209809AF62992C7A188A3C147B1AEE9B9DC170E 
{
};
struct UnsafeParallelHashMapBase_2_tAEF5291B3DF5062152ED3517B6D4445119F06F89 
{
};
struct UnsafeParallelHashMapBase_2_tCE52D36D1BDA790E7D8A349BB763243E2D8914F5 
{
};
struct BitField32_tAD52A19EA4F8212224DA155FB5018A7836E9B910 
{
	uint32_t ___Value;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
#pragma pack(push, tp, 1)
struct FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					uint8_t ___byte0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint8_t ___byte0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0001_OffsetPadding[1];
					uint8_t ___byte0001;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0001_OffsetPadding_forAlignmentOnly[1];
					uint8_t ___byte0001_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0002_OffsetPadding[2];
					uint8_t ___byte0002;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0002_OffsetPadding_forAlignmentOnly[2];
					uint8_t ___byte0002_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0003_OffsetPadding[3];
					uint8_t ___byte0003;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0003_OffsetPadding_forAlignmentOnly[3];
					uint8_t ___byte0003_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0004_OffsetPadding[4];
					uint8_t ___byte0004;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0004_OffsetPadding_forAlignmentOnly[4];
					uint8_t ___byte0004_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0005_OffsetPadding[5];
					uint8_t ___byte0005;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0005_OffsetPadding_forAlignmentOnly[5];
					uint8_t ___byte0005_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0006_OffsetPadding[6];
					uint8_t ___byte0006;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0006_OffsetPadding_forAlignmentOnly[6];
					uint8_t ___byte0006_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0007_OffsetPadding[7];
					uint8_t ___byte0007;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0007_OffsetPadding_forAlignmentOnly[7];
					uint8_t ___byte0007_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0008_OffsetPadding[8];
					uint8_t ___byte0008;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0008_OffsetPadding_forAlignmentOnly[8];
					uint8_t ___byte0008_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0009_OffsetPadding[9];
					uint8_t ___byte0009;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0009_OffsetPadding_forAlignmentOnly[9];
					uint8_t ___byte0009_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0010_OffsetPadding[10];
					uint8_t ___byte0010;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0010_OffsetPadding_forAlignmentOnly[10];
					uint8_t ___byte0010_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0011_OffsetPadding[11];
					uint8_t ___byte0011;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0011_OffsetPadding_forAlignmentOnly[11];
					uint8_t ___byte0011_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0012_OffsetPadding[12];
					uint8_t ___byte0012;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0012_OffsetPadding_forAlignmentOnly[12];
					uint8_t ___byte0012_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0013_OffsetPadding[13];
					uint8_t ___byte0013;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0013_OffsetPadding_forAlignmentOnly[13];
					uint8_t ___byte0013_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0014_OffsetPadding[14];
					uint8_t ___byte0014;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0014_OffsetPadding_forAlignmentOnly[14];
					uint8_t ___byte0014_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0015_OffsetPadding[15];
					uint8_t ___byte0015;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0015_OffsetPadding_forAlignmentOnly[15];
					uint8_t ___byte0015_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0__padding[16];
	};
};
#pragma pack(pop, tp)
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	uint64_t ___jobGroup;
	int32_t ___version;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_BucketIndex;
	int32_t ___m_NextIndex;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E 
{
	float ___x;
	float ___y;
	float ___z;
};
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A 
{
	int32_t ___x;
	int32_t ___y;
};
struct uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F 
{
	uint32_t ___x;
	uint32_t ___y;
};
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20 
{
	int32_t ___transformIndex;
	int32_t ___refCount;
};
struct U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6 
{
	union
	{
		struct
		{
			int32_t ___FixedElementField;
		};
		uint8_t U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6__padding[8192];
	};
};
struct BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E 
{
	int32_t ___vindex;
	float ___dist;
};
struct KeyValueEnumerator_tA87CA7E290FAE613543B32BDB98BF6F3B96A16F8 
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5 ___m_Enumerator;
};
struct NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B 
{
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___key;
	int32_t ___NextEntryIndex;
	int32_t ___EntryIndex;
};
struct UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057 
{
	WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___length;
	int32_t ___capacity;
};
struct UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
#pragma pack(push, tp, 1)
struct FixedBytes126_tC223222E11A3E93A15FE1C62C3429FC169DBC989 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0016_OffsetPadding[16];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0016_OffsetPadding_forAlignmentOnly[16];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0032_OffsetPadding[32];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0032_OffsetPadding_forAlignmentOnly[32];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0048_OffsetPadding[48];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0048;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0048_OffsetPadding_forAlignmentOnly[48];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0048_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0064_OffsetPadding[64];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0064;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0064_OffsetPadding_forAlignmentOnly[64];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0064_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0080_OffsetPadding[80];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0080;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0080_OffsetPadding_forAlignmentOnly[80];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0080_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0096_OffsetPadding[96];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0096;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0096_OffsetPadding_forAlignmentOnly[96];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0096_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0112_OffsetPadding[112];
					uint8_t ___byte0112;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0112_OffsetPadding_forAlignmentOnly[112];
					uint8_t ___byte0112_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0113_OffsetPadding[113];
					uint8_t ___byte0113;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0113_OffsetPadding_forAlignmentOnly[113];
					uint8_t ___byte0113_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0114_OffsetPadding[114];
					uint8_t ___byte0114;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0114_OffsetPadding_forAlignmentOnly[114];
					uint8_t ___byte0114_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0115_OffsetPadding[115];
					uint8_t ___byte0115;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0115_OffsetPadding_forAlignmentOnly[115];
					uint8_t ___byte0115_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0116_OffsetPadding[116];
					uint8_t ___byte0116;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0116_OffsetPadding_forAlignmentOnly[116];
					uint8_t ___byte0116_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0117_OffsetPadding[117];
					uint8_t ___byte0117;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0117_OffsetPadding_forAlignmentOnly[117];
					uint8_t ___byte0117_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0118_OffsetPadding[118];
					uint8_t ___byte0118;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0118_OffsetPadding_forAlignmentOnly[118];
					uint8_t ___byte0118_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0119_OffsetPadding[119];
					uint8_t ___byte0119;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0119_OffsetPadding_forAlignmentOnly[119];
					uint8_t ___byte0119_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0120_OffsetPadding[120];
					uint8_t ___byte0120;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0120_OffsetPadding_forAlignmentOnly[120];
					uint8_t ___byte0120_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0121_OffsetPadding[121];
					uint8_t ___byte0121;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0121_OffsetPadding_forAlignmentOnly[121];
					uint8_t ___byte0121_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0122_OffsetPadding[122];
					uint8_t ___byte0122;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0122_OffsetPadding_forAlignmentOnly[122];
					uint8_t ___byte0122_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0123_OffsetPadding[123];
					uint8_t ___byte0123;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0123_OffsetPadding_forAlignmentOnly[123];
					uint8_t ___byte0123_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0124_OffsetPadding[124];
					uint8_t ___byte0124;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0124_OffsetPadding_forAlignmentOnly[124];
					uint8_t ___byte0124_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0125_OffsetPadding[125];
					uint8_t ___byte0125;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0125_OffsetPadding_forAlignmentOnly[125];
					uint8_t ___byte0125_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes126_tC223222E11A3E93A15FE1C62C3429FC169DBC989__padding[126];
	};
};
#pragma pack(pop, tp)
struct NativeArrayOptions_t3E979EEF4B4840228A7692A97DA07553C6465F1D 
{
	int32_t ___value__;
};
struct UnsafeDisposeJob_tABDA7829E812471BAF5A6B390D41BCD0260753E8 
{
	void* ___Ptr;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t* ___values;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t* ___values_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keys_OffsetPadding[8];
			uint8_t* ___keys;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keys_OffsetPadding_forAlignmentOnly[8];
			uint8_t* ___keys_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___next_OffsetPadding[16];
			uint8_t* ___next;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___next_OffsetPadding_forAlignmentOnly[16];
			uint8_t* ___next_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___buckets_OffsetPadding[24];
			uint8_t* ___buckets;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___buckets_OffsetPadding_forAlignmentOnly[24];
			uint8_t* ___buckets_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keyCapacity_OffsetPadding[32];
			int32_t ___keyCapacity;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keyCapacity_OffsetPadding_forAlignmentOnly[32];
			int32_t ___keyCapacity_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___bucketCapacityMask_OffsetPadding[36];
			int32_t ___bucketCapacityMask;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___bucketCapacityMask_OffsetPadding_forAlignmentOnly[36];
			int32_t ___bucketCapacityMask_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___allocatedIndexLength_OffsetPadding[40];
			int32_t ___allocatedIndexLength;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___allocatedIndexLength_OffsetPadding_forAlignmentOnly[40];
			int32_t ___allocatedIndexLength_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___firstFreeTLS_OffsetPadding[64];
			U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6 ___firstFreeTLS;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___firstFreeTLS_OffsetPadding_forAlignmentOnly[64];
			U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6 ___firstFreeTLS_forAlignmentOnly;
		};
	};
};
struct UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___Data;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c0;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c1;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c2;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c3;
};
struct quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___value;
};
struct Mode_tE64A406D555EFB86A169D5CC53DFB5FFC93BCF9E 
{
	int32_t ___value__;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tA34CE25E907E5996285FDE99483CF59812EDC26E;
struct FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2 
{
	uint16_t ___length;
	alignas(1) FixedBytes126_tC223222E11A3E93A15FE1C62C3429FC169DBC989 ___buffer;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3 
{
	BitField32_tAD52A19EA4F8212224DA155FB5018A7836E9B910 ___flag;
	int32_t ___mode;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___size;
	float ___main;
	float ___turbulence;
	float ___zoneVolume;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___worldWindDirection;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___worldPositin;
	quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___worldRotation;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___worldScale;
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___worldToLocalMatrix;
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___attenuation;
};
struct NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1 
{
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___Keys;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___Values;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticFields
{
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Invalid;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___None;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Temp;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___TempJob;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Persistent;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___AudioKernel;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_StaticFields
{
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___zero;
};
struct uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F_StaticFields
{
	uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F ___zero;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeList_1_get_Length_mAE769DE03CCB4B6E7A7E37C7FCB07F7D58AF9518_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeList_1_get_Capacity_m69896D0FF20459BAA8A523569F7D9D0E1C1FBCC8_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_Resize_m35FFBB059A219FEF2ADE6C031E9B374234EA08D0_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_length, int32_t ___1_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_set_Length_mCF79509DCFCCC25367A8D66C04CC2A121ADB746C_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_SetCapacity_m8AE389CBA2AAC3FAC801D47F76D5C19735CC5A95_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_set_Capacity_mDA744F3839A2185D9767AC72B89E2937548A23AC_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3 UnsafeList_1_get_Item_m00FB98F8D875F2845DC1C8B8F5C17D94834D09BE_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_set_Item_mB583256CC7DEE421215FB6F901A00EF861273D13_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_index, WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* UnsafeList_1_ElementAt_mDF9DBB3115A15FBB5E4B67891139505BA7EE66D3_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1__ctor_m5D9142B19C17685F35AA017E89B2341BFFAC38ED_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1__ctor_m05100E146CFC10615F9773CD38D2A897DC195D25_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_initialCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* AllocatorManager_Allocate_TisUnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057_m2DF748AC9084E9AEFDB925BA3DC5557DF9EA67E0_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_handle, int32_t ___1_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_Dispose_m32CC0CA2762C4400F12F62C50D47F014E2718686_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_Free_TisUnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057_mD4352CCF5D79918680961BBB6832B2ADF92CBFAB_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_handle, UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* ___1_pointer, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeList_1_get_IsCreated_m271E191117417A3B9F803D26D1C8AC10A564987C_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeList_1_get_IsEmpty_m40BF5162A0137FF0307D71251C56B3C893555D63_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_Free_TisWindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3_mFF295F70E36BCF284C8AE0B0B69656929172E40D_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_handle, WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* ___1_pointer, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobExtensions_Schedule_TisUnsafeDisposeJob_tABDA7829E812471BAF5A6B390D41BCD0260753E8_m3CBEEFA6594925B10D274167F130C7536F6BC43D_gshared (UnsafeDisposeJob_tABDA7829E812471BAF5A6B390D41BCD0260753E8 ___0_jobData, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_dependsOn, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeList_1_Dispose_mEBBCAED6003BF4FD931A0B1294D34D0986870673_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_Clear_m5487AEFB0E4D01B9D061BDED4EE33A76DA5A48BB_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_Realloc_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_mCC73E762F62B3596183A266A8F04A5399AA83E15_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_allocator, int32_t ___1_newCapacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_Realloc_mA714EFE3DFAAF49D508668BDC594095F9E97913F_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_SetCapacity_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_mA35ECC858BADB68783F648AE30DC2B925FD370F0_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_allocator, int32_t ___1_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_TrimExcess_mA18229B7F5BBBB69DD2DD188716062BFF320FC32_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisWindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3_m426883B54AF30DDA55FA1F84E5083B86ECDECD15_gshared_inline (void* ___0_destination, int32_t ___1_index, WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_AddNoResize_m3DAC5CBB711A3CF1428A71E2277F589A1F15FEDB_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_AddRangeNoResize_m82224D94AB999E85E13DB26089656FA566F89090_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, void* ___0_ptr, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_AddRangeNoResize_m1C4182EDBCB6D91A50D3C78A918D7E8A4BA467E9_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057 ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_Add_mDA8DBEF38A6A366F53BDC331727E28A077E8CB33_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_AddRange_m97456825A70AE74BD620181BD3E519F461687B96_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, void* ___0_ptr, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_AddRange_mC92E1F540A3B9A7786C82BCE5093879CF3FE7C28_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057 ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_InsertRangeWithBeginEnd_m1B54E9528555EAE2119F033319F80AA055DC4842_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_begin, int32_t ___1_end, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_RemoveRangeSwapBack_m93A0095FF3BE90438F9ADEDA8D1FE0AFDDE46AC9_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_RemoveAtSwapBack_m0AAE58CD5CE44C06BBB95EA46A1CE1A2ADFF166A_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_RemoveRangeSwapBackWithBeginEnd_mC8132645CACF128079A68BF0D61EA7B463C2EB22_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_begin, int32_t ___1_end, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_RemoveRange_mF463EB821FA676F8E90795E5A541F3FAF9C01605_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_RemoveAt_mE0B1A08D1D959E5C2A23C133792507515D0A6D38_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_RemoveRangeWithBeginEnd_mE6E694A57F3F5F81483E4E3B7C0F902C7596E80D_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_begin, int32_t ___1_end, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelReader__ctor_m89B9703FE4DE1884DD0957749BF96D342D328324_gshared (ParallelReader_t9C18D46113B1C6AAEAD1DBF950354C8B60A07E44* __this, WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParallelReader_t9C18D46113B1C6AAEAD1DBF950354C8B60A07E44 UnsafeList_1_AsParallelReader_mE7666E29CAD300615D87CC0B62676E0C659CC934_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ParallelWriter__ctor_mBC1F78E6299EA08765C42B809498CDFF92312146_gshared_inline (ParallelWriter_t44CFE37FDC25ADFD53664D63793BA9A6C6D48FA4* __this, UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* ___0_listData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParallelWriter_t44CFE37FDC25ADFD53664D63793BA9A6C6D48FA4 UnsafeList_1_AsParallelWriter_m7A91020D3A92D2CD7DDFEB3467B997FE0C5FDF08_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisWindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3_m2F9303AED865A1049498E360278CF4504F790F3D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_CopyFrom_m44DEC8FE2E06DAED439F1F5689A784BBABA05B92_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057 ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t31F4DCDA175D00FF707A4AECC69C81E422EC2E5D UnsafeList_1_GetEnumerator_mA4D6F3B4B78678A8AC7CA5E6654DB6D4F253B4FD_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeList_1_System_Collections_IEnumerable_GetEnumerator_m1D77F8ED7D85C025D7F434188A861EB32174F754_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mC1DDA3847BF1C88B58F0D917F69439D9D66DEEE9_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_CheckIndexCount_mD12239BD8C06A2BDFC2D6A67AD03B5545FDD6AF5_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_CheckBeginEnd_mA1E499D7760C7B78E894B48FB742D1E85A2407C9_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_begin, int32_t ___1_end, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_CheckNoResizeHasEnoughCapacity_mC8525DA5A501FA21084EB3768A6EEBCA224F13AA_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_CheckNoResizeHasEnoughCapacity_m304848E3241D3E38FDCEF67C5E45D24DE82BFA6A_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_length, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeMultiHashMap_2__ctor_m772B2062F82650C8C534372742F00DAD4480AEA6_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, int32_t ___0_capacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeMultiHashMap_2_get_IsEmpty_m130B6E00F6B7C5113464FA052B00178F908C669E_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeMultiHashMap_2_Count_m7970A08A43CADE0FDA44DB8D6A8897CDCC9434FD_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeMultiHashMap_2_get_Capacity_m2FC25F3A82CC8B9A1DC86D05397EAD0ADA1442EF_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeMultiHashMap_2_set_Capacity_mA0A10CE46E5E6102D3784EB4EB2FFA3AB86DADD4_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeMultiHashMap_2_Clear_m21481926E3A97A538FFAD8D09D5E500D257F5657_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeMultiHashMap_2_Add_m5888FF3C3734DF1FB562DD480492BE30B611ACE2_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, Il2CppFullySharedGenericStruct ___0_key, Il2CppFullySharedGenericStruct ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeMultiHashMap_2_Remove_mEA6A50460FAEA33F47AF25AB1C065823009EA2CC_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, Il2CppFullySharedGenericStruct ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeMultiHashMap_2_Remove_mA24D63CC2ADF68280A48B33C66D6BC066BB1431F_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 ___0_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeMultiHashMap_2_TryGetFirstValue_m7DB218582908980321D876C3F935534A2850C4BF_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, Il2CppFullySharedGenericStruct ___0_key, Il2CppFullySharedGenericStruct* ___1_item, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* ___2_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeMultiHashMap_2_TryGetNextValue_mDF0129FA234A46A5935A15E4E204E23075073269_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, Il2CppFullySharedGenericStruct* ___0_item, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* ___1_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeMultiHashMap_2_ContainsKey_m9B3DBB75A9EBEBA17D2ABA2A0B326063F009B77A_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, Il2CppFullySharedGenericStruct ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeMultiHashMap_2_CountValuesForKey_m5378457AA3C117526B31343A95B7975400FBED23_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, Il2CppFullySharedGenericStruct ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeMultiHashMap_2_SetValue_m4581C6A39DC364E8E1ED0B8733B690B8DEBA71AE_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, Il2CppFullySharedGenericStruct ___0_item, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 ___1_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeMultiHashMap_2_get_IsCreated_m2C0B018D0F8A69BD29858F6D4067EFE8D8D64485_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeMultiHashMap_2_Dispose_m42641264E56276BB3D5D978E08C97913A42A933B_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D_gshared (UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26 ___0_jobData, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_dependsOn, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeMultiHashMap_2_Dispose_mEC101D133954EB6E76D37399AB1146BCFEC37E80_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 UnsafeMultiHashMap_2_GetKeyArray_m3BE21AFF7A027040224E819F0EF42735055B763E_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 UnsafeMultiHashMap_2_GetValueArray_mD594171D7915B171526C9B41A4222C7D2734F06B_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1 UnsafeMultiHashMap_2_GetKeyValueArrays_m843F87C85E739204E21812EE1008D293B58DACE0_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeMultiHashMap_2_GetValuesForKey_m72DFF1BAAB77FEB7BCCC0ED7C85C7D8A0484A178_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, Il2CppFullySharedGenericStruct ___0_key, Enumerator_tA34CE25E907E5996285FDE99483CF59812EDC26E* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParallelWriter_tBD6FA796E098328FD0D7184B017B198502BFFB3D UnsafeMultiHashMap_2_AsParallelWriter_m8EC08926230BC651433255EF8AEA38E640A0FF63_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValueEnumerator_tA87CA7E290FAE613543B32BDB98BF6F3B96A16F8 UnsafeMultiHashMap_2_GetEnumerator_mBB0BD2C3803C28D77272CF4AD9A2818F45EE5C0E_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeMultiHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m4D4084D1D76AEF87E59D17595D9E188D998254ED_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeMultiHashMap_2_System_Collections_IEnumerable_GetEnumerator_m2531898A454DAD47904DBB1D498A96ABB7CF73EC_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mE5E99380F6A33E2DC275D507C84BFE8FC7F38E01_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, bool* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_mACFD6EA176D9B36AC7B5CA4395F4916D0E92EAC5_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_gshared_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48259D1BF2B093A901E095965654FE2E58AEF18B_gshared_inline (void* ___0_destination, int32_t ___1_index, bool ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m462FC9B8A557183A5FC65FD720A3A93646AC4074_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFB6AB9C9D92BE08F40BC68B68169718301665214_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m818CAA6EAFE06CEF49B3CECE24196839CB7020E7_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, bool* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m12D21AAF6EAA69F5B1B1BAE3AE5BD5C0B290E7C0_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, uint8_t* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_mD71ACC26B51AF45400896A8D30AD1F4733B045A5_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m193B136343991E144053A14C8C435C19E5516EE0_gshared_inline (void* ___0_destination, int32_t ___1_index, uint8_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_mFD8286F2AE0F44CB779E7680BB93CE90789230F3_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF366B660142E030A52A9E5A6DAC3E7A143409510_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m204EE851B814B670DC65F5037B7D5D189F7FA058_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint8_t* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m06447B534673E0861DE4F55616DFAF9BD7DCBCC6_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m8FA051F1386B583A2848E886020D563EE0004112_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, int32_t* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m800AD0805A8FEA87F79C267739A0F557ACA44015_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m8927ACA31388B65E99B4E0301130276415771390_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m526C9313C8BCF707526B309126FFB7502C548A5D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m3A37DD53E6586935E3AAC304D3AB4EF2AFF4A905_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mE13F758756460959240C64E5A4F82AAF215B06E1_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, uint16_t* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_mDF0AFA15DBD01CCC48EF7AAD72BC03BE2414DD9B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mAAF2E6888B17B2E7C3606BE66298D92F589F68C8_gshared_inline (void* ___0_destination, int32_t ___1_index, uint16_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_mCA7E85FE00776EF0FC5D06B75091B77E3DDC595C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m65A94DB384326CE7B5085A1CE2D59F71034F5C10_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mD16049121C47A31D8068A8DD14D76C51C48D7C2C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint16_t* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t UnsafeUtility_ReadArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mDA4F2F1FC33E2F2F8CC3E761D626E638762C61E4_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mA34F0EE82A1A74FA1D9DDC46261761ACFC206C7B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m3D790784965BD75F06162D7C29FAA59AE6ED36D0_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisTransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20_mBD2C55B3AAF9B0F344497E789FDCDF26186EBA0F_gshared_inline (void* ___0_destination, int32_t ___1_index, TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m02FAB5863916CB8F45F87DBDE6C575F0753C8678_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisTransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20_mD90727BD30BFFC9F274245014CD4FFC96E8FDE49_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mC232ECFCE25A63394DE658F3C29C399D3A6F26A6_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20 UnsafeUtility_ReadArrayElement_TisTransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20_m41A161AA831DC15C0FFE00918C25978D07864CD6_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m6B59398448098F89E584AA923623D74BEF4A886A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m4FFCE773F493142BCBAF42F26CE62BB7A12D1722_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E_m037B85F45E867FB9B0265056B549A1D51EDA8498_gshared_inline (void* ___0_destination, int32_t ___1_index, BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m69C1F7F9D36BE58178B71282CBE23627EAB87F87_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E_m2B9486A91EBA67F3E7E693D602B32E4564293DDB_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mC8DD96DA9224A25A88BD57140B9B5C42AF4E8F7D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E UnsafeUtility_ReadArrayElement_TisBaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E_m4B42E098503E3D7B2A5BB163E12C18B3C8742901_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m71C68894BEEB8DDDB97B0AA476C6E18248574039_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint16_t ___1_key, bool* ___2_item, NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m9B399A689E7A6BE0D5CBF78DACECEB662AD62221_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_mC5EB49317489442AE30F0C2D3B6B0F875562F166_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1DFC68E083E33CBA7CD3849B112E2061F963334D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m05F0D031F53E92294315C2A2DA4D4B7D31A1A53C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, bool* ___1_item, NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2* ___2_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mF7C2D655A28FDDEDBC452F2F9FF6884D9F4A8536_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint16_t ___1_key, uint16_t* ___2_item, NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m63DBBE5F1D0CF3E4E71A397FC769C0273E58956B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m697055E4F65CDAF35B47CA4D836AD8756D26ECB1_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m5D5FCCD2BBA4128F359F83BEBC38E64EB9450B43_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m2812F8A132CF6325036FB90A272E528EAFC6B98A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint16_t* ___1_item, NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2* ___2_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m5FAC141EBB9B079AFAFEB624C1E72D3A6FD155F4_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___1_key, FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2* ___2_item, NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_mC9ADFD6E70310E8EA90D081699FE7BC3853900F0_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_m5084D24EC43390BB1675A6D796350DA00BAFAA2D_gshared_inline (void* ___0_destination, int32_t ___1_index, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisFixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2_m4837515DA02459F7A686F93E833E1211A18E3E52_gshared_inline (void* ___0_destination, int32_t ___1_index, FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m360248847C6FD4C0DBBAAF1F0993F18C86C72D71_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisFixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2_m9C8850525C24852A4C1213C7841E608477BED4CC_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A UnsafeUtility_ReadArrayElement_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mBB56303DF5D9BF30592847838B370074B0A0DC88_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m8FADFF771013736C9EE81BE1E8AD43910D26D116_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2* ___1_item, NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2 UnsafeUtility_ReadArrayElement_TisFixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2_m9AD3853DFCBD2F1ACBFE1C654300A095EB1D7F5F_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mC7C0D3EBF7AF6EC934E3FAC35777A2215E9B325B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___1_key, bool* ___2_item, NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m3A2185547CCAF3EADFF7727EBB4E88CD39FCEC04_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_mE9FC1A8D2DE7057CA98BEF081A5A90FEE20423AA_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6E9ADB960E424AAD44CD437927CDD6CED5A4D653_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mB9DAD7C5B2BB0023DC79E4F2D09672BF7B5B68A5_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, bool* ___1_item, NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* ___2_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mC826C4550D551B75154AEBD1635201FD15CA31BA_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___1_key, uint16_t* ___2_item, NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m056252D0474A206A180FFB4472FC7F78503C737D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_mA1D94DF99870519FD354E527AAD063105ED64994_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mBA19CDCDBDB9F51F1B8CAF2E6A718039AE05A07C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m1946E9AA82CB48601E660DF6A0014B87789B00B3_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint16_t* ___1_item, NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* ___2_it, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1 (int32_t ___0_value, const RuntimeMethod* method) ;
inline int32_t UnsafeList_1_get_Length_mAE769DE03CCB4B6E7A7E37C7FCB07F7D58AF9518 (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, const RuntimeMethod*))UnsafeList_1_get_Length_mAE769DE03CCB4B6E7A7E37C7FCB07F7D58AF9518_gshared)(__this, method);
}
inline int32_t UnsafeList_1_get_Capacity_m69896D0FF20459BAA8A523569F7D9D0E1C1FBCC8 (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, const RuntimeMethod*))UnsafeList_1_get_Capacity_m69896D0FF20459BAA8A523569F7D9D0E1C1FBCC8_gshared)(__this, method);
}
inline void UnsafeList_1_Resize_m35FFBB059A219FEF2ADE6C031E9B374234EA08D0 (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_length, int32_t ___1_options, const RuntimeMethod* method)
{
	((  void (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, int32_t, int32_t, const RuntimeMethod*))UnsafeList_1_Resize_m35FFBB059A219FEF2ADE6C031E9B374234EA08D0_gshared)(__this, ___0_length, ___1_options, method);
}
inline void UnsafeList_1_set_Length_mCF79509DCFCCC25367A8D66C04CC2A121ADB746C (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, int32_t, const RuntimeMethod*))UnsafeList_1_set_Length_mCF79509DCFCCC25367A8D66C04CC2A121ADB746C_gshared)(__this, ___0_value, method);
}
inline void UnsafeList_1_SetCapacity_m8AE389CBA2AAC3FAC801D47F76D5C19735CC5A95 (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, int32_t, const RuntimeMethod*))UnsafeList_1_SetCapacity_m8AE389CBA2AAC3FAC801D47F76D5C19735CC5A95_gshared)(__this, ___0_capacity, method);
}
inline void UnsafeList_1_set_Capacity_mDA744F3839A2185D9767AC72B89E2937548A23AC (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, int32_t, const RuntimeMethod*))UnsafeList_1_set_Capacity_mDA744F3839A2185D9767AC72B89E2937548A23AC_gshared)(__this, ___0_value, method);
}
inline WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3 UnsafeList_1_get_Item_m00FB98F8D875F2845DC1C8B8F5C17D94834D09BE (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3 (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, int32_t, const RuntimeMethod*))UnsafeList_1_get_Item_m00FB98F8D875F2845DC1C8B8F5C17D94834D09BE_gshared)(__this, ___0_index, method);
}
inline void UnsafeList_1_set_Item_mB583256CC7DEE421215FB6F901A00EF861273D13 (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_index, WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, int32_t, WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3, const RuntimeMethod*))UnsafeList_1_set_Item_mB583256CC7DEE421215FB6F901A00EF861273D13_gshared)(__this, ___0_index, ___1_value, method);
}
inline WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* UnsafeList_1_ElementAt_mDF9DBB3115A15FBB5E4B67891139505BA7EE66D3 (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, int32_t, const RuntimeMethod*))UnsafeList_1_ElementAt_mDF9DBB3115A15FBB5E4B67891139505BA7EE66D3_gshared)(__this, ___0_index, method);
}
inline void UnsafeList_1__ctor_m5D9142B19C17685F35AA017E89B2341BFFAC38ED (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3*, int32_t, const RuntimeMethod*))UnsafeList_1__ctor_m5D9142B19C17685F35AA017E89B2341BFFAC38ED_gshared)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1 (void* ___0_destination, int64_t ___1_size, const RuntimeMethod* method) ;
inline void UnsafeList_1__ctor_m05100E146CFC10615F9773CD38D2A897DC195D25 (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_initialCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))UnsafeList_1__ctor_m05100E146CFC10615F9773CD38D2A897DC195D25_gshared)(__this, ___0_initialCapacity, ___1_allocator, ___2_options, method);
}
inline UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* AllocatorManager_Allocate_TisUnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057_m2DF748AC9084E9AEFDB925BA3DC5557DF9EA67E0 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_handle, int32_t ___1_items, const RuntimeMethod* method)
{
	return ((  UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* (*) (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))AllocatorManager_Allocate_TisUnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057_m2DF748AC9084E9AEFDB925BA3DC5557DF9EA67E0_gshared)(___0_handle, ___1_items, method);
}
inline void UnsafeList_1_Dispose_m32CC0CA2762C4400F12F62C50D47F014E2718686 (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, const RuntimeMethod* method)
{
	((  void (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, const RuntimeMethod*))UnsafeList_1_Dispose_m32CC0CA2762C4400F12F62C50D47F014E2718686_gshared)(__this, method);
}
inline void AllocatorManager_Free_TisUnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057_mD4352CCF5D79918680961BBB6832B2ADF92CBFAB (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_handle, UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* ___1_pointer, int32_t ___2_items, const RuntimeMethod* method)
{
	((  void (*) (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, int32_t, const RuntimeMethod*))AllocatorManager_Free_TisUnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057_mD4352CCF5D79918680961BBB6832B2ADF92CBFAB_gshared)(___0_handle, ___1_pointer, ___2_items, method);
}
inline bool UnsafeList_1_get_IsCreated_m271E191117417A3B9F803D26D1C8AC10A564987C (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, const RuntimeMethod*))UnsafeList_1_get_IsCreated_m271E191117417A3B9F803D26D1C8AC10A564987C_gshared)(__this, method);
}
inline bool UnsafeList_1_get_IsEmpty_m40BF5162A0137FF0307D71251C56B3C893555D63 (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, const RuntimeMethod*))UnsafeList_1_get_IsEmpty_m40BF5162A0137FF0307D71251C56B3C893555D63_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CollectionHelper_ShouldDeallocate_m505E7EDBA71F02BAF52CC9DCD7C593CDA85D5465 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
inline void AllocatorManager_Free_TisWindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3_mFF295F70E36BCF284C8AE0B0B69656929172E40D (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_handle, WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* ___1_pointer, int32_t ___2_items, const RuntimeMethod* method)
{
	((  void (*) (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3*, int32_t, const RuntimeMethod*))AllocatorManager_Free_TisWindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3_mFF295F70E36BCF284C8AE0B0B69656929172E40D_gshared)(___0_handle, ___1_pointer, ___2_items, method);
}
inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobExtensions_Schedule_TisUnsafeDisposeJob_tABDA7829E812471BAF5A6B390D41BCD0260753E8_m3CBEEFA6594925B10D274167F130C7536F6BC43D (UnsafeDisposeJob_tABDA7829E812471BAF5A6B390D41BCD0260753E8 ___0_jobData, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_dependsOn, const RuntimeMethod* method)
{
	return ((  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*) (UnsafeDisposeJob_tABDA7829E812471BAF5A6B390D41BCD0260753E8, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, const RuntimeMethod*))IJobExtensions_Schedule_TisUnsafeDisposeJob_tABDA7829E812471BAF5A6B390D41BCD0260753E8_m3CBEEFA6594925B10D274167F130C7536F6BC43D_gshared)(___0_jobData, ___1_dependsOn, method);
}
inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeList_1_Dispose_mEBBCAED6003BF4FD931A0B1294D34D0986870673 (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method)
{
	return ((  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, const RuntimeMethod*))UnsafeList_1_Dispose_mEBBCAED6003BF4FD931A0B1294D34D0986870673_gshared)(__this, ___0_inputDeps, method);
}
inline void UnsafeList_1_Clear_m5487AEFB0E4D01B9D061BDED4EE33A76DA5A48BB (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, const RuntimeMethod* method)
{
	((  void (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, const RuntimeMethod*))UnsafeList_1_Clear_m5487AEFB0E4D01B9D061BDED4EE33A76DA5A48BB_gshared)(__this, method);
}
inline void UnsafeList_1_Realloc_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_mCC73E762F62B3596183A266A8F04A5399AA83E15 (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_allocator, int32_t ___1_newCapacity, const RuntimeMethod* method)
{
	((  void (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*, int32_t, const RuntimeMethod*))UnsafeList_1_Realloc_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_mCC73E762F62B3596183A266A8F04A5399AA83E15_gshared)(__this, ___0_allocator, ___1_newCapacity, method);
}
inline void UnsafeList_1_Realloc_mA714EFE3DFAAF49D508668BDC594095F9E97913F (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, int32_t, const RuntimeMethod*))UnsafeList_1_Realloc_mA714EFE3DFAAF49D508668BDC594095F9E97913F_gshared)(__this, ___0_capacity, method);
}
inline void UnsafeList_1_SetCapacity_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_mA35ECC858BADB68783F648AE30DC2B925FD370F0 (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_allocator, int32_t ___1_capacity, const RuntimeMethod* method)
{
	((  void (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*, int32_t, const RuntimeMethod*))UnsafeList_1_SetCapacity_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_mA35ECC858BADB68783F648AE30DC2B925FD370F0_gshared)(__this, ___0_allocator, ___1_capacity, method);
}
inline void UnsafeList_1_TrimExcess_mA18229B7F5BBBB69DD2DD188716062BFF320FC32 (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, const RuntimeMethod* method)
{
	((  void (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, const RuntimeMethod*))UnsafeList_1_TrimExcess_mA18229B7F5BBBB69DD2DD188716062BFF320FC32_gshared)(__this, method);
}
inline void UnsafeUtility_WriteArrayElement_TisWindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3_m426883B54AF30DDA55FA1F84E5083B86ECDECD15_inline (void* ___0_destination, int32_t ___1_index, WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3 ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisWindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3_m426883B54AF30DDA55FA1F84E5083B86ECDECD15_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
inline void UnsafeList_1_AddNoResize_m3DAC5CBB711A3CF1428A71E2277F589A1F15FEDB (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3 ___0_value, const RuntimeMethod* method)
{
	((  void (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3, const RuntimeMethod*))UnsafeList_1_AddNoResize_m3DAC5CBB711A3CF1428A71E2277F589A1F15FEDB_gshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) ;
inline void UnsafeList_1_AddRangeNoResize_m82224D94AB999E85E13DB26089656FA566F89090 (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, void* ___0_ptr, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, void*, int32_t, const RuntimeMethod*))UnsafeList_1_AddRangeNoResize_m82224D94AB999E85E13DB26089656FA566F89090_gshared)(__this, ___0_ptr, ___1_count, method);
}
inline void UnsafeList_1_AddRangeNoResize_m1C4182EDBCB6D91A50D3C78A918D7E8A4BA467E9 (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057 ___0_list, const RuntimeMethod* method)
{
	((  void (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057, const RuntimeMethod*))UnsafeList_1_AddRangeNoResize_m1C4182EDBCB6D91A50D3C78A918D7E8A4BA467E9_gshared)(__this, ___0_list, method);
}
inline void UnsafeList_1_Add_mDA8DBEF38A6A366F53BDC331727E28A077E8CB33 (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3*, const RuntimeMethod*))UnsafeList_1_Add_mDA8DBEF38A6A366F53BDC331727E28A077E8CB33_gshared)(__this, ___0_value, method);
}
inline void UnsafeList_1_AddRange_m97456825A70AE74BD620181BD3E519F461687B96 (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, void* ___0_ptr, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, void*, int32_t, const RuntimeMethod*))UnsafeList_1_AddRange_m97456825A70AE74BD620181BD3E519F461687B96_gshared)(__this, ___0_ptr, ___1_count, method);
}
inline void UnsafeList_1_AddRange_mC92E1F540A3B9A7786C82BCE5093879CF3FE7C28 (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057 ___0_list, const RuntimeMethod* method)
{
	((  void (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057, const RuntimeMethod*))UnsafeList_1_AddRange_mC92E1F540A3B9A7786C82BCE5093879CF3FE7C28_gshared)(__this, ___0_list, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemMove_m4799FAA9C4BCFA1AEDC6ED01BB9A6DF657C4CEE3 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) ;
inline void UnsafeList_1_InsertRangeWithBeginEnd_m1B54E9528555EAE2119F033319F80AA055DC4842 (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_begin, int32_t ___1_end, const RuntimeMethod* method)
{
	((  void (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, int32_t, int32_t, const RuntimeMethod*))UnsafeList_1_InsertRangeWithBeginEnd_m1B54E9528555EAE2119F033319F80AA055DC4842_gshared)(__this, ___0_begin, ___1_end, method);
}
inline void UnsafeList_1_RemoveRangeSwapBack_m93A0095FF3BE90438F9ADEDA8D1FE0AFDDE46AC9 (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, int32_t, int32_t, const RuntimeMethod*))UnsafeList_1_RemoveRangeSwapBack_m93A0095FF3BE90438F9ADEDA8D1FE0AFDDE46AC9_gshared)(__this, ___0_index, ___1_count, method);
}
inline void UnsafeList_1_RemoveAtSwapBack_m0AAE58CD5CE44C06BBB95EA46A1CE1A2ADFF166A (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, int32_t, const RuntimeMethod*))UnsafeList_1_RemoveAtSwapBack_m0AAE58CD5CE44C06BBB95EA46A1CE1A2ADFF166A_gshared)(__this, ___0_index, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_max_m9083201D37A8ED0157B127B5878D9B7F3A2A40BE_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
inline void UnsafeList_1_RemoveRangeSwapBackWithBeginEnd_mC8132645CACF128079A68BF0D61EA7B463C2EB22 (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_begin, int32_t ___1_end, const RuntimeMethod* method)
{
	((  void (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, int32_t, int32_t, const RuntimeMethod*))UnsafeList_1_RemoveRangeSwapBackWithBeginEnd_mC8132645CACF128079A68BF0D61EA7B463C2EB22_gshared)(__this, ___0_begin, ___1_end, method);
}
inline void UnsafeList_1_RemoveRange_mF463EB821FA676F8E90795E5A541F3FAF9C01605 (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, int32_t, int32_t, const RuntimeMethod*))UnsafeList_1_RemoveRange_mF463EB821FA676F8E90795E5A541F3FAF9C01605_gshared)(__this, ___0_index, ___1_count, method);
}
inline void UnsafeList_1_RemoveAt_mE0B1A08D1D959E5C2A23C133792507515D0A6D38 (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, int32_t, const RuntimeMethod*))UnsafeList_1_RemoveAt_mE0B1A08D1D959E5C2A23C133792507515D0A6D38_gshared)(__this, ___0_index, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_min_m02D43DF516544C279AF660EA4731449C82991849_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
inline void UnsafeList_1_RemoveRangeWithBeginEnd_mE6E694A57F3F5F81483E4E3B7C0F902C7596E80D (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_begin, int32_t ___1_end, const RuntimeMethod* method)
{
	((  void (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, int32_t, int32_t, const RuntimeMethod*))UnsafeList_1_RemoveRangeWithBeginEnd_mE6E694A57F3F5F81483E4E3B7C0F902C7596E80D_gshared)(__this, ___0_begin, ___1_end, method);
}
inline void ParallelReader__ctor_m89B9703FE4DE1884DD0957749BF96D342D328324 (ParallelReader_t9C18D46113B1C6AAEAD1DBF950354C8B60A07E44* __this, WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ParallelReader_t9C18D46113B1C6AAEAD1DBF950354C8B60A07E44*, WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3*, int32_t, const RuntimeMethod*))ParallelReader__ctor_m89B9703FE4DE1884DD0957749BF96D342D328324_gshared)(__this, ___0_ptr, ___1_length, method);
}
inline ParallelReader_t9C18D46113B1C6AAEAD1DBF950354C8B60A07E44 UnsafeList_1_AsParallelReader_mE7666E29CAD300615D87CC0B62676E0C659CC934 (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, const RuntimeMethod* method)
{
	return ((  ParallelReader_t9C18D46113B1C6AAEAD1DBF950354C8B60A07E44 (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, const RuntimeMethod*))UnsafeList_1_AsParallelReader_mE7666E29CAD300615D87CC0B62676E0C659CC934_gshared)(__this, method);
}
inline void ParallelWriter__ctor_mBC1F78E6299EA08765C42B809498CDFF92312146_inline (ParallelWriter_t44CFE37FDC25ADFD53664D63793BA9A6C6D48FA4* __this, UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* ___0_listData, const RuntimeMethod* method)
{
	((  void (*) (ParallelWriter_t44CFE37FDC25ADFD53664D63793BA9A6C6D48FA4*, UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, const RuntimeMethod*))ParallelWriter__ctor_mBC1F78E6299EA08765C42B809498CDFF92312146_gshared_inline)(__this, ___0_listData, method);
}
inline ParallelWriter_t44CFE37FDC25ADFD53664D63793BA9A6C6D48FA4 UnsafeList_1_AsParallelWriter_m7A91020D3A92D2CD7DDFEB3467B997FE0C5FDF08 (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, const RuntimeMethod* method)
{
	return ((  ParallelWriter_t44CFE37FDC25ADFD53664D63793BA9A6C6D48FA4 (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, const RuntimeMethod*))UnsafeList_1_AsParallelWriter_m7A91020D3A92D2CD7DDFEB3467B997FE0C5FDF08_gshared)(__this, method);
}
inline int32_t UnsafeUtility_SizeOf_TisWindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3_m2F9303AED865A1049498E360278CF4504F790F3D_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisWindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3_m2F9303AED865A1049498E360278CF4504F790F3D_gshared_inline)(method);
}
inline void UnsafeList_1_CopyFrom_m44DEC8FE2E06DAED439F1F5689A784BBABA05B92 (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057 ___0_array, const RuntimeMethod* method)
{
	((  void (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057, const RuntimeMethod*))UnsafeList_1_CopyFrom_m44DEC8FE2E06DAED439F1F5689A784BBABA05B92_gshared)(__this, ___0_array, method);
}
inline Enumerator_t31F4DCDA175D00FF707A4AECC69C81E422EC2E5D UnsafeList_1_GetEnumerator_mA4D6F3B4B78678A8AC7CA5E6654DB6D4F253B4FD (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t31F4DCDA175D00FF707A4AECC69C81E422EC2E5D (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, const RuntimeMethod*))UnsafeList_1_GetEnumerator_mA4D6F3B4B78678A8AC7CA5E6654DB6D4F253B4FD_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
inline RuntimeObject* UnsafeList_1_System_Collections_IEnumerable_GetEnumerator_m1D77F8ED7D85C025D7F434188A861EB32174F754 (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, const RuntimeMethod*))UnsafeList_1_System_Collections_IEnumerable_GetEnumerator_m1D77F8ED7D85C025D7F434188A861EB32174F754_gshared)(__this, method);
}
inline RuntimeObject* UnsafeList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mC1DDA3847BF1C88B58F0D917F69439D9D66DEEE9 (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, const RuntimeMethod*))UnsafeList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mC1DDA3847BF1C88B58F0D917F69439D9D66DEEE9_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline void UnsafeList_1_CheckIndexCount_mD12239BD8C06A2BDFC2D6A67AD03B5545FDD6AF5 (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, int32_t, int32_t, const RuntimeMethod*))UnsafeList_1_CheckIndexCount_mD12239BD8C06A2BDFC2D6A67AD03B5545FDD6AF5_gshared)(__this, ___0_index, ___1_count, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void UnsafeList_1_CheckBeginEnd_mA1E499D7760C7B78E894B48FB742D1E85A2407C9 (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_begin, int32_t ___1_end, const RuntimeMethod* method)
{
	((  void (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, int32_t, int32_t, const RuntimeMethod*))UnsafeList_1_CheckBeginEnd_mA1E499D7760C7B78E894B48FB742D1E85A2407C9_gshared)(__this, ___0_begin, ___1_end, method);
}
inline void UnsafeList_1_CheckNoResizeHasEnoughCapacity_mC8525DA5A501FA21084EB3768A6EEBCA224F13AA (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_length, const RuntimeMethod* method)
{
	((  void (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, int32_t, const RuntimeMethod*))UnsafeList_1_CheckNoResizeHasEnoughCapacity_mC8525DA5A501FA21084EB3768A6EEBCA224F13AA_gshared)(__this, ___0_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
inline void UnsafeList_1_CheckNoResizeHasEnoughCapacity_m304848E3241D3E38FDCEF67C5E45D24DE82BFA6A (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_length, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*, int32_t, int32_t, const RuntimeMethod*))UnsafeList_1_CheckNoResizeHasEnoughCapacity_m304848E3241D3E38FDCEF67C5E45D24DE82BFA6A_gshared)(__this, ___0_length, ___1_index, method);
}
inline void UnsafeMultiHashMap_2__ctor_m772B2062F82650C8C534372742F00DAD4480AEA6 (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, int32_t ___0_capacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method)
{
	((  void (*) (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeMultiHashMap_2__ctor_m772B2062F82650C8C534372742F00DAD4480AEA6_gshared)(__this, ___0_capacity, ___1_allocator, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapData_IsEmpty_m24404CDC35842532023F9D7094DB24BCBD57EC9D (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) ;
inline bool UnsafeMultiHashMap_2_get_IsEmpty_m130B6E00F6B7C5113464FA052B00178F908C669E (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*, const RuntimeMethod*))UnsafeMultiHashMap_2_get_IsEmpty_m130B6E00F6B7C5113464FA052B00178F908C669E_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_GetCount_mF10300D8E62B36979B41F3CBE396D96721931D7B (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) ;
inline int32_t UnsafeMultiHashMap_2_Count_m7970A08A43CADE0FDA44DB8D6A8897CDCC9434FD (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*, const RuntimeMethod*))UnsafeMultiHashMap_2_Count_m7970A08A43CADE0FDA44DB8D6A8897CDCC9434FD_gshared)(__this, method);
}
inline int32_t UnsafeMultiHashMap_2_get_Capacity_m2FC25F3A82CC8B9A1DC86D05397EAD0ADA1442EF (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*, const RuntimeMethod*))UnsafeMultiHashMap_2_get_Capacity_m2FC25F3A82CC8B9A1DC86D05397EAD0ADA1442EF_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3 (int32_t ___0_capacity, const RuntimeMethod* method) ;
inline void UnsafeMultiHashMap_2_set_Capacity_mA0A10CE46E5E6102D3784EB4EB2FFA3AB86DADD4 (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*, int32_t, const RuntimeMethod*))UnsafeMultiHashMap_2_set_Capacity_mA0A10CE46E5E6102D3784EB4EB2FFA3AB86DADD4_gshared)(__this, ___0_value, method);
}
inline void UnsafeMultiHashMap_2_Clear_m21481926E3A97A538FFAD8D09D5E500D257F5657 (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, const RuntimeMethod* method)
{
	((  void (*) (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*, const RuntimeMethod*))UnsafeMultiHashMap_2_Clear_m21481926E3A97A538FFAD8D09D5E500D257F5657_gshared)(__this, method);
}
inline void UnsafeMultiHashMap_2_Add_m5888FF3C3734DF1FB562DD480492BE30B611ACE2 (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, Il2CppFullySharedGenericStruct ___0_key, Il2CppFullySharedGenericStruct ___1_item, const RuntimeMethod* method)
{
	((  void (*) (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, const RuntimeMethod*))UnsafeMultiHashMap_2_Add_m5888FF3C3734DF1FB562DD480492BE30B611ACE2_gshared)((UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*)__this, ___0_key, ___1_item, method);
}
inline int32_t UnsafeMultiHashMap_2_Remove_mEA6A50460FAEA33F47AF25AB1C065823009EA2CC (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, Il2CppFullySharedGenericStruct ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*, Il2CppFullySharedGenericStruct, const RuntimeMethod*))UnsafeMultiHashMap_2_Remove_mEA6A50460FAEA33F47AF25AB1C065823009EA2CC_gshared)((UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*)__this, ___0_key, method);
}
inline void UnsafeMultiHashMap_2_Remove_mA24D63CC2ADF68280A48B33C66D6BC066BB1431F (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 ___0_it, const RuntimeMethod* method)
{
	((  void (*) (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51, const RuntimeMethod*))UnsafeMultiHashMap_2_Remove_mA24D63CC2ADF68280A48B33C66D6BC066BB1431F_gshared)((UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*)__this, ___0_it, method);
}
inline bool UnsafeMultiHashMap_2_TryGetFirstValue_m7DB218582908980321D876C3F935534A2850C4BF (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, Il2CppFullySharedGenericStruct ___0_key, Il2CppFullySharedGenericStruct* ___1_item, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct*, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51*, const RuntimeMethod*))UnsafeMultiHashMap_2_TryGetFirstValue_m7DB218582908980321D876C3F935534A2850C4BF_gshared)((UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*)__this, ___0_key, ___1_item, ___2_it, method);
}
inline bool UnsafeMultiHashMap_2_TryGetNextValue_mDF0129FA234A46A5935A15E4E204E23075073269 (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, Il2CppFullySharedGenericStruct* ___0_item, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* ___1_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*, Il2CppFullySharedGenericStruct*, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51*, const RuntimeMethod*))UnsafeMultiHashMap_2_TryGetNextValue_mDF0129FA234A46A5935A15E4E204E23075073269_gshared)(__this, ___0_item, ___1_it, method);
}
inline bool UnsafeMultiHashMap_2_ContainsKey_m9B3DBB75A9EBEBA17D2ABA2A0B326063F009B77A (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, Il2CppFullySharedGenericStruct ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*, Il2CppFullySharedGenericStruct, const RuntimeMethod*))UnsafeMultiHashMap_2_ContainsKey_m9B3DBB75A9EBEBA17D2ABA2A0B326063F009B77A_gshared)((UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*)__this, ___0_key, method);
}
inline int32_t UnsafeMultiHashMap_2_CountValuesForKey_m5378457AA3C117526B31343A95B7975400FBED23 (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, Il2CppFullySharedGenericStruct ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*, Il2CppFullySharedGenericStruct, const RuntimeMethod*))UnsafeMultiHashMap_2_CountValuesForKey_m5378457AA3C117526B31343A95B7975400FBED23_gshared)((UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*)__this, ___0_key, method);
}
inline bool UnsafeMultiHashMap_2_SetValue_m4581C6A39DC364E8E1ED0B8733B690B8DEBA71AE (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, Il2CppFullySharedGenericStruct ___0_item, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 ___1_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*, Il2CppFullySharedGenericStruct, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51, const RuntimeMethod*))UnsafeMultiHashMap_2_SetValue_m4581C6A39DC364E8E1ED0B8733B690B8DEBA71AE_gshared)((UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*)__this, ___0_item, ___1_it, method);
}
inline bool UnsafeMultiHashMap_2_get_IsCreated_m2C0B018D0F8A69BD29858F6D4067EFE8D8D64485 (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*, const RuntimeMethod*))UnsafeMultiHashMap_2_get_IsCreated_m2C0B018D0F8A69BD29858F6D4067EFE8D8D64485_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_DeallocateHashMap_m8D0FEE08B8522A1D05FBFFBBB43CB203304F114F (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
inline void UnsafeMultiHashMap_2_Dispose_m42641264E56276BB3D5D978E08C97913A42A933B (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, const RuntimeMethod* method)
{
	((  void (*) (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*, const RuntimeMethod*))UnsafeMultiHashMap_2_Dispose_m42641264E56276BB3D5D978E08C97913A42A933B_gshared)(__this, method);
}
inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D (UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26 ___0_jobData, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_dependsOn, const RuntimeMethod* method)
{
	return ((  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*) (UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, const RuntimeMethod*))IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D_gshared)(___0_jobData, ___1_dependsOn, method);
}
inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeMultiHashMap_2_Dispose_mEC101D133954EB6E76D37399AB1146BCFEC37E80 (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method)
{
	return ((  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*) (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, const RuntimeMethod*))UnsafeMultiHashMap_2_Dispose_mEC101D133954EB6E76D37399AB1146BCFEC37E80_gshared)(__this, ___0_inputDeps, method);
}
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 UnsafeMultiHashMap_2_GetKeyArray_m3BE21AFF7A027040224E819F0EF42735055B763E (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeMultiHashMap_2_GetKeyArray_m3BE21AFF7A027040224E819F0EF42735055B763E_gshared)(__this, ___0_allocator, method);
}
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 UnsafeMultiHashMap_2_GetValueArray_mD594171D7915B171526C9B41A4222C7D2734F06B (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeMultiHashMap_2_GetValueArray_mD594171D7915B171526C9B41A4222C7D2734F06B_gshared)(__this, ___0_allocator, method);
}
inline NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1 UnsafeMultiHashMap_2_GetKeyValueArrays_m843F87C85E739204E21812EE1008D293B58DACE0 (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	return ((  NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1 (*) (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeMultiHashMap_2_GetKeyValueArrays_m843F87C85E739204E21812EE1008D293B58DACE0_gshared)(__this, ___0_allocator, method);
}
inline void UnsafeMultiHashMap_2_GetValuesForKey_m72DFF1BAAB77FEB7BCCC0ED7C85C7D8A0484A178 (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, Il2CppFullySharedGenericStruct ___0_key, Enumerator_tA34CE25E907E5996285FDE99483CF59812EDC26E* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*, Il2CppFullySharedGenericStruct, Enumerator_tA34CE25E907E5996285FDE99483CF59812EDC26E*, const RuntimeMethod*))UnsafeMultiHashMap_2_GetValuesForKey_m72DFF1BAAB77FEB7BCCC0ED7C85C7D8A0484A178_gshared)((UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*)__this, ___0_key, il2cppRetVal, method);
}
inline ParallelWriter_tBD6FA796E098328FD0D7184B017B198502BFFB3D UnsafeMultiHashMap_2_AsParallelWriter_m8EC08926230BC651433255EF8AEA38E640A0FF63 (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, const RuntimeMethod* method)
{
	return ((  ParallelWriter_tBD6FA796E098328FD0D7184B017B198502BFFB3D (*) (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*, const RuntimeMethod*))UnsafeMultiHashMap_2_AsParallelWriter_m8EC08926230BC651433255EF8AEA38E640A0FF63_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapDataEnumerator__ctor_m4BD89848A9562869AB65E15D3D1D24A194187736 (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) ;
inline KeyValueEnumerator_tA87CA7E290FAE613543B32BDB98BF6F3B96A16F8 UnsafeMultiHashMap_2_GetEnumerator_mBB0BD2C3803C28D77272CF4AD9A2818F45EE5C0E (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, const RuntimeMethod* method)
{
	return ((  KeyValueEnumerator_tA87CA7E290FAE613543B32BDB98BF6F3B96A16F8 (*) (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*, const RuntimeMethod*))UnsafeMultiHashMap_2_GetEnumerator_mBB0BD2C3803C28D77272CF4AD9A2818F45EE5C0E_gshared)(__this, method);
}
inline RuntimeObject* UnsafeMultiHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m4D4084D1D76AEF87E59D17595D9E188D998254ED (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*, const RuntimeMethod*))UnsafeMultiHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m4D4084D1D76AEF87E59D17595D9E188D998254ED_gshared)(__this, method);
}
inline RuntimeObject* UnsafeMultiHashMap_2_System_Collections_IEnumerable_GetEnumerator_m2531898A454DAD47904DBB1D498A96ABB7CF73EC (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*, const RuntimeMethod*))UnsafeMultiHashMap_2_System_Collections_IEnumerable_GetEnumerator_m2531898A454DAD47904DBB1D498A96ABB7CF73EC_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B (void* ___0_destination, uint8_t ___1_value, int64_t ___2_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF (int32_t* ___0_location1, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C (int32_t* ___0_location1, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717 (int32_t* ___0_location1, int32_t ___1_value, int32_t ___2_comparand, const RuntimeMethod* method) ;
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mE5E99380F6A33E2DC275D507C84BFE8FC7F38E01 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, bool* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, bool*, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mE5E99380F6A33E2DC275D507C84BFE8FC7F38E01_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_mACFD6EA176D9B36AC7B5CA4395F4916D0E92EAC5 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_mACFD6EA176D9B36AC7B5CA4395F4916D0E92EAC5_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
inline void UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48259D1BF2B093A901E095965654FE2E58AEF18B_inline (void* ___0_destination, int32_t ___1_index, bool ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, bool, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48259D1BF2B093A901E095965654FE2E58AEF18B_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
inline void UnsafeParallelHashMapBase_2_FreeEntry_m462FC9B8A557183A5FC65FD720A3A93646AC4074 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_m462FC9B8A557183A5FC65FD720A3A93646AC4074_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47 (int32_t ___0_capacity, const RuntimeMethod* method) ;
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFB6AB9C9D92BE08F40BC68B68169718301665214 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFB6AB9C9D92BE08F40BC68B68169718301665214_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722 (int32_t* __this, int32_t ___0_obj, const RuntimeMethod* method) ;
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m818CAA6EAFE06CEF49B3CECE24196839CB7020E7 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, bool* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, bool*, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m818CAA6EAFE06CEF49B3CECE24196839CB7020E7_gshared)(___0_data, ___1_item, ___2_it, method);
}
inline bool UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  bool (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m12D21AAF6EAA69F5B1B1BAE3AE5BD5C0B290E7C0 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, uint8_t* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, uint8_t*, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m12D21AAF6EAA69F5B1B1BAE3AE5BD5C0B290E7C0_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_mD71ACC26B51AF45400896A8D30AD1F4733B045A5 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_mD71ACC26B51AF45400896A8D30AD1F4733B045A5_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeUtility_WriteArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m193B136343991E144053A14C8C435C19E5516EE0_inline (void* ___0_destination, int32_t ___1_index, uint8_t ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, uint8_t, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m193B136343991E144053A14C8C435C19E5516EE0_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
inline void UnsafeParallelHashMapBase_2_FreeEntry_mFD8286F2AE0F44CB779E7680BB93CE90789230F3 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_mFD8286F2AE0F44CB779E7680BB93CE90789230F3_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF366B660142E030A52A9E5A6DAC3E7A143409510 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF366B660142E030A52A9E5A6DAC3E7A143409510_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m204EE851B814B670DC65F5037B7D5D189F7FA058 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint8_t* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, uint8_t*, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m204EE851B814B670DC65F5037B7D5D189F7FA058_gshared)(___0_data, ___1_item, ___2_it, method);
}
inline uint8_t UnsafeUtility_ReadArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m06447B534673E0861DE4F55616DFAF9BD7DCBCC6_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m06447B534673E0861DE4F55616DFAF9BD7DCBCC6_gshared_inline)(___0_source, ___1_index, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m8FA051F1386B583A2848E886020D563EE0004112 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, int32_t* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t*, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m8FA051F1386B583A2848E886020D563EE0004112_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_m800AD0805A8FEA87F79C267739A0F557ACA44015 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m800AD0805A8FEA87F79C267739A0F557ACA44015_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeParallelHashMapBase_2_FreeEntry_m8927ACA31388B65E99B4E0301130276415771390 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_m8927ACA31388B65E99B4E0301130276415771390_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m526C9313C8BCF707526B309126FFB7502C548A5D (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m526C9313C8BCF707526B309126FFB7502C548A5D_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m3A37DD53E6586935E3AAC304D3AB4EF2AFF4A905 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t*, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m3A37DD53E6586935E3AAC304D3AB4EF2AFF4A905_gshared)(___0_data, ___1_item, ___2_it, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mE13F758756460959240C64E5A4F82AAF215B06E1 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, uint16_t* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, uint16_t*, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mE13F758756460959240C64E5A4F82AAF215B06E1_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_mDF0AFA15DBD01CCC48EF7AAD72BC03BE2414DD9B (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_mDF0AFA15DBD01CCC48EF7AAD72BC03BE2414DD9B_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeUtility_WriteArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mAAF2E6888B17B2E7C3606BE66298D92F589F68C8_inline (void* ___0_destination, int32_t ___1_index, uint16_t ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, uint16_t, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mAAF2E6888B17B2E7C3606BE66298D92F589F68C8_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
inline void UnsafeParallelHashMapBase_2_FreeEntry_mCA7E85FE00776EF0FC5D06B75091B77E3DDC595C (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_mCA7E85FE00776EF0FC5D06B75091B77E3DDC595C_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m65A94DB384326CE7B5085A1CE2D59F71034F5C10 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m65A94DB384326CE7B5085A1CE2D59F71034F5C10_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mD16049121C47A31D8068A8DD14D76C51C48D7C2C (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint16_t* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, uint16_t*, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mD16049121C47A31D8068A8DD14D76C51C48D7C2C_gshared)(___0_data, ___1_item, ___2_it, method);
}
inline uint16_t UnsafeUtility_ReadArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mDA4F2F1FC33E2F2F8CC3E761D626E638762C61E4_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  uint16_t (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mDA4F2F1FC33E2F2F8CC3E761D626E638762C61E4_gshared_inline)(___0_source, ___1_index, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mA34F0EE82A1A74FA1D9DDC46261761ACFC206C7B (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20*, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mA34F0EE82A1A74FA1D9DDC46261761ACFC206C7B_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_m3D790784965BD75F06162D7C29FAA59AE6ED36D0 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m3D790784965BD75F06162D7C29FAA59AE6ED36D0_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeUtility_WriteArrayElement_TisTransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20_mBD2C55B3AAF9B0F344497E789FDCDF26186EBA0F_inline (void* ___0_destination, int32_t ___1_index, TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20 ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisTransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20_mBD2C55B3AAF9B0F344497E789FDCDF26186EBA0F_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
inline void UnsafeParallelHashMapBase_2_FreeEntry_m02FAB5863916CB8F45F87DBDE6C575F0753C8678 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_m02FAB5863916CB8F45F87DBDE6C575F0753C8678_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisTransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20_mD90727BD30BFFC9F274245014CD4FFC96E8FDE49 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisTransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20_mD90727BD30BFFC9F274245014CD4FFC96E8FDE49_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mC232ECFCE25A63394DE658F3C29C399D3A6F26A6 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20*, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mC232ECFCE25A63394DE658F3C29C399D3A6F26A6_gshared)(___0_data, ___1_item, ___2_it, method);
}
inline TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20 UnsafeUtility_ReadArrayElement_TisTransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20_m41A161AA831DC15C0FFE00918C25978D07864CD6_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisTransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20_m41A161AA831DC15C0FFE00918C25978D07864CD6_gshared_inline)(___0_source, ___1_index, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m6B59398448098F89E584AA923623D74BEF4A886A (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E*, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m6B59398448098F89E584AA923623D74BEF4A886A_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_m4FFCE773F493142BCBAF42F26CE62BB7A12D1722 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m4FFCE773F493142BCBAF42F26CE62BB7A12D1722_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeUtility_WriteArrayElement_TisBaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E_m037B85F45E867FB9B0265056B549A1D51EDA8498_inline (void* ___0_destination, int32_t ___1_index, BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisBaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E_m037B85F45E867FB9B0265056B549A1D51EDA8498_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
inline void UnsafeParallelHashMapBase_2_FreeEntry_m69C1F7F9D36BE58178B71282CBE23627EAB87F87 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_m69C1F7F9D36BE58178B71282CBE23627EAB87F87_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E_m2B9486A91EBA67F3E7E693D602B32E4564293DDB (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E_m2B9486A91EBA67F3E7E693D602B32E4564293DDB_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mC8DD96DA9224A25A88BD57140B9B5C42AF4E8F7D (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E*, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mC8DD96DA9224A25A88BD57140B9B5C42AF4E8F7D_gshared)(___0_data, ___1_item, ___2_it, method);
}
inline BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E UnsafeUtility_ReadArrayElement_TisBaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E_m4B42E098503E3D7B2A5BB163E12C18B3C8742901_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisBaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E_m4B42E098503E3D7B2A5BB163E12C18B3C8742901_gshared_inline)(___0_source, ___1_index, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m71C68894BEEB8DDDB97B0AA476C6E18248574039 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint16_t ___1_key, bool* ___2_item, NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, uint16_t, bool*, NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m71C68894BEEB8DDDB97B0AA476C6E18248574039_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_m9B399A689E7A6BE0D5CBF78DACECEB662AD62221 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m9B399A689E7A6BE0D5CBF78DACECEB662AD62221_gshared)(___0_data, ___1_threadIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200 (uint16_t* __this, const RuntimeMethod* method) ;
inline void UnsafeParallelHashMapBase_2_FreeEntry_mC5EB49317489442AE30F0C2D3B6B0F875562F166 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_mC5EB49317489442AE30F0C2D3B6B0F875562F166_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1DFC68E083E33CBA7CD3849B112E2061F963334D (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1DFC68E083E33CBA7CD3849B112E2061F963334D_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt16_Equals_m5673358CCDB7D6E74A6A13C50FC9151F4DD66089 (uint16_t* __this, uint16_t ___0_obj, const RuntimeMethod* method) ;
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m05F0D031F53E92294315C2A2DA4D4B7D31A1A53C (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, bool* ___1_item, NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, bool*, NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m05F0D031F53E92294315C2A2DA4D4B7D31A1A53C_gshared)(___0_data, ___1_item, ___2_it, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mF7C2D655A28FDDEDBC452F2F9FF6884D9F4A8536 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint16_t ___1_key, uint16_t* ___2_item, NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, uint16_t, uint16_t*, NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mF7C2D655A28FDDEDBC452F2F9FF6884D9F4A8536_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_m63DBBE5F1D0CF3E4E71A397FC769C0273E58956B (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m63DBBE5F1D0CF3E4E71A397FC769C0273E58956B_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeParallelHashMapBase_2_FreeEntry_m697055E4F65CDAF35B47CA4D836AD8756D26ECB1 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_m697055E4F65CDAF35B47CA4D836AD8756D26ECB1_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m5D5FCCD2BBA4128F359F83BEBC38E64EB9450B43 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m5D5FCCD2BBA4128F359F83BEBC38E64EB9450B43_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m2812F8A132CF6325036FB90A272E528EAFC6B98A (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint16_t* ___1_item, NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, uint16_t*, NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m2812F8A132CF6325036FB90A272E528EAFC6B98A_gshared)(___0_data, ___1_item, ___2_it, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m5FAC141EBB9B079AFAFEB624C1E72D3A6FD155F4 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___1_key, FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2* ___2_item, NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2*, NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m5FAC141EBB9B079AFAFEB624C1E72D3A6FD155F4_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_mC9ADFD6E70310E8EA90D081699FE7BC3853900F0 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_mC9ADFD6E70310E8EA90D081699FE7BC3853900F0_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeUtility_WriteArrayElement_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_m5084D24EC43390BB1675A6D796350DA00BAFAA2D_inline (void* ___0_destination, int32_t ___1_index, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_m5084D24EC43390BB1675A6D796350DA00BAFAA2D_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
inline void UnsafeUtility_WriteArrayElement_TisFixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2_m4837515DA02459F7A686F93E833E1211A18E3E52_inline (void* ___0_destination, int32_t ___1_index, FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2 ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisFixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2_m4837515DA02459F7A686F93E833E1211A18E3E52_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t int2_GetHashCode_mDC30EB8816F1ABC7195872B81F3EA9E8090866A6_inline (int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A* __this, const RuntimeMethod* method) ;
inline void UnsafeParallelHashMapBase_2_FreeEntry_m360248847C6FD4C0DBBAAF1F0993F18C86C72D71 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_m360248847C6FD4C0DBBAAF1F0993F18C86C72D71_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisFixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2_m9C8850525C24852A4C1213C7841E608477BED4CC (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisFixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2_m9C8850525C24852A4C1213C7841E608477BED4CC_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A UnsafeUtility_ReadArrayElement_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mBB56303DF5D9BF30592847838B370074B0A0DC88_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mBB56303DF5D9BF30592847838B370074B0A0DC88_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool int2_Equals_m4DB2E24953677E4E2497F1D0C4B48794257A89B6_inline (int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A* __this, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_rhs, const RuntimeMethod* method) ;
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m8FADFF771013736C9EE81BE1E8AD43910D26D116 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2* ___1_item, NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2*, NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m8FADFF771013736C9EE81BE1E8AD43910D26D116_gshared)(___0_data, ___1_item, ___2_it, method);
}
inline FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2 UnsafeUtility_ReadArrayElement_TisFixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2_m9AD3853DFCBD2F1ACBFE1C654300A095EB1D7F5F_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisFixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2_m9AD3853DFCBD2F1ACBFE1C654300A095EB1D7F5F_gshared_inline)(___0_source, ___1_index, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mC7C0D3EBF7AF6EC934E3FAC35777A2215E9B325B (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___1_key, bool* ___2_item, NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, bool*, NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mC7C0D3EBF7AF6EC934E3FAC35777A2215E9B325B_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_m3A2185547CCAF3EADFF7727EBB4E88CD39FCEC04 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m3A2185547CCAF3EADFF7727EBB4E88CD39FCEC04_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeParallelHashMapBase_2_FreeEntry_mE9FC1A8D2DE7057CA98BEF081A5A90FEE20423AA (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_mE9FC1A8D2DE7057CA98BEF081A5A90FEE20423AA_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6E9ADB960E424AAD44CD437927CDD6CED5A4D653 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6E9ADB960E424AAD44CD437927CDD6CED5A4D653_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mB9DAD7C5B2BB0023DC79E4F2D09672BF7B5B68A5 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, bool* ___1_item, NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, bool*, NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mB9DAD7C5B2BB0023DC79E4F2D09672BF7B5B68A5_gshared)(___0_data, ___1_item, ___2_it, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mC826C4550D551B75154AEBD1635201FD15CA31BA (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___1_key, uint16_t* ___2_item, NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, uint16_t*, NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mC826C4550D551B75154AEBD1635201FD15CA31BA_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_m056252D0474A206A180FFB4472FC7F78503C737D (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m056252D0474A206A180FFB4472FC7F78503C737D_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeParallelHashMapBase_2_FreeEntry_mA1D94DF99870519FD354E527AAD063105ED64994 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_mA1D94DF99870519FD354E527AAD063105ED64994_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mBA19CDCDBDB9F51F1B8CAF2E6A718039AE05A07C (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mBA19CDCDBDB9F51F1B8CAF2E6A718039AE05A07C_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m1946E9AA82CB48601E660DF6A0014B87789B00B3 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint16_t* ___1_item, NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, uint16_t*, NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m1946E9AA82CB48601E660DF6A0014B87789B00B3_gshared)(___0_data, ___1_item, ___2_it, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t math_hash_m6B6E0FC08FCC3BC0940397676690F22B03DB4F16_inline (int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_v, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F math_asuint_m64DA623C5CFEB8445663480384F2B1C202150EE5_inline (int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_x, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F math_uint2_m861F5F74EBBBD3DA19E84A1155320B89FF7341C3_inline (uint32_t ___0_x, uint32_t ___1_y, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F uint2_op_Multiply_m2A4BC394328643E664AD9C17DA4BF1B0AC58E857_inline (uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F ___0_lhs, uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t math_csum_m0B6655875FE24428E18B97FC3F5C745E374530A3_inline (uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F ___0_x, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void uint2__ctor_mDE945EFF54FDA16335AC19E9E01A9BAE161B8D3F_inline (uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F* __this, uint32_t ___0_x, uint32_t ___1_y, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeList_1_get_Length_mAE769DE03CCB4B6E7A7E37C7FCB07F7D58AF9518_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_length;
		int32_t L_1;
		L_1 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t UnsafeList_1_get_Length_mAE769DE03CCB4B6E7A7E37C7FCB07F7D58AF9518_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = UnsafeList_1_get_Length_mAE769DE03CCB4B6E7A7E37C7FCB07F7D58AF9518(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_set_Length_mCF79509DCFCCC25367A8D66C04CC2A121ADB746C_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		int32_t L_1;
		L_1 = UnsafeList_1_get_Capacity_m69896D0FF20459BAA8A523569F7D9D0E1C1FBCC8(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = ___0_value;
		UnsafeList_1_Resize_m35FFBB059A219FEF2ADE6C031E9B374234EA08D0(__this, L_2, (int32_t)0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return;
	}

IL_0012:
	{
		int32_t L_3 = ___0_value;
		__this->___m_length = L_3;
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeList_1_set_Length_mCF79509DCFCCC25367A8D66C04CC2A121ADB746C_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*>(__this + _offset);
	UnsafeList_1_set_Length_mCF79509DCFCCC25367A8D66C04CC2A121ADB746C(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeList_1_get_Capacity_m69896D0FF20459BAA8A523569F7D9D0E1C1FBCC8_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_capacity;
		int32_t L_1;
		L_1 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t UnsafeList_1_get_Capacity_m69896D0FF20459BAA8A523569F7D9D0E1C1FBCC8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = UnsafeList_1_get_Capacity_m69896D0FF20459BAA8A523569F7D9D0E1C1FBCC8(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_set_Capacity_mDA744F3839A2185D9767AC72B89E2937548A23AC_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		UnsafeList_1_SetCapacity_m8AE389CBA2AAC3FAC801D47F76D5C19735CC5A95(__this, L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeList_1_set_Capacity_mDA744F3839A2185D9767AC72B89E2937548A23AC_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*>(__this + _offset);
	UnsafeList_1_set_Capacity_mDA744F3839A2185D9767AC72B89E2937548A23AC(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3 UnsafeList_1_get_Item_m00FB98F8D875F2845DC1C8B8F5C17D94834D09BE_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* L_0 = __this->___Ptr;
		int32_t L_1 = ___0_index;
		int32_t L_2;
		L_2 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1(L_1, NULL);
		uint32_t L_3 = sizeof(WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3);
		WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3 L_4 = (*(WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3*)((WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		return L_4;
	}
}
IL2CPP_EXTERN_C  WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3 UnsafeList_1_get_Item_m00FB98F8D875F2845DC1C8B8F5C17D94834D09BE_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*>(__this + _offset);
	WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3 _returnValue;
	_returnValue = UnsafeList_1_get_Item_m00FB98F8D875F2845DC1C8B8F5C17D94834D09BE(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_set_Item_mB583256CC7DEE421215FB6F901A00EF861273D13_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_index, WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3 ___1_value, const RuntimeMethod* method) 
{
	{
		WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* L_0 = __this->___Ptr;
		int32_t L_1 = ___0_index;
		int32_t L_2;
		L_2 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1(L_1, NULL);
		uint32_t L_3 = sizeof(WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3);
		WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3 L_4 = ___1_value;
		*(WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3*)((WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))) = L_4;
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeList_1_set_Item_mB583256CC7DEE421215FB6F901A00EF861273D13_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3 ___1_value, const RuntimeMethod* method)
{
	UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*>(__this + _offset);
	UnsafeList_1_set_Item_mB583256CC7DEE421215FB6F901A00EF861273D13(_thisAdjusted, ___0_index, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* UnsafeList_1_ElementAt_mDF9DBB3115A15FBB5E4B67891139505BA7EE66D3_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* L_0 = __this->___Ptr;
		int32_t L_1 = ___0_index;
		int32_t L_2;
		L_2 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1(L_1, NULL);
		uint32_t L_3 = sizeof(WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3);
		return (WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3*)(((WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
	}
}
IL2CPP_EXTERN_C  WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* UnsafeList_1_ElementAt_mDF9DBB3115A15FBB5E4B67891139505BA7EE66D3_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*>(__this + _offset);
	WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* _returnValue;
	_returnValue = UnsafeList_1_ElementAt_mDF9DBB3115A15FBB5E4B67891139505BA7EE66D3(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1__ctor_m5D9142B19C17685F35AA017E89B2341BFFAC38ED_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057));
		WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* L_0 = ___0_ptr;
		__this->___Ptr = L_0;
		int32_t L_1 = ___1_length;
		__this->___m_length = L_1;
		__this->___m_capacity = 0;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ((AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticFields*)il2cpp_codegen_static_fields_for(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var))->___None;
		__this->___Allocator = L_2;
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeList_1__ctor_m5D9142B19C17685F35AA017E89B2341BFFAC38ED_AdjustorThunk (RuntimeObject* __this, WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*>(__this + _offset);
	UnsafeList_1__ctor_m5D9142B19C17685F35AA017E89B2341BFFAC38ED(_thisAdjusted, ___0_ptr, ___1_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1__ctor_m05100E146CFC10615F9773CD38D2A897DC195D25_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_initialCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		il2cpp_codegen_initobj(__this, sizeof(UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057));
		__this->___Ptr = (WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3*)((uintptr_t)0);
		__this->___m_length = 0;
		__this->___m_capacity = 0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		__this->___Allocator = L_0;
		int32_t L_1 = ___0_initialCapacity;
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_2 = ___0_initialCapacity;
		UnsafeList_1_SetCapacity_m8AE389CBA2AAC3FAC801D47F76D5C19735CC5A95(__this, L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	}

IL_002e:
	{
		int32_t L_3 = ___2_options;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0057;
		}
	}
	{
		WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* L_4 = __this->___Ptr;
		if ((((intptr_t)L_4) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0057;
		}
	}
	{
		uint32_t L_5 = sizeof(WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3);
		V_0 = (int32_t)L_5;
		WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* L_6 = __this->___Ptr;
		int32_t L_7;
		L_7 = UnsafeList_1_get_Capacity_m69896D0FF20459BAA8A523569F7D9D0E1C1FBCC8(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_8 = V_0;
		UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1((void*)L_6, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, L_8))), NULL);
	}

IL_0057:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeList_1__ctor_m05100E146CFC10615F9773CD38D2A897DC195D25_AdjustorThunk (RuntimeObject* __this, int32_t ___0_initialCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*>(__this + _offset);
	UnsafeList_1__ctor_m05100E146CFC10615F9773CD38D2A897DC195D25(_thisAdjusted, ___0_initialCapacity, ___1_allocator, ___2_options, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* UnsafeList_1_Create_mDB16878985232140E7BB989B2A2D0838944D4929_gshared (int32_t ___0_initialCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* L_1;
		L_1 = AllocatorManager_Allocate_TisUnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057_m2DF748AC9084E9AEFDB925BA3DC5557DF9EA67E0(L_0, 1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* L_2 = L_1;
		int32_t L_3 = ___0_initialCapacity;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_4 = ___1_allocator;
		int32_t L_5 = ___2_options;
		UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057 L_6;
		memset((&L_6), 0, sizeof(L_6));
		UnsafeList_1__ctor_m05100E146CFC10615F9773CD38D2A897DC195D25((&L_6), L_3, L_4, L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		*(UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*)L_2 = L_6;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_Destroy_m487A025FFEC33E8358710FE1F651AEE102B9ADD4_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* ___0_listData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* L_0 = ___0_listData;
		NullCheck(L_0);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1 = L_0->___Allocator;
		UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* L_2 = ___0_listData;
		UnsafeList_1_Dispose_m32CC0CA2762C4400F12F62C50D47F014E2718686((UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*)L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* L_3 = ___0_listData;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		AllocatorManager_Free_TisUnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057_mD4352CCF5D79918680961BBB6832B2ADF92CBFAB(L_1, L_3, 1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeList_1_get_IsEmpty_m40BF5162A0137FF0307D71251C56B3C893555D63_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = UnsafeList_1_get_IsCreated_m271E191117417A3B9F803D26D1C8AC10A564987C(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = __this->___m_length;
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}

IL_0012:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool UnsafeList_1_get_IsEmpty_m40BF5162A0137FF0307D71251C56B3C893555D63_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*>(__this + _offset);
	bool _returnValue;
	_returnValue = UnsafeList_1_get_IsEmpty_m40BF5162A0137FF0307D71251C56B3C893555D63(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeList_1_get_IsCreated_m271E191117417A3B9F803D26D1C8AC10A564987C_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, const RuntimeMethod* method) 
{
	{
		WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* L_0 = __this->___Ptr;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool UnsafeList_1_get_IsCreated_m271E191117417A3B9F803D26D1C8AC10A564987C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*>(__this + _offset);
	bool _returnValue;
	_returnValue = UnsafeList_1_get_IsCreated_m271E191117417A3B9F803D26D1C8AC10A564987C(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_Dispose_m32CC0CA2762C4400F12F62C50D47F014E2718686_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = __this->___Allocator;
		bool L_1;
		L_1 = CollectionHelper_ShouldDeallocate_m505E7EDBA71F02BAF52CC9DCD7C593CDA85D5465(L_0, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = __this->___Allocator;
		WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* L_3 = __this->___Ptr;
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		AllocatorManager_Free_TisWindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3_mFF295F70E36BCF284C8AE0B0B69656929172E40D(L_2, L_3, 1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_4 = ((AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticFields*)il2cpp_codegen_static_fields_for(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var))->___Invalid;
		__this->___Allocator = L_4;
	}

IL_002a:
	{
		__this->___Ptr = (WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3*)((uintptr_t)0);
		__this->___m_length = 0;
		__this->___m_capacity = 0;
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeList_1_Dispose_m32CC0CA2762C4400F12F62C50D47F014E2718686_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*>(__this + _offset);
	UnsafeList_1_Dispose_m32CC0CA2762C4400F12F62C50D47F014E2718686(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeList_1_Dispose_mEBBCAED6003BF4FD931A0B1294D34D0986870673_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobExtensions_Schedule_TisUnsafeDisposeJob_tABDA7829E812471BAF5A6B390D41BCD0260753E8_m3CBEEFA6594925B10D274167F130C7536F6BC43D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UnsafeDisposeJob_tABDA7829E812471BAF5A6B390D41BCD0260753E8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = __this->___Allocator;
		bool L_1;
		L_1 = CollectionHelper_ShouldDeallocate_m505E7EDBA71F02BAF52CC9DCD7C593CDA85D5465(L_0, NULL);
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeDisposeJob_tABDA7829E812471BAF5A6B390D41BCD0260753E8));
		WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* L_2 = __this->___Ptr;
		(&V_0)->___Ptr = (void*)L_2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = __this->___Allocator;
		(&V_0)->___Allocator = L_3;
		UnsafeDisposeJob_tABDA7829E812471BAF5A6B390D41BCD0260753E8 L_4 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_5 = ___0_inputDeps;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_6;
		L_6 = IJobExtensions_Schedule_TisUnsafeDisposeJob_tABDA7829E812471BAF5A6B390D41BCD0260753E8_m3CBEEFA6594925B10D274167F130C7536F6BC43D(L_4, L_5, IJobExtensions_Schedule_TisUnsafeDisposeJob_tABDA7829E812471BAF5A6B390D41BCD0260753E8_m3CBEEFA6594925B10D274167F130C7536F6BC43D_RuntimeMethod_var);
		__this->___Ptr = (WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3*)((uintptr_t)0);
		il2cpp_codegen_runtime_class_init_inline(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7 = ((AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticFields*)il2cpp_codegen_static_fields_for(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var))->___Invalid;
		__this->___Allocator = L_7;
		return L_6;
	}

IL_004a:
	{
		__this->___Ptr = (WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3*)((uintptr_t)0);
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_8 = ___0_inputDeps;
		return L_8;
	}
}
IL2CPP_EXTERN_C  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeList_1_Dispose_mEBBCAED6003BF4FD931A0B1294D34D0986870673_AdjustorThunk (RuntimeObject* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method)
{
	UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*>(__this + _offset);
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 _returnValue;
	_returnValue = UnsafeList_1_Dispose_mEBBCAED6003BF4FD931A0B1294D34D0986870673(_thisAdjusted, ___0_inputDeps, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_Clear_m5487AEFB0E4D01B9D061BDED4EE33A76DA5A48BB_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, const RuntimeMethod* method) 
{
	{
		__this->___m_length = 0;
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeList_1_Clear_m5487AEFB0E4D01B9D061BDED4EE33A76DA5A48BB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*>(__this + _offset);
	UnsafeList_1_Clear_m5487AEFB0E4D01B9D061BDED4EE33A76DA5A48BB(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_Resize_m35FFBB059A219FEF2ADE6C031E9B374234EA08D0_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_length, int32_t ___1_options, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___m_length;
		V_0 = L_0;
		int32_t L_1 = ___0_length;
		int32_t L_2;
		L_2 = UnsafeList_1_get_Capacity_m69896D0FF20459BAA8A523569F7D9D0E1C1FBCC8(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = ___0_length;
		UnsafeList_1_SetCapacity_m8AE389CBA2AAC3FAC801D47F76D5C19735CC5A95(__this, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	}

IL_0017:
	{
		int32_t L_4 = ___0_length;
		__this->___m_length = L_4;
		int32_t L_5 = ___1_options;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_6 = V_0;
		int32_t L_7 = ___0_length;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_8 = ___0_length;
		int32_t L_9 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_8, L_9));
		WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* L_10 = __this->___Ptr;
		V_2 = (uint8_t*)L_10;
		uint32_t L_11 = sizeof(WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3);
		V_3 = (int32_t)L_11;
		uint8_t* L_12 = V_2;
		int32_t L_13 = V_0;
		int32_t L_14 = V_3;
		int32_t L_15 = V_1;
		int32_t L_16 = V_3;
		UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_12, ((int32_t)il2cpp_codegen_multiply(L_13, L_14)))), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_15, L_16))), NULL);
	}

IL_0046:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeList_1_Resize_m35FFBB059A219FEF2ADE6C031E9B374234EA08D0_AdjustorThunk (RuntimeObject* __this, int32_t ___0_length, int32_t ___1_options, const RuntimeMethod* method)
{
	UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*>(__this + _offset);
	UnsafeList_1_Resize_m35FFBB059A219FEF2ADE6C031E9B374234EA08D0(_thisAdjusted, ___0_length, ___1_options, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_Realloc_mA714EFE3DFAAF49D508668BDC594095F9E97913F_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* L_0 = (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*)(&__this->___Allocator);
		int32_t L_1 = ___0_capacity;
		UnsafeList_1_Realloc_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_mCC73E762F62B3596183A266A8F04A5399AA83E15(__this, L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeList_1_Realloc_mA714EFE3DFAAF49D508668BDC594095F9E97913F_AdjustorThunk (RuntimeObject* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*>(__this + _offset);
	UnsafeList_1_Realloc_mA714EFE3DFAAF49D508668BDC594095F9E97913F(_thisAdjusted, ___0_capacity, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_SetCapacity_m8AE389CBA2AAC3FAC801D47F76D5C19735CC5A95_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* L_0 = (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*)(&__this->___Allocator);
		int32_t L_1 = ___0_capacity;
		UnsafeList_1_SetCapacity_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_mA35ECC858BADB68783F648AE30DC2B925FD370F0(__this, L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeList_1_SetCapacity_m8AE389CBA2AAC3FAC801D47F76D5C19735CC5A95_AdjustorThunk (RuntimeObject* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*>(__this + _offset);
	UnsafeList_1_SetCapacity_m8AE389CBA2AAC3FAC801D47F76D5C19735CC5A95(_thisAdjusted, ___0_capacity, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_TrimExcess_mA18229B7F5BBBB69DD2DD188716062BFF320FC32_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeList_1_get_Capacity_m69896D0FF20459BAA8A523569F7D9D0E1C1FBCC8(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_1 = __this->___m_length;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = __this->___m_length;
		UnsafeList_1_Realloc_mA714EFE3DFAAF49D508668BDC594095F9E97913F(__this, L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeList_1_TrimExcess_mA18229B7F5BBBB69DD2DD188716062BFF320FC32_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*>(__this + _offset);
	UnsafeList_1_TrimExcess_mA18229B7F5BBBB69DD2DD188716062BFF320FC32(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_AddNoResize_m3DAC5CBB711A3CF1428A71E2277F589A1F15FEDB_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3 ___0_value, const RuntimeMethod* method) 
{
	{
		WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* L_0 = __this->___Ptr;
		int32_t L_1 = __this->___m_length;
		WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3 L_2 = ___0_value;
		UnsafeUtility_WriteArrayElement_TisWindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3_m426883B54AF30DDA55FA1F84E5083B86ECDECD15_inline((void*)L_0, L_1, L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		int32_t L_3 = __this->___m_length;
		__this->___m_length = ((int32_t)il2cpp_codegen_add(L_3, 1));
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeList_1_AddNoResize_m3DAC5CBB711A3CF1428A71E2277F589A1F15FEDB_AdjustorThunk (RuntimeObject* __this, WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3 ___0_value, const RuntimeMethod* method)
{
	UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*>(__this + _offset);
	UnsafeList_1_AddNoResize_m3DAC5CBB711A3CF1428A71E2277F589A1F15FEDB(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_AddRangeNoResize_m82224D94AB999E85E13DB26089656FA566F89090_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, void* ___0_ptr, int32_t ___1_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	void* V_1 = NULL;
	{
		uint32_t L_0 = sizeof(WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3);
		V_0 = (int32_t)L_0;
		WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* L_1 = __this->___Ptr;
		int32_t L_2 = __this->___m_length;
		int32_t L_3 = V_0;
		V_1 = (void*)((WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3*)il2cpp_codegen_add((intptr_t)L_1, ((int32_t)il2cpp_codegen_multiply(L_2, L_3))));
		void* L_4 = V_1;
		void* L_5 = ___0_ptr;
		int32_t L_6 = ___1_count;
		int32_t L_7 = V_0;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177(L_4, L_5, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_6, L_7))), NULL);
		int32_t L_8 = __this->___m_length;
		int32_t L_9 = ___1_count;
		__this->___m_length = ((int32_t)il2cpp_codegen_add(L_8, L_9));
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeList_1_AddRangeNoResize_m82224D94AB999E85E13DB26089656FA566F89090_AdjustorThunk (RuntimeObject* __this, void* ___0_ptr, int32_t ___1_count, const RuntimeMethod* method)
{
	UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*>(__this + _offset);
	UnsafeList_1_AddRangeNoResize_m82224D94AB999E85E13DB26089656FA566F89090(_thisAdjusted, ___0_ptr, ___1_count, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_AddRangeNoResize_m1C4182EDBCB6D91A50D3C78A918D7E8A4BA467E9_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057 ___0_list, const RuntimeMethod* method) 
{
	{
		UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057 L_0 = ___0_list;
		WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* L_1 = L_0.___Ptr;
		UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057 L_2 = ___0_list;
		int32_t L_3 = L_2.___m_length;
		int32_t L_4;
		L_4 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1(L_3, NULL);
		UnsafeList_1_AddRangeNoResize_m82224D94AB999E85E13DB26089656FA566F89090(__this, (void*)L_1, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeList_1_AddRangeNoResize_m1C4182EDBCB6D91A50D3C78A918D7E8A4BA467E9_AdjustorThunk (RuntimeObject* __this, UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057 ___0_list, const RuntimeMethod* method)
{
	UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*>(__this + _offset);
	UnsafeList_1_AddRangeNoResize_m1C4182EDBCB6D91A50D3C78A918D7E8A4BA467E9(_thisAdjusted, ___0_list, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_Add_mDA8DBEF38A6A366F53BDC331727E28A077E8CB33_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_length;
		V_0 = L_0;
		int32_t L_1 = __this->___m_length;
		int32_t L_2;
		L_2 = UnsafeList_1_get_Capacity_m69896D0FF20459BAA8A523569F7D9D0E1C1FBCC8(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_1, 1))) <= ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeList_1_Resize_m35FFBB059A219FEF2ADE6C031E9B374234EA08D0(__this, ((int32_t)il2cpp_codegen_add(L_3, 1)), (int32_t)0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		goto IL_0031;
	}

IL_0023:
	{
		int32_t L_4 = __this->___m_length;
		__this->___m_length = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0031:
	{
		WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* L_5 = __this->___Ptr;
		int32_t L_6 = V_0;
		WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* L_7 = ___0_value;
		WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3 L_8 = (*(WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3*)L_7);
		UnsafeUtility_WriteArrayElement_TisWindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3_m426883B54AF30DDA55FA1F84E5083B86ECDECD15_inline((void*)L_5, L_6, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeList_1_Add_mDA8DBEF38A6A366F53BDC331727E28A077E8CB33_AdjustorThunk (RuntimeObject* __this, WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* ___0_value, const RuntimeMethod* method)
{
	UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*>(__this + _offset);
	UnsafeList_1_Add_mDA8DBEF38A6A366F53BDC331727E28A077E8CB33(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_AddRange_m97456825A70AE74BD620181BD3E519F461687B96_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, void* ___0_ptr, int32_t ___1_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	void* V_2 = NULL;
	{
		int32_t L_0 = __this->___m_length;
		V_0 = L_0;
		int32_t L_1 = __this->___m_length;
		int32_t L_2 = ___1_count;
		int32_t L_3;
		L_3 = UnsafeList_1_get_Capacity_m69896D0FF20459BAA8A523569F7D9D0E1C1FBCC8(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_1, L_2))) <= ((int32_t)L_3)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_4 = __this->___m_length;
		int32_t L_5 = ___1_count;
		UnsafeList_1_Resize_m35FFBB059A219FEF2ADE6C031E9B374234EA08D0(__this, ((int32_t)il2cpp_codegen_add(L_4, L_5)), (int32_t)0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		goto IL_0036;
	}

IL_0028:
	{
		int32_t L_6 = __this->___m_length;
		int32_t L_7 = ___1_count;
		__this->___m_length = ((int32_t)il2cpp_codegen_add(L_6, L_7));
	}

IL_0036:
	{
		uint32_t L_8 = sizeof(WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3);
		V_1 = (int32_t)L_8;
		WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* L_9 = __this->___Ptr;
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		V_2 = (void*)((WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3*)il2cpp_codegen_add((intptr_t)L_9, ((int32_t)il2cpp_codegen_multiply(L_10, L_11))));
		void* L_12 = V_2;
		void* L_13 = ___0_ptr;
		int32_t L_14 = ___1_count;
		int32_t L_15 = V_1;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177(L_12, L_13, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_14, L_15))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeList_1_AddRange_m97456825A70AE74BD620181BD3E519F461687B96_AdjustorThunk (RuntimeObject* __this, void* ___0_ptr, int32_t ___1_count, const RuntimeMethod* method)
{
	UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*>(__this + _offset);
	UnsafeList_1_AddRange_m97456825A70AE74BD620181BD3E519F461687B96(_thisAdjusted, ___0_ptr, ___1_count, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_AddRange_mC92E1F540A3B9A7786C82BCE5093879CF3FE7C28_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057 ___0_list, const RuntimeMethod* method) 
{
	{
		UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057 L_0 = ___0_list;
		WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* L_1 = L_0.___Ptr;
		int32_t L_2;
		L_2 = UnsafeList_1_get_Length_mAE769DE03CCB4B6E7A7E37C7FCB07F7D58AF9518((&___0_list), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		UnsafeList_1_AddRange_m97456825A70AE74BD620181BD3E519F461687B96(__this, (void*)L_1, L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeList_1_AddRange_mC92E1F540A3B9A7786C82BCE5093879CF3FE7C28_AdjustorThunk (RuntimeObject* __this, UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057 ___0_list, const RuntimeMethod* method)
{
	UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*>(__this + _offset);
	UnsafeList_1_AddRange_mC92E1F540A3B9A7786C82BCE5093879CF3FE7C28(_thisAdjusted, ___0_list, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_InsertRangeWithBeginEnd_m1B54E9528555EAE2119F033319F80AA055DC4842_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_begin, int32_t ___1_end, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___1_end;
		int32_t L_1 = ___0_begin;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)1)))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		int32_t L_3 = __this->___m_length;
		int32_t L_4 = __this->___m_length;
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = UnsafeList_1_get_Capacity_m69896D0FF20459BAA8A523569F7D9D0E1C1FBCC8(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))) <= ((int32_t)L_6)))
		{
			G_B4_0 = L_3;
			goto IL_0030;
		}
		G_B3_0 = L_3;
	}
	{
		int32_t L_7 = __this->___m_length;
		int32_t L_8 = V_0;
		UnsafeList_1_Resize_m35FFBB059A219FEF2ADE6C031E9B374234EA08D0(__this, ((int32_t)il2cpp_codegen_add(L_7, L_8)), (int32_t)0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		G_B5_0 = G_B3_0;
		goto IL_003e;
	}

IL_0030:
	{
		int32_t L_9 = __this->___m_length;
		int32_t L_10 = V_0;
		__this->___m_length = ((int32_t)il2cpp_codegen_add(L_9, L_10));
		G_B5_0 = G_B4_0;
	}

IL_003e:
	{
		int32_t L_11 = ___0_begin;
		V_1 = ((int32_t)il2cpp_codegen_subtract(G_B5_0, L_11));
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) >= ((int32_t)1)))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}

IL_0046:
	{
		uint32_t L_13 = sizeof(WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3);
		V_2 = (int32_t)L_13;
		int32_t L_14 = V_1;
		int32_t L_15 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_multiply(L_14, L_15));
		WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* L_16 = __this->___Ptr;
		V_4 = (uint8_t*)L_16;
		uint8_t* L_17 = V_4;
		int32_t L_18 = ___1_end;
		int32_t L_19 = V_2;
		uint8_t* L_20 = V_4;
		int32_t L_21 = ___0_begin;
		int32_t L_22 = V_2;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_20, ((int32_t)il2cpp_codegen_multiply(L_21, L_22))));
		uint8_t* L_23 = V_5;
		int32_t L_24 = V_3;
		UnsafeUtility_MemMove_m4799FAA9C4BCFA1AEDC6ED01BB9A6DF657C4CEE3((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((int32_t)il2cpp_codegen_multiply(L_18, L_19)))), (void*)L_23, ((int64_t)L_24), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeList_1_InsertRangeWithBeginEnd_m1B54E9528555EAE2119F033319F80AA055DC4842_AdjustorThunk (RuntimeObject* __this, int32_t ___0_begin, int32_t ___1_end, const RuntimeMethod* method)
{
	UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*>(__this + _offset);
	UnsafeList_1_InsertRangeWithBeginEnd_m1B54E9528555EAE2119F033319F80AA055DC4842(_thisAdjusted, ___0_begin, ___1_end, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_RemoveAtSwapBack_m0AAE58CD5CE44C06BBB95EA46A1CE1A2ADFF166A_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		UnsafeList_1_RemoveRangeSwapBack_m93A0095FF3BE90438F9ADEDA8D1FE0AFDDE46AC9(__this, L_0, 1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeList_1_RemoveAtSwapBack_m0AAE58CD5CE44C06BBB95EA46A1CE1A2ADFF166A_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*>(__this + _offset);
	UnsafeList_1_RemoveAtSwapBack_m0AAE58CD5CE44C06BBB95EA46A1CE1A2ADFF166A(_thisAdjusted, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_RemoveRangeSwapBack_m93A0095FF3BE90438F9ADEDA8D1FE0AFDDE46AC9_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	void* V_2 = NULL;
	void* V_3 = NULL;
	{
		int32_t L_0 = ___1_count;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_1 = __this->___m_length;
		int32_t L_2 = ___1_count;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		int32_t L_5;
		L_5 = math_max_m9083201D37A8ED0157B127B5878D9B7F3A2A40BE_inline(((int32_t)il2cpp_codegen_subtract(L_1, L_2)), ((int32_t)il2cpp_codegen_add(L_3, L_4)), NULL);
		V_0 = L_5;
		uint32_t L_6 = sizeof(WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3);
		V_1 = (int32_t)L_6;
		WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* L_7 = __this->___Ptr;
		int32_t L_8 = ___0_index;
		int32_t L_9 = V_1;
		V_2 = (void*)((WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3*)il2cpp_codegen_add((intptr_t)L_7, ((int32_t)il2cpp_codegen_multiply(L_8, L_9))));
		WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* L_10 = __this->___Ptr;
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		V_3 = (void*)((WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3*)il2cpp_codegen_add((intptr_t)L_10, ((int32_t)il2cpp_codegen_multiply(L_11, L_12))));
		void* L_13 = V_2;
		void* L_14 = V_3;
		int32_t L_15 = __this->___m_length;
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177(L_13, L_14, ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_15, L_16)), L_17))), NULL);
		int32_t L_18 = __this->___m_length;
		int32_t L_19 = ___1_count;
		__this->___m_length = ((int32_t)il2cpp_codegen_subtract(L_18, L_19));
	}

IL_0052:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeList_1_RemoveRangeSwapBack_m93A0095FF3BE90438F9ADEDA8D1FE0AFDDE46AC9_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*>(__this + _offset);
	UnsafeList_1_RemoveRangeSwapBack_m93A0095FF3BE90438F9ADEDA8D1FE0AFDDE46AC9(_thisAdjusted, ___0_index, ___1_count, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_RemoveRangeSwapBackWithBeginEnd_mC8132645CACF128079A68BF0D61EA7B463C2EB22_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_begin, int32_t ___1_end, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	void* V_3 = NULL;
	void* V_4 = NULL;
	{
		int32_t L_0 = ___1_end;
		int32_t L_1 = ___0_begin;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_3 = __this->___m_length;
		int32_t L_4 = V_0;
		int32_t L_5 = ___1_end;
		int32_t L_6;
		L_6 = math_max_m9083201D37A8ED0157B127B5878D9B7F3A2A40BE_inline(((int32_t)il2cpp_codegen_subtract(L_3, L_4)), L_5, NULL);
		V_1 = L_6;
		uint32_t L_7 = sizeof(WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3);
		V_2 = (int32_t)L_7;
		WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* L_8 = __this->___Ptr;
		int32_t L_9 = ___0_begin;
		int32_t L_10 = V_2;
		V_3 = (void*)((WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3*)il2cpp_codegen_add((intptr_t)L_8, ((int32_t)il2cpp_codegen_multiply(L_9, L_10))));
		WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* L_11 = __this->___Ptr;
		int32_t L_12 = V_1;
		int32_t L_13 = V_2;
		V_4 = (void*)((WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3*)il2cpp_codegen_add((intptr_t)L_11, ((int32_t)il2cpp_codegen_multiply(L_12, L_13))));
		void* L_14 = V_3;
		void* L_15 = V_4;
		int32_t L_16 = __this->___m_length;
		int32_t L_17 = V_1;
		int32_t L_18 = V_2;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177(L_14, L_15, ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_16, L_17)), L_18))), NULL);
		int32_t L_19 = __this->___m_length;
		int32_t L_20 = V_0;
		__this->___m_length = ((int32_t)il2cpp_codegen_subtract(L_19, L_20));
	}

IL_0056:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeList_1_RemoveRangeSwapBackWithBeginEnd_mC8132645CACF128079A68BF0D61EA7B463C2EB22_AdjustorThunk (RuntimeObject* __this, int32_t ___0_begin, int32_t ___1_end, const RuntimeMethod* method)
{
	UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*>(__this + _offset);
	UnsafeList_1_RemoveRangeSwapBackWithBeginEnd_mC8132645CACF128079A68BF0D61EA7B463C2EB22(_thisAdjusted, ___0_begin, ___1_end, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_RemoveAt_mE0B1A08D1D959E5C2A23C133792507515D0A6D38_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		UnsafeList_1_RemoveRange_mF463EB821FA676F8E90795E5A541F3FAF9C01605(__this, L_0, 1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeList_1_RemoveAt_mE0B1A08D1D959E5C2A23C133792507515D0A6D38_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*>(__this + _offset);
	UnsafeList_1_RemoveAt_mE0B1A08D1D959E5C2A23C133792507515D0A6D38(_thisAdjusted, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_RemoveRange_mF463EB821FA676F8E90795E5A541F3FAF9C01605_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	void* V_2 = NULL;
	void* V_3 = NULL;
	{
		int32_t L_0 = ___1_count;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = ___1_count;
		int32_t L_3 = __this->___m_length;
		int32_t L_4;
		L_4 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)il2cpp_codegen_add(L_1, L_2)), L_3, NULL);
		V_0 = L_4;
		uint32_t L_5 = sizeof(WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3);
		V_1 = (int32_t)L_5;
		WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* L_6 = __this->___Ptr;
		int32_t L_7 = ___0_index;
		int32_t L_8 = V_1;
		V_2 = (void*)((WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3*)il2cpp_codegen_add((intptr_t)L_6, ((int32_t)il2cpp_codegen_multiply(L_7, L_8))));
		WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* L_9 = __this->___Ptr;
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		V_3 = (void*)((WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3*)il2cpp_codegen_add((intptr_t)L_9, ((int32_t)il2cpp_codegen_multiply(L_10, L_11))));
		void* L_12 = V_2;
		void* L_13 = V_3;
		int32_t L_14 = __this->___m_length;
		int32_t L_15 = V_0;
		int32_t L_16 = V_1;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177(L_12, L_13, ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_14, L_15)), L_16))), NULL);
		int32_t L_17 = __this->___m_length;
		int32_t L_18 = ___1_count;
		__this->___m_length = ((int32_t)il2cpp_codegen_subtract(L_17, L_18));
	}

IL_0050:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeList_1_RemoveRange_mF463EB821FA676F8E90795E5A541F3FAF9C01605_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*>(__this + _offset);
	UnsafeList_1_RemoveRange_mF463EB821FA676F8E90795E5A541F3FAF9C01605(_thisAdjusted, ___0_index, ___1_count, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_RemoveRangeWithBeginEnd_mE6E694A57F3F5F81483E4E3B7C0F902C7596E80D_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_begin, int32_t ___1_end, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	void* V_3 = NULL;
	void* V_4 = NULL;
	{
		int32_t L_0 = ___1_end;
		int32_t L_1 = ___0_begin;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_3 = ___0_begin;
		int32_t L_4 = V_0;
		int32_t L_5 = __this->___m_length;
		int32_t L_6;
		L_6 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)il2cpp_codegen_add(L_3, L_4)), L_5, NULL);
		V_1 = L_6;
		uint32_t L_7 = sizeof(WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3);
		V_2 = (int32_t)L_7;
		WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* L_8 = __this->___Ptr;
		int32_t L_9 = ___0_begin;
		int32_t L_10 = V_2;
		V_3 = (void*)((WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3*)il2cpp_codegen_add((intptr_t)L_8, ((int32_t)il2cpp_codegen_multiply(L_9, L_10))));
		WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* L_11 = __this->___Ptr;
		int32_t L_12 = V_1;
		int32_t L_13 = V_2;
		V_4 = (void*)((WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3*)il2cpp_codegen_add((intptr_t)L_11, ((int32_t)il2cpp_codegen_multiply(L_12, L_13))));
		void* L_14 = V_3;
		void* L_15 = V_4;
		int32_t L_16 = __this->___m_length;
		int32_t L_17 = V_1;
		int32_t L_18 = V_2;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177(L_14, L_15, ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_16, L_17)), L_18))), NULL);
		int32_t L_19 = __this->___m_length;
		int32_t L_20 = V_0;
		__this->___m_length = ((int32_t)il2cpp_codegen_subtract(L_19, L_20));
	}

IL_0056:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeList_1_RemoveRangeWithBeginEnd_mE6E694A57F3F5F81483E4E3B7C0F902C7596E80D_AdjustorThunk (RuntimeObject* __this, int32_t ___0_begin, int32_t ___1_end, const RuntimeMethod* method)
{
	UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*>(__this + _offset);
	UnsafeList_1_RemoveRangeWithBeginEnd_mE6E694A57F3F5F81483E4E3B7C0F902C7596E80D(_thisAdjusted, ___0_begin, ___1_end, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParallelReader_t9C18D46113B1C6AAEAD1DBF950354C8B60A07E44 UnsafeList_1_AsParallelReader_mE7666E29CAD300615D87CC0B62676E0C659CC934_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, const RuntimeMethod* method) 
{
	{
		WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* L_0 = __this->___Ptr;
		int32_t L_1;
		L_1 = UnsafeList_1_get_Length_mAE769DE03CCB4B6E7A7E37C7FCB07F7D58AF9518(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		ParallelReader_t9C18D46113B1C6AAEAD1DBF950354C8B60A07E44 L_2;
		memset((&L_2), 0, sizeof(L_2));
		ParallelReader__ctor_m89B9703FE4DE1884DD0957749BF96D342D328324((&L_2), L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 27));
		return L_2;
	}
}
IL2CPP_EXTERN_C  ParallelReader_t9C18D46113B1C6AAEAD1DBF950354C8B60A07E44 UnsafeList_1_AsParallelReader_mE7666E29CAD300615D87CC0B62676E0C659CC934_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*>(__this + _offset);
	ParallelReader_t9C18D46113B1C6AAEAD1DBF950354C8B60A07E44 _returnValue;
	_returnValue = UnsafeList_1_AsParallelReader_mE7666E29CAD300615D87CC0B62676E0C659CC934(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParallelWriter_t44CFE37FDC25ADFD53664D63793BA9A6C6D48FA4 UnsafeList_1_AsParallelWriter_m7A91020D3A92D2CD7DDFEB3467B997FE0C5FDF08_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, const RuntimeMethod* method) 
{
	{
		void* L_0;
		L_0 = il2cpp_codegen_unsafe_cast(__this);
		ParallelWriter_t44CFE37FDC25ADFD53664D63793BA9A6C6D48FA4 L_1;
		memset((&L_1), 0, sizeof(L_1));
		ParallelWriter__ctor_mBC1F78E6299EA08765C42B809498CDFF92312146_inline((&L_1), (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*)L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 31));
		return L_1;
	}
}
IL2CPP_EXTERN_C  ParallelWriter_t44CFE37FDC25ADFD53664D63793BA9A6C6D48FA4 UnsafeList_1_AsParallelWriter_m7A91020D3A92D2CD7DDFEB3467B997FE0C5FDF08_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*>(__this + _offset);
	ParallelWriter_t44CFE37FDC25ADFD53664D63793BA9A6C6D48FA4 _returnValue;
	_returnValue = UnsafeList_1_AsParallelWriter_m7A91020D3A92D2CD7DDFEB3467B997FE0C5FDF08(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_CopyFrom_m44DEC8FE2E06DAED439F1F5689A784BBABA05B92_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057 ___0_array, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeList_1_get_Length_mAE769DE03CCB4B6E7A7E37C7FCB07F7D58AF9518((&___0_array), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		UnsafeList_1_Resize_m35FFBB059A219FEF2ADE6C031E9B374234EA08D0(__this, L_0, (int32_t)0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* L_1 = __this->___Ptr;
		UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057 L_2 = ___0_array;
		WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* L_3 = L_2.___Ptr;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisWindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3_m2F9303AED865A1049498E360278CF4504F790F3D_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 32));
		int32_t L_5;
		L_5 = UnsafeList_1_get_Length_mAE769DE03CCB4B6E7A7E37C7FCB07F7D58AF9518(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_1, (void*)L_3, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_4, L_5))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeList_1_CopyFrom_m44DEC8FE2E06DAED439F1F5689A784BBABA05B92_AdjustorThunk (RuntimeObject* __this, UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057 ___0_array, const RuntimeMethod* method)
{
	UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*>(__this + _offset);
	UnsafeList_1_CopyFrom_m44DEC8FE2E06DAED439F1F5689A784BBABA05B92(_thisAdjusted, ___0_array, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t31F4DCDA175D00FF707A4AECC69C81E422EC2E5D UnsafeList_1_GetEnumerator_mA4D6F3B4B78678A8AC7CA5E6654DB6D4F253B4FD_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, const RuntimeMethod* method) 
{
	Enumerator_t31F4DCDA175D00FF707A4AECC69C81E422EC2E5D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Enumerator_t31F4DCDA175D00FF707A4AECC69C81E422EC2E5D));
		WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3* L_0 = __this->___Ptr;
		(&V_0)->___m_Ptr = L_0;
		int32_t L_1;
		L_1 = UnsafeList_1_get_Length_mAE769DE03CCB4B6E7A7E37C7FCB07F7D58AF9518(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		(&V_0)->___m_Length = L_1;
		(&V_0)->___m_Index = (-1);
		Enumerator_t31F4DCDA175D00FF707A4AECC69C81E422EC2E5D L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  Enumerator_t31F4DCDA175D00FF707A4AECC69C81E422EC2E5D UnsafeList_1_GetEnumerator_mA4D6F3B4B78678A8AC7CA5E6654DB6D4F253B4FD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*>(__this + _offset);
	Enumerator_t31F4DCDA175D00FF707A4AECC69C81E422EC2E5D _returnValue;
	_returnValue = UnsafeList_1_GetEnumerator_mA4D6F3B4B78678A8AC7CA5E6654DB6D4F253B4FD(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeList_1_System_Collections_IEnumerable_GetEnumerator_m1D77F8ED7D85C025D7F434188A861EB32174F754_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C  RuntimeObject* UnsafeList_1_System_Collections_IEnumerable_GetEnumerator_m1D77F8ED7D85C025D7F434188A861EB32174F754_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = UnsafeList_1_System_Collections_IEnumerable_GetEnumerator_m1D77F8ED7D85C025D7F434188A861EB32174F754(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mC1DDA3847BF1C88B58F0D917F69439D9D66DEEE9_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C  RuntimeObject* UnsafeList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mC1DDA3847BF1C88B58F0D917F69439D9D66DEEE9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = UnsafeList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mC1DDA3847BF1C88B58F0D917F69439D9D66DEEE9(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_CheckNull_m20C7446A3022A169D5D635BD5CDB3012A09CC734_gshared (void* ___0_listData, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_listData;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0010;
		}
	}
	{
		Exception_t* L_1 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9316BB61AE75FFC69C97AE05928643FC2067D945)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0010:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_CheckIndexCount_mD12239BD8C06A2BDFC2D6A67AD03B5545FDD6AF5_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_count;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1 = ___1_count;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF703F3F0F7C845BF62BD938758D234649F062C71)), L_3, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_001a:
	{
		int32_t L_6 = ___0_index;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_7 = ___0_index;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3EF31B73D0B6BCC1365FEEA9C031B0C6E2F8BD6E)), L_9, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0034:
	{
		int32_t L_12 = ___0_index;
		int32_t L_13;
		L_13 = UnsafeList_1_get_Length_mAE769DE03CCB4B6E7A7E37C7FCB07F7D58AF9518(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		if ((((int32_t)L_12) <= ((int32_t)L_13)))
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_14 = ___0_index;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_15);
		String_t* L_17;
		L_17 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF6174C62DAADCBD566E6B0784CA0CCE4BADBB7E7)), L_16, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_18 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_18, L_17, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, method);
	}

IL_0053:
	{
		int32_t L_19 = ___0_index;
		int32_t L_20 = ___1_count;
		int32_t L_21;
		L_21 = UnsafeList_1_get_Length_mAE769DE03CCB4B6E7A7E37C7FCB07F7D58AF9518(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_19, L_20))) <= ((int32_t)L_21)))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_22 = ___1_count;
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_23);
		String_t* L_25;
		L_25 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5251CAC1BCE4AF2A35283EDB521F6110A8B98A71)), L_24, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_26 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_26, L_25, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, method);
	}

IL_0074:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeList_1_CheckIndexCount_mD12239BD8C06A2BDFC2D6A67AD03B5545FDD6AF5_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*>(__this + _offset);
	UnsafeList_1_CheckIndexCount_mD12239BD8C06A2BDFC2D6A67AD03B5545FDD6AF5(_thisAdjusted, ___0_index, ___1_count, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_CheckBeginEnd_mA1E499D7760C7B78E894B48FB742D1E85A2407C9_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_begin, int32_t ___1_end, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_begin;
		int32_t L_1 = ___1_end;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_begin;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_3);
		int32_t L_5 = ___1_end;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral68B688C01BCBF69859DF1A84C9E7E103147E76DB)), L_4, L_7, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		int32_t L_10 = ___0_begin;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_11 = ___0_begin;
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_12);
		String_t* L_14;
		L_14 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral352E7122B0DE6CCD5D3EE15BBDB0146E12829A52)), L_13, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_15 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_15, L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_003a:
	{
		int32_t L_16 = ___0_begin;
		int32_t L_17;
		L_17 = UnsafeList_1_get_Length_mAE769DE03CCB4B6E7A7E37C7FCB07F7D58AF9518(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		if ((((int32_t)L_16) <= ((int32_t)L_17)))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_18 = ___0_begin;
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_19);
		String_t* L_21;
		L_21 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral08C6D00ED24B7C6D6B098C63F3DF60E72309D959)), L_20, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_22 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}

IL_0059:
	{
		int32_t L_23 = ___1_end;
		int32_t L_24;
		L_24 = UnsafeList_1_get_Length_mAE769DE03CCB4B6E7A7E37C7FCB07F7D58AF9518(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		if ((((int32_t)L_23) <= ((int32_t)L_24)))
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_25 = ___1_end;
		int32_t L_26 = L_25;
		RuntimeObject* L_27 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_26);
		String_t* L_28;
		L_28 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50078E6885204BADA7C4D8AF0169823A59C3BD81)), L_27, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_29 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_29, L_28, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, method);
	}

IL_0078:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeList_1_CheckBeginEnd_mA1E499D7760C7B78E894B48FB742D1E85A2407C9_AdjustorThunk (RuntimeObject* __this, int32_t ___0_begin, int32_t ___1_end, const RuntimeMethod* method)
{
	UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*>(__this + _offset);
	UnsafeList_1_CheckBeginEnd_mA1E499D7760C7B78E894B48FB742D1E85A2407C9(_thisAdjusted, ___0_begin, ___1_end, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_CheckNoResizeHasEnoughCapacity_mC8525DA5A501FA21084EB3768A6EEBCA224F13AA_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_length, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeList_1_CheckNoResizeHasEnoughCapacity_mC8525DA5A501FA21084EB3768A6EEBCA224F13AA_AdjustorThunk (RuntimeObject* __this, int32_t ___0_length, const RuntimeMethod* method)
{
	UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*>(__this + _offset);
	UnsafeList_1_CheckNoResizeHasEnoughCapacity_mC8525DA5A501FA21084EB3768A6EEBCA224F13AA(_thisAdjusted, ___0_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeList_1_CheckNoResizeHasEnoughCapacity_m304848E3241D3E38FDCEF67C5E45D24DE82BFA6A_gshared (UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* __this, int32_t ___0_length, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeList_1_get_Capacity_m69896D0FF20459BAA8A523569F7D9D0E1C1FBCC8(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___0_length;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_1, L_2)))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_3;
		L_3 = UnsafeList_1_get_Capacity_m69896D0FF20459BAA8A523569F7D9D0E1C1FBCC8(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_4);
		int32_t L_6;
		L_6 = UnsafeList_1_get_Length_mAE769DE03CCB4B6E7A7E37C7FCB07F7D58AF9518(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_7);
		int32_t L_9 = ___0_length;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_10);
		String_t* L_12;
		L_12 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDFDEA45BDE2DE7BA24A83DDEBF6D1722801A1BCD)), L_5, L_8, L_11, NULL);
		Exception_t* L_13 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
	}

IL_0037:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeList_1_CheckNoResizeHasEnoughCapacity_m304848E3241D3E38FDCEF67C5E45D24DE82BFA6A_AdjustorThunk (RuntimeObject* __this, int32_t ___0_length, int32_t ___1_index, const RuntimeMethod* method)
{
	UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057*>(__this + _offset);
	UnsafeList_1_CheckNoResizeHasEnoughCapacity_m304848E3241D3E38FDCEF67C5E45D24DE82BFA6A(_thisAdjusted, ___0_length, ___1_index, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeMultiHashMap_2__ctor_m772B2062F82650C8C534372742F00DAD4480AEA6_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, int32_t ___0_capacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		__this->___m_AllocatorLabel = L_0;
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = ___0_capacity;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926** L_4 = (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926**)(&__this->___m_Buffer);
		((  void (*) (int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)))(L_1, ((int32_t)il2cpp_codegen_multiply(L_2, 2)), L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		((  void (*) (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2)))(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeMultiHashMap_2__ctor_m772B2062F82650C8C534372742F00DAD4480AEA6_AdjustorThunk (RuntimeObject* __this, int32_t ___0_capacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method)
{
	UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*>(__this + _offset);
	UnsafeMultiHashMap_2__ctor_m772B2062F82650C8C534372742F00DAD4480AEA6(_thisAdjusted, ___0_capacity, ___1_allocator, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeMultiHashMap_2_get_IsEmpty_m130B6E00F6B7C5113464FA052B00178F908C669E_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = ((  bool (*) (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4)))(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = __this->___m_Buffer;
		bool L_2;
		L_2 = UnsafeParallelHashMapData_IsEmpty_m24404CDC35842532023F9D7094DB24BCBD57EC9D(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool UnsafeMultiHashMap_2_get_IsEmpty_m130B6E00F6B7C5113464FA052B00178F908C669E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*>(__this + _offset);
	bool _returnValue;
	_returnValue = UnsafeMultiHashMap_2_get_IsEmpty_m130B6E00F6B7C5113464FA052B00178F908C669E(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeMultiHashMap_2_Count_m7970A08A43CADE0FDA44DB8D6A8897CDCC9434FD_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		NullCheck(L_0);
		int32_t L_1 = L_0->___allocatedIndexLength;
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		return 0;
	}

IL_0010:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = __this->___m_Buffer;
		int32_t L_3;
		L_3 = UnsafeParallelHashMapData_GetCount_mF10300D8E62B36979B41F3CBE396D96721931D7B(L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t UnsafeMultiHashMap_2_Count_m7970A08A43CADE0FDA44DB8D6A8897CDCC9434FD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = UnsafeMultiHashMap_2_Count_m7970A08A43CADE0FDA44DB8D6A8897CDCC9434FD(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeMultiHashMap_2_get_Capacity_m2FC25F3A82CC8B9A1DC86D05397EAD0ADA1442EF_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t UnsafeMultiHashMap_2_get_Capacity_m2FC25F3A82CC8B9A1DC86D05397EAD0ADA1442EF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = UnsafeMultiHashMap_2_get_Capacity_m2FC25F3A82CC8B9A1DC86D05397EAD0ADA1442EF(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeMultiHashMap_2_set_Capacity_mA0A10CE46E5E6102D3784EB4EB2FFA3AB86DADD4_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1 = ___0_value;
		int32_t L_2 = ___0_value;
		int32_t L_3;
		L_3 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_2, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_4 = __this->___m_AllocatorLabel;
		((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(L_0, L_1, L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeMultiHashMap_2_set_Capacity_mA0A10CE46E5E6102D3784EB4EB2FFA3AB86DADD4_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*>(__this + _offset);
	UnsafeMultiHashMap_2_set_Capacity_mA0A10CE46E5E6102D3784EB4EB2FFA3AB86DADD4(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeMultiHashMap_2_Clear_m21481926E3A97A538FFAD8D09D5E500D257F5657_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)))(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeMultiHashMap_2_Clear_m21481926E3A97A538FFAD8D09D5E500D257F5657_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*>(__this + _offset);
	UnsafeMultiHashMap_2_Clear_m21481926E3A97A538FFAD8D09D5E500D257F5657(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeMultiHashMap_2_Add_m5888FF3C3734DF1FB562DD480492BE30B611ACE2_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, Il2CppFullySharedGenericStruct ___0_key, Il2CppFullySharedGenericStruct ___1_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t991B86FF1FCD969FB5265286C284F99314130FDC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8));
	const uint32_t SizeOf_TValue_t091BDD318EF9B3D1435C83E201927541697B9BA6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TKey_t991B86FF1FCD969FB5265286C284F99314130FDC);
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_TValue_t091BDD318EF9B3D1435C83E201927541697B9BA6);
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		il2cpp_codegen_memcpy(L_1, ___0_key, SizeOf_TKey_t991B86FF1FCD969FB5265286C284F99314130FDC);
		il2cpp_codegen_memcpy(L_2, ___1_item, SizeOf_TValue_t091BDD318EF9B3D1435C83E201927541697B9BA6);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = __this->___m_AllocatorLabel;
		bool L_4;
		L_4 = InvokerFuncInvoker5< bool, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, bool, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10), NULL, L_0, L_1, L_2, (bool)1, L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeMultiHashMap_2_Add_m5888FF3C3734DF1FB562DD480492BE30B611ACE2_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct ___0_key, Il2CppFullySharedGenericStruct ___1_item, const RuntimeMethod* method)
{
	UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*>(__this + _offset);
	UnsafeMultiHashMap_2_Add_m5888FF3C3734DF1FB562DD480492BE30B611ACE2(_thisAdjusted, ___0_key, ___1_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeMultiHashMap_2_Remove_mEA6A50460FAEA33F47AF25AB1C065823009EA2CC_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, Il2CppFullySharedGenericStruct ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t991B86FF1FCD969FB5265286C284F99314130FDC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TKey_t991B86FF1FCD969FB5265286C284F99314130FDC);
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		il2cpp_codegen_memcpy(L_1, ___0_key, SizeOf_TKey_t991B86FF1FCD969FB5265286C284F99314130FDC);
		int32_t L_2;
		L_2 = InvokerFuncInvoker3< int32_t, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, Il2CppFullySharedGenericStruct, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11), NULL, L_0, L_1, (bool)1);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t UnsafeMultiHashMap_2_Remove_mEA6A50460FAEA33F47AF25AB1C065823009EA2CC_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct ___0_key, const RuntimeMethod* method)
{
	UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = UnsafeMultiHashMap_2_Remove_mEA6A50460FAEA33F47AF25AB1C065823009EA2CC(_thisAdjusted, ___0_key, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeMultiHashMap_2_Remove_mA24D63CC2ADF68280A48B33C66D6BC066BB1431F_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 ___0_it, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_NativeParallelMultiHashMapIterator_1_tB6CF946C92D792C14224F53262CF2CD7C1E36539 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	const NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 L_1 = alloca(SizeOf_NativeParallelMultiHashMapIterator_1_tB6CF946C92D792C14224F53262CF2CD7C1E36539);
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		il2cpp_codegen_memcpy(L_1, ___0_it, SizeOf_NativeParallelMultiHashMapIterator_1_tB6CF946C92D792C14224F53262CF2CD7C1E36539);
		InvokerActionInvoker2< UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13), NULL, L_0, L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeMultiHashMap_2_Remove_mA24D63CC2ADF68280A48B33C66D6BC066BB1431F_AdjustorThunk (RuntimeObject* __this, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 ___0_it, const RuntimeMethod* method)
{
	UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*>(__this + _offset);
	UnsafeMultiHashMap_2_Remove_mA24D63CC2ADF68280A48B33C66D6BC066BB1431F(_thisAdjusted, ___0_it, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeMultiHashMap_2_TryGetFirstValue_m7DB218582908980321D876C3F935534A2850C4BF_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, Il2CppFullySharedGenericStruct ___0_key, Il2CppFullySharedGenericStruct* ___1_item, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* ___2_it, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t991B86FF1FCD969FB5265286C284F99314130FDC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TKey_t991B86FF1FCD969FB5265286C284F99314130FDC);
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		il2cpp_codegen_memcpy(L_1, ___0_key, SizeOf_TKey_t991B86FF1FCD969FB5265286C284F99314130FDC);
		Il2CppFullySharedGenericStruct* L_2 = ___1_item;
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_3 = ___2_it;
		bool L_4;
		L_4 = InvokerFuncInvoker4< bool, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct*, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16), NULL, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool UnsafeMultiHashMap_2_TryGetFirstValue_m7DB218582908980321D876C3F935534A2850C4BF_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct ___0_key, Il2CppFullySharedGenericStruct* ___1_item, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* ___2_it, const RuntimeMethod* method)
{
	UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*>(__this + _offset);
	bool _returnValue;
	_returnValue = UnsafeMultiHashMap_2_TryGetFirstValue_m7DB218582908980321D876C3F935534A2850C4BF(_thisAdjusted, ___0_key, ___1_item, ___2_it, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeMultiHashMap_2_TryGetNextValue_mDF0129FA234A46A5935A15E4E204E23075073269_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, Il2CppFullySharedGenericStruct* ___0_item, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* ___1_it, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		Il2CppFullySharedGenericStruct* L_1 = ___0_item;
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_2 = ___1_it;
		bool L_3;
		L_3 = ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, Il2CppFullySharedGenericStruct*, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17)))(L_0, L_1, L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool UnsafeMultiHashMap_2_TryGetNextValue_mDF0129FA234A46A5935A15E4E204E23075073269_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* ___0_item, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* ___1_it, const RuntimeMethod* method)
{
	UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*>(__this + _offset);
	bool _returnValue;
	_returnValue = UnsafeMultiHashMap_2_TryGetNextValue_mDF0129FA234A46A5935A15E4E204E23075073269(_thisAdjusted, ___0_item, ___1_it, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeMultiHashMap_2_ContainsKey_m9B3DBB75A9EBEBA17D2ABA2A0B326063F009B77A_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, Il2CppFullySharedGenericStruct ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t091BDD318EF9B3D1435C83E201927541697B9BA6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
	const uint32_t SizeOf_NativeParallelMultiHashMapIterator_1_tB6CF946C92D792C14224F53262CF2CD7C1E36539 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	const uint32_t SizeOf_TKey_t991B86FF1FCD969FB5265286C284F99314130FDC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_TKey_t991B86FF1FCD969FB5265286C284F99314130FDC);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TValue_t091BDD318EF9B3D1435C83E201927541697B9BA6);
	memset(V_0, 0, SizeOf_TValue_t091BDD318EF9B3D1435C83E201927541697B9BA6);
	NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 V_1 = alloca(SizeOf_NativeParallelMultiHashMapIterator_1_tB6CF946C92D792C14224F53262CF2CD7C1E36539);
	memset(V_1, 0, SizeOf_NativeParallelMultiHashMapIterator_1_tB6CF946C92D792C14224F53262CF2CD7C1E36539);
	{
		il2cpp_codegen_memcpy(L_0, ___0_key, SizeOf_TKey_t991B86FF1FCD969FB5265286C284F99314130FDC);
		bool L_1;
		L_1 = InvokerFuncInvoker3< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct*, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18), __this, L_0, (Il2CppFullySharedGenericStruct*)V_0, (NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51*)V_1);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool UnsafeMultiHashMap_2_ContainsKey_m9B3DBB75A9EBEBA17D2ABA2A0B326063F009B77A_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct ___0_key, const RuntimeMethod* method)
{
	UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*>(__this + _offset);
	bool _returnValue;
	_returnValue = UnsafeMultiHashMap_2_ContainsKey_m9B3DBB75A9EBEBA17D2ABA2A0B326063F009B77A(_thisAdjusted, ___0_key, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeMultiHashMap_2_CountValuesForKey_m5378457AA3C117526B31343A95B7975400FBED23_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, Il2CppFullySharedGenericStruct ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t091BDD318EF9B3D1435C83E201927541697B9BA6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
	const uint32_t SizeOf_NativeParallelMultiHashMapIterator_1_tB6CF946C92D792C14224F53262CF2CD7C1E36539 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	const uint32_t SizeOf_TKey_t991B86FF1FCD969FB5265286C284F99314130FDC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_TKey_t991B86FF1FCD969FB5265286C284F99314130FDC);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TValue_t091BDD318EF9B3D1435C83E201927541697B9BA6);
	memset(V_0, 0, SizeOf_TValue_t091BDD318EF9B3D1435C83E201927541697B9BA6);
	NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 V_1 = alloca(SizeOf_NativeParallelMultiHashMapIterator_1_tB6CF946C92D792C14224F53262CF2CD7C1E36539);
	memset(V_1, 0, SizeOf_NativeParallelMultiHashMapIterator_1_tB6CF946C92D792C14224F53262CF2CD7C1E36539);
	int32_t V_2 = 0;
	{
		il2cpp_codegen_memcpy(L_0, ___0_key, SizeOf_TKey_t991B86FF1FCD969FB5265286C284F99314130FDC);
		bool L_1;
		L_1 = InvokerFuncInvoker3< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct*, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18), __this, L_0, (Il2CppFullySharedGenericStruct*)V_0, (NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51*)V_1);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		V_2 = 1;
		goto IL_0017;
	}

IL_0013:
	{
		int32_t L_2 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0017:
	{
		bool L_3;
		L_3 = ((  bool (*) (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*, Il2CppFullySharedGenericStruct*, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19)))(__this, (Il2CppFullySharedGenericStruct*)V_0, (NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51*)V_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_4 = V_2;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t UnsafeMultiHashMap_2_CountValuesForKey_m5378457AA3C117526B31343A95B7975400FBED23_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct ___0_key, const RuntimeMethod* method)
{
	UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = UnsafeMultiHashMap_2_CountValuesForKey_m5378457AA3C117526B31343A95B7975400FBED23(_thisAdjusted, ___0_key, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeMultiHashMap_2_SetValue_m4581C6A39DC364E8E1ED0B8733B690B8DEBA71AE_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, Il2CppFullySharedGenericStruct ___0_item, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 ___1_it, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		bool L_1;
		L_1 = ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)))(L_0, (NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51*)___1_it, (Il2CppFullySharedGenericStruct*)___0_item, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool UnsafeMultiHashMap_2_SetValue_m4581C6A39DC364E8E1ED0B8733B690B8DEBA71AE_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct ___0_item, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 ___1_it, const RuntimeMethod* method)
{
	UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*>(__this + _offset);
	bool _returnValue;
	_returnValue = UnsafeMultiHashMap_2_SetValue_m4581C6A39DC364E8E1ED0B8733B690B8DEBA71AE(_thisAdjusted, ___0_item, ___1_it, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeMultiHashMap_2_get_IsCreated_m2C0B018D0F8A69BD29858F6D4067EFE8D8D64485_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool UnsafeMultiHashMap_2_get_IsCreated_m2C0B018D0F8A69BD29858F6D4067EFE8D8D64485_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*>(__this + _offset);
	bool _returnValue;
	_returnValue = UnsafeMultiHashMap_2_get_IsCreated_m2C0B018D0F8A69BD29858F6D4067EFE8D8D64485(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeMultiHashMap_2_Dispose_m42641264E56276BB3D5D978E08C97913A42A933B_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1 = __this->___m_AllocatorLabel;
		UnsafeParallelHashMapData_DeallocateHashMap_m8D0FEE08B8522A1D05FBFFBBB43CB203304F114F(L_0, L_1, NULL);
		__this->___m_Buffer = (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeMultiHashMap_2_Dispose_m42641264E56276BB3D5D978E08C97913A42A933B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*>(__this + _offset);
	UnsafeMultiHashMap_2_Dispose_m42641264E56276BB3D5D978E08C97913A42A933B(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeMultiHashMap_2_Dispose_mEC101D133954EB6E76D37399AB1146BCFEC37E80_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___Data = L_0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1 = __this->___m_AllocatorLabel;
		(&V_0)->___Allocator = L_1;
		UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26 L_2 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_3 = ___0_inputDeps;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_4;
		L_4 = IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D(L_2, L_3, IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D_RuntimeMethod_var);
		__this->___m_Buffer = (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)((uintptr_t)0);
		return L_4;
	}
}
IL2CPP_EXTERN_C  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeMultiHashMap_2_Dispose_mEC101D133954EB6E76D37399AB1146BCFEC37E80_AdjustorThunk (RuntimeObject* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method)
{
	UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*>(__this + _offset);
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 _returnValue;
	_returnValue = UnsafeMultiHashMap_2_Dispose_mEC101D133954EB6E76D37399AB1146BCFEC37E80(_thisAdjusted, ___0_inputDeps, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 UnsafeMultiHashMap_2_GetKeyArray_m3BE21AFF7A027040224E819F0EF42735055B763E_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21)))(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1 = ___0_allocator;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2;
		L_2 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22)))(L_0, L_1, (int32_t)0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = __this->___m_Buffer;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_4 = V_0;
		((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24)))(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 UnsafeMultiHashMap_2_GetKeyArray_m3BE21AFF7A027040224E819F0EF42735055B763E_AdjustorThunk (RuntimeObject* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*>(__this + _offset);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 _returnValue;
	_returnValue = UnsafeMultiHashMap_2_GetKeyArray_m3BE21AFF7A027040224E819F0EF42735055B763E(_thisAdjusted, ___0_allocator, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 UnsafeMultiHashMap_2_GetValueArray_mD594171D7915B171526C9B41A4222C7D2734F06B_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21)))(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1 = ___0_allocator;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2;
		L_2 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25)))(L_0, L_1, (int32_t)0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = __this->___m_Buffer;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_4 = V_0;
		((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 27)))(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 27));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 UnsafeMultiHashMap_2_GetValueArray_mD594171D7915B171526C9B41A4222C7D2734F06B_AdjustorThunk (RuntimeObject* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*>(__this + _offset);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 _returnValue;
	_returnValue = UnsafeMultiHashMap_2_GetValueArray_mD594171D7915B171526C9B41A4222C7D2734F06B(_thisAdjusted, ___0_allocator, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1 UnsafeMultiHashMap_2_GetKeyValueArrays_m843F87C85E739204E21812EE1008D293B58DACE0_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21)))(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1 = ___0_allocator;
		((  void (*) (NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28)))((&V_0), L_0, L_1, (int32_t)0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 28));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = __this->___m_Buffer;
		NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1 L_3 = V_0;
		((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 30)))(L_2, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1 UnsafeMultiHashMap_2_GetKeyValueArrays_m843F87C85E739204E21812EE1008D293B58DACE0_AdjustorThunk (RuntimeObject* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*>(__this + _offset);
	NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1 _returnValue;
	_returnValue = UnsafeMultiHashMap_2_GetKeyValueArrays_m843F87C85E739204E21812EE1008D293B58DACE0(_thisAdjusted, ___0_allocator, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeMultiHashMap_2_GetValuesForKey_m72DFF1BAAB77FEB7BCCC0ED7C85C7D8A0484A178_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, Il2CppFullySharedGenericStruct ___0_key, Enumerator_tA34CE25E907E5996285FDE99483CF59812EDC26E* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tDA7D04F3C6DE79403888C335A7E884AD994F0480 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 32));
	const uint32_t SizeOf_TKey_t991B86FF1FCD969FB5265286C284F99314130FDC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TKey_t991B86FF1FCD969FB5265286C284F99314130FDC);
	const Enumerator_tA34CE25E907E5996285FDE99483CF59812EDC26E L_2 = alloca(SizeOf_Enumerator_tDA7D04F3C6DE79403888C335A7E884AD994F0480);
	Enumerator_tA34CE25E907E5996285FDE99483CF59812EDC26E V_0 = alloca(SizeOf_Enumerator_tDA7D04F3C6DE79403888C335A7E884AD994F0480);
	memset(V_0, 0, SizeOf_Enumerator_tDA7D04F3C6DE79403888C335A7E884AD994F0480);
	{
		il2cpp_codegen_initobj((Enumerator_tA34CE25E907E5996285FDE99483CF59812EDC26E*)V_0, SizeOf_Enumerator_tDA7D04F3C6DE79403888C335A7E884AD994F0480);
		UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349 L_0 = (*(UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*)__this);
		il2cpp_codegen_write_instance_field_data<UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349>((Enumerator_tA34CE25E907E5996285FDE99483CF59812EDC26E*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 32),0), L_0);
		il2cpp_codegen_memcpy(L_1, ___0_key, SizeOf_TKey_t991B86FF1FCD969FB5265286C284F99314130FDC);
		il2cpp_codegen_write_instance_field_data((Enumerator_tA34CE25E907E5996285FDE99483CF59812EDC26E*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 32),1), L_1, SizeOf_TKey_t991B86FF1FCD969FB5265286C284F99314130FDC);
		il2cpp_codegen_write_instance_field_data<bool>((Enumerator_tA34CE25E907E5996285FDE99483CF59812EDC26E*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 32),2), (bool)1);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_Enumerator_tDA7D04F3C6DE79403888C335A7E884AD994F0480);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_Enumerator_tDA7D04F3C6DE79403888C335A7E884AD994F0480);
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeMultiHashMap_2_GetValuesForKey_m72DFF1BAAB77FEB7BCCC0ED7C85C7D8A0484A178_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct ___0_key, Enumerator_tA34CE25E907E5996285FDE99483CF59812EDC26E* il2cppRetVal, const RuntimeMethod* method)
{
	UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*>(__this + _offset);
	UnsafeMultiHashMap_2_GetValuesForKey_m72DFF1BAAB77FEB7BCCC0ED7C85C7D8A0484A178(_thisAdjusted, ___0_key, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParallelWriter_tBD6FA796E098328FD0D7184B017B198502BFFB3D UnsafeMultiHashMap_2_AsParallelWriter_m8EC08926230BC651433255EF8AEA38E640A0FF63_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, const RuntimeMethod* method) 
{
	ParallelWriter_tBD6FA796E098328FD0D7184B017B198502BFFB3D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		(&V_0)->___m_ThreadIndex = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		ParallelWriter_tBD6FA796E098328FD0D7184B017B198502BFFB3D L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  ParallelWriter_tBD6FA796E098328FD0D7184B017B198502BFFB3D UnsafeMultiHashMap_2_AsParallelWriter_m8EC08926230BC651433255EF8AEA38E640A0FF63_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*>(__this + _offset);
	ParallelWriter_tBD6FA796E098328FD0D7184B017B198502BFFB3D _returnValue;
	_returnValue = UnsafeMultiHashMap_2_AsParallelWriter_m8EC08926230BC651433255EF8AEA38E640A0FF63(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValueEnumerator_tA87CA7E290FAE613543B32BDB98BF6F3B96A16F8 UnsafeMultiHashMap_2_GetEnumerator_mBB0BD2C3803C28D77272CF4AD9A2818F45EE5C0E_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, const RuntimeMethod* method) 
{
	KeyValueEnumerator_tA87CA7E290FAE613543B32BDB98BF6F3B96A16F8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValueEnumerator_tA87CA7E290FAE613543B32BDB98BF6F3B96A16F8));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		UnsafeParallelHashMapDataEnumerator__ctor_m4BD89848A9562869AB65E15D3D1D24A194187736((&L_1), L_0, NULL);
		(&V_0)->___m_Enumerator = L_1;
		KeyValueEnumerator_tA87CA7E290FAE613543B32BDB98BF6F3B96A16F8 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValueEnumerator_tA87CA7E290FAE613543B32BDB98BF6F3B96A16F8 UnsafeMultiHashMap_2_GetEnumerator_mBB0BD2C3803C28D77272CF4AD9A2818F45EE5C0E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*>(__this + _offset);
	KeyValueEnumerator_tA87CA7E290FAE613543B32BDB98BF6F3B96A16F8 _returnValue;
	_returnValue = UnsafeMultiHashMap_2_GetEnumerator_mBB0BD2C3803C28D77272CF4AD9A2818F45EE5C0E(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeMultiHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m4D4084D1D76AEF87E59D17595D9E188D998254ED_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C  RuntimeObject* UnsafeMultiHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m4D4084D1D76AEF87E59D17595D9E188D998254ED_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = UnsafeMultiHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m4D4084D1D76AEF87E59D17595D9E188D998254ED(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeMultiHashMap_2_System_Collections_IEnumerable_GetEnumerator_m2531898A454DAD47904DBB1D498A96ABB7CF73EC_gshared (UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* __this, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C  RuntimeObject* UnsafeMultiHashMap_2_System_Collections_IEnumerable_GetEnumerator_m2531898A454DAD47904DBB1D498A96ABB7CF73EC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeMultiHashMap_2_t206A8726A88BAE34DC4EC22C887C84EFAC1BD349*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = UnsafeMultiHashMap_2_System_Collections_IEnumerable_GetEnumerator_m2531898A454DAD47904DBB1D498A96ABB7CF73EC(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_m8D58BBF563529FD0291C1B2555924EA36D7E2BE1_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		V_0 = 0;
		goto IL_0051;
	}

IL_0038:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_9 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_8->___firstFreeTLS);
		int32_t* L_10 = (int32_t*)(&L_9->___FixedElementField);
		int32_t L_11 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0051:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)128))))
		{
			goto IL_0038;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		L_14->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_mACFD6EA176D9B36AC7B5CA4395F4916D0E92EAC5_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0007:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_3 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_2->___firstFreeTLS);
		int32_t* L_4 = (int32_t*)(&L_3->___FixedElementField);
		int32_t L_5 = ___1_threadIndex;
		int32_t L_6 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)16)))), 4)))));
		V_0 = L_6;
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_018a;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_9 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_8->___firstFreeTLS);
		int32_t* L_10 = (int32_t*)(&L_9->___FixedElementField);
		int32_t L_11 = ___1_threadIndex;
		int32_t L_12;
		L_12 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		int32_t L_14 = L_13->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___keyCapacity;
		if ((((int32_t)L_14) >= ((int32_t)L_16)))
		{
			goto IL_00f4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		int32_t* L_18 = (int32_t*)(&L_17->___allocatedIndexLength);
		int32_t L_19;
		L_19 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_18, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_19, ((int32_t)16)));
		int32_t L_20 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		NullCheck(L_21);
		int32_t L_22 = L_21->___keyCapacity;
		if ((((int32_t)L_20) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_22, 1)))))
		{
			goto IL_00cd;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		int32_t L_24 = L_23->___keyCapacity;
		int32_t L_25 = V_0;
		int32_t L_26;
		L_26 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_24, L_25)), NULL);
		V_3 = L_26;
		V_4 = 1;
		goto IL_0096;
	}

IL_0080:
	{
		int32_t* L_27 = V_1;
		int32_t L_28 = V_0;
		int32_t L_29 = V_4;
		int32_t L_30 = V_0;
		int32_t L_31 = V_4;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_28, L_29))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_30, L_31)), 1));
		int32_t L_32 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0096:
	{
		int32_t L_33 = V_4;
		int32_t L_34 = V_3;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t* L_35 = V_1;
		int32_t L_36 = V_0;
		int32_t L_37 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_36, L_37)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_38 = V_1;
		int32_t L_39 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_40 = ___0_data;
		NullCheck(L_40);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_41 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_40->___firstFreeTLS);
		int32_t* L_42 = (int32_t*)(&L_41->___FixedElementField);
		int32_t L_43 = ___1_threadIndex;
		int32_t L_44 = V_0;
		int32_t L_45;
		L_45 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_42, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_43, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_44, 1)), NULL);
		int32_t L_46 = V_0;
		return L_46;
	}

IL_00cd:
	{
		int32_t L_47 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		NullCheck(L_48);
		int32_t L_49 = L_48->___keyCapacity;
		if ((!(((uint32_t)L_47) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_49, 1))))))
		{
			goto IL_00f4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_50 = ___0_data;
		NullCheck(L_50);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_51 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_50->___firstFreeTLS);
		int32_t* L_52 = (int32_t*)(&L_51->___FixedElementField);
		int32_t L_53 = ___1_threadIndex;
		int32_t L_54;
		L_54 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_53, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_55 = V_0;
		return L_55;
	}

IL_00f4:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_56 = ___0_data;
		NullCheck(L_56);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_57 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_56->___firstFreeTLS);
		int32_t* L_58 = (int32_t*)(&L_57->___FixedElementField);
		int32_t L_59 = ___1_threadIndex;
		int32_t L_60;
		L_60 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_58, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_59, ((int32_t)16)))), 4)))), (-1), NULL);
		V_2 = (bool)1;
		goto IL_0187;
	}

IL_0112:
	{
		V_2 = (bool)0;
		int32_t L_61 = ___1_threadIndex;
		V_5 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_61, 1))%((int32_t)128)));
		goto IL_0182;
	}

IL_0121:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_62 = ___0_data;
		NullCheck(L_62);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_63 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_62->___firstFreeTLS);
		int32_t* L_64 = (int32_t*)(&L_63->___FixedElementField);
		int32_t L_65 = V_5;
		int32_t L_66 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_64, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_65, ((int32_t)16)))), 4)))));
		V_0 = L_66;
		int32_t L_67 = V_0;
		if ((((int32_t)L_67) < ((int32_t)0)))
		{
			goto IL_015f;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_68 = ___0_data;
		NullCheck(L_68);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_69 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_68->___firstFreeTLS);
		int32_t* L_70 = (int32_t*)(&L_69->___FixedElementField);
		int32_t L_71 = V_5;
		int32_t* L_72 = V_1;
		int32_t L_73 = V_0;
		int32_t L_74 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_72, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_73), 4))))));
		int32_t L_75 = V_0;
		int32_t L_76;
		L_76 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((int32_t*)il2cpp_codegen_add((intptr_t)L_70, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_71, ((int32_t)16)))), 4)))), L_74, L_75, NULL);
		int32_t L_77 = V_0;
		if ((!(((uint32_t)L_76) == ((uint32_t)L_77))))
		{
			goto IL_0121;
		}
	}

IL_015f:
	{
		int32_t L_78 = V_0;
		if ((!(((uint32_t)L_78) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0168;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0176;
	}

IL_0168:
	{
		int32_t L_79 = V_0;
		if ((((int32_t)L_79) < ((int32_t)0)))
		{
			goto IL_0176;
		}
	}
	{
		int32_t* L_80 = V_1;
		int32_t L_81 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_80, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_81), 4))))) = (int32_t)(-1);
		int32_t L_82 = V_0;
		return L_82;
	}

IL_0176:
	{
		int32_t L_83 = V_5;
		V_5 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_83, 1))%((int32_t)128)));
	}

IL_0182:
	{
		int32_t L_84 = V_5;
		int32_t L_85 = ___1_threadIndex;
		if ((!(((uint32_t)L_84) == ((uint32_t)L_85))))
		{
			goto IL_0121;
		}
	}

IL_0187:
	{
		bool L_86 = V_2;
		if (L_86)
		{
			goto IL_0112;
		}
	}

IL_018a:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_87 = ___0_data;
		NullCheck(L_87);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_88 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_87->___firstFreeTLS);
		int32_t* L_89 = (int32_t*)(&L_88->___FixedElementField);
		int32_t L_90 = ___1_threadIndex;
		int32_t* L_91 = V_1;
		int32_t L_92 = V_0;
		int32_t L_93 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_91, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_92), 4))))));
		int32_t L_94 = V_0;
		int32_t L_95;
		L_95 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_90, ((int32_t)16)))), 4)))), L_93, L_94, NULL);
		int32_t L_96 = V_0;
		if ((!(((uint32_t)L_95) == ((uint32_t)L_96))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t* L_97 = V_1;
		int32_t L_98 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_97, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_98), 4))))) = (int32_t)(-1);
		int32_t L_99 = V_0;
		return L_99;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m462FC9B8A557183A5FC65FD720A3A93646AC4074_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_3 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_2->___firstFreeTLS);
		int32_t* L_4 = (int32_t*)(&L_3->___FixedElementField);
		int32_t L_5 = ___2_threadIndex;
		int32_t L_6 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)16)))), 4)))));
		V_1 = L_6;
		int32_t* L_7 = V_0;
		int32_t L_8 = ___1_idx;
		int32_t L_9 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))) = (int32_t)L_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_11 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_10->___firstFreeTLS);
		int32_t* L_12 = (int32_t*)(&L_11->___FixedElementField);
		int32_t L_13 = ___2_threadIndex;
		int32_t L_14 = ___1_idx;
		int32_t L_15 = V_1;
		int32_t L_16;
		L_16 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_13, ((int32_t)16)))), 4)))), L_14, L_15, NULL);
		int32_t L_17 = V_1;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_m3893313A012EBFDAE69756DD014A555C22E4588C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, bool ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	bool V_0 = false;
	NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mE5E99380F6A33E2DC275D507C84BFE8FC7F38E01(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_mACFD6EA176D9B36AC7B5CA4395F4916D0E92EAC5(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		int32_t L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		bool L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48259D1BF2B093A901E095965654FE2E58AEF18B_inline((void*)L_11, L_12, L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_14;
		L_14 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		int32_t L_21 = V_2;
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4)))), L_21, (-1), NULL);
		if ((((int32_t)L_22) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_5 = (int32_t*)L_24;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_25 = V_4;
		int32_t L_26 = V_3;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		V_6 = L_27;
		int32_t* L_28 = V_5;
		int32_t L_29 = V_2;
		int32_t L_30 = V_6;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)L_30;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_31 = ___0_data;
		int32_t L_32 = ___1_key;
		bool L_33;
		L_33 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mE5E99380F6A33E2DC275D507C84BFE8FC7F38E01(L_31, L_32, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_33)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		int32_t L_35 = V_2;
		int32_t L_36 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_m462FC9B8A557183A5FC65FD720A3A93646AC4074(L_34, L_35, L_36, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_37 = V_4;
		int32_t L_38 = V_3;
		int32_t L_39 = V_2;
		int32_t L_40 = V_6;
		int32_t L_41;
		L_41 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4)))), L_39, L_40, NULL);
		int32_t L_42 = V_6;
		if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m83923ABDE1EC459AD5116F141CAA1261A9254B21_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, bool ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_mACFD6EA176D9B36AC7B5CA4395F4916D0E92EAC5(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		int32_t L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		bool L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48259D1BF2B093A901E095965654FE2E58AEF18B_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_11;
		L_11 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		V_3 = L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))) = (int32_t)L_23;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4)))), L_26, L_27, NULL);
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_mD0D2563337B879222C556CD8DADDAD37959EE4D1_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, bool ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	bool V_0 = false;
	NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		int32_t L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mE5E99380F6A33E2DC275D507C84BFE8FC7F38E01(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00de;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_9 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_8->___firstFreeTLS);
		int32_t* L_10 = (int32_t*)(&L_9->___FixedElementField);
		int32_t L_11 = *((int32_t*)L_10);
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_00de;
		}
	}
	{
		V_6 = 1;
		goto IL_00a8;
	}

IL_003a:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_13 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_12->___firstFreeTLS);
		int32_t* L_14 = (int32_t*)(&L_13->___FixedElementField);
		int32_t L_15 = V_6;
		int32_t L_16 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_15, ((int32_t)16)))), 4)))));
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_18 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_17->___firstFreeTLS);
		int32_t* L_19 = (int32_t*)(&L_18->___FixedElementField);
		int32_t L_20 = V_6;
		int32_t L_21 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_20, ((int32_t)16)))), 4)))));
		V_2 = L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		uint8_t* L_23 = L_22->___next;
		V_3 = (int32_t*)L_23;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_24 = ___0_data;
		NullCheck(L_24);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_25 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_24->___firstFreeTLS);
		int32_t* L_26 = (int32_t*)(&L_25->___FixedElementField);
		int32_t L_27 = V_6;
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		int32_t L_30 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_27, ((int32_t)16)))), 4))))) = (int32_t)L_30;
		int32_t* L_31 = V_3;
		int32_t L_32 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_32), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_33 = ___0_data;
		NullCheck(L_33);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_34 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_33->___firstFreeTLS);
		int32_t* L_35 = (int32_t*)(&L_34->___FixedElementField);
		int32_t L_36 = V_2;
		*((int32_t*)L_35) = (int32_t)L_36;
		goto IL_00b1;
	}

IL_00a2:
	{
		int32_t L_37 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00a8:
	{
		int32_t L_38 = V_6;
		if ((((int32_t)L_38) < ((int32_t)((int32_t)128))))
		{
			goto IL_003a;
		}
	}

IL_00b1:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_40 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_39->___firstFreeTLS);
		int32_t* L_41 = (int32_t*)(&L_40->___FixedElementField);
		int32_t L_42 = *((int32_t*)L_41);
		if ((((int32_t)L_42) >= ((int32_t)0)))
		{
			goto IL_00de;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_43 = ___0_data;
		NullCheck(L_43);
		int32_t L_44 = L_43->___keyCapacity;
		int32_t L_45;
		L_45 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_44, NULL);
		V_7 = L_45;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		int32_t L_47 = V_7;
		int32_t L_48 = V_7;
		int32_t L_49;
		L_49 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_48, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_50 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFB6AB9C9D92BE08F40BC68B68169718301665214(L_46, L_47, L_49, L_50, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00de:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		NullCheck(L_51);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_52 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_51->___firstFreeTLS);
		int32_t* L_53 = (int32_t*)(&L_52->___FixedElementField);
		int32_t L_54 = *((int32_t*)L_53);
		V_2 = L_54;
		int32_t L_55 = V_2;
		if ((((int32_t)L_55) < ((int32_t)0)))
		{
			goto IL_0109;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_56 = ___0_data;
		NullCheck(L_56);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_57 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_56->___firstFreeTLS);
		int32_t* L_58 = (int32_t*)(&L_57->___FixedElementField);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_59 = ___0_data;
		NullCheck(L_59);
		uint8_t* L_60 = L_59->___next;
		int32_t L_61 = V_2;
		int32_t L_62 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_60, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_61), 4)))));
		*((int32_t*)L_58) = (int32_t)L_62;
		goto IL_011b;
	}

IL_0109:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		int32_t* L_64 = (int32_t*)(&L_63->___allocatedIndexLength);
		int32_t* L_65 = L_64;
		int32_t L_66 = *((int32_t*)L_65);
		V_8 = L_66;
		int32_t L_67 = V_8;
		*((int32_t*)L_65) = (int32_t)((int32_t)il2cpp_codegen_add(L_67, 1));
		int32_t L_68 = V_8;
		V_2 = L_68;
	}

IL_011b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_69 = ___0_data;
		NullCheck(L_69);
		uint8_t* L_70 = L_69->___keys;
		int32_t L_71 = V_2;
		int32_t L_72 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_70, L_71, L_72, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_73 = ___0_data;
		NullCheck(L_73);
		uint8_t* L_74 = L_73->___values;
		int32_t L_75 = V_2;
		bool L_76 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48259D1BF2B093A901E095965654FE2E58AEF18B_inline((void*)L_74, L_75, L_76, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_77;
		L_77 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_78 = ___0_data;
		NullCheck(L_78);
		int32_t L_79 = L_78->___bucketCapacityMask;
		V_4 = ((int32_t)(L_77&L_79));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_80 = ___0_data;
		NullCheck(L_80);
		uint8_t* L_81 = L_80->___buckets;
		V_5 = (int32_t*)L_81;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_82 = ___0_data;
		NullCheck(L_82);
		uint8_t* L_83 = L_82->___next;
		V_3 = (int32_t*)L_83;
		int32_t* L_84 = V_3;
		int32_t L_85 = V_2;
		int32_t* L_86 = V_5;
		int32_t L_87 = V_4;
		int32_t L_88 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_87), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_84, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_85), 4))))) = (int32_t)L_88;
		int32_t* L_89 = V_5;
		int32_t L_90 = V_4;
		int32_t L_91 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_90), 4))))) = (int32_t)L_91;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m88681149AF42DFB5C9F194FD18ED14F02C58DFF9_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		int32_t L_11 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), 4))))));
		V_5 = L_11;
		goto IL_00c8;
	}

IL_0040:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_5;
		int32_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_15;
		int32_t L_16 = ___1_key;
		bool L_17;
		L_17 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_6), L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_17)
		{
			goto IL_00ba;
		}
	}
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t* L_22 = V_2;
		int32_t L_23 = V_5;
		int32_t L_24 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))) = (int32_t)L_24;
		goto IL_0089;
	}

IL_0079:
	{
		int32_t* L_25 = V_2;
		int32_t L_26 = V_4;
		int32_t* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))) = (int32_t)L_29;
	}

IL_0089:
	{
		int32_t* L_30 = V_2;
		int32_t L_31 = V_5;
		int32_t L_32 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))));
		int32_t* L_33 = V_2;
		int32_t L_34 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		NullCheck(L_35);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_36 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_35->___firstFreeTLS);
		int32_t* L_37 = (int32_t*)(&L_36->___FixedElementField);
		int32_t L_38 = *((int32_t*)L_37);
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))) = (int32_t)L_38;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_40 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_39->___firstFreeTLS);
		int32_t* L_41 = (int32_t*)(&L_40->___FixedElementField);
		int32_t L_42 = V_5;
		*((int32_t*)L_41) = (int32_t)L_42;
		V_5 = L_32;
		bool L_43 = ___2_isMultiHashMap;
		if (L_43)
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_00da;
	}

IL_00ba:
	{
		int32_t L_44 = V_5;
		V_4 = L_44;
		int32_t* L_45 = V_2;
		int32_t L_46 = V_5;
		int32_t L_47 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_45, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_46), 4))))));
		V_5 = L_47;
	}

IL_00c8:
	{
		int32_t L_48 = V_5;
		if ((((int32_t)L_48) < ((int32_t)0)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_49 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_50 = ___0_data;
		NullCheck(L_50);
		int32_t L_51 = L_50->___keyCapacity;
		if ((((int32_t)L_49) < ((int32_t)L_51)))
		{
			goto IL_0040;
		}
	}

IL_00da:
	{
		int32_t L_52 = V_0;
		return L_52;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_m4321CC8B2FE4B193E65A03C3ED5FBD0F31EBF931_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		int32_t* L_4 = (int32_t*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_12 = ___1_it;
		int32_t L_13 = L_12.___EntryIndex;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t* L_16 = V_1;
		int32_t L_17 = V_3;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4))))) = (int32_t)L_18;
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
	}

IL_0051:
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_26 = ___1_it;
		int32_t L_27 = L_26.___EntryIndex;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_28 = V_3;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_3;
		int32_t* L_31 = V_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_32 = ___1_it;
		int32_t L_33 = L_32.___EntryIndex;
		int32_t L_34 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_34;
	}

IL_007b:
	{
		int32_t* L_35 = V_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_36 = ___1_it;
		int32_t L_37 = L_36.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		NullCheck(L_38);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_39 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_38->___firstFreeTLS);
		int32_t* L_40 = (int32_t*)(&L_39->___FixedElementField);
		int32_t L_41 = *((int32_t*)L_40);
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_41;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		NullCheck(L_42);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_43 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_42->___firstFreeTLS);
		int32_t* L_44 = (int32_t*)(&L_43->___FixedElementField);
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_45 = ___1_it;
		int32_t L_46 = L_45.___EntryIndex;
		*((int32_t*)L_44) = (int32_t)L_46;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mE5E99380F6A33E2DC275D507C84BFE8FC7F38E01_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, bool* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___3_it;
		int32_t L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_5 = ___3_it;
		int32_t L_6 = (-1);
		V_2 = L_6;
		L_5->___NextEntryIndex = L_6;
		int32_t L_7 = V_2;
		L_4->___EntryIndex = L_7;
		bool* L_8 = ___2_item;
		il2cpp_codegen_initobj(L_8, sizeof(bool));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___buckets;
		V_0 = (int32_t*)L_10;
		int32_t L_11;
		L_11 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_14 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_15 = ___3_it;
		int32_t* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_15->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_14->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		bool* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m818CAA6EAFE06CEF49B3CECE24196839CB7020E7(L_21, L_22, L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m818CAA6EAFE06CEF49B3CECE24196839CB7020E7_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, bool* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		bool* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(bool));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))))));
		V_0 = L_13;
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_15 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___keys;
		int32_t L_20 = V_0;
		int32_t L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_2 = L_21;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_22 = ___2_it;
		int32_t L_23 = L_22->___key;
		bool L_24;
		L_24 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_2), L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_24)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_25 = ___2_it;
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))));
		L_25->___NextEntryIndex = L_28;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_29 = ___2_it;
		int32_t L_30 = V_0;
		L_29->___EntryIndex = L_30;
		bool* L_31 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___values;
		int32_t L_34 = V_0;
		bool L_35;
		L_35 = UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_inline((void*)L_33, L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(bool*)L_31 = L_35;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m8A423188A446A88100932C4635531AF128774F4F_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___1_it, bool* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		bool* L_9 = ___2_item;
		bool L_10 = (*(bool*)L_9);
		UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48259D1BF2B093A901E095965654FE2E58AEF18B_inline((void*)L_7, L_8, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m83B4AEDA8046CBAC17B143C31347CBA3BD5E174E_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_mDEF1F8B135541F33B731D0F0FBAC9B293DDADCA9_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_m435BAB3B3E1BDBB281A1600323513F30D337000E_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_m0525CCEB8AF8FAA55E3730C8CE6D7CAF9E6FC0BD_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_mCAF0A4DE38B19E5F4805B1804FF69112110A37A2_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		V_0 = 0;
		goto IL_0051;
	}

IL_0038:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_9 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_8->___firstFreeTLS);
		int32_t* L_10 = (int32_t*)(&L_9->___FixedElementField);
		int32_t L_11 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0051:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)128))))
		{
			goto IL_0038;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		L_14->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_mD71ACC26B51AF45400896A8D30AD1F4733B045A5_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0007:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_3 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_2->___firstFreeTLS);
		int32_t* L_4 = (int32_t*)(&L_3->___FixedElementField);
		int32_t L_5 = ___1_threadIndex;
		int32_t L_6 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)16)))), 4)))));
		V_0 = L_6;
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_018a;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_9 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_8->___firstFreeTLS);
		int32_t* L_10 = (int32_t*)(&L_9->___FixedElementField);
		int32_t L_11 = ___1_threadIndex;
		int32_t L_12;
		L_12 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		int32_t L_14 = L_13->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___keyCapacity;
		if ((((int32_t)L_14) >= ((int32_t)L_16)))
		{
			goto IL_00f4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		int32_t* L_18 = (int32_t*)(&L_17->___allocatedIndexLength);
		int32_t L_19;
		L_19 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_18, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_19, ((int32_t)16)));
		int32_t L_20 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		NullCheck(L_21);
		int32_t L_22 = L_21->___keyCapacity;
		if ((((int32_t)L_20) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_22, 1)))))
		{
			goto IL_00cd;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		int32_t L_24 = L_23->___keyCapacity;
		int32_t L_25 = V_0;
		int32_t L_26;
		L_26 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_24, L_25)), NULL);
		V_3 = L_26;
		V_4 = 1;
		goto IL_0096;
	}

IL_0080:
	{
		int32_t* L_27 = V_1;
		int32_t L_28 = V_0;
		int32_t L_29 = V_4;
		int32_t L_30 = V_0;
		int32_t L_31 = V_4;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_28, L_29))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_30, L_31)), 1));
		int32_t L_32 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0096:
	{
		int32_t L_33 = V_4;
		int32_t L_34 = V_3;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t* L_35 = V_1;
		int32_t L_36 = V_0;
		int32_t L_37 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_36, L_37)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_38 = V_1;
		int32_t L_39 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_40 = ___0_data;
		NullCheck(L_40);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_41 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_40->___firstFreeTLS);
		int32_t* L_42 = (int32_t*)(&L_41->___FixedElementField);
		int32_t L_43 = ___1_threadIndex;
		int32_t L_44 = V_0;
		int32_t L_45;
		L_45 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_42, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_43, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_44, 1)), NULL);
		int32_t L_46 = V_0;
		return L_46;
	}

IL_00cd:
	{
		int32_t L_47 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		NullCheck(L_48);
		int32_t L_49 = L_48->___keyCapacity;
		if ((!(((uint32_t)L_47) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_49, 1))))))
		{
			goto IL_00f4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_50 = ___0_data;
		NullCheck(L_50);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_51 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_50->___firstFreeTLS);
		int32_t* L_52 = (int32_t*)(&L_51->___FixedElementField);
		int32_t L_53 = ___1_threadIndex;
		int32_t L_54;
		L_54 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_53, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_55 = V_0;
		return L_55;
	}

IL_00f4:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_56 = ___0_data;
		NullCheck(L_56);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_57 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_56->___firstFreeTLS);
		int32_t* L_58 = (int32_t*)(&L_57->___FixedElementField);
		int32_t L_59 = ___1_threadIndex;
		int32_t L_60;
		L_60 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_58, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_59, ((int32_t)16)))), 4)))), (-1), NULL);
		V_2 = (bool)1;
		goto IL_0187;
	}

IL_0112:
	{
		V_2 = (bool)0;
		int32_t L_61 = ___1_threadIndex;
		V_5 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_61, 1))%((int32_t)128)));
		goto IL_0182;
	}

IL_0121:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_62 = ___0_data;
		NullCheck(L_62);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_63 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_62->___firstFreeTLS);
		int32_t* L_64 = (int32_t*)(&L_63->___FixedElementField);
		int32_t L_65 = V_5;
		int32_t L_66 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_64, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_65, ((int32_t)16)))), 4)))));
		V_0 = L_66;
		int32_t L_67 = V_0;
		if ((((int32_t)L_67) < ((int32_t)0)))
		{
			goto IL_015f;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_68 = ___0_data;
		NullCheck(L_68);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_69 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_68->___firstFreeTLS);
		int32_t* L_70 = (int32_t*)(&L_69->___FixedElementField);
		int32_t L_71 = V_5;
		int32_t* L_72 = V_1;
		int32_t L_73 = V_0;
		int32_t L_74 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_72, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_73), 4))))));
		int32_t L_75 = V_0;
		int32_t L_76;
		L_76 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((int32_t*)il2cpp_codegen_add((intptr_t)L_70, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_71, ((int32_t)16)))), 4)))), L_74, L_75, NULL);
		int32_t L_77 = V_0;
		if ((!(((uint32_t)L_76) == ((uint32_t)L_77))))
		{
			goto IL_0121;
		}
	}

IL_015f:
	{
		int32_t L_78 = V_0;
		if ((!(((uint32_t)L_78) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0168;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0176;
	}

IL_0168:
	{
		int32_t L_79 = V_0;
		if ((((int32_t)L_79) < ((int32_t)0)))
		{
			goto IL_0176;
		}
	}
	{
		int32_t* L_80 = V_1;
		int32_t L_81 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_80, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_81), 4))))) = (int32_t)(-1);
		int32_t L_82 = V_0;
		return L_82;
	}

IL_0176:
	{
		int32_t L_83 = V_5;
		V_5 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_83, 1))%((int32_t)128)));
	}

IL_0182:
	{
		int32_t L_84 = V_5;
		int32_t L_85 = ___1_threadIndex;
		if ((!(((uint32_t)L_84) == ((uint32_t)L_85))))
		{
			goto IL_0121;
		}
	}

IL_0187:
	{
		bool L_86 = V_2;
		if (L_86)
		{
			goto IL_0112;
		}
	}

IL_018a:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_87 = ___0_data;
		NullCheck(L_87);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_88 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_87->___firstFreeTLS);
		int32_t* L_89 = (int32_t*)(&L_88->___FixedElementField);
		int32_t L_90 = ___1_threadIndex;
		int32_t* L_91 = V_1;
		int32_t L_92 = V_0;
		int32_t L_93 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_91, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_92), 4))))));
		int32_t L_94 = V_0;
		int32_t L_95;
		L_95 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_90, ((int32_t)16)))), 4)))), L_93, L_94, NULL);
		int32_t L_96 = V_0;
		if ((!(((uint32_t)L_95) == ((uint32_t)L_96))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t* L_97 = V_1;
		int32_t L_98 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_97, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_98), 4))))) = (int32_t)(-1);
		int32_t L_99 = V_0;
		return L_99;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_mFD8286F2AE0F44CB779E7680BB93CE90789230F3_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_3 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_2->___firstFreeTLS);
		int32_t* L_4 = (int32_t*)(&L_3->___FixedElementField);
		int32_t L_5 = ___2_threadIndex;
		int32_t L_6 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)16)))), 4)))));
		V_1 = L_6;
		int32_t* L_7 = V_0;
		int32_t L_8 = ___1_idx;
		int32_t L_9 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))) = (int32_t)L_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_11 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_10->___firstFreeTLS);
		int32_t* L_12 = (int32_t*)(&L_11->___FixedElementField);
		int32_t L_13 = ___2_threadIndex;
		int32_t L_14 = ___1_idx;
		int32_t L_15 = V_1;
		int32_t L_16;
		L_16 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_13, ((int32_t)16)))), 4)))), L_14, L_15, NULL);
		int32_t L_17 = V_1;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_mBD3DBF5BA33FA71BCDA5A30A68DB0FB0B62FF254_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, uint8_t ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m12D21AAF6EAA69F5B1B1BAE3AE5BD5C0B290E7C0(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_mD71ACC26B51AF45400896A8D30AD1F4733B045A5(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		int32_t L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		uint8_t L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m193B136343991E144053A14C8C435C19E5516EE0_inline((void*)L_11, L_12, L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_14;
		L_14 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		int32_t L_21 = V_2;
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4)))), L_21, (-1), NULL);
		if ((((int32_t)L_22) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_5 = (int32_t*)L_24;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_25 = V_4;
		int32_t L_26 = V_3;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		V_6 = L_27;
		int32_t* L_28 = V_5;
		int32_t L_29 = V_2;
		int32_t L_30 = V_6;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)L_30;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_31 = ___0_data;
		int32_t L_32 = ___1_key;
		bool L_33;
		L_33 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m12D21AAF6EAA69F5B1B1BAE3AE5BD5C0B290E7C0(L_31, L_32, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_33)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		int32_t L_35 = V_2;
		int32_t L_36 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_mFD8286F2AE0F44CB779E7680BB93CE90789230F3(L_34, L_35, L_36, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_37 = V_4;
		int32_t L_38 = V_3;
		int32_t L_39 = V_2;
		int32_t L_40 = V_6;
		int32_t L_41;
		L_41 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4)))), L_39, L_40, NULL);
		int32_t L_42 = V_6;
		if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_mF5E8A339CA6D9EAD50195CDEE89E72CCFB51F080_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, uint8_t ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_mD71ACC26B51AF45400896A8D30AD1F4733B045A5(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		int32_t L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		uint8_t L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m193B136343991E144053A14C8C435C19E5516EE0_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_11;
		L_11 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		V_3 = L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))) = (int32_t)L_23;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4)))), L_26, L_27, NULL);
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_mF8B24F2AB3BE50C269E08F2F4083C1F166AE20EA_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, uint8_t ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		int32_t L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m12D21AAF6EAA69F5B1B1BAE3AE5BD5C0B290E7C0(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00de;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_9 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_8->___firstFreeTLS);
		int32_t* L_10 = (int32_t*)(&L_9->___FixedElementField);
		int32_t L_11 = *((int32_t*)L_10);
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_00de;
		}
	}
	{
		V_6 = 1;
		goto IL_00a8;
	}

IL_003a:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_13 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_12->___firstFreeTLS);
		int32_t* L_14 = (int32_t*)(&L_13->___FixedElementField);
		int32_t L_15 = V_6;
		int32_t L_16 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_15, ((int32_t)16)))), 4)))));
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_18 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_17->___firstFreeTLS);
		int32_t* L_19 = (int32_t*)(&L_18->___FixedElementField);
		int32_t L_20 = V_6;
		int32_t L_21 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_20, ((int32_t)16)))), 4)))));
		V_2 = L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		uint8_t* L_23 = L_22->___next;
		V_3 = (int32_t*)L_23;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_24 = ___0_data;
		NullCheck(L_24);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_25 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_24->___firstFreeTLS);
		int32_t* L_26 = (int32_t*)(&L_25->___FixedElementField);
		int32_t L_27 = V_6;
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		int32_t L_30 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_27, ((int32_t)16)))), 4))))) = (int32_t)L_30;
		int32_t* L_31 = V_3;
		int32_t L_32 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_32), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_33 = ___0_data;
		NullCheck(L_33);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_34 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_33->___firstFreeTLS);
		int32_t* L_35 = (int32_t*)(&L_34->___FixedElementField);
		int32_t L_36 = V_2;
		*((int32_t*)L_35) = (int32_t)L_36;
		goto IL_00b1;
	}

IL_00a2:
	{
		int32_t L_37 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00a8:
	{
		int32_t L_38 = V_6;
		if ((((int32_t)L_38) < ((int32_t)((int32_t)128))))
		{
			goto IL_003a;
		}
	}

IL_00b1:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_40 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_39->___firstFreeTLS);
		int32_t* L_41 = (int32_t*)(&L_40->___FixedElementField);
		int32_t L_42 = *((int32_t*)L_41);
		if ((((int32_t)L_42) >= ((int32_t)0)))
		{
			goto IL_00de;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_43 = ___0_data;
		NullCheck(L_43);
		int32_t L_44 = L_43->___keyCapacity;
		int32_t L_45;
		L_45 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_44, NULL);
		V_7 = L_45;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		int32_t L_47 = V_7;
		int32_t L_48 = V_7;
		int32_t L_49;
		L_49 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_48, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_50 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF366B660142E030A52A9E5A6DAC3E7A143409510(L_46, L_47, L_49, L_50, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00de:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		NullCheck(L_51);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_52 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_51->___firstFreeTLS);
		int32_t* L_53 = (int32_t*)(&L_52->___FixedElementField);
		int32_t L_54 = *((int32_t*)L_53);
		V_2 = L_54;
		int32_t L_55 = V_2;
		if ((((int32_t)L_55) < ((int32_t)0)))
		{
			goto IL_0109;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_56 = ___0_data;
		NullCheck(L_56);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_57 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_56->___firstFreeTLS);
		int32_t* L_58 = (int32_t*)(&L_57->___FixedElementField);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_59 = ___0_data;
		NullCheck(L_59);
		uint8_t* L_60 = L_59->___next;
		int32_t L_61 = V_2;
		int32_t L_62 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_60, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_61), 4)))));
		*((int32_t*)L_58) = (int32_t)L_62;
		goto IL_011b;
	}

IL_0109:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		int32_t* L_64 = (int32_t*)(&L_63->___allocatedIndexLength);
		int32_t* L_65 = L_64;
		int32_t L_66 = *((int32_t*)L_65);
		V_8 = L_66;
		int32_t L_67 = V_8;
		*((int32_t*)L_65) = (int32_t)((int32_t)il2cpp_codegen_add(L_67, 1));
		int32_t L_68 = V_8;
		V_2 = L_68;
	}

IL_011b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_69 = ___0_data;
		NullCheck(L_69);
		uint8_t* L_70 = L_69->___keys;
		int32_t L_71 = V_2;
		int32_t L_72 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_70, L_71, L_72, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_73 = ___0_data;
		NullCheck(L_73);
		uint8_t* L_74 = L_73->___values;
		int32_t L_75 = V_2;
		uint8_t L_76 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m193B136343991E144053A14C8C435C19E5516EE0_inline((void*)L_74, L_75, L_76, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_77;
		L_77 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_78 = ___0_data;
		NullCheck(L_78);
		int32_t L_79 = L_78->___bucketCapacityMask;
		V_4 = ((int32_t)(L_77&L_79));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_80 = ___0_data;
		NullCheck(L_80);
		uint8_t* L_81 = L_80->___buckets;
		V_5 = (int32_t*)L_81;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_82 = ___0_data;
		NullCheck(L_82);
		uint8_t* L_83 = L_82->___next;
		V_3 = (int32_t*)L_83;
		int32_t* L_84 = V_3;
		int32_t L_85 = V_2;
		int32_t* L_86 = V_5;
		int32_t L_87 = V_4;
		int32_t L_88 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_87), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_84, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_85), 4))))) = (int32_t)L_88;
		int32_t* L_89 = V_5;
		int32_t L_90 = V_4;
		int32_t L_91 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_90), 4))))) = (int32_t)L_91;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_mE2C996DB94AF6B87E14C94A78EAE754C450D21AC_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		int32_t L_11 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), 4))))));
		V_5 = L_11;
		goto IL_00c8;
	}

IL_0040:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_5;
		int32_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_15;
		int32_t L_16 = ___1_key;
		bool L_17;
		L_17 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_6), L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_17)
		{
			goto IL_00ba;
		}
	}
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t* L_22 = V_2;
		int32_t L_23 = V_5;
		int32_t L_24 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))) = (int32_t)L_24;
		goto IL_0089;
	}

IL_0079:
	{
		int32_t* L_25 = V_2;
		int32_t L_26 = V_4;
		int32_t* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))) = (int32_t)L_29;
	}

IL_0089:
	{
		int32_t* L_30 = V_2;
		int32_t L_31 = V_5;
		int32_t L_32 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))));
		int32_t* L_33 = V_2;
		int32_t L_34 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		NullCheck(L_35);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_36 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_35->___firstFreeTLS);
		int32_t* L_37 = (int32_t*)(&L_36->___FixedElementField);
		int32_t L_38 = *((int32_t*)L_37);
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))) = (int32_t)L_38;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_40 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_39->___firstFreeTLS);
		int32_t* L_41 = (int32_t*)(&L_40->___FixedElementField);
		int32_t L_42 = V_5;
		*((int32_t*)L_41) = (int32_t)L_42;
		V_5 = L_32;
		bool L_43 = ___2_isMultiHashMap;
		if (L_43)
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_00da;
	}

IL_00ba:
	{
		int32_t L_44 = V_5;
		V_4 = L_44;
		int32_t* L_45 = V_2;
		int32_t L_46 = V_5;
		int32_t L_47 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_45, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_46), 4))))));
		V_5 = L_47;
	}

IL_00c8:
	{
		int32_t L_48 = V_5;
		if ((((int32_t)L_48) < ((int32_t)0)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_49 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_50 = ___0_data;
		NullCheck(L_50);
		int32_t L_51 = L_50->___keyCapacity;
		if ((((int32_t)L_49) < ((int32_t)L_51)))
		{
			goto IL_0040;
		}
	}

IL_00da:
	{
		int32_t L_52 = V_0;
		return L_52;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_m3FDCA89B53D252088E03AA0FB5ED2C8EEADC73C3_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		int32_t* L_4 = (int32_t*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_12 = ___1_it;
		int32_t L_13 = L_12.___EntryIndex;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t* L_16 = V_1;
		int32_t L_17 = V_3;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4))))) = (int32_t)L_18;
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
	}

IL_0051:
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_26 = ___1_it;
		int32_t L_27 = L_26.___EntryIndex;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_28 = V_3;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_3;
		int32_t* L_31 = V_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_32 = ___1_it;
		int32_t L_33 = L_32.___EntryIndex;
		int32_t L_34 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_34;
	}

IL_007b:
	{
		int32_t* L_35 = V_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_36 = ___1_it;
		int32_t L_37 = L_36.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		NullCheck(L_38);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_39 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_38->___firstFreeTLS);
		int32_t* L_40 = (int32_t*)(&L_39->___FixedElementField);
		int32_t L_41 = *((int32_t*)L_40);
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_41;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		NullCheck(L_42);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_43 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_42->___firstFreeTLS);
		int32_t* L_44 = (int32_t*)(&L_43->___FixedElementField);
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_45 = ___1_it;
		int32_t L_46 = L_45.___EntryIndex;
		*((int32_t*)L_44) = (int32_t)L_46;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m12D21AAF6EAA69F5B1B1BAE3AE5BD5C0B290E7C0_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, uint8_t* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___3_it;
		int32_t L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_5 = ___3_it;
		int32_t L_6 = (-1);
		V_2 = L_6;
		L_5->___NextEntryIndex = L_6;
		int32_t L_7 = V_2;
		L_4->___EntryIndex = L_7;
		uint8_t* L_8 = ___2_item;
		il2cpp_codegen_initobj(L_8, sizeof(uint8_t));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___buckets;
		V_0 = (int32_t*)L_10;
		int32_t L_11;
		L_11 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_14 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_15 = ___3_it;
		int32_t* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_15->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_14->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		uint8_t* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m204EE851B814B670DC65F5037B7D5D189F7FA058(L_21, L_22, L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m204EE851B814B670DC65F5037B7D5D189F7FA058_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint8_t* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		uint8_t* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(uint8_t));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))))));
		V_0 = L_13;
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_15 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___keys;
		int32_t L_20 = V_0;
		int32_t L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_2 = L_21;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_22 = ___2_it;
		int32_t L_23 = L_22->___key;
		bool L_24;
		L_24 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_2), L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_24)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_25 = ___2_it;
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))));
		L_25->___NextEntryIndex = L_28;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_29 = ___2_it;
		int32_t L_30 = V_0;
		L_29->___EntryIndex = L_30;
		uint8_t* L_31 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___values;
		int32_t L_34 = V_0;
		uint8_t L_35;
		L_35 = UnsafeUtility_ReadArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m06447B534673E0861DE4F55616DFAF9BD7DCBCC6_inline((void*)L_33, L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(uint8_t*)L_31 = L_35;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_mCB672CA3B740CCC30EE2A0E1BEE7D1E3BF560F79_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___1_it, uint8_t* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		uint8_t* L_9 = ___2_item;
		uint8_t L_10 = (*(uint8_t*)L_9);
		UnsafeUtility_WriteArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m193B136343991E144053A14C8C435C19E5516EE0_inline((void*)L_7, L_8, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m783E7CE1B506BC9BD00ABE1AB78FA36D046ECA01_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_mB533508AF8A8B9B03F570990F88FC7C3DFC03744_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_mFE23CBE95BB21E5337C878695CBE2E9194B592B0_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_mE0BC799831C91269CC743C9E43FB50790044F29D_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_mEF3A98FABCE256A22409653F694F4C72E3DDB4DC_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		V_0 = 0;
		goto IL_0051;
	}

IL_0038:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_9 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_8->___firstFreeTLS);
		int32_t* L_10 = (int32_t*)(&L_9->___FixedElementField);
		int32_t L_11 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0051:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)128))))
		{
			goto IL_0038;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		L_14->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m800AD0805A8FEA87F79C267739A0F557ACA44015_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0007:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_3 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_2->___firstFreeTLS);
		int32_t* L_4 = (int32_t*)(&L_3->___FixedElementField);
		int32_t L_5 = ___1_threadIndex;
		int32_t L_6 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)16)))), 4)))));
		V_0 = L_6;
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_018a;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_9 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_8->___firstFreeTLS);
		int32_t* L_10 = (int32_t*)(&L_9->___FixedElementField);
		int32_t L_11 = ___1_threadIndex;
		int32_t L_12;
		L_12 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		int32_t L_14 = L_13->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___keyCapacity;
		if ((((int32_t)L_14) >= ((int32_t)L_16)))
		{
			goto IL_00f4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		int32_t* L_18 = (int32_t*)(&L_17->___allocatedIndexLength);
		int32_t L_19;
		L_19 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_18, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_19, ((int32_t)16)));
		int32_t L_20 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		NullCheck(L_21);
		int32_t L_22 = L_21->___keyCapacity;
		if ((((int32_t)L_20) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_22, 1)))))
		{
			goto IL_00cd;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		int32_t L_24 = L_23->___keyCapacity;
		int32_t L_25 = V_0;
		int32_t L_26;
		L_26 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_24, L_25)), NULL);
		V_3 = L_26;
		V_4 = 1;
		goto IL_0096;
	}

IL_0080:
	{
		int32_t* L_27 = V_1;
		int32_t L_28 = V_0;
		int32_t L_29 = V_4;
		int32_t L_30 = V_0;
		int32_t L_31 = V_4;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_28, L_29))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_30, L_31)), 1));
		int32_t L_32 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0096:
	{
		int32_t L_33 = V_4;
		int32_t L_34 = V_3;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t* L_35 = V_1;
		int32_t L_36 = V_0;
		int32_t L_37 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_36, L_37)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_38 = V_1;
		int32_t L_39 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_40 = ___0_data;
		NullCheck(L_40);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_41 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_40->___firstFreeTLS);
		int32_t* L_42 = (int32_t*)(&L_41->___FixedElementField);
		int32_t L_43 = ___1_threadIndex;
		int32_t L_44 = V_0;
		int32_t L_45;
		L_45 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_42, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_43, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_44, 1)), NULL);
		int32_t L_46 = V_0;
		return L_46;
	}

IL_00cd:
	{
		int32_t L_47 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		NullCheck(L_48);
		int32_t L_49 = L_48->___keyCapacity;
		if ((!(((uint32_t)L_47) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_49, 1))))))
		{
			goto IL_00f4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_50 = ___0_data;
		NullCheck(L_50);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_51 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_50->___firstFreeTLS);
		int32_t* L_52 = (int32_t*)(&L_51->___FixedElementField);
		int32_t L_53 = ___1_threadIndex;
		int32_t L_54;
		L_54 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_53, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_55 = V_0;
		return L_55;
	}

IL_00f4:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_56 = ___0_data;
		NullCheck(L_56);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_57 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_56->___firstFreeTLS);
		int32_t* L_58 = (int32_t*)(&L_57->___FixedElementField);
		int32_t L_59 = ___1_threadIndex;
		int32_t L_60;
		L_60 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_58, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_59, ((int32_t)16)))), 4)))), (-1), NULL);
		V_2 = (bool)1;
		goto IL_0187;
	}

IL_0112:
	{
		V_2 = (bool)0;
		int32_t L_61 = ___1_threadIndex;
		V_5 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_61, 1))%((int32_t)128)));
		goto IL_0182;
	}

IL_0121:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_62 = ___0_data;
		NullCheck(L_62);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_63 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_62->___firstFreeTLS);
		int32_t* L_64 = (int32_t*)(&L_63->___FixedElementField);
		int32_t L_65 = V_5;
		int32_t L_66 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_64, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_65, ((int32_t)16)))), 4)))));
		V_0 = L_66;
		int32_t L_67 = V_0;
		if ((((int32_t)L_67) < ((int32_t)0)))
		{
			goto IL_015f;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_68 = ___0_data;
		NullCheck(L_68);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_69 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_68->___firstFreeTLS);
		int32_t* L_70 = (int32_t*)(&L_69->___FixedElementField);
		int32_t L_71 = V_5;
		int32_t* L_72 = V_1;
		int32_t L_73 = V_0;
		int32_t L_74 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_72, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_73), 4))))));
		int32_t L_75 = V_0;
		int32_t L_76;
		L_76 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((int32_t*)il2cpp_codegen_add((intptr_t)L_70, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_71, ((int32_t)16)))), 4)))), L_74, L_75, NULL);
		int32_t L_77 = V_0;
		if ((!(((uint32_t)L_76) == ((uint32_t)L_77))))
		{
			goto IL_0121;
		}
	}

IL_015f:
	{
		int32_t L_78 = V_0;
		if ((!(((uint32_t)L_78) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0168;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0176;
	}

IL_0168:
	{
		int32_t L_79 = V_0;
		if ((((int32_t)L_79) < ((int32_t)0)))
		{
			goto IL_0176;
		}
	}
	{
		int32_t* L_80 = V_1;
		int32_t L_81 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_80, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_81), 4))))) = (int32_t)(-1);
		int32_t L_82 = V_0;
		return L_82;
	}

IL_0176:
	{
		int32_t L_83 = V_5;
		V_5 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_83, 1))%((int32_t)128)));
	}

IL_0182:
	{
		int32_t L_84 = V_5;
		int32_t L_85 = ___1_threadIndex;
		if ((!(((uint32_t)L_84) == ((uint32_t)L_85))))
		{
			goto IL_0121;
		}
	}

IL_0187:
	{
		bool L_86 = V_2;
		if (L_86)
		{
			goto IL_0112;
		}
	}

IL_018a:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_87 = ___0_data;
		NullCheck(L_87);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_88 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_87->___firstFreeTLS);
		int32_t* L_89 = (int32_t*)(&L_88->___FixedElementField);
		int32_t L_90 = ___1_threadIndex;
		int32_t* L_91 = V_1;
		int32_t L_92 = V_0;
		int32_t L_93 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_91, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_92), 4))))));
		int32_t L_94 = V_0;
		int32_t L_95;
		L_95 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_90, ((int32_t)16)))), 4)))), L_93, L_94, NULL);
		int32_t L_96 = V_0;
		if ((!(((uint32_t)L_95) == ((uint32_t)L_96))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t* L_97 = V_1;
		int32_t L_98 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_97, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_98), 4))))) = (int32_t)(-1);
		int32_t L_99 = V_0;
		return L_99;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m8927ACA31388B65E99B4E0301130276415771390_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_3 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_2->___firstFreeTLS);
		int32_t* L_4 = (int32_t*)(&L_3->___FixedElementField);
		int32_t L_5 = ___2_threadIndex;
		int32_t L_6 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)16)))), 4)))));
		V_1 = L_6;
		int32_t* L_7 = V_0;
		int32_t L_8 = ___1_idx;
		int32_t L_9 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))) = (int32_t)L_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_11 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_10->___firstFreeTLS);
		int32_t* L_12 = (int32_t*)(&L_11->___FixedElementField);
		int32_t L_13 = ___2_threadIndex;
		int32_t L_14 = ___1_idx;
		int32_t L_15 = V_1;
		int32_t L_16;
		L_16 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_13, ((int32_t)16)))), 4)))), L_14, L_15, NULL);
		int32_t L_17 = V_1;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_m8C100557ED4970593FAA5F277523DE937111A595_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, int32_t ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m8FA051F1386B583A2848E886020D563EE0004112(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_m800AD0805A8FEA87F79C267739A0F557ACA44015(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		int32_t L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		int32_t L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_11, L_12, L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_14;
		L_14 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		int32_t L_21 = V_2;
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4)))), L_21, (-1), NULL);
		if ((((int32_t)L_22) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_5 = (int32_t*)L_24;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_25 = V_4;
		int32_t L_26 = V_3;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		V_6 = L_27;
		int32_t* L_28 = V_5;
		int32_t L_29 = V_2;
		int32_t L_30 = V_6;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)L_30;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_31 = ___0_data;
		int32_t L_32 = ___1_key;
		bool L_33;
		L_33 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m8FA051F1386B583A2848E886020D563EE0004112(L_31, L_32, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_33)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		int32_t L_35 = V_2;
		int32_t L_36 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_m8927ACA31388B65E99B4E0301130276415771390(L_34, L_35, L_36, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_37 = V_4;
		int32_t L_38 = V_3;
		int32_t L_39 = V_2;
		int32_t L_40 = V_6;
		int32_t L_41;
		L_41 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4)))), L_39, L_40, NULL);
		int32_t L_42 = V_6;
		if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m5526D6FE4ABA7C6061685D4681AFD4686049B9E3_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, int32_t ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_m800AD0805A8FEA87F79C267739A0F557ACA44015(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		int32_t L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		int32_t L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_11;
		L_11 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		V_3 = L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))) = (int32_t)L_23;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4)))), L_26, L_27, NULL);
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_mAAF058F1A428D8780337B9CF2695CE9338966DCC_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, int32_t ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		int32_t L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m8FA051F1386B583A2848E886020D563EE0004112(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00de;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_9 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_8->___firstFreeTLS);
		int32_t* L_10 = (int32_t*)(&L_9->___FixedElementField);
		int32_t L_11 = *((int32_t*)L_10);
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_00de;
		}
	}
	{
		V_6 = 1;
		goto IL_00a8;
	}

IL_003a:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_13 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_12->___firstFreeTLS);
		int32_t* L_14 = (int32_t*)(&L_13->___FixedElementField);
		int32_t L_15 = V_6;
		int32_t L_16 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_15, ((int32_t)16)))), 4)))));
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_18 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_17->___firstFreeTLS);
		int32_t* L_19 = (int32_t*)(&L_18->___FixedElementField);
		int32_t L_20 = V_6;
		int32_t L_21 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_20, ((int32_t)16)))), 4)))));
		V_2 = L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		uint8_t* L_23 = L_22->___next;
		V_3 = (int32_t*)L_23;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_24 = ___0_data;
		NullCheck(L_24);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_25 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_24->___firstFreeTLS);
		int32_t* L_26 = (int32_t*)(&L_25->___FixedElementField);
		int32_t L_27 = V_6;
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		int32_t L_30 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_27, ((int32_t)16)))), 4))))) = (int32_t)L_30;
		int32_t* L_31 = V_3;
		int32_t L_32 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_32), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_33 = ___0_data;
		NullCheck(L_33);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_34 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_33->___firstFreeTLS);
		int32_t* L_35 = (int32_t*)(&L_34->___FixedElementField);
		int32_t L_36 = V_2;
		*((int32_t*)L_35) = (int32_t)L_36;
		goto IL_00b1;
	}

IL_00a2:
	{
		int32_t L_37 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00a8:
	{
		int32_t L_38 = V_6;
		if ((((int32_t)L_38) < ((int32_t)((int32_t)128))))
		{
			goto IL_003a;
		}
	}

IL_00b1:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_40 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_39->___firstFreeTLS);
		int32_t* L_41 = (int32_t*)(&L_40->___FixedElementField);
		int32_t L_42 = *((int32_t*)L_41);
		if ((((int32_t)L_42) >= ((int32_t)0)))
		{
			goto IL_00de;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_43 = ___0_data;
		NullCheck(L_43);
		int32_t L_44 = L_43->___keyCapacity;
		int32_t L_45;
		L_45 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_44, NULL);
		V_7 = L_45;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		int32_t L_47 = V_7;
		int32_t L_48 = V_7;
		int32_t L_49;
		L_49 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_48, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_50 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m526C9313C8BCF707526B309126FFB7502C548A5D(L_46, L_47, L_49, L_50, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00de:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		NullCheck(L_51);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_52 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_51->___firstFreeTLS);
		int32_t* L_53 = (int32_t*)(&L_52->___FixedElementField);
		int32_t L_54 = *((int32_t*)L_53);
		V_2 = L_54;
		int32_t L_55 = V_2;
		if ((((int32_t)L_55) < ((int32_t)0)))
		{
			goto IL_0109;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_56 = ___0_data;
		NullCheck(L_56);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_57 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_56->___firstFreeTLS);
		int32_t* L_58 = (int32_t*)(&L_57->___FixedElementField);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_59 = ___0_data;
		NullCheck(L_59);
		uint8_t* L_60 = L_59->___next;
		int32_t L_61 = V_2;
		int32_t L_62 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_60, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_61), 4)))));
		*((int32_t*)L_58) = (int32_t)L_62;
		goto IL_011b;
	}

IL_0109:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		int32_t* L_64 = (int32_t*)(&L_63->___allocatedIndexLength);
		int32_t* L_65 = L_64;
		int32_t L_66 = *((int32_t*)L_65);
		V_8 = L_66;
		int32_t L_67 = V_8;
		*((int32_t*)L_65) = (int32_t)((int32_t)il2cpp_codegen_add(L_67, 1));
		int32_t L_68 = V_8;
		V_2 = L_68;
	}

IL_011b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_69 = ___0_data;
		NullCheck(L_69);
		uint8_t* L_70 = L_69->___keys;
		int32_t L_71 = V_2;
		int32_t L_72 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_70, L_71, L_72, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_73 = ___0_data;
		NullCheck(L_73);
		uint8_t* L_74 = L_73->___values;
		int32_t L_75 = V_2;
		int32_t L_76 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_74, L_75, L_76, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_77;
		L_77 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_78 = ___0_data;
		NullCheck(L_78);
		int32_t L_79 = L_78->___bucketCapacityMask;
		V_4 = ((int32_t)(L_77&L_79));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_80 = ___0_data;
		NullCheck(L_80);
		uint8_t* L_81 = L_80->___buckets;
		V_5 = (int32_t*)L_81;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_82 = ___0_data;
		NullCheck(L_82);
		uint8_t* L_83 = L_82->___next;
		V_3 = (int32_t*)L_83;
		int32_t* L_84 = V_3;
		int32_t L_85 = V_2;
		int32_t* L_86 = V_5;
		int32_t L_87 = V_4;
		int32_t L_88 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_87), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_84, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_85), 4))))) = (int32_t)L_88;
		int32_t* L_89 = V_5;
		int32_t L_90 = V_4;
		int32_t L_91 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_90), 4))))) = (int32_t)L_91;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m2FA6AF21EE9FA483A21E8B68CEB5BE800461C16A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		int32_t L_11 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), 4))))));
		V_5 = L_11;
		goto IL_00c8;
	}

IL_0040:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_5;
		int32_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_15;
		int32_t L_16 = ___1_key;
		bool L_17;
		L_17 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_6), L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_17)
		{
			goto IL_00ba;
		}
	}
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t* L_22 = V_2;
		int32_t L_23 = V_5;
		int32_t L_24 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))) = (int32_t)L_24;
		goto IL_0089;
	}

IL_0079:
	{
		int32_t* L_25 = V_2;
		int32_t L_26 = V_4;
		int32_t* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))) = (int32_t)L_29;
	}

IL_0089:
	{
		int32_t* L_30 = V_2;
		int32_t L_31 = V_5;
		int32_t L_32 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))));
		int32_t* L_33 = V_2;
		int32_t L_34 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		NullCheck(L_35);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_36 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_35->___firstFreeTLS);
		int32_t* L_37 = (int32_t*)(&L_36->___FixedElementField);
		int32_t L_38 = *((int32_t*)L_37);
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))) = (int32_t)L_38;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_40 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_39->___firstFreeTLS);
		int32_t* L_41 = (int32_t*)(&L_40->___FixedElementField);
		int32_t L_42 = V_5;
		*((int32_t*)L_41) = (int32_t)L_42;
		V_5 = L_32;
		bool L_43 = ___2_isMultiHashMap;
		if (L_43)
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_00da;
	}

IL_00ba:
	{
		int32_t L_44 = V_5;
		V_4 = L_44;
		int32_t* L_45 = V_2;
		int32_t L_46 = V_5;
		int32_t L_47 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_45, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_46), 4))))));
		V_5 = L_47;
	}

IL_00c8:
	{
		int32_t L_48 = V_5;
		if ((((int32_t)L_48) < ((int32_t)0)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_49 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_50 = ___0_data;
		NullCheck(L_50);
		int32_t L_51 = L_50->___keyCapacity;
		if ((((int32_t)L_49) < ((int32_t)L_51)))
		{
			goto IL_0040;
		}
	}

IL_00da:
	{
		int32_t L_52 = V_0;
		return L_52;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_m54C8F3E22FCD1BD6648FDE077BB6829BE5EB8AB1_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		int32_t* L_4 = (int32_t*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_12 = ___1_it;
		int32_t L_13 = L_12.___EntryIndex;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t* L_16 = V_1;
		int32_t L_17 = V_3;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4))))) = (int32_t)L_18;
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
	}

IL_0051:
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_26 = ___1_it;
		int32_t L_27 = L_26.___EntryIndex;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_28 = V_3;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_3;
		int32_t* L_31 = V_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_32 = ___1_it;
		int32_t L_33 = L_32.___EntryIndex;
		int32_t L_34 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_34;
	}

IL_007b:
	{
		int32_t* L_35 = V_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_36 = ___1_it;
		int32_t L_37 = L_36.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		NullCheck(L_38);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_39 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_38->___firstFreeTLS);
		int32_t* L_40 = (int32_t*)(&L_39->___FixedElementField);
		int32_t L_41 = *((int32_t*)L_40);
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_41;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		NullCheck(L_42);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_43 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_42->___firstFreeTLS);
		int32_t* L_44 = (int32_t*)(&L_43->___FixedElementField);
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_45 = ___1_it;
		int32_t L_46 = L_45.___EntryIndex;
		*((int32_t*)L_44) = (int32_t)L_46;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m8FA051F1386B583A2848E886020D563EE0004112_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, int32_t* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___3_it;
		int32_t L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_5 = ___3_it;
		int32_t L_6 = (-1);
		V_2 = L_6;
		L_5->___NextEntryIndex = L_6;
		int32_t L_7 = V_2;
		L_4->___EntryIndex = L_7;
		int32_t* L_8 = ___2_item;
		il2cpp_codegen_initobj(L_8, sizeof(int32_t));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___buckets;
		V_0 = (int32_t*)L_10;
		int32_t L_11;
		L_11 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_14 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_15 = ___3_it;
		int32_t* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_15->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_14->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		int32_t* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m3A37DD53E6586935E3AAC304D3AB4EF2AFF4A905(L_21, L_22, L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m3A37DD53E6586935E3AAC304D3AB4EF2AFF4A905_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		int32_t* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(int32_t));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))))));
		V_0 = L_13;
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_15 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___keys;
		int32_t L_20 = V_0;
		int32_t L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_2 = L_21;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_22 = ___2_it;
		int32_t L_23 = L_22->___key;
		bool L_24;
		L_24 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_2), L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_24)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_25 = ___2_it;
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))));
		L_25->___NextEntryIndex = L_28;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_29 = ___2_it;
		int32_t L_30 = V_0;
		L_29->___EntryIndex = L_30;
		int32_t* L_31 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___values;
		int32_t L_34 = V_0;
		int32_t L_35;
		L_35 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_33, L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(int32_t*)L_31 = L_35;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m10BCBE8DA6067B78364AB1CB739C84E9E6A2B4EE_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___1_it, int32_t* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		int32_t* L_9 = ___2_item;
		int32_t L_10 = (*(int32_t*)L_9);
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_7, L_8, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m547A37BE167FA17E04E82D8F63EF88F4EB78351E_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_mA97A5DACECAD61C19D0990D7C5A59A8397C38755_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_mC9F41380E928E0EBFABDFB192DAAC447ADB2D07E_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_m48435615E06A634B4C733D313195F8AE779007F2_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_mD9B0B61466A811F4B93C5B211B63FC41B3A45172_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		V_0 = 0;
		goto IL_0051;
	}

IL_0038:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_9 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_8->___firstFreeTLS);
		int32_t* L_10 = (int32_t*)(&L_9->___FixedElementField);
		int32_t L_11 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0051:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)128))))
		{
			goto IL_0038;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		L_14->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_mDF0AFA15DBD01CCC48EF7AAD72BC03BE2414DD9B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0007:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_3 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_2->___firstFreeTLS);
		int32_t* L_4 = (int32_t*)(&L_3->___FixedElementField);
		int32_t L_5 = ___1_threadIndex;
		int32_t L_6 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)16)))), 4)))));
		V_0 = L_6;
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_018a;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_9 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_8->___firstFreeTLS);
		int32_t* L_10 = (int32_t*)(&L_9->___FixedElementField);
		int32_t L_11 = ___1_threadIndex;
		int32_t L_12;
		L_12 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		int32_t L_14 = L_13->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___keyCapacity;
		if ((((int32_t)L_14) >= ((int32_t)L_16)))
		{
			goto IL_00f4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		int32_t* L_18 = (int32_t*)(&L_17->___allocatedIndexLength);
		int32_t L_19;
		L_19 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_18, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_19, ((int32_t)16)));
		int32_t L_20 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		NullCheck(L_21);
		int32_t L_22 = L_21->___keyCapacity;
		if ((((int32_t)L_20) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_22, 1)))))
		{
			goto IL_00cd;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		int32_t L_24 = L_23->___keyCapacity;
		int32_t L_25 = V_0;
		int32_t L_26;
		L_26 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_24, L_25)), NULL);
		V_3 = L_26;
		V_4 = 1;
		goto IL_0096;
	}

IL_0080:
	{
		int32_t* L_27 = V_1;
		int32_t L_28 = V_0;
		int32_t L_29 = V_4;
		int32_t L_30 = V_0;
		int32_t L_31 = V_4;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_28, L_29))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_30, L_31)), 1));
		int32_t L_32 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0096:
	{
		int32_t L_33 = V_4;
		int32_t L_34 = V_3;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t* L_35 = V_1;
		int32_t L_36 = V_0;
		int32_t L_37 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_36, L_37)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_38 = V_1;
		int32_t L_39 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_40 = ___0_data;
		NullCheck(L_40);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_41 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_40->___firstFreeTLS);
		int32_t* L_42 = (int32_t*)(&L_41->___FixedElementField);
		int32_t L_43 = ___1_threadIndex;
		int32_t L_44 = V_0;
		int32_t L_45;
		L_45 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_42, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_43, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_44, 1)), NULL);
		int32_t L_46 = V_0;
		return L_46;
	}

IL_00cd:
	{
		int32_t L_47 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		NullCheck(L_48);
		int32_t L_49 = L_48->___keyCapacity;
		if ((!(((uint32_t)L_47) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_49, 1))))))
		{
			goto IL_00f4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_50 = ___0_data;
		NullCheck(L_50);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_51 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_50->___firstFreeTLS);
		int32_t* L_52 = (int32_t*)(&L_51->___FixedElementField);
		int32_t L_53 = ___1_threadIndex;
		int32_t L_54;
		L_54 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_53, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_55 = V_0;
		return L_55;
	}

IL_00f4:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_56 = ___0_data;
		NullCheck(L_56);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_57 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_56->___firstFreeTLS);
		int32_t* L_58 = (int32_t*)(&L_57->___FixedElementField);
		int32_t L_59 = ___1_threadIndex;
		int32_t L_60;
		L_60 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_58, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_59, ((int32_t)16)))), 4)))), (-1), NULL);
		V_2 = (bool)1;
		goto IL_0187;
	}

IL_0112:
	{
		V_2 = (bool)0;
		int32_t L_61 = ___1_threadIndex;
		V_5 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_61, 1))%((int32_t)128)));
		goto IL_0182;
	}

IL_0121:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_62 = ___0_data;
		NullCheck(L_62);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_63 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_62->___firstFreeTLS);
		int32_t* L_64 = (int32_t*)(&L_63->___FixedElementField);
		int32_t L_65 = V_5;
		int32_t L_66 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_64, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_65, ((int32_t)16)))), 4)))));
		V_0 = L_66;
		int32_t L_67 = V_0;
		if ((((int32_t)L_67) < ((int32_t)0)))
		{
			goto IL_015f;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_68 = ___0_data;
		NullCheck(L_68);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_69 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_68->___firstFreeTLS);
		int32_t* L_70 = (int32_t*)(&L_69->___FixedElementField);
		int32_t L_71 = V_5;
		int32_t* L_72 = V_1;
		int32_t L_73 = V_0;
		int32_t L_74 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_72, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_73), 4))))));
		int32_t L_75 = V_0;
		int32_t L_76;
		L_76 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((int32_t*)il2cpp_codegen_add((intptr_t)L_70, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_71, ((int32_t)16)))), 4)))), L_74, L_75, NULL);
		int32_t L_77 = V_0;
		if ((!(((uint32_t)L_76) == ((uint32_t)L_77))))
		{
			goto IL_0121;
		}
	}

IL_015f:
	{
		int32_t L_78 = V_0;
		if ((!(((uint32_t)L_78) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0168;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0176;
	}

IL_0168:
	{
		int32_t L_79 = V_0;
		if ((((int32_t)L_79) < ((int32_t)0)))
		{
			goto IL_0176;
		}
	}
	{
		int32_t* L_80 = V_1;
		int32_t L_81 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_80, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_81), 4))))) = (int32_t)(-1);
		int32_t L_82 = V_0;
		return L_82;
	}

IL_0176:
	{
		int32_t L_83 = V_5;
		V_5 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_83, 1))%((int32_t)128)));
	}

IL_0182:
	{
		int32_t L_84 = V_5;
		int32_t L_85 = ___1_threadIndex;
		if ((!(((uint32_t)L_84) == ((uint32_t)L_85))))
		{
			goto IL_0121;
		}
	}

IL_0187:
	{
		bool L_86 = V_2;
		if (L_86)
		{
			goto IL_0112;
		}
	}

IL_018a:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_87 = ___0_data;
		NullCheck(L_87);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_88 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_87->___firstFreeTLS);
		int32_t* L_89 = (int32_t*)(&L_88->___FixedElementField);
		int32_t L_90 = ___1_threadIndex;
		int32_t* L_91 = V_1;
		int32_t L_92 = V_0;
		int32_t L_93 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_91, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_92), 4))))));
		int32_t L_94 = V_0;
		int32_t L_95;
		L_95 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_90, ((int32_t)16)))), 4)))), L_93, L_94, NULL);
		int32_t L_96 = V_0;
		if ((!(((uint32_t)L_95) == ((uint32_t)L_96))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t* L_97 = V_1;
		int32_t L_98 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_97, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_98), 4))))) = (int32_t)(-1);
		int32_t L_99 = V_0;
		return L_99;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_mCA7E85FE00776EF0FC5D06B75091B77E3DDC595C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_3 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_2->___firstFreeTLS);
		int32_t* L_4 = (int32_t*)(&L_3->___FixedElementField);
		int32_t L_5 = ___2_threadIndex;
		int32_t L_6 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)16)))), 4)))));
		V_1 = L_6;
		int32_t* L_7 = V_0;
		int32_t L_8 = ___1_idx;
		int32_t L_9 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))) = (int32_t)L_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_11 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_10->___firstFreeTLS);
		int32_t* L_12 = (int32_t*)(&L_11->___FixedElementField);
		int32_t L_13 = ___2_threadIndex;
		int32_t L_14 = ___1_idx;
		int32_t L_15 = V_1;
		int32_t L_16;
		L_16 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_13, ((int32_t)16)))), 4)))), L_14, L_15, NULL);
		int32_t L_17 = V_1;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_m06FF74EF2C33571A9B14BA742E2FBA9E1B4A2EA2_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, uint16_t ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mE13F758756460959240C64E5A4F82AAF215B06E1(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_mDF0AFA15DBD01CCC48EF7AAD72BC03BE2414DD9B(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		int32_t L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		uint16_t L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mAAF2E6888B17B2E7C3606BE66298D92F589F68C8_inline((void*)L_11, L_12, L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_14;
		L_14 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		int32_t L_21 = V_2;
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4)))), L_21, (-1), NULL);
		if ((((int32_t)L_22) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_5 = (int32_t*)L_24;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_25 = V_4;
		int32_t L_26 = V_3;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		V_6 = L_27;
		int32_t* L_28 = V_5;
		int32_t L_29 = V_2;
		int32_t L_30 = V_6;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)L_30;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_31 = ___0_data;
		int32_t L_32 = ___1_key;
		bool L_33;
		L_33 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mE13F758756460959240C64E5A4F82AAF215B06E1(L_31, L_32, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_33)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		int32_t L_35 = V_2;
		int32_t L_36 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_mCA7E85FE00776EF0FC5D06B75091B77E3DDC595C(L_34, L_35, L_36, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_37 = V_4;
		int32_t L_38 = V_3;
		int32_t L_39 = V_2;
		int32_t L_40 = V_6;
		int32_t L_41;
		L_41 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4)))), L_39, L_40, NULL);
		int32_t L_42 = V_6;
		if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m53491562F283F72D33473455145ACD8B65296D6A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, uint16_t ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_mDF0AFA15DBD01CCC48EF7AAD72BC03BE2414DD9B(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		int32_t L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		uint16_t L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mAAF2E6888B17B2E7C3606BE66298D92F589F68C8_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_11;
		L_11 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		V_3 = L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))) = (int32_t)L_23;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4)))), L_26, L_27, NULL);
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_mC5235EEB8E9C957047045FFDE9215A1198B735FA_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, uint16_t ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		int32_t L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mE13F758756460959240C64E5A4F82AAF215B06E1(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00de;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_9 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_8->___firstFreeTLS);
		int32_t* L_10 = (int32_t*)(&L_9->___FixedElementField);
		int32_t L_11 = *((int32_t*)L_10);
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_00de;
		}
	}
	{
		V_6 = 1;
		goto IL_00a8;
	}

IL_003a:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_13 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_12->___firstFreeTLS);
		int32_t* L_14 = (int32_t*)(&L_13->___FixedElementField);
		int32_t L_15 = V_6;
		int32_t L_16 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_15, ((int32_t)16)))), 4)))));
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_18 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_17->___firstFreeTLS);
		int32_t* L_19 = (int32_t*)(&L_18->___FixedElementField);
		int32_t L_20 = V_6;
		int32_t L_21 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_20, ((int32_t)16)))), 4)))));
		V_2 = L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		uint8_t* L_23 = L_22->___next;
		V_3 = (int32_t*)L_23;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_24 = ___0_data;
		NullCheck(L_24);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_25 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_24->___firstFreeTLS);
		int32_t* L_26 = (int32_t*)(&L_25->___FixedElementField);
		int32_t L_27 = V_6;
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		int32_t L_30 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_27, ((int32_t)16)))), 4))))) = (int32_t)L_30;
		int32_t* L_31 = V_3;
		int32_t L_32 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_32), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_33 = ___0_data;
		NullCheck(L_33);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_34 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_33->___firstFreeTLS);
		int32_t* L_35 = (int32_t*)(&L_34->___FixedElementField);
		int32_t L_36 = V_2;
		*((int32_t*)L_35) = (int32_t)L_36;
		goto IL_00b1;
	}

IL_00a2:
	{
		int32_t L_37 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00a8:
	{
		int32_t L_38 = V_6;
		if ((((int32_t)L_38) < ((int32_t)((int32_t)128))))
		{
			goto IL_003a;
		}
	}

IL_00b1:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_40 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_39->___firstFreeTLS);
		int32_t* L_41 = (int32_t*)(&L_40->___FixedElementField);
		int32_t L_42 = *((int32_t*)L_41);
		if ((((int32_t)L_42) >= ((int32_t)0)))
		{
			goto IL_00de;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_43 = ___0_data;
		NullCheck(L_43);
		int32_t L_44 = L_43->___keyCapacity;
		int32_t L_45;
		L_45 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_44, NULL);
		V_7 = L_45;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		int32_t L_47 = V_7;
		int32_t L_48 = V_7;
		int32_t L_49;
		L_49 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_48, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_50 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m65A94DB384326CE7B5085A1CE2D59F71034F5C10(L_46, L_47, L_49, L_50, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00de:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		NullCheck(L_51);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_52 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_51->___firstFreeTLS);
		int32_t* L_53 = (int32_t*)(&L_52->___FixedElementField);
		int32_t L_54 = *((int32_t*)L_53);
		V_2 = L_54;
		int32_t L_55 = V_2;
		if ((((int32_t)L_55) < ((int32_t)0)))
		{
			goto IL_0109;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_56 = ___0_data;
		NullCheck(L_56);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_57 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_56->___firstFreeTLS);
		int32_t* L_58 = (int32_t*)(&L_57->___FixedElementField);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_59 = ___0_data;
		NullCheck(L_59);
		uint8_t* L_60 = L_59->___next;
		int32_t L_61 = V_2;
		int32_t L_62 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_60, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_61), 4)))));
		*((int32_t*)L_58) = (int32_t)L_62;
		goto IL_011b;
	}

IL_0109:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		int32_t* L_64 = (int32_t*)(&L_63->___allocatedIndexLength);
		int32_t* L_65 = L_64;
		int32_t L_66 = *((int32_t*)L_65);
		V_8 = L_66;
		int32_t L_67 = V_8;
		*((int32_t*)L_65) = (int32_t)((int32_t)il2cpp_codegen_add(L_67, 1));
		int32_t L_68 = V_8;
		V_2 = L_68;
	}

IL_011b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_69 = ___0_data;
		NullCheck(L_69);
		uint8_t* L_70 = L_69->___keys;
		int32_t L_71 = V_2;
		int32_t L_72 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_70, L_71, L_72, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_73 = ___0_data;
		NullCheck(L_73);
		uint8_t* L_74 = L_73->___values;
		int32_t L_75 = V_2;
		uint16_t L_76 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mAAF2E6888B17B2E7C3606BE66298D92F589F68C8_inline((void*)L_74, L_75, L_76, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_77;
		L_77 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_78 = ___0_data;
		NullCheck(L_78);
		int32_t L_79 = L_78->___bucketCapacityMask;
		V_4 = ((int32_t)(L_77&L_79));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_80 = ___0_data;
		NullCheck(L_80);
		uint8_t* L_81 = L_80->___buckets;
		V_5 = (int32_t*)L_81;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_82 = ___0_data;
		NullCheck(L_82);
		uint8_t* L_83 = L_82->___next;
		V_3 = (int32_t*)L_83;
		int32_t* L_84 = V_3;
		int32_t L_85 = V_2;
		int32_t* L_86 = V_5;
		int32_t L_87 = V_4;
		int32_t L_88 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_87), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_84, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_85), 4))))) = (int32_t)L_88;
		int32_t* L_89 = V_5;
		int32_t L_90 = V_4;
		int32_t L_91 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_90), 4))))) = (int32_t)L_91;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_mCFD8E6E594014F9AD8A5E53F4B76979953685CB4_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		int32_t L_11 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), 4))))));
		V_5 = L_11;
		goto IL_00c8;
	}

IL_0040:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_5;
		int32_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_15;
		int32_t L_16 = ___1_key;
		bool L_17;
		L_17 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_6), L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_17)
		{
			goto IL_00ba;
		}
	}
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t* L_22 = V_2;
		int32_t L_23 = V_5;
		int32_t L_24 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))) = (int32_t)L_24;
		goto IL_0089;
	}

IL_0079:
	{
		int32_t* L_25 = V_2;
		int32_t L_26 = V_4;
		int32_t* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))) = (int32_t)L_29;
	}

IL_0089:
	{
		int32_t* L_30 = V_2;
		int32_t L_31 = V_5;
		int32_t L_32 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))));
		int32_t* L_33 = V_2;
		int32_t L_34 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		NullCheck(L_35);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_36 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_35->___firstFreeTLS);
		int32_t* L_37 = (int32_t*)(&L_36->___FixedElementField);
		int32_t L_38 = *((int32_t*)L_37);
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))) = (int32_t)L_38;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_40 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_39->___firstFreeTLS);
		int32_t* L_41 = (int32_t*)(&L_40->___FixedElementField);
		int32_t L_42 = V_5;
		*((int32_t*)L_41) = (int32_t)L_42;
		V_5 = L_32;
		bool L_43 = ___2_isMultiHashMap;
		if (L_43)
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_00da;
	}

IL_00ba:
	{
		int32_t L_44 = V_5;
		V_4 = L_44;
		int32_t* L_45 = V_2;
		int32_t L_46 = V_5;
		int32_t L_47 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_45, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_46), 4))))));
		V_5 = L_47;
	}

IL_00c8:
	{
		int32_t L_48 = V_5;
		if ((((int32_t)L_48) < ((int32_t)0)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_49 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_50 = ___0_data;
		NullCheck(L_50);
		int32_t L_51 = L_50->___keyCapacity;
		if ((((int32_t)L_49) < ((int32_t)L_51)))
		{
			goto IL_0040;
		}
	}

IL_00da:
	{
		int32_t L_52 = V_0;
		return L_52;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_m74A32A44C57F70E89B5B5F35EE17A0350A7DF75D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		int32_t* L_4 = (int32_t*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_12 = ___1_it;
		int32_t L_13 = L_12.___EntryIndex;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t* L_16 = V_1;
		int32_t L_17 = V_3;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4))))) = (int32_t)L_18;
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
	}

IL_0051:
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_26 = ___1_it;
		int32_t L_27 = L_26.___EntryIndex;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_28 = V_3;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_3;
		int32_t* L_31 = V_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_32 = ___1_it;
		int32_t L_33 = L_32.___EntryIndex;
		int32_t L_34 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_34;
	}

IL_007b:
	{
		int32_t* L_35 = V_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_36 = ___1_it;
		int32_t L_37 = L_36.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		NullCheck(L_38);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_39 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_38->___firstFreeTLS);
		int32_t* L_40 = (int32_t*)(&L_39->___FixedElementField);
		int32_t L_41 = *((int32_t*)L_40);
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_41;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		NullCheck(L_42);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_43 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_42->___firstFreeTLS);
		int32_t* L_44 = (int32_t*)(&L_43->___FixedElementField);
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_45 = ___1_it;
		int32_t L_46 = L_45.___EntryIndex;
		*((int32_t*)L_44) = (int32_t)L_46;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mE13F758756460959240C64E5A4F82AAF215B06E1_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, uint16_t* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___3_it;
		int32_t L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_5 = ___3_it;
		int32_t L_6 = (-1);
		V_2 = L_6;
		L_5->___NextEntryIndex = L_6;
		int32_t L_7 = V_2;
		L_4->___EntryIndex = L_7;
		uint16_t* L_8 = ___2_item;
		il2cpp_codegen_initobj(L_8, sizeof(uint16_t));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___buckets;
		V_0 = (int32_t*)L_10;
		int32_t L_11;
		L_11 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_14 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_15 = ___3_it;
		int32_t* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_15->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_14->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		uint16_t* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mD16049121C47A31D8068A8DD14D76C51C48D7C2C(L_21, L_22, L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mD16049121C47A31D8068A8DD14D76C51C48D7C2C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint16_t* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		uint16_t* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(uint16_t));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))))));
		V_0 = L_13;
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_15 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___keys;
		int32_t L_20 = V_0;
		int32_t L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_2 = L_21;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_22 = ___2_it;
		int32_t L_23 = L_22->___key;
		bool L_24;
		L_24 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_2), L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_24)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_25 = ___2_it;
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))));
		L_25->___NextEntryIndex = L_28;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_29 = ___2_it;
		int32_t L_30 = V_0;
		L_29->___EntryIndex = L_30;
		uint16_t* L_31 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___values;
		int32_t L_34 = V_0;
		uint16_t L_35;
		L_35 = UnsafeUtility_ReadArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mDA4F2F1FC33E2F2F8CC3E761D626E638762C61E4_inline((void*)L_33, L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(uint16_t*)L_31 = L_35;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m5B06F06BD43BAEA15323548E75D5EB3D1E0B41B4_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___1_it, uint16_t* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		uint16_t* L_9 = ___2_item;
		uint16_t L_10 = (*(uint16_t*)L_9);
		UnsafeUtility_WriteArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mAAF2E6888B17B2E7C3606BE66298D92F589F68C8_inline((void*)L_7, L_8, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m3A0DB6BC649BB0ACA8F1560A2C919A24730213CB_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_m31D29EDABE7672EF389DABF117006DCFA89185BE_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_m7ACCEA9D1A7F2999B6776FCCA5D920F47DBF59A5_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_m4310DE1FFC6B71A4941BFD965274298E4F56C7B9_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_m967436ABDB750BF20666B2FA55EB063ACFBB95B7_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		V_0 = 0;
		goto IL_0051;
	}

IL_0038:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_9 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_8->___firstFreeTLS);
		int32_t* L_10 = (int32_t*)(&L_9->___FixedElementField);
		int32_t L_11 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0051:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)128))))
		{
			goto IL_0038;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		L_14->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m3D790784965BD75F06162D7C29FAA59AE6ED36D0_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0007:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_3 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_2->___firstFreeTLS);
		int32_t* L_4 = (int32_t*)(&L_3->___FixedElementField);
		int32_t L_5 = ___1_threadIndex;
		int32_t L_6 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)16)))), 4)))));
		V_0 = L_6;
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_018a;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_9 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_8->___firstFreeTLS);
		int32_t* L_10 = (int32_t*)(&L_9->___FixedElementField);
		int32_t L_11 = ___1_threadIndex;
		int32_t L_12;
		L_12 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		int32_t L_14 = L_13->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___keyCapacity;
		if ((((int32_t)L_14) >= ((int32_t)L_16)))
		{
			goto IL_00f4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		int32_t* L_18 = (int32_t*)(&L_17->___allocatedIndexLength);
		int32_t L_19;
		L_19 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_18, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_19, ((int32_t)16)));
		int32_t L_20 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		NullCheck(L_21);
		int32_t L_22 = L_21->___keyCapacity;
		if ((((int32_t)L_20) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_22, 1)))))
		{
			goto IL_00cd;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		int32_t L_24 = L_23->___keyCapacity;
		int32_t L_25 = V_0;
		int32_t L_26;
		L_26 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_24, L_25)), NULL);
		V_3 = L_26;
		V_4 = 1;
		goto IL_0096;
	}

IL_0080:
	{
		int32_t* L_27 = V_1;
		int32_t L_28 = V_0;
		int32_t L_29 = V_4;
		int32_t L_30 = V_0;
		int32_t L_31 = V_4;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_28, L_29))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_30, L_31)), 1));
		int32_t L_32 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0096:
	{
		int32_t L_33 = V_4;
		int32_t L_34 = V_3;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t* L_35 = V_1;
		int32_t L_36 = V_0;
		int32_t L_37 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_36, L_37)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_38 = V_1;
		int32_t L_39 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_40 = ___0_data;
		NullCheck(L_40);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_41 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_40->___firstFreeTLS);
		int32_t* L_42 = (int32_t*)(&L_41->___FixedElementField);
		int32_t L_43 = ___1_threadIndex;
		int32_t L_44 = V_0;
		int32_t L_45;
		L_45 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_42, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_43, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_44, 1)), NULL);
		int32_t L_46 = V_0;
		return L_46;
	}

IL_00cd:
	{
		int32_t L_47 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		NullCheck(L_48);
		int32_t L_49 = L_48->___keyCapacity;
		if ((!(((uint32_t)L_47) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_49, 1))))))
		{
			goto IL_00f4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_50 = ___0_data;
		NullCheck(L_50);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_51 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_50->___firstFreeTLS);
		int32_t* L_52 = (int32_t*)(&L_51->___FixedElementField);
		int32_t L_53 = ___1_threadIndex;
		int32_t L_54;
		L_54 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_53, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_55 = V_0;
		return L_55;
	}

IL_00f4:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_56 = ___0_data;
		NullCheck(L_56);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_57 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_56->___firstFreeTLS);
		int32_t* L_58 = (int32_t*)(&L_57->___FixedElementField);
		int32_t L_59 = ___1_threadIndex;
		int32_t L_60;
		L_60 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_58, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_59, ((int32_t)16)))), 4)))), (-1), NULL);
		V_2 = (bool)1;
		goto IL_0187;
	}

IL_0112:
	{
		V_2 = (bool)0;
		int32_t L_61 = ___1_threadIndex;
		V_5 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_61, 1))%((int32_t)128)));
		goto IL_0182;
	}

IL_0121:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_62 = ___0_data;
		NullCheck(L_62);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_63 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_62->___firstFreeTLS);
		int32_t* L_64 = (int32_t*)(&L_63->___FixedElementField);
		int32_t L_65 = V_5;
		int32_t L_66 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_64, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_65, ((int32_t)16)))), 4)))));
		V_0 = L_66;
		int32_t L_67 = V_0;
		if ((((int32_t)L_67) < ((int32_t)0)))
		{
			goto IL_015f;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_68 = ___0_data;
		NullCheck(L_68);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_69 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_68->___firstFreeTLS);
		int32_t* L_70 = (int32_t*)(&L_69->___FixedElementField);
		int32_t L_71 = V_5;
		int32_t* L_72 = V_1;
		int32_t L_73 = V_0;
		int32_t L_74 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_72, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_73), 4))))));
		int32_t L_75 = V_0;
		int32_t L_76;
		L_76 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((int32_t*)il2cpp_codegen_add((intptr_t)L_70, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_71, ((int32_t)16)))), 4)))), L_74, L_75, NULL);
		int32_t L_77 = V_0;
		if ((!(((uint32_t)L_76) == ((uint32_t)L_77))))
		{
			goto IL_0121;
		}
	}

IL_015f:
	{
		int32_t L_78 = V_0;
		if ((!(((uint32_t)L_78) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0168;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0176;
	}

IL_0168:
	{
		int32_t L_79 = V_0;
		if ((((int32_t)L_79) < ((int32_t)0)))
		{
			goto IL_0176;
		}
	}
	{
		int32_t* L_80 = V_1;
		int32_t L_81 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_80, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_81), 4))))) = (int32_t)(-1);
		int32_t L_82 = V_0;
		return L_82;
	}

IL_0176:
	{
		int32_t L_83 = V_5;
		V_5 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_83, 1))%((int32_t)128)));
	}

IL_0182:
	{
		int32_t L_84 = V_5;
		int32_t L_85 = ___1_threadIndex;
		if ((!(((uint32_t)L_84) == ((uint32_t)L_85))))
		{
			goto IL_0121;
		}
	}

IL_0187:
	{
		bool L_86 = V_2;
		if (L_86)
		{
			goto IL_0112;
		}
	}

IL_018a:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_87 = ___0_data;
		NullCheck(L_87);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_88 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_87->___firstFreeTLS);
		int32_t* L_89 = (int32_t*)(&L_88->___FixedElementField);
		int32_t L_90 = ___1_threadIndex;
		int32_t* L_91 = V_1;
		int32_t L_92 = V_0;
		int32_t L_93 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_91, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_92), 4))))));
		int32_t L_94 = V_0;
		int32_t L_95;
		L_95 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_90, ((int32_t)16)))), 4)))), L_93, L_94, NULL);
		int32_t L_96 = V_0;
		if ((!(((uint32_t)L_95) == ((uint32_t)L_96))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t* L_97 = V_1;
		int32_t L_98 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_97, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_98), 4))))) = (int32_t)(-1);
		int32_t L_99 = V_0;
		return L_99;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m02FAB5863916CB8F45F87DBDE6C575F0753C8678_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_3 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_2->___firstFreeTLS);
		int32_t* L_4 = (int32_t*)(&L_3->___FixedElementField);
		int32_t L_5 = ___2_threadIndex;
		int32_t L_6 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)16)))), 4)))));
		V_1 = L_6;
		int32_t* L_7 = V_0;
		int32_t L_8 = ___1_idx;
		int32_t L_9 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))) = (int32_t)L_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_11 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_10->___firstFreeTLS);
		int32_t* L_12 = (int32_t*)(&L_11->___FixedElementField);
		int32_t L_13 = ___2_threadIndex;
		int32_t L_14 = ___1_idx;
		int32_t L_15 = V_1;
		int32_t L_16;
		L_16 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_13, ((int32_t)16)))), 4)))), L_14, L_15, NULL);
		int32_t L_17 = V_1;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_m4DD8C84772CEA913E1D647D786E26112964BB4C8_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20 ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mA34F0EE82A1A74FA1D9DDC46261761ACFC206C7B(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_m3D790784965BD75F06162D7C29FAA59AE6ED36D0(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		int32_t L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20 L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisTransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20_mBD2C55B3AAF9B0F344497E789FDCDF26186EBA0F_inline((void*)L_11, L_12, L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_14;
		L_14 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		int32_t L_21 = V_2;
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4)))), L_21, (-1), NULL);
		if ((((int32_t)L_22) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_5 = (int32_t*)L_24;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_25 = V_4;
		int32_t L_26 = V_3;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		V_6 = L_27;
		int32_t* L_28 = V_5;
		int32_t L_29 = V_2;
		int32_t L_30 = V_6;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)L_30;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_31 = ___0_data;
		int32_t L_32 = ___1_key;
		bool L_33;
		L_33 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mA34F0EE82A1A74FA1D9DDC46261761ACFC206C7B(L_31, L_32, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_33)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		int32_t L_35 = V_2;
		int32_t L_36 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_m02FAB5863916CB8F45F87DBDE6C575F0753C8678(L_34, L_35, L_36, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_37 = V_4;
		int32_t L_38 = V_3;
		int32_t L_39 = V_2;
		int32_t L_40 = V_6;
		int32_t L_41;
		L_41 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4)))), L_39, L_40, NULL);
		int32_t L_42 = V_6;
		if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m45E3BA3E3E4459C23CCC2BA09D0CD528B8DE021B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20 ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_m3D790784965BD75F06162D7C29FAA59AE6ED36D0(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		int32_t L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20 L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisTransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20_mBD2C55B3AAF9B0F344497E789FDCDF26186EBA0F_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_11;
		L_11 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		V_3 = L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))) = (int32_t)L_23;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4)))), L_26, L_27, NULL);
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m5F68D664FDF47E2D7A0E5FEB2DE95F092B6A90CB_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20 ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		int32_t L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mA34F0EE82A1A74FA1D9DDC46261761ACFC206C7B(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00de;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_9 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_8->___firstFreeTLS);
		int32_t* L_10 = (int32_t*)(&L_9->___FixedElementField);
		int32_t L_11 = *((int32_t*)L_10);
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_00de;
		}
	}
	{
		V_6 = 1;
		goto IL_00a8;
	}

IL_003a:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_13 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_12->___firstFreeTLS);
		int32_t* L_14 = (int32_t*)(&L_13->___FixedElementField);
		int32_t L_15 = V_6;
		int32_t L_16 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_15, ((int32_t)16)))), 4)))));
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_18 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_17->___firstFreeTLS);
		int32_t* L_19 = (int32_t*)(&L_18->___FixedElementField);
		int32_t L_20 = V_6;
		int32_t L_21 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_20, ((int32_t)16)))), 4)))));
		V_2 = L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		uint8_t* L_23 = L_22->___next;
		V_3 = (int32_t*)L_23;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_24 = ___0_data;
		NullCheck(L_24);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_25 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_24->___firstFreeTLS);
		int32_t* L_26 = (int32_t*)(&L_25->___FixedElementField);
		int32_t L_27 = V_6;
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		int32_t L_30 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_27, ((int32_t)16)))), 4))))) = (int32_t)L_30;
		int32_t* L_31 = V_3;
		int32_t L_32 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_32), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_33 = ___0_data;
		NullCheck(L_33);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_34 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_33->___firstFreeTLS);
		int32_t* L_35 = (int32_t*)(&L_34->___FixedElementField);
		int32_t L_36 = V_2;
		*((int32_t*)L_35) = (int32_t)L_36;
		goto IL_00b1;
	}

IL_00a2:
	{
		int32_t L_37 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00a8:
	{
		int32_t L_38 = V_6;
		if ((((int32_t)L_38) < ((int32_t)((int32_t)128))))
		{
			goto IL_003a;
		}
	}

IL_00b1:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_40 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_39->___firstFreeTLS);
		int32_t* L_41 = (int32_t*)(&L_40->___FixedElementField);
		int32_t L_42 = *((int32_t*)L_41);
		if ((((int32_t)L_42) >= ((int32_t)0)))
		{
			goto IL_00de;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_43 = ___0_data;
		NullCheck(L_43);
		int32_t L_44 = L_43->___keyCapacity;
		int32_t L_45;
		L_45 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_44, NULL);
		V_7 = L_45;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		int32_t L_47 = V_7;
		int32_t L_48 = V_7;
		int32_t L_49;
		L_49 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_48, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_50 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisTransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20_mD90727BD30BFFC9F274245014CD4FFC96E8FDE49(L_46, L_47, L_49, L_50, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00de:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		NullCheck(L_51);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_52 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_51->___firstFreeTLS);
		int32_t* L_53 = (int32_t*)(&L_52->___FixedElementField);
		int32_t L_54 = *((int32_t*)L_53);
		V_2 = L_54;
		int32_t L_55 = V_2;
		if ((((int32_t)L_55) < ((int32_t)0)))
		{
			goto IL_0109;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_56 = ___0_data;
		NullCheck(L_56);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_57 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_56->___firstFreeTLS);
		int32_t* L_58 = (int32_t*)(&L_57->___FixedElementField);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_59 = ___0_data;
		NullCheck(L_59);
		uint8_t* L_60 = L_59->___next;
		int32_t L_61 = V_2;
		int32_t L_62 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_60, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_61), 4)))));
		*((int32_t*)L_58) = (int32_t)L_62;
		goto IL_011b;
	}

IL_0109:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		int32_t* L_64 = (int32_t*)(&L_63->___allocatedIndexLength);
		int32_t* L_65 = L_64;
		int32_t L_66 = *((int32_t*)L_65);
		V_8 = L_66;
		int32_t L_67 = V_8;
		*((int32_t*)L_65) = (int32_t)((int32_t)il2cpp_codegen_add(L_67, 1));
		int32_t L_68 = V_8;
		V_2 = L_68;
	}

IL_011b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_69 = ___0_data;
		NullCheck(L_69);
		uint8_t* L_70 = L_69->___keys;
		int32_t L_71 = V_2;
		int32_t L_72 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_70, L_71, L_72, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_73 = ___0_data;
		NullCheck(L_73);
		uint8_t* L_74 = L_73->___values;
		int32_t L_75 = V_2;
		TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20 L_76 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisTransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20_mBD2C55B3AAF9B0F344497E789FDCDF26186EBA0F_inline((void*)L_74, L_75, L_76, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_77;
		L_77 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_78 = ___0_data;
		NullCheck(L_78);
		int32_t L_79 = L_78->___bucketCapacityMask;
		V_4 = ((int32_t)(L_77&L_79));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_80 = ___0_data;
		NullCheck(L_80);
		uint8_t* L_81 = L_80->___buckets;
		V_5 = (int32_t*)L_81;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_82 = ___0_data;
		NullCheck(L_82);
		uint8_t* L_83 = L_82->___next;
		V_3 = (int32_t*)L_83;
		int32_t* L_84 = V_3;
		int32_t L_85 = V_2;
		int32_t* L_86 = V_5;
		int32_t L_87 = V_4;
		int32_t L_88 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_87), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_84, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_85), 4))))) = (int32_t)L_88;
		int32_t* L_89 = V_5;
		int32_t L_90 = V_4;
		int32_t L_91 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_90), 4))))) = (int32_t)L_91;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_mAAA13DABB1649B0D211A7103BE74B78CA69FE8AA_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		int32_t L_11 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), 4))))));
		V_5 = L_11;
		goto IL_00c8;
	}

IL_0040:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_5;
		int32_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_15;
		int32_t L_16 = ___1_key;
		bool L_17;
		L_17 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_6), L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_17)
		{
			goto IL_00ba;
		}
	}
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t* L_22 = V_2;
		int32_t L_23 = V_5;
		int32_t L_24 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))) = (int32_t)L_24;
		goto IL_0089;
	}

IL_0079:
	{
		int32_t* L_25 = V_2;
		int32_t L_26 = V_4;
		int32_t* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))) = (int32_t)L_29;
	}

IL_0089:
	{
		int32_t* L_30 = V_2;
		int32_t L_31 = V_5;
		int32_t L_32 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))));
		int32_t* L_33 = V_2;
		int32_t L_34 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		NullCheck(L_35);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_36 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_35->___firstFreeTLS);
		int32_t* L_37 = (int32_t*)(&L_36->___FixedElementField);
		int32_t L_38 = *((int32_t*)L_37);
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))) = (int32_t)L_38;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_40 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_39->___firstFreeTLS);
		int32_t* L_41 = (int32_t*)(&L_40->___FixedElementField);
		int32_t L_42 = V_5;
		*((int32_t*)L_41) = (int32_t)L_42;
		V_5 = L_32;
		bool L_43 = ___2_isMultiHashMap;
		if (L_43)
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_00da;
	}

IL_00ba:
	{
		int32_t L_44 = V_5;
		V_4 = L_44;
		int32_t* L_45 = V_2;
		int32_t L_46 = V_5;
		int32_t L_47 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_45, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_46), 4))))));
		V_5 = L_47;
	}

IL_00c8:
	{
		int32_t L_48 = V_5;
		if ((((int32_t)L_48) < ((int32_t)0)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_49 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_50 = ___0_data;
		NullCheck(L_50);
		int32_t L_51 = L_50->___keyCapacity;
		if ((((int32_t)L_49) < ((int32_t)L_51)))
		{
			goto IL_0040;
		}
	}

IL_00da:
	{
		int32_t L_52 = V_0;
		return L_52;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_m44E4870437319C3375A1AC48980267D8564D0D1E_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		int32_t* L_4 = (int32_t*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_12 = ___1_it;
		int32_t L_13 = L_12.___EntryIndex;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t* L_16 = V_1;
		int32_t L_17 = V_3;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4))))) = (int32_t)L_18;
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
	}

IL_0051:
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_26 = ___1_it;
		int32_t L_27 = L_26.___EntryIndex;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_28 = V_3;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_3;
		int32_t* L_31 = V_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_32 = ___1_it;
		int32_t L_33 = L_32.___EntryIndex;
		int32_t L_34 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_34;
	}

IL_007b:
	{
		int32_t* L_35 = V_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_36 = ___1_it;
		int32_t L_37 = L_36.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		NullCheck(L_38);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_39 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_38->___firstFreeTLS);
		int32_t* L_40 = (int32_t*)(&L_39->___FixedElementField);
		int32_t L_41 = *((int32_t*)L_40);
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_41;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		NullCheck(L_42);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_43 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_42->___firstFreeTLS);
		int32_t* L_44 = (int32_t*)(&L_43->___FixedElementField);
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_45 = ___1_it;
		int32_t L_46 = L_45.___EntryIndex;
		*((int32_t*)L_44) = (int32_t)L_46;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mA34F0EE82A1A74FA1D9DDC46261761ACFC206C7B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___3_it;
		int32_t L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_5 = ___3_it;
		int32_t L_6 = (-1);
		V_2 = L_6;
		L_5->___NextEntryIndex = L_6;
		int32_t L_7 = V_2;
		L_4->___EntryIndex = L_7;
		TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20* L_8 = ___2_item;
		il2cpp_codegen_initobj(L_8, sizeof(TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___buckets;
		V_0 = (int32_t*)L_10;
		int32_t L_11;
		L_11 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_14 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_15 = ___3_it;
		int32_t* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_15->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_14->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mC232ECFCE25A63394DE658F3C29C399D3A6F26A6(L_21, L_22, L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mC232ECFCE25A63394DE658F3C29C399D3A6F26A6_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))))));
		V_0 = L_13;
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_15 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___keys;
		int32_t L_20 = V_0;
		int32_t L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_2 = L_21;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_22 = ___2_it;
		int32_t L_23 = L_22->___key;
		bool L_24;
		L_24 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_2), L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_24)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_25 = ___2_it;
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))));
		L_25->___NextEntryIndex = L_28;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_29 = ___2_it;
		int32_t L_30 = V_0;
		L_29->___EntryIndex = L_30;
		TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20* L_31 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___values;
		int32_t L_34 = V_0;
		TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20 L_35;
		L_35 = UnsafeUtility_ReadArrayElement_TisTransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20_m41A161AA831DC15C0FFE00918C25978D07864CD6_inline((void*)L_33, L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20*)L_31 = L_35;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_mEB18E711BF81E7338CA8C7A02C2D3E75359E88F3_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___1_it, TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20* L_9 = ___2_item;
		TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20 L_10 = (*(TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20*)L_9);
		UnsafeUtility_WriteArrayElement_TisTransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20_mBD2C55B3AAF9B0F344497E789FDCDF26186EBA0F_inline((void*)L_7, L_8, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m689E54ECDC470D387CDDDF72373F2590E63E5771_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_mECA8952C5BABCCD19D74A75F1883D14239396AC8_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_m46360F7E9B38E2E448DCB3A102153F53CAA591E2_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_m631E93BE98FF586FE551B39CBAF978A378E94FFF_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_m8EA8E0A4CDF07C547AA2B641C83446EEA33DD8C4_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		V_0 = 0;
		goto IL_0051;
	}

IL_0038:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_9 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_8->___firstFreeTLS);
		int32_t* L_10 = (int32_t*)(&L_9->___FixedElementField);
		int32_t L_11 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0051:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)128))))
		{
			goto IL_0038;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		L_14->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m4FFCE773F493142BCBAF42F26CE62BB7A12D1722_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0007:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_3 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_2->___firstFreeTLS);
		int32_t* L_4 = (int32_t*)(&L_3->___FixedElementField);
		int32_t L_5 = ___1_threadIndex;
		int32_t L_6 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)16)))), 4)))));
		V_0 = L_6;
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_018a;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_9 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_8->___firstFreeTLS);
		int32_t* L_10 = (int32_t*)(&L_9->___FixedElementField);
		int32_t L_11 = ___1_threadIndex;
		int32_t L_12;
		L_12 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		int32_t L_14 = L_13->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___keyCapacity;
		if ((((int32_t)L_14) >= ((int32_t)L_16)))
		{
			goto IL_00f4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		int32_t* L_18 = (int32_t*)(&L_17->___allocatedIndexLength);
		int32_t L_19;
		L_19 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_18, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_19, ((int32_t)16)));
		int32_t L_20 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		NullCheck(L_21);
		int32_t L_22 = L_21->___keyCapacity;
		if ((((int32_t)L_20) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_22, 1)))))
		{
			goto IL_00cd;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		int32_t L_24 = L_23->___keyCapacity;
		int32_t L_25 = V_0;
		int32_t L_26;
		L_26 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_24, L_25)), NULL);
		V_3 = L_26;
		V_4 = 1;
		goto IL_0096;
	}

IL_0080:
	{
		int32_t* L_27 = V_1;
		int32_t L_28 = V_0;
		int32_t L_29 = V_4;
		int32_t L_30 = V_0;
		int32_t L_31 = V_4;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_28, L_29))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_30, L_31)), 1));
		int32_t L_32 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0096:
	{
		int32_t L_33 = V_4;
		int32_t L_34 = V_3;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t* L_35 = V_1;
		int32_t L_36 = V_0;
		int32_t L_37 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_36, L_37)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_38 = V_1;
		int32_t L_39 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_40 = ___0_data;
		NullCheck(L_40);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_41 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_40->___firstFreeTLS);
		int32_t* L_42 = (int32_t*)(&L_41->___FixedElementField);
		int32_t L_43 = ___1_threadIndex;
		int32_t L_44 = V_0;
		int32_t L_45;
		L_45 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_42, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_43, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_44, 1)), NULL);
		int32_t L_46 = V_0;
		return L_46;
	}

IL_00cd:
	{
		int32_t L_47 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		NullCheck(L_48);
		int32_t L_49 = L_48->___keyCapacity;
		if ((!(((uint32_t)L_47) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_49, 1))))))
		{
			goto IL_00f4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_50 = ___0_data;
		NullCheck(L_50);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_51 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_50->___firstFreeTLS);
		int32_t* L_52 = (int32_t*)(&L_51->___FixedElementField);
		int32_t L_53 = ___1_threadIndex;
		int32_t L_54;
		L_54 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_53, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_55 = V_0;
		return L_55;
	}

IL_00f4:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_56 = ___0_data;
		NullCheck(L_56);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_57 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_56->___firstFreeTLS);
		int32_t* L_58 = (int32_t*)(&L_57->___FixedElementField);
		int32_t L_59 = ___1_threadIndex;
		int32_t L_60;
		L_60 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_58, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_59, ((int32_t)16)))), 4)))), (-1), NULL);
		V_2 = (bool)1;
		goto IL_0187;
	}

IL_0112:
	{
		V_2 = (bool)0;
		int32_t L_61 = ___1_threadIndex;
		V_5 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_61, 1))%((int32_t)128)));
		goto IL_0182;
	}

IL_0121:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_62 = ___0_data;
		NullCheck(L_62);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_63 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_62->___firstFreeTLS);
		int32_t* L_64 = (int32_t*)(&L_63->___FixedElementField);
		int32_t L_65 = V_5;
		int32_t L_66 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_64, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_65, ((int32_t)16)))), 4)))));
		V_0 = L_66;
		int32_t L_67 = V_0;
		if ((((int32_t)L_67) < ((int32_t)0)))
		{
			goto IL_015f;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_68 = ___0_data;
		NullCheck(L_68);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_69 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_68->___firstFreeTLS);
		int32_t* L_70 = (int32_t*)(&L_69->___FixedElementField);
		int32_t L_71 = V_5;
		int32_t* L_72 = V_1;
		int32_t L_73 = V_0;
		int32_t L_74 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_72, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_73), 4))))));
		int32_t L_75 = V_0;
		int32_t L_76;
		L_76 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((int32_t*)il2cpp_codegen_add((intptr_t)L_70, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_71, ((int32_t)16)))), 4)))), L_74, L_75, NULL);
		int32_t L_77 = V_0;
		if ((!(((uint32_t)L_76) == ((uint32_t)L_77))))
		{
			goto IL_0121;
		}
	}

IL_015f:
	{
		int32_t L_78 = V_0;
		if ((!(((uint32_t)L_78) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0168;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0176;
	}

IL_0168:
	{
		int32_t L_79 = V_0;
		if ((((int32_t)L_79) < ((int32_t)0)))
		{
			goto IL_0176;
		}
	}
	{
		int32_t* L_80 = V_1;
		int32_t L_81 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_80, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_81), 4))))) = (int32_t)(-1);
		int32_t L_82 = V_0;
		return L_82;
	}

IL_0176:
	{
		int32_t L_83 = V_5;
		V_5 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_83, 1))%((int32_t)128)));
	}

IL_0182:
	{
		int32_t L_84 = V_5;
		int32_t L_85 = ___1_threadIndex;
		if ((!(((uint32_t)L_84) == ((uint32_t)L_85))))
		{
			goto IL_0121;
		}
	}

IL_0187:
	{
		bool L_86 = V_2;
		if (L_86)
		{
			goto IL_0112;
		}
	}

IL_018a:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_87 = ___0_data;
		NullCheck(L_87);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_88 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_87->___firstFreeTLS);
		int32_t* L_89 = (int32_t*)(&L_88->___FixedElementField);
		int32_t L_90 = ___1_threadIndex;
		int32_t* L_91 = V_1;
		int32_t L_92 = V_0;
		int32_t L_93 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_91, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_92), 4))))));
		int32_t L_94 = V_0;
		int32_t L_95;
		L_95 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_90, ((int32_t)16)))), 4)))), L_93, L_94, NULL);
		int32_t L_96 = V_0;
		if ((!(((uint32_t)L_95) == ((uint32_t)L_96))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t* L_97 = V_1;
		int32_t L_98 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_97, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_98), 4))))) = (int32_t)(-1);
		int32_t L_99 = V_0;
		return L_99;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m69C1F7F9D36BE58178B71282CBE23627EAB87F87_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_3 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_2->___firstFreeTLS);
		int32_t* L_4 = (int32_t*)(&L_3->___FixedElementField);
		int32_t L_5 = ___2_threadIndex;
		int32_t L_6 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)16)))), 4)))));
		V_1 = L_6;
		int32_t* L_7 = V_0;
		int32_t L_8 = ___1_idx;
		int32_t L_9 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))) = (int32_t)L_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_11 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_10->___firstFreeTLS);
		int32_t* L_12 = (int32_t*)(&L_11->___FixedElementField);
		int32_t L_13 = ___2_threadIndex;
		int32_t L_14 = ___1_idx;
		int32_t L_15 = V_1;
		int32_t L_16;
		L_16 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_13, ((int32_t)16)))), 4)))), L_14, L_15, NULL);
		int32_t L_17 = V_1;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_m5296632259C43045D7040ABE868CE6F8DF11143D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m6B59398448098F89E584AA923623D74BEF4A886A(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_m4FFCE773F493142BCBAF42F26CE62BB7A12D1722(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		int32_t L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisBaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E_m037B85F45E867FB9B0265056B549A1D51EDA8498_inline((void*)L_11, L_12, L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_14;
		L_14 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		int32_t L_21 = V_2;
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4)))), L_21, (-1), NULL);
		if ((((int32_t)L_22) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_5 = (int32_t*)L_24;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_25 = V_4;
		int32_t L_26 = V_3;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		V_6 = L_27;
		int32_t* L_28 = V_5;
		int32_t L_29 = V_2;
		int32_t L_30 = V_6;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)L_30;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_31 = ___0_data;
		int32_t L_32 = ___1_key;
		bool L_33;
		L_33 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m6B59398448098F89E584AA923623D74BEF4A886A(L_31, L_32, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_33)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		int32_t L_35 = V_2;
		int32_t L_36 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_m69C1F7F9D36BE58178B71282CBE23627EAB87F87(L_34, L_35, L_36, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_37 = V_4;
		int32_t L_38 = V_3;
		int32_t L_39 = V_2;
		int32_t L_40 = V_6;
		int32_t L_41;
		L_41 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4)))), L_39, L_40, NULL);
		int32_t L_42 = V_6;
		if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_mD5832D292D5F30A2A99E920968D90782B391B713_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_m4FFCE773F493142BCBAF42F26CE62BB7A12D1722(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		int32_t L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisBaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E_m037B85F45E867FB9B0265056B549A1D51EDA8498_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_11;
		L_11 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		V_3 = L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))) = (int32_t)L_23;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4)))), L_26, L_27, NULL);
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_mCB1268CFCF8A18160F94E6A51CDF4B430973ED3D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		int32_t L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m6B59398448098F89E584AA923623D74BEF4A886A(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00de;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_9 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_8->___firstFreeTLS);
		int32_t* L_10 = (int32_t*)(&L_9->___FixedElementField);
		int32_t L_11 = *((int32_t*)L_10);
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_00de;
		}
	}
	{
		V_6 = 1;
		goto IL_00a8;
	}

IL_003a:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_13 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_12->___firstFreeTLS);
		int32_t* L_14 = (int32_t*)(&L_13->___FixedElementField);
		int32_t L_15 = V_6;
		int32_t L_16 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_15, ((int32_t)16)))), 4)))));
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_18 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_17->___firstFreeTLS);
		int32_t* L_19 = (int32_t*)(&L_18->___FixedElementField);
		int32_t L_20 = V_6;
		int32_t L_21 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_20, ((int32_t)16)))), 4)))));
		V_2 = L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		uint8_t* L_23 = L_22->___next;
		V_3 = (int32_t*)L_23;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_24 = ___0_data;
		NullCheck(L_24);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_25 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_24->___firstFreeTLS);
		int32_t* L_26 = (int32_t*)(&L_25->___FixedElementField);
		int32_t L_27 = V_6;
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		int32_t L_30 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_27, ((int32_t)16)))), 4))))) = (int32_t)L_30;
		int32_t* L_31 = V_3;
		int32_t L_32 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_32), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_33 = ___0_data;
		NullCheck(L_33);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_34 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_33->___firstFreeTLS);
		int32_t* L_35 = (int32_t*)(&L_34->___FixedElementField);
		int32_t L_36 = V_2;
		*((int32_t*)L_35) = (int32_t)L_36;
		goto IL_00b1;
	}

IL_00a2:
	{
		int32_t L_37 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00a8:
	{
		int32_t L_38 = V_6;
		if ((((int32_t)L_38) < ((int32_t)((int32_t)128))))
		{
			goto IL_003a;
		}
	}

IL_00b1:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_40 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_39->___firstFreeTLS);
		int32_t* L_41 = (int32_t*)(&L_40->___FixedElementField);
		int32_t L_42 = *((int32_t*)L_41);
		if ((((int32_t)L_42) >= ((int32_t)0)))
		{
			goto IL_00de;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_43 = ___0_data;
		NullCheck(L_43);
		int32_t L_44 = L_43->___keyCapacity;
		int32_t L_45;
		L_45 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_44, NULL);
		V_7 = L_45;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		int32_t L_47 = V_7;
		int32_t L_48 = V_7;
		int32_t L_49;
		L_49 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_48, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_50 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E_m2B9486A91EBA67F3E7E693D602B32E4564293DDB(L_46, L_47, L_49, L_50, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00de:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		NullCheck(L_51);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_52 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_51->___firstFreeTLS);
		int32_t* L_53 = (int32_t*)(&L_52->___FixedElementField);
		int32_t L_54 = *((int32_t*)L_53);
		V_2 = L_54;
		int32_t L_55 = V_2;
		if ((((int32_t)L_55) < ((int32_t)0)))
		{
			goto IL_0109;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_56 = ___0_data;
		NullCheck(L_56);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_57 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_56->___firstFreeTLS);
		int32_t* L_58 = (int32_t*)(&L_57->___FixedElementField);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_59 = ___0_data;
		NullCheck(L_59);
		uint8_t* L_60 = L_59->___next;
		int32_t L_61 = V_2;
		int32_t L_62 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_60, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_61), 4)))));
		*((int32_t*)L_58) = (int32_t)L_62;
		goto IL_011b;
	}

IL_0109:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		int32_t* L_64 = (int32_t*)(&L_63->___allocatedIndexLength);
		int32_t* L_65 = L_64;
		int32_t L_66 = *((int32_t*)L_65);
		V_8 = L_66;
		int32_t L_67 = V_8;
		*((int32_t*)L_65) = (int32_t)((int32_t)il2cpp_codegen_add(L_67, 1));
		int32_t L_68 = V_8;
		V_2 = L_68;
	}

IL_011b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_69 = ___0_data;
		NullCheck(L_69);
		uint8_t* L_70 = L_69->___keys;
		int32_t L_71 = V_2;
		int32_t L_72 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_70, L_71, L_72, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_73 = ___0_data;
		NullCheck(L_73);
		uint8_t* L_74 = L_73->___values;
		int32_t L_75 = V_2;
		BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E L_76 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisBaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E_m037B85F45E867FB9B0265056B549A1D51EDA8498_inline((void*)L_74, L_75, L_76, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_77;
		L_77 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_78 = ___0_data;
		NullCheck(L_78);
		int32_t L_79 = L_78->___bucketCapacityMask;
		V_4 = ((int32_t)(L_77&L_79));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_80 = ___0_data;
		NullCheck(L_80);
		uint8_t* L_81 = L_80->___buckets;
		V_5 = (int32_t*)L_81;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_82 = ___0_data;
		NullCheck(L_82);
		uint8_t* L_83 = L_82->___next;
		V_3 = (int32_t*)L_83;
		int32_t* L_84 = V_3;
		int32_t L_85 = V_2;
		int32_t* L_86 = V_5;
		int32_t L_87 = V_4;
		int32_t L_88 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_87), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_84, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_85), 4))))) = (int32_t)L_88;
		int32_t* L_89 = V_5;
		int32_t L_90 = V_4;
		int32_t L_91 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_90), 4))))) = (int32_t)L_91;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m611F52FB4788D24AC91984A4D41DA6AE9D9F90FD_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		int32_t L_11 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), 4))))));
		V_5 = L_11;
		goto IL_00c8;
	}

IL_0040:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_5;
		int32_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_15;
		int32_t L_16 = ___1_key;
		bool L_17;
		L_17 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_6), L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_17)
		{
			goto IL_00ba;
		}
	}
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t* L_22 = V_2;
		int32_t L_23 = V_5;
		int32_t L_24 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))) = (int32_t)L_24;
		goto IL_0089;
	}

IL_0079:
	{
		int32_t* L_25 = V_2;
		int32_t L_26 = V_4;
		int32_t* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))) = (int32_t)L_29;
	}

IL_0089:
	{
		int32_t* L_30 = V_2;
		int32_t L_31 = V_5;
		int32_t L_32 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))));
		int32_t* L_33 = V_2;
		int32_t L_34 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		NullCheck(L_35);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_36 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_35->___firstFreeTLS);
		int32_t* L_37 = (int32_t*)(&L_36->___FixedElementField);
		int32_t L_38 = *((int32_t*)L_37);
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))) = (int32_t)L_38;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_40 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_39->___firstFreeTLS);
		int32_t* L_41 = (int32_t*)(&L_40->___FixedElementField);
		int32_t L_42 = V_5;
		*((int32_t*)L_41) = (int32_t)L_42;
		V_5 = L_32;
		bool L_43 = ___2_isMultiHashMap;
		if (L_43)
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_00da;
	}

IL_00ba:
	{
		int32_t L_44 = V_5;
		V_4 = L_44;
		int32_t* L_45 = V_2;
		int32_t L_46 = V_5;
		int32_t L_47 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_45, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_46), 4))))));
		V_5 = L_47;
	}

IL_00c8:
	{
		int32_t L_48 = V_5;
		if ((((int32_t)L_48) < ((int32_t)0)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_49 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_50 = ___0_data;
		NullCheck(L_50);
		int32_t L_51 = L_50->___keyCapacity;
		if ((((int32_t)L_49) < ((int32_t)L_51)))
		{
			goto IL_0040;
		}
	}

IL_00da:
	{
		int32_t L_52 = V_0;
		return L_52;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_m1C1E9AAD9E4E03E881F5154DEAC4BD854D9ABC1B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		int32_t* L_4 = (int32_t*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_12 = ___1_it;
		int32_t L_13 = L_12.___EntryIndex;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t* L_16 = V_1;
		int32_t L_17 = V_3;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4))))) = (int32_t)L_18;
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
	}

IL_0051:
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_26 = ___1_it;
		int32_t L_27 = L_26.___EntryIndex;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_28 = V_3;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_3;
		int32_t* L_31 = V_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_32 = ___1_it;
		int32_t L_33 = L_32.___EntryIndex;
		int32_t L_34 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_34;
	}

IL_007b:
	{
		int32_t* L_35 = V_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_36 = ___1_it;
		int32_t L_37 = L_36.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		NullCheck(L_38);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_39 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_38->___firstFreeTLS);
		int32_t* L_40 = (int32_t*)(&L_39->___FixedElementField);
		int32_t L_41 = *((int32_t*)L_40);
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_41;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		NullCheck(L_42);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_43 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_42->___firstFreeTLS);
		int32_t* L_44 = (int32_t*)(&L_43->___FixedElementField);
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_45 = ___1_it;
		int32_t L_46 = L_45.___EntryIndex;
		*((int32_t*)L_44) = (int32_t)L_46;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m6B59398448098F89E584AA923623D74BEF4A886A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___3_it;
		int32_t L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_5 = ___3_it;
		int32_t L_6 = (-1);
		V_2 = L_6;
		L_5->___NextEntryIndex = L_6;
		int32_t L_7 = V_2;
		L_4->___EntryIndex = L_7;
		BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E* L_8 = ___2_item;
		il2cpp_codegen_initobj(L_8, sizeof(BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___buckets;
		V_0 = (int32_t*)L_10;
		int32_t L_11;
		L_11 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_14 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_15 = ___3_it;
		int32_t* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_15->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_14->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mC8DD96DA9224A25A88BD57140B9B5C42AF4E8F7D(L_21, L_22, L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mC8DD96DA9224A25A88BD57140B9B5C42AF4E8F7D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))))));
		V_0 = L_13;
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_15 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___keys;
		int32_t L_20 = V_0;
		int32_t L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_2 = L_21;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_22 = ___2_it;
		int32_t L_23 = L_22->___key;
		bool L_24;
		L_24 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_2), L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_24)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_25 = ___2_it;
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))));
		L_25->___NextEntryIndex = L_28;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_29 = ___2_it;
		int32_t L_30 = V_0;
		L_29->___EntryIndex = L_30;
		BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E* L_31 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___values;
		int32_t L_34 = V_0;
		BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E L_35;
		L_35 = UnsafeUtility_ReadArrayElement_TisBaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E_m4B42E098503E3D7B2A5BB163E12C18B3C8742901_inline((void*)L_33, L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E*)L_31 = L_35;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m1DF5A054980A7157653EFDEA68FA7669626BBCB0_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___1_it, BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E* L_9 = ___2_item;
		BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E L_10 = (*(BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E*)L_9);
		UnsafeUtility_WriteArrayElement_TisBaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E_m037B85F45E867FB9B0265056B549A1D51EDA8498_inline((void*)L_7, L_8, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m86EAC62B7190907203D8E5545BAB054F62FF5092_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_m98EA0203CD720879041327D4742A5E12F42B4FCF_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_m8032D5FEA2F94CEFF36AB0B9A2F607AD36A28AB1_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_mCD78E7466BD45B2F0574C5839119CA3BBE42C326_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_m2473D74AFFEC226FB8EE9583DEB64AE477D7B95A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		V_0 = 0;
		goto IL_0051;
	}

IL_0038:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_9 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_8->___firstFreeTLS);
		int32_t* L_10 = (int32_t*)(&L_9->___FixedElementField);
		int32_t L_11 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0051:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)128))))
		{
			goto IL_0038;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		L_14->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m9B399A689E7A6BE0D5CBF78DACECEB662AD62221_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0007:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_3 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_2->___firstFreeTLS);
		int32_t* L_4 = (int32_t*)(&L_3->___FixedElementField);
		int32_t L_5 = ___1_threadIndex;
		int32_t L_6 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)16)))), 4)))));
		V_0 = L_6;
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_018a;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_9 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_8->___firstFreeTLS);
		int32_t* L_10 = (int32_t*)(&L_9->___FixedElementField);
		int32_t L_11 = ___1_threadIndex;
		int32_t L_12;
		L_12 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		int32_t L_14 = L_13->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___keyCapacity;
		if ((((int32_t)L_14) >= ((int32_t)L_16)))
		{
			goto IL_00f4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		int32_t* L_18 = (int32_t*)(&L_17->___allocatedIndexLength);
		int32_t L_19;
		L_19 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_18, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_19, ((int32_t)16)));
		int32_t L_20 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		NullCheck(L_21);
		int32_t L_22 = L_21->___keyCapacity;
		if ((((int32_t)L_20) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_22, 1)))))
		{
			goto IL_00cd;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		int32_t L_24 = L_23->___keyCapacity;
		int32_t L_25 = V_0;
		int32_t L_26;
		L_26 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_24, L_25)), NULL);
		V_3 = L_26;
		V_4 = 1;
		goto IL_0096;
	}

IL_0080:
	{
		int32_t* L_27 = V_1;
		int32_t L_28 = V_0;
		int32_t L_29 = V_4;
		int32_t L_30 = V_0;
		int32_t L_31 = V_4;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_28, L_29))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_30, L_31)), 1));
		int32_t L_32 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0096:
	{
		int32_t L_33 = V_4;
		int32_t L_34 = V_3;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t* L_35 = V_1;
		int32_t L_36 = V_0;
		int32_t L_37 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_36, L_37)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_38 = V_1;
		int32_t L_39 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_40 = ___0_data;
		NullCheck(L_40);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_41 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_40->___firstFreeTLS);
		int32_t* L_42 = (int32_t*)(&L_41->___FixedElementField);
		int32_t L_43 = ___1_threadIndex;
		int32_t L_44 = V_0;
		int32_t L_45;
		L_45 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_42, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_43, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_44, 1)), NULL);
		int32_t L_46 = V_0;
		return L_46;
	}

IL_00cd:
	{
		int32_t L_47 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		NullCheck(L_48);
		int32_t L_49 = L_48->___keyCapacity;
		if ((!(((uint32_t)L_47) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_49, 1))))))
		{
			goto IL_00f4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_50 = ___0_data;
		NullCheck(L_50);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_51 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_50->___firstFreeTLS);
		int32_t* L_52 = (int32_t*)(&L_51->___FixedElementField);
		int32_t L_53 = ___1_threadIndex;
		int32_t L_54;
		L_54 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_53, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_55 = V_0;
		return L_55;
	}

IL_00f4:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_56 = ___0_data;
		NullCheck(L_56);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_57 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_56->___firstFreeTLS);
		int32_t* L_58 = (int32_t*)(&L_57->___FixedElementField);
		int32_t L_59 = ___1_threadIndex;
		int32_t L_60;
		L_60 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_58, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_59, ((int32_t)16)))), 4)))), (-1), NULL);
		V_2 = (bool)1;
		goto IL_0187;
	}

IL_0112:
	{
		V_2 = (bool)0;
		int32_t L_61 = ___1_threadIndex;
		V_5 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_61, 1))%((int32_t)128)));
		goto IL_0182;
	}

IL_0121:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_62 = ___0_data;
		NullCheck(L_62);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_63 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_62->___firstFreeTLS);
		int32_t* L_64 = (int32_t*)(&L_63->___FixedElementField);
		int32_t L_65 = V_5;
		int32_t L_66 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_64, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_65, ((int32_t)16)))), 4)))));
		V_0 = L_66;
		int32_t L_67 = V_0;
		if ((((int32_t)L_67) < ((int32_t)0)))
		{
			goto IL_015f;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_68 = ___0_data;
		NullCheck(L_68);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_69 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_68->___firstFreeTLS);
		int32_t* L_70 = (int32_t*)(&L_69->___FixedElementField);
		int32_t L_71 = V_5;
		int32_t* L_72 = V_1;
		int32_t L_73 = V_0;
		int32_t L_74 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_72, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_73), 4))))));
		int32_t L_75 = V_0;
		int32_t L_76;
		L_76 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((int32_t*)il2cpp_codegen_add((intptr_t)L_70, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_71, ((int32_t)16)))), 4)))), L_74, L_75, NULL);
		int32_t L_77 = V_0;
		if ((!(((uint32_t)L_76) == ((uint32_t)L_77))))
		{
			goto IL_0121;
		}
	}

IL_015f:
	{
		int32_t L_78 = V_0;
		if ((!(((uint32_t)L_78) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0168;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0176;
	}

IL_0168:
	{
		int32_t L_79 = V_0;
		if ((((int32_t)L_79) < ((int32_t)0)))
		{
			goto IL_0176;
		}
	}
	{
		int32_t* L_80 = V_1;
		int32_t L_81 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_80, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_81), 4))))) = (int32_t)(-1);
		int32_t L_82 = V_0;
		return L_82;
	}

IL_0176:
	{
		int32_t L_83 = V_5;
		V_5 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_83, 1))%((int32_t)128)));
	}

IL_0182:
	{
		int32_t L_84 = V_5;
		int32_t L_85 = ___1_threadIndex;
		if ((!(((uint32_t)L_84) == ((uint32_t)L_85))))
		{
			goto IL_0121;
		}
	}

IL_0187:
	{
		bool L_86 = V_2;
		if (L_86)
		{
			goto IL_0112;
		}
	}

IL_018a:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_87 = ___0_data;
		NullCheck(L_87);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_88 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_87->___firstFreeTLS);
		int32_t* L_89 = (int32_t*)(&L_88->___FixedElementField);
		int32_t L_90 = ___1_threadIndex;
		int32_t* L_91 = V_1;
		int32_t L_92 = V_0;
		int32_t L_93 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_91, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_92), 4))))));
		int32_t L_94 = V_0;
		int32_t L_95;
		L_95 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_90, ((int32_t)16)))), 4)))), L_93, L_94, NULL);
		int32_t L_96 = V_0;
		if ((!(((uint32_t)L_95) == ((uint32_t)L_96))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t* L_97 = V_1;
		int32_t L_98 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_97, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_98), 4))))) = (int32_t)(-1);
		int32_t L_99 = V_0;
		return L_99;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_mC5EB49317489442AE30F0C2D3B6B0F875562F166_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_3 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_2->___firstFreeTLS);
		int32_t* L_4 = (int32_t*)(&L_3->___FixedElementField);
		int32_t L_5 = ___2_threadIndex;
		int32_t L_6 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)16)))), 4)))));
		V_1 = L_6;
		int32_t* L_7 = V_0;
		int32_t L_8 = ___1_idx;
		int32_t L_9 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))) = (int32_t)L_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_11 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_10->___firstFreeTLS);
		int32_t* L_12 = (int32_t*)(&L_11->___FixedElementField);
		int32_t L_13 = ___2_threadIndex;
		int32_t L_14 = ___1_idx;
		int32_t L_15 = V_1;
		int32_t L_16;
		L_16 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_13, ((int32_t)16)))), 4)))), L_14, L_15, NULL);
		int32_t L_17 = V_1;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_m3422FE06C9220A1A75154683A9B71A4681ED074B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint16_t ___1_key, bool ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	bool V_0 = false;
	NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		uint16_t L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m71C68894BEEB8DDDB97B0AA476C6E18248574039(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_m9B399A689E7A6BE0D5CBF78DACECEB662AD62221(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		uint16_t L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mAAF2E6888B17B2E7C3606BE66298D92F589F68C8_inline((void*)L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		bool L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48259D1BF2B093A901E095965654FE2E58AEF18B_inline((void*)L_11, L_12, L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_14;
		L_14 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		int32_t L_21 = V_2;
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4)))), L_21, (-1), NULL);
		if ((((int32_t)L_22) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_5 = (int32_t*)L_24;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_25 = V_4;
		int32_t L_26 = V_3;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		V_6 = L_27;
		int32_t* L_28 = V_5;
		int32_t L_29 = V_2;
		int32_t L_30 = V_6;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)L_30;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_31 = ___0_data;
		uint16_t L_32 = ___1_key;
		bool L_33;
		L_33 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m71C68894BEEB8DDDB97B0AA476C6E18248574039(L_31, L_32, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_33)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		int32_t L_35 = V_2;
		int32_t L_36 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_mC5EB49317489442AE30F0C2D3B6B0F875562F166(L_34, L_35, L_36, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_37 = V_4;
		int32_t L_38 = V_3;
		int32_t L_39 = V_2;
		int32_t L_40 = V_6;
		int32_t L_41;
		L_41 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4)))), L_39, L_40, NULL);
		int32_t L_42 = V_6;
		if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m432E25A53AC32A7EE22E50009BA9C6A72224CF5D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint16_t ___1_key, bool ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_m9B399A689E7A6BE0D5CBF78DACECEB662AD62221(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		uint16_t L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mAAF2E6888B17B2E7C3606BE66298D92F589F68C8_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		bool L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48259D1BF2B093A901E095965654FE2E58AEF18B_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_11;
		L_11 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		V_3 = L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))) = (int32_t)L_23;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4)))), L_26, L_27, NULL);
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m40896DEF8D3D30CBED57784B3535097CF2D892A0_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint16_t ___1_key, bool ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	bool V_0 = false;
	NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		uint16_t L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m71C68894BEEB8DDDB97B0AA476C6E18248574039(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00de;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_9 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_8->___firstFreeTLS);
		int32_t* L_10 = (int32_t*)(&L_9->___FixedElementField);
		int32_t L_11 = *((int32_t*)L_10);
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_00de;
		}
	}
	{
		V_6 = 1;
		goto IL_00a8;
	}

IL_003a:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_13 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_12->___firstFreeTLS);
		int32_t* L_14 = (int32_t*)(&L_13->___FixedElementField);
		int32_t L_15 = V_6;
		int32_t L_16 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_15, ((int32_t)16)))), 4)))));
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_18 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_17->___firstFreeTLS);
		int32_t* L_19 = (int32_t*)(&L_18->___FixedElementField);
		int32_t L_20 = V_6;
		int32_t L_21 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_20, ((int32_t)16)))), 4)))));
		V_2 = L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		uint8_t* L_23 = L_22->___next;
		V_3 = (int32_t*)L_23;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_24 = ___0_data;
		NullCheck(L_24);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_25 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_24->___firstFreeTLS);
		int32_t* L_26 = (int32_t*)(&L_25->___FixedElementField);
		int32_t L_27 = V_6;
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		int32_t L_30 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_27, ((int32_t)16)))), 4))))) = (int32_t)L_30;
		int32_t* L_31 = V_3;
		int32_t L_32 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_32), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_33 = ___0_data;
		NullCheck(L_33);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_34 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_33->___firstFreeTLS);
		int32_t* L_35 = (int32_t*)(&L_34->___FixedElementField);
		int32_t L_36 = V_2;
		*((int32_t*)L_35) = (int32_t)L_36;
		goto IL_00b1;
	}

IL_00a2:
	{
		int32_t L_37 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00a8:
	{
		int32_t L_38 = V_6;
		if ((((int32_t)L_38) < ((int32_t)((int32_t)128))))
		{
			goto IL_003a;
		}
	}

IL_00b1:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_40 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_39->___firstFreeTLS);
		int32_t* L_41 = (int32_t*)(&L_40->___FixedElementField);
		int32_t L_42 = *((int32_t*)L_41);
		if ((((int32_t)L_42) >= ((int32_t)0)))
		{
			goto IL_00de;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_43 = ___0_data;
		NullCheck(L_43);
		int32_t L_44 = L_43->___keyCapacity;
		int32_t L_45;
		L_45 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_44, NULL);
		V_7 = L_45;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		int32_t L_47 = V_7;
		int32_t L_48 = V_7;
		int32_t L_49;
		L_49 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_48, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_50 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1DFC68E083E33CBA7CD3849B112E2061F963334D(L_46, L_47, L_49, L_50, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00de:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		NullCheck(L_51);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_52 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_51->___firstFreeTLS);
		int32_t* L_53 = (int32_t*)(&L_52->___FixedElementField);
		int32_t L_54 = *((int32_t*)L_53);
		V_2 = L_54;
		int32_t L_55 = V_2;
		if ((((int32_t)L_55) < ((int32_t)0)))
		{
			goto IL_0109;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_56 = ___0_data;
		NullCheck(L_56);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_57 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_56->___firstFreeTLS);
		int32_t* L_58 = (int32_t*)(&L_57->___FixedElementField);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_59 = ___0_data;
		NullCheck(L_59);
		uint8_t* L_60 = L_59->___next;
		int32_t L_61 = V_2;
		int32_t L_62 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_60, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_61), 4)))));
		*((int32_t*)L_58) = (int32_t)L_62;
		goto IL_011b;
	}

IL_0109:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		int32_t* L_64 = (int32_t*)(&L_63->___allocatedIndexLength);
		int32_t* L_65 = L_64;
		int32_t L_66 = *((int32_t*)L_65);
		V_8 = L_66;
		int32_t L_67 = V_8;
		*((int32_t*)L_65) = (int32_t)((int32_t)il2cpp_codegen_add(L_67, 1));
		int32_t L_68 = V_8;
		V_2 = L_68;
	}

IL_011b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_69 = ___0_data;
		NullCheck(L_69);
		uint8_t* L_70 = L_69->___keys;
		int32_t L_71 = V_2;
		uint16_t L_72 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mAAF2E6888B17B2E7C3606BE66298D92F589F68C8_inline((void*)L_70, L_71, L_72, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_73 = ___0_data;
		NullCheck(L_73);
		uint8_t* L_74 = L_73->___values;
		int32_t L_75 = V_2;
		bool L_76 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48259D1BF2B093A901E095965654FE2E58AEF18B_inline((void*)L_74, L_75, L_76, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_77;
		L_77 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_78 = ___0_data;
		NullCheck(L_78);
		int32_t L_79 = L_78->___bucketCapacityMask;
		V_4 = ((int32_t)(L_77&L_79));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_80 = ___0_data;
		NullCheck(L_80);
		uint8_t* L_81 = L_80->___buckets;
		V_5 = (int32_t*)L_81;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_82 = ___0_data;
		NullCheck(L_82);
		uint8_t* L_83 = L_82->___next;
		V_3 = (int32_t*)L_83;
		int32_t* L_84 = V_3;
		int32_t L_85 = V_2;
		int32_t* L_86 = V_5;
		int32_t L_87 = V_4;
		int32_t L_88 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_87), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_84, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_85), 4))))) = (int32_t)L_88;
		int32_t* L_89 = V_5;
		int32_t L_90 = V_4;
		int32_t L_91 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_90), 4))))) = (int32_t)L_91;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_mAB57FBD602041078FB8A01401F3175B6C08E96C3_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint16_t ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint16_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		int32_t L_6;
		L_6 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		int32_t L_11 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), 4))))));
		V_5 = L_11;
		goto IL_00c8;
	}

IL_0040:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_5;
		uint16_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mDA4F2F1FC33E2F2F8CC3E761D626E638762C61E4_inline((void*)L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_15;
		uint16_t L_16 = ___1_key;
		bool L_17;
		L_17 = UInt16_Equals_m5673358CCDB7D6E74A6A13C50FC9151F4DD66089((&V_6), L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_17)
		{
			goto IL_00ba;
		}
	}
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t* L_22 = V_2;
		int32_t L_23 = V_5;
		int32_t L_24 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))) = (int32_t)L_24;
		goto IL_0089;
	}

IL_0079:
	{
		int32_t* L_25 = V_2;
		int32_t L_26 = V_4;
		int32_t* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))) = (int32_t)L_29;
	}

IL_0089:
	{
		int32_t* L_30 = V_2;
		int32_t L_31 = V_5;
		int32_t L_32 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))));
		int32_t* L_33 = V_2;
		int32_t L_34 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		NullCheck(L_35);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_36 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_35->___firstFreeTLS);
		int32_t* L_37 = (int32_t*)(&L_36->___FixedElementField);
		int32_t L_38 = *((int32_t*)L_37);
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))) = (int32_t)L_38;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_40 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_39->___firstFreeTLS);
		int32_t* L_41 = (int32_t*)(&L_40->___FixedElementField);
		int32_t L_42 = V_5;
		*((int32_t*)L_41) = (int32_t)L_42;
		V_5 = L_32;
		bool L_43 = ___2_isMultiHashMap;
		if (L_43)
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_00da;
	}

IL_00ba:
	{
		int32_t L_44 = V_5;
		V_4 = L_44;
		int32_t* L_45 = V_2;
		int32_t L_46 = V_5;
		int32_t L_47 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_45, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_46), 4))))));
		V_5 = L_47;
	}

IL_00c8:
	{
		int32_t L_48 = V_5;
		if ((((int32_t)L_48) < ((int32_t)0)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_49 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_50 = ___0_data;
		NullCheck(L_50);
		int32_t L_51 = L_50->___keyCapacity;
		if ((((int32_t)L_49) < ((int32_t)L_51)))
		{
			goto IL_0040;
		}
	}

IL_00da:
	{
		int32_t L_52 = V_0;
		return L_52;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_mA4E54D8FCA0C7C3357262121081B3D6F57CF05AF_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2 ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		uint16_t* L_4 = (uint16_t*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2 L_12 = ___1_it;
		int32_t L_13 = L_12.___EntryIndex;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t* L_16 = V_1;
		int32_t L_17 = V_3;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4))))) = (int32_t)L_18;
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
	}

IL_0051:
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2 L_26 = ___1_it;
		int32_t L_27 = L_26.___EntryIndex;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_28 = V_3;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_3;
		int32_t* L_31 = V_1;
		NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2 L_32 = ___1_it;
		int32_t L_33 = L_32.___EntryIndex;
		int32_t L_34 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_34;
	}

IL_007b:
	{
		int32_t* L_35 = V_1;
		NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2 L_36 = ___1_it;
		int32_t L_37 = L_36.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		NullCheck(L_38);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_39 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_38->___firstFreeTLS);
		int32_t* L_40 = (int32_t*)(&L_39->___FixedElementField);
		int32_t L_41 = *((int32_t*)L_40);
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_41;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		NullCheck(L_42);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_43 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_42->___firstFreeTLS);
		int32_t* L_44 = (int32_t*)(&L_43->___FixedElementField);
		NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2 L_45 = ___1_it;
		int32_t L_46 = L_45.___EntryIndex;
		*((int32_t*)L_44) = (int32_t)L_46;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m71C68894BEEB8DDDB97B0AA476C6E18248574039_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint16_t ___1_key, bool* ___2_item, NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2* L_0 = ___3_it;
		uint16_t L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2* L_5 = ___3_it;
		int32_t L_6 = (-1);
		V_2 = L_6;
		L_5->___NextEntryIndex = L_6;
		int32_t L_7 = V_2;
		L_4->___EntryIndex = L_7;
		bool* L_8 = ___2_item;
		il2cpp_codegen_initobj(L_8, sizeof(bool));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___buckets;
		V_0 = (int32_t*)L_10;
		int32_t L_11;
		L_11 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2* L_14 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2* L_15 = ___3_it;
		int32_t* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_15->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_14->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		bool* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m05F0D031F53E92294315C2A2DA4D4B7D31A1A53C(L_21, L_22, L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m05F0D031F53E92294315C2A2DA4D4B7D31A1A53C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, bool* ___1_item, NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	uint16_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		bool* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(bool));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))))));
		V_0 = L_13;
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_15 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___keys;
		int32_t L_20 = V_0;
		uint16_t L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mDA4F2F1FC33E2F2F8CC3E761D626E638762C61E4_inline((void*)L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_2 = L_21;
		NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2* L_22 = ___2_it;
		uint16_t L_23 = L_22->___key;
		bool L_24;
		L_24 = UInt16_Equals_m5673358CCDB7D6E74A6A13C50FC9151F4DD66089((&V_2), L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_24)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2* L_25 = ___2_it;
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))));
		L_25->___NextEntryIndex = L_28;
		NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2* L_29 = ___2_it;
		int32_t L_30 = V_0;
		L_29->___EntryIndex = L_30;
		bool* L_31 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___values;
		int32_t L_34 = V_0;
		bool L_35;
		L_35 = UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_inline((void*)L_33, L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(bool*)L_31 = L_35;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m07A4E98F4DEF1BDF1CC508709AC4C57ADCFCC12A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2* ___1_it, bool* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		bool* L_9 = ___2_item;
		bool L_10 = (*(bool*)L_9);
		UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48259D1BF2B093A901E095965654FE2E58AEF18B_inline((void*)L_7, L_8, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m85335A135F30D08342A8B91096D108EDA4CAE112_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_m5B17B25D0003D3C7E1A8A28A22211E6647DC0D0C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_m6500D6E0CC184EA8282D58E84A80001F4C189688_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_m77982A208086655FACC1A5E8C67299ADB4373C10_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_mB51C71D61F3E8745E84CD57BF33CAB04CF8A1940_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		V_0 = 0;
		goto IL_0051;
	}

IL_0038:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_9 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_8->___firstFreeTLS);
		int32_t* L_10 = (int32_t*)(&L_9->___FixedElementField);
		int32_t L_11 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0051:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)128))))
		{
			goto IL_0038;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		L_14->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m63DBBE5F1D0CF3E4E71A397FC769C0273E58956B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0007:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_3 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_2->___firstFreeTLS);
		int32_t* L_4 = (int32_t*)(&L_3->___FixedElementField);
		int32_t L_5 = ___1_threadIndex;
		int32_t L_6 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)16)))), 4)))));
		V_0 = L_6;
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_018a;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_9 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_8->___firstFreeTLS);
		int32_t* L_10 = (int32_t*)(&L_9->___FixedElementField);
		int32_t L_11 = ___1_threadIndex;
		int32_t L_12;
		L_12 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		int32_t L_14 = L_13->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___keyCapacity;
		if ((((int32_t)L_14) >= ((int32_t)L_16)))
		{
			goto IL_00f4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		int32_t* L_18 = (int32_t*)(&L_17->___allocatedIndexLength);
		int32_t L_19;
		L_19 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_18, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_19, ((int32_t)16)));
		int32_t L_20 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		NullCheck(L_21);
		int32_t L_22 = L_21->___keyCapacity;
		if ((((int32_t)L_20) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_22, 1)))))
		{
			goto IL_00cd;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		int32_t L_24 = L_23->___keyCapacity;
		int32_t L_25 = V_0;
		int32_t L_26;
		L_26 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_24, L_25)), NULL);
		V_3 = L_26;
		V_4 = 1;
		goto IL_0096;
	}

IL_0080:
	{
		int32_t* L_27 = V_1;
		int32_t L_28 = V_0;
		int32_t L_29 = V_4;
		int32_t L_30 = V_0;
		int32_t L_31 = V_4;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_28, L_29))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_30, L_31)), 1));
		int32_t L_32 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0096:
	{
		int32_t L_33 = V_4;
		int32_t L_34 = V_3;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t* L_35 = V_1;
		int32_t L_36 = V_0;
		int32_t L_37 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_36, L_37)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_38 = V_1;
		int32_t L_39 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_40 = ___0_data;
		NullCheck(L_40);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_41 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_40->___firstFreeTLS);
		int32_t* L_42 = (int32_t*)(&L_41->___FixedElementField);
		int32_t L_43 = ___1_threadIndex;
		int32_t L_44 = V_0;
		int32_t L_45;
		L_45 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_42, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_43, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_44, 1)), NULL);
		int32_t L_46 = V_0;
		return L_46;
	}

IL_00cd:
	{
		int32_t L_47 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		NullCheck(L_48);
		int32_t L_49 = L_48->___keyCapacity;
		if ((!(((uint32_t)L_47) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_49, 1))))))
		{
			goto IL_00f4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_50 = ___0_data;
		NullCheck(L_50);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_51 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_50->___firstFreeTLS);
		int32_t* L_52 = (int32_t*)(&L_51->___FixedElementField);
		int32_t L_53 = ___1_threadIndex;
		int32_t L_54;
		L_54 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_53, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_55 = V_0;
		return L_55;
	}

IL_00f4:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_56 = ___0_data;
		NullCheck(L_56);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_57 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_56->___firstFreeTLS);
		int32_t* L_58 = (int32_t*)(&L_57->___FixedElementField);
		int32_t L_59 = ___1_threadIndex;
		int32_t L_60;
		L_60 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_58, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_59, ((int32_t)16)))), 4)))), (-1), NULL);
		V_2 = (bool)1;
		goto IL_0187;
	}

IL_0112:
	{
		V_2 = (bool)0;
		int32_t L_61 = ___1_threadIndex;
		V_5 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_61, 1))%((int32_t)128)));
		goto IL_0182;
	}

IL_0121:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_62 = ___0_data;
		NullCheck(L_62);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_63 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_62->___firstFreeTLS);
		int32_t* L_64 = (int32_t*)(&L_63->___FixedElementField);
		int32_t L_65 = V_5;
		int32_t L_66 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_64, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_65, ((int32_t)16)))), 4)))));
		V_0 = L_66;
		int32_t L_67 = V_0;
		if ((((int32_t)L_67) < ((int32_t)0)))
		{
			goto IL_015f;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_68 = ___0_data;
		NullCheck(L_68);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_69 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_68->___firstFreeTLS);
		int32_t* L_70 = (int32_t*)(&L_69->___FixedElementField);
		int32_t L_71 = V_5;
		int32_t* L_72 = V_1;
		int32_t L_73 = V_0;
		int32_t L_74 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_72, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_73), 4))))));
		int32_t L_75 = V_0;
		int32_t L_76;
		L_76 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((int32_t*)il2cpp_codegen_add((intptr_t)L_70, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_71, ((int32_t)16)))), 4)))), L_74, L_75, NULL);
		int32_t L_77 = V_0;
		if ((!(((uint32_t)L_76) == ((uint32_t)L_77))))
		{
			goto IL_0121;
		}
	}

IL_015f:
	{
		int32_t L_78 = V_0;
		if ((!(((uint32_t)L_78) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0168;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0176;
	}

IL_0168:
	{
		int32_t L_79 = V_0;
		if ((((int32_t)L_79) < ((int32_t)0)))
		{
			goto IL_0176;
		}
	}
	{
		int32_t* L_80 = V_1;
		int32_t L_81 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_80, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_81), 4))))) = (int32_t)(-1);
		int32_t L_82 = V_0;
		return L_82;
	}

IL_0176:
	{
		int32_t L_83 = V_5;
		V_5 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_83, 1))%((int32_t)128)));
	}

IL_0182:
	{
		int32_t L_84 = V_5;
		int32_t L_85 = ___1_threadIndex;
		if ((!(((uint32_t)L_84) == ((uint32_t)L_85))))
		{
			goto IL_0121;
		}
	}

IL_0187:
	{
		bool L_86 = V_2;
		if (L_86)
		{
			goto IL_0112;
		}
	}

IL_018a:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_87 = ___0_data;
		NullCheck(L_87);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_88 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_87->___firstFreeTLS);
		int32_t* L_89 = (int32_t*)(&L_88->___FixedElementField);
		int32_t L_90 = ___1_threadIndex;
		int32_t* L_91 = V_1;
		int32_t L_92 = V_0;
		int32_t L_93 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_91, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_92), 4))))));
		int32_t L_94 = V_0;
		int32_t L_95;
		L_95 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_90, ((int32_t)16)))), 4)))), L_93, L_94, NULL);
		int32_t L_96 = V_0;
		if ((!(((uint32_t)L_95) == ((uint32_t)L_96))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t* L_97 = V_1;
		int32_t L_98 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_97, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_98), 4))))) = (int32_t)(-1);
		int32_t L_99 = V_0;
		return L_99;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m697055E4F65CDAF35B47CA4D836AD8756D26ECB1_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_3 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_2->___firstFreeTLS);
		int32_t* L_4 = (int32_t*)(&L_3->___FixedElementField);
		int32_t L_5 = ___2_threadIndex;
		int32_t L_6 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)16)))), 4)))));
		V_1 = L_6;
		int32_t* L_7 = V_0;
		int32_t L_8 = ___1_idx;
		int32_t L_9 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))) = (int32_t)L_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_11 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_10->___firstFreeTLS);
		int32_t* L_12 = (int32_t*)(&L_11->___FixedElementField);
		int32_t L_13 = ___2_threadIndex;
		int32_t L_14 = ___1_idx;
		int32_t L_15 = V_1;
		int32_t L_16;
		L_16 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_13, ((int32_t)16)))), 4)))), L_14, L_15, NULL);
		int32_t L_17 = V_1;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_mF660E3BC657282BB953413293D5B32A753B1B599_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint16_t ___1_key, uint16_t ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		uint16_t L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mF7C2D655A28FDDEDBC452F2F9FF6884D9F4A8536(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_m63DBBE5F1D0CF3E4E71A397FC769C0273E58956B(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		uint16_t L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mAAF2E6888B17B2E7C3606BE66298D92F589F68C8_inline((void*)L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		uint16_t L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mAAF2E6888B17B2E7C3606BE66298D92F589F68C8_inline((void*)L_11, L_12, L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_14;
		L_14 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		int32_t L_21 = V_2;
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4)))), L_21, (-1), NULL);
		if ((((int32_t)L_22) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_5 = (int32_t*)L_24;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_25 = V_4;
		int32_t L_26 = V_3;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		V_6 = L_27;
		int32_t* L_28 = V_5;
		int32_t L_29 = V_2;
		int32_t L_30 = V_6;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)L_30;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_31 = ___0_data;
		uint16_t L_32 = ___1_key;
		bool L_33;
		L_33 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mF7C2D655A28FDDEDBC452F2F9FF6884D9F4A8536(L_31, L_32, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_33)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		int32_t L_35 = V_2;
		int32_t L_36 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_m697055E4F65CDAF35B47CA4D836AD8756D26ECB1(L_34, L_35, L_36, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_37 = V_4;
		int32_t L_38 = V_3;
		int32_t L_39 = V_2;
		int32_t L_40 = V_6;
		int32_t L_41;
		L_41 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4)))), L_39, L_40, NULL);
		int32_t L_42 = V_6;
		if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_mFEFB7D6B3744E9612EB0F9CBF34F61CA5A72D8C4_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint16_t ___1_key, uint16_t ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_m63DBBE5F1D0CF3E4E71A397FC769C0273E58956B(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		uint16_t L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mAAF2E6888B17B2E7C3606BE66298D92F589F68C8_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		uint16_t L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mAAF2E6888B17B2E7C3606BE66298D92F589F68C8_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_11;
		L_11 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		V_3 = L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))) = (int32_t)L_23;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4)))), L_26, L_27, NULL);
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_mF3548A6ECCC3E2DDF871B2956AD0A5B1630505F1_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint16_t ___1_key, uint16_t ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		uint16_t L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mF7C2D655A28FDDEDBC452F2F9FF6884D9F4A8536(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00de;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_9 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_8->___firstFreeTLS);
		int32_t* L_10 = (int32_t*)(&L_9->___FixedElementField);
		int32_t L_11 = *((int32_t*)L_10);
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_00de;
		}
	}
	{
		V_6 = 1;
		goto IL_00a8;
	}

IL_003a:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_13 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_12->___firstFreeTLS);
		int32_t* L_14 = (int32_t*)(&L_13->___FixedElementField);
		int32_t L_15 = V_6;
		int32_t L_16 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_15, ((int32_t)16)))), 4)))));
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_18 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_17->___firstFreeTLS);
		int32_t* L_19 = (int32_t*)(&L_18->___FixedElementField);
		int32_t L_20 = V_6;
		int32_t L_21 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_20, ((int32_t)16)))), 4)))));
		V_2 = L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		uint8_t* L_23 = L_22->___next;
		V_3 = (int32_t*)L_23;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_24 = ___0_data;
		NullCheck(L_24);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_25 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_24->___firstFreeTLS);
		int32_t* L_26 = (int32_t*)(&L_25->___FixedElementField);
		int32_t L_27 = V_6;
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		int32_t L_30 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_27, ((int32_t)16)))), 4))))) = (int32_t)L_30;
		int32_t* L_31 = V_3;
		int32_t L_32 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_32), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_33 = ___0_data;
		NullCheck(L_33);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_34 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_33->___firstFreeTLS);
		int32_t* L_35 = (int32_t*)(&L_34->___FixedElementField);
		int32_t L_36 = V_2;
		*((int32_t*)L_35) = (int32_t)L_36;
		goto IL_00b1;
	}

IL_00a2:
	{
		int32_t L_37 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00a8:
	{
		int32_t L_38 = V_6;
		if ((((int32_t)L_38) < ((int32_t)((int32_t)128))))
		{
			goto IL_003a;
		}
	}

IL_00b1:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_40 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_39->___firstFreeTLS);
		int32_t* L_41 = (int32_t*)(&L_40->___FixedElementField);
		int32_t L_42 = *((int32_t*)L_41);
		if ((((int32_t)L_42) >= ((int32_t)0)))
		{
			goto IL_00de;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_43 = ___0_data;
		NullCheck(L_43);
		int32_t L_44 = L_43->___keyCapacity;
		int32_t L_45;
		L_45 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_44, NULL);
		V_7 = L_45;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		int32_t L_47 = V_7;
		int32_t L_48 = V_7;
		int32_t L_49;
		L_49 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_48, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_50 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m5D5FCCD2BBA4128F359F83BEBC38E64EB9450B43(L_46, L_47, L_49, L_50, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00de:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		NullCheck(L_51);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_52 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_51->___firstFreeTLS);
		int32_t* L_53 = (int32_t*)(&L_52->___FixedElementField);
		int32_t L_54 = *((int32_t*)L_53);
		V_2 = L_54;
		int32_t L_55 = V_2;
		if ((((int32_t)L_55) < ((int32_t)0)))
		{
			goto IL_0109;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_56 = ___0_data;
		NullCheck(L_56);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_57 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_56->___firstFreeTLS);
		int32_t* L_58 = (int32_t*)(&L_57->___FixedElementField);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_59 = ___0_data;
		NullCheck(L_59);
		uint8_t* L_60 = L_59->___next;
		int32_t L_61 = V_2;
		int32_t L_62 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_60, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_61), 4)))));
		*((int32_t*)L_58) = (int32_t)L_62;
		goto IL_011b;
	}

IL_0109:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		int32_t* L_64 = (int32_t*)(&L_63->___allocatedIndexLength);
		int32_t* L_65 = L_64;
		int32_t L_66 = *((int32_t*)L_65);
		V_8 = L_66;
		int32_t L_67 = V_8;
		*((int32_t*)L_65) = (int32_t)((int32_t)il2cpp_codegen_add(L_67, 1));
		int32_t L_68 = V_8;
		V_2 = L_68;
	}

IL_011b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_69 = ___0_data;
		NullCheck(L_69);
		uint8_t* L_70 = L_69->___keys;
		int32_t L_71 = V_2;
		uint16_t L_72 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mAAF2E6888B17B2E7C3606BE66298D92F589F68C8_inline((void*)L_70, L_71, L_72, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_73 = ___0_data;
		NullCheck(L_73);
		uint8_t* L_74 = L_73->___values;
		int32_t L_75 = V_2;
		uint16_t L_76 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mAAF2E6888B17B2E7C3606BE66298D92F589F68C8_inline((void*)L_74, L_75, L_76, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_77;
		L_77 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_78 = ___0_data;
		NullCheck(L_78);
		int32_t L_79 = L_78->___bucketCapacityMask;
		V_4 = ((int32_t)(L_77&L_79));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_80 = ___0_data;
		NullCheck(L_80);
		uint8_t* L_81 = L_80->___buckets;
		V_5 = (int32_t*)L_81;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_82 = ___0_data;
		NullCheck(L_82);
		uint8_t* L_83 = L_82->___next;
		V_3 = (int32_t*)L_83;
		int32_t* L_84 = V_3;
		int32_t L_85 = V_2;
		int32_t* L_86 = V_5;
		int32_t L_87 = V_4;
		int32_t L_88 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_87), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_84, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_85), 4))))) = (int32_t)L_88;
		int32_t* L_89 = V_5;
		int32_t L_90 = V_4;
		int32_t L_91 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_90), 4))))) = (int32_t)L_91;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m8675856C941DA9CEDAB8A180E8610CF675E2A7E5_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint16_t ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint16_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		int32_t L_6;
		L_6 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		int32_t L_11 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), 4))))));
		V_5 = L_11;
		goto IL_00c8;
	}

IL_0040:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_5;
		uint16_t L_15;
		L_15 = UnsafeUtility_ReadArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mDA4F2F1FC33E2F2F8CC3E761D626E638762C61E4_inline((void*)L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_15;
		uint16_t L_16 = ___1_key;
		bool L_17;
		L_17 = UInt16_Equals_m5673358CCDB7D6E74A6A13C50FC9151F4DD66089((&V_6), L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_17)
		{
			goto IL_00ba;
		}
	}
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t* L_22 = V_2;
		int32_t L_23 = V_5;
		int32_t L_24 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))) = (int32_t)L_24;
		goto IL_0089;
	}

IL_0079:
	{
		int32_t* L_25 = V_2;
		int32_t L_26 = V_4;
		int32_t* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))) = (int32_t)L_29;
	}

IL_0089:
	{
		int32_t* L_30 = V_2;
		int32_t L_31 = V_5;
		int32_t L_32 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))));
		int32_t* L_33 = V_2;
		int32_t L_34 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		NullCheck(L_35);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_36 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_35->___firstFreeTLS);
		int32_t* L_37 = (int32_t*)(&L_36->___FixedElementField);
		int32_t L_38 = *((int32_t*)L_37);
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))) = (int32_t)L_38;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_40 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_39->___firstFreeTLS);
		int32_t* L_41 = (int32_t*)(&L_40->___FixedElementField);
		int32_t L_42 = V_5;
		*((int32_t*)L_41) = (int32_t)L_42;
		V_5 = L_32;
		bool L_43 = ___2_isMultiHashMap;
		if (L_43)
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_00da;
	}

IL_00ba:
	{
		int32_t L_44 = V_5;
		V_4 = L_44;
		int32_t* L_45 = V_2;
		int32_t L_46 = V_5;
		int32_t L_47 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_45, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_46), 4))))));
		V_5 = L_47;
	}

IL_00c8:
	{
		int32_t L_48 = V_5;
		if ((((int32_t)L_48) < ((int32_t)0)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_49 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_50 = ___0_data;
		NullCheck(L_50);
		int32_t L_51 = L_50->___keyCapacity;
		if ((((int32_t)L_49) < ((int32_t)L_51)))
		{
			goto IL_0040;
		}
	}

IL_00da:
	{
		int32_t L_52 = V_0;
		return L_52;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_mEACE810CD813E07A65EB629D0173A69B892A800A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2 ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		uint16_t* L_4 = (uint16_t*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2 L_12 = ___1_it;
		int32_t L_13 = L_12.___EntryIndex;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t* L_16 = V_1;
		int32_t L_17 = V_3;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4))))) = (int32_t)L_18;
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
	}

IL_0051:
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2 L_26 = ___1_it;
		int32_t L_27 = L_26.___EntryIndex;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_28 = V_3;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_3;
		int32_t* L_31 = V_1;
		NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2 L_32 = ___1_it;
		int32_t L_33 = L_32.___EntryIndex;
		int32_t L_34 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_34;
	}

IL_007b:
	{
		int32_t* L_35 = V_1;
		NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2 L_36 = ___1_it;
		int32_t L_37 = L_36.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		NullCheck(L_38);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_39 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_38->___firstFreeTLS);
		int32_t* L_40 = (int32_t*)(&L_39->___FixedElementField);
		int32_t L_41 = *((int32_t*)L_40);
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_41;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		NullCheck(L_42);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_43 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_42->___firstFreeTLS);
		int32_t* L_44 = (int32_t*)(&L_43->___FixedElementField);
		NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2 L_45 = ___1_it;
		int32_t L_46 = L_45.___EntryIndex;
		*((int32_t*)L_44) = (int32_t)L_46;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mF7C2D655A28FDDEDBC452F2F9FF6884D9F4A8536_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint16_t ___1_key, uint16_t* ___2_item, NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2* L_0 = ___3_it;
		uint16_t L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2* L_5 = ___3_it;
		int32_t L_6 = (-1);
		V_2 = L_6;
		L_5->___NextEntryIndex = L_6;
		int32_t L_7 = V_2;
		L_4->___EntryIndex = L_7;
		uint16_t* L_8 = ___2_item;
		il2cpp_codegen_initobj(L_8, sizeof(uint16_t));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___buckets;
		V_0 = (int32_t*)L_10;
		int32_t L_11;
		L_11 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2* L_14 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2* L_15 = ___3_it;
		int32_t* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_15->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_14->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		uint16_t* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m2812F8A132CF6325036FB90A272E528EAFC6B98A(L_21, L_22, L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m2812F8A132CF6325036FB90A272E528EAFC6B98A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint16_t* ___1_item, NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	uint16_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		uint16_t* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(uint16_t));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))))));
		V_0 = L_13;
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_15 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___keys;
		int32_t L_20 = V_0;
		uint16_t L_21;
		L_21 = UnsafeUtility_ReadArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mDA4F2F1FC33E2F2F8CC3E761D626E638762C61E4_inline((void*)L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_2 = L_21;
		NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2* L_22 = ___2_it;
		uint16_t L_23 = L_22->___key;
		bool L_24;
		L_24 = UInt16_Equals_m5673358CCDB7D6E74A6A13C50FC9151F4DD66089((&V_2), L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_24)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2* L_25 = ___2_it;
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))));
		L_25->___NextEntryIndex = L_28;
		NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2* L_29 = ___2_it;
		int32_t L_30 = V_0;
		L_29->___EntryIndex = L_30;
		uint16_t* L_31 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___values;
		int32_t L_34 = V_0;
		uint16_t L_35;
		L_35 = UnsafeUtility_ReadArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mDA4F2F1FC33E2F2F8CC3E761D626E638762C61E4_inline((void*)L_33, L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(uint16_t*)L_31 = L_35;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m6C742A446280272835D531FF92D0058A5238A222_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2* ___1_it, uint16_t* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t195F34E090E61B87BB9C4AB2302E82D6F54103A2* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		uint16_t* L_9 = ___2_item;
		uint16_t L_10 = (*(uint16_t*)L_9);
		UnsafeUtility_WriteArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mAAF2E6888B17B2E7C3606BE66298D92F589F68C8_inline((void*)L_7, L_8, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m6F7D92704850484BF34929DD0837755057200A8A_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_m67FFCC8B97A80EFCB9E1C81E162152E2DA928A1E_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_m4A01EC0E4CEDCF21C1E0D67E00B80D05E36966F4_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_m1932A1CDF431D327B43995493259A00E9A8ECF02_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_m6EE55875D60EFEB4879AF8FF0E362DCC68B50EBB_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		V_0 = 0;
		goto IL_0051;
	}

IL_0038:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_9 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_8->___firstFreeTLS);
		int32_t* L_10 = (int32_t*)(&L_9->___FixedElementField);
		int32_t L_11 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0051:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)128))))
		{
			goto IL_0038;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		L_14->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m3E2610CA343A7226FECF5B6CE365718FC66DF071_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0007:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_3 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_2->___firstFreeTLS);
		int32_t* L_4 = (int32_t*)(&L_3->___FixedElementField);
		int32_t L_5 = ___1_threadIndex;
		int32_t L_6 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)16)))), 4)))));
		V_0 = L_6;
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_018a;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_9 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_8->___firstFreeTLS);
		int32_t* L_10 = (int32_t*)(&L_9->___FixedElementField);
		int32_t L_11 = ___1_threadIndex;
		int32_t L_12;
		L_12 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		int32_t L_14 = L_13->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___keyCapacity;
		if ((((int32_t)L_14) >= ((int32_t)L_16)))
		{
			goto IL_00f4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		int32_t* L_18 = (int32_t*)(&L_17->___allocatedIndexLength);
		int32_t L_19;
		L_19 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_18, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_19, ((int32_t)16)));
		int32_t L_20 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		NullCheck(L_21);
		int32_t L_22 = L_21->___keyCapacity;
		if ((((int32_t)L_20) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_22, 1)))))
		{
			goto IL_00cd;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		int32_t L_24 = L_23->___keyCapacity;
		int32_t L_25 = V_0;
		int32_t L_26;
		L_26 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_24, L_25)), NULL);
		V_3 = L_26;
		V_4 = 1;
		goto IL_0096;
	}

IL_0080:
	{
		int32_t* L_27 = V_1;
		int32_t L_28 = V_0;
		int32_t L_29 = V_4;
		int32_t L_30 = V_0;
		int32_t L_31 = V_4;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_28, L_29))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_30, L_31)), 1));
		int32_t L_32 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0096:
	{
		int32_t L_33 = V_4;
		int32_t L_34 = V_3;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t* L_35 = V_1;
		int32_t L_36 = V_0;
		int32_t L_37 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_36, L_37)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_38 = V_1;
		int32_t L_39 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_40 = ___0_data;
		NullCheck(L_40);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_41 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_40->___firstFreeTLS);
		int32_t* L_42 = (int32_t*)(&L_41->___FixedElementField);
		int32_t L_43 = ___1_threadIndex;
		int32_t L_44 = V_0;
		int32_t L_45;
		L_45 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_42, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_43, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_44, 1)), NULL);
		int32_t L_46 = V_0;
		return L_46;
	}

IL_00cd:
	{
		int32_t L_47 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		NullCheck(L_48);
		int32_t L_49 = L_48->___keyCapacity;
		if ((!(((uint32_t)L_47) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_49, 1))))))
		{
			goto IL_00f4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_50 = ___0_data;
		NullCheck(L_50);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_51 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_50->___firstFreeTLS);
		int32_t* L_52 = (int32_t*)(&L_51->___FixedElementField);
		int32_t L_53 = ___1_threadIndex;
		int32_t L_54;
		L_54 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_53, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_55 = V_0;
		return L_55;
	}

IL_00f4:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_56 = ___0_data;
		NullCheck(L_56);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_57 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_56->___firstFreeTLS);
		int32_t* L_58 = (int32_t*)(&L_57->___FixedElementField);
		int32_t L_59 = ___1_threadIndex;
		int32_t L_60;
		L_60 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_58, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_59, ((int32_t)16)))), 4)))), (-1), NULL);
		V_2 = (bool)1;
		goto IL_0187;
	}

IL_0112:
	{
		V_2 = (bool)0;
		int32_t L_61 = ___1_threadIndex;
		V_5 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_61, 1))%((int32_t)128)));
		goto IL_0182;
	}

IL_0121:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_62 = ___0_data;
		NullCheck(L_62);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_63 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_62->___firstFreeTLS);
		int32_t* L_64 = (int32_t*)(&L_63->___FixedElementField);
		int32_t L_65 = V_5;
		int32_t L_66 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_64, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_65, ((int32_t)16)))), 4)))));
		V_0 = L_66;
		int32_t L_67 = V_0;
		if ((((int32_t)L_67) < ((int32_t)0)))
		{
			goto IL_015f;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_68 = ___0_data;
		NullCheck(L_68);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_69 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_68->___firstFreeTLS);
		int32_t* L_70 = (int32_t*)(&L_69->___FixedElementField);
		int32_t L_71 = V_5;
		int32_t* L_72 = V_1;
		int32_t L_73 = V_0;
		int32_t L_74 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_72, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_73), 4))))));
		int32_t L_75 = V_0;
		int32_t L_76;
		L_76 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((int32_t*)il2cpp_codegen_add((intptr_t)L_70, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_71, ((int32_t)16)))), 4)))), L_74, L_75, NULL);
		int32_t L_77 = V_0;
		if ((!(((uint32_t)L_76) == ((uint32_t)L_77))))
		{
			goto IL_0121;
		}
	}

IL_015f:
	{
		int32_t L_78 = V_0;
		if ((!(((uint32_t)L_78) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0168;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0176;
	}

IL_0168:
	{
		int32_t L_79 = V_0;
		if ((((int32_t)L_79) < ((int32_t)0)))
		{
			goto IL_0176;
		}
	}
	{
		int32_t* L_80 = V_1;
		int32_t L_81 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_80, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_81), 4))))) = (int32_t)(-1);
		int32_t L_82 = V_0;
		return L_82;
	}

IL_0176:
	{
		int32_t L_83 = V_5;
		V_5 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_83, 1))%((int32_t)128)));
	}

IL_0182:
	{
		int32_t L_84 = V_5;
		int32_t L_85 = ___1_threadIndex;
		if ((!(((uint32_t)L_84) == ((uint32_t)L_85))))
		{
			goto IL_0121;
		}
	}

IL_0187:
	{
		bool L_86 = V_2;
		if (L_86)
		{
			goto IL_0112;
		}
	}

IL_018a:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_87 = ___0_data;
		NullCheck(L_87);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_88 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_87->___firstFreeTLS);
		int32_t* L_89 = (int32_t*)(&L_88->___FixedElementField);
		int32_t L_90 = ___1_threadIndex;
		int32_t* L_91 = V_1;
		int32_t L_92 = V_0;
		int32_t L_93 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_91, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_92), 4))))));
		int32_t L_94 = V_0;
		int32_t L_95;
		L_95 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_90, ((int32_t)16)))), 4)))), L_93, L_94, NULL);
		int32_t L_96 = V_0;
		if ((!(((uint32_t)L_95) == ((uint32_t)L_96))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t* L_97 = V_1;
		int32_t L_98 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_97, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_98), 4))))) = (int32_t)(-1);
		int32_t L_99 = V_0;
		return L_99;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_mCFD0DA8ADF441A1780C2CAE61417C094BF86B93E_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_3 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_2->___firstFreeTLS);
		int32_t* L_4 = (int32_t*)(&L_3->___FixedElementField);
		int32_t L_5 = ___2_threadIndex;
		int32_t L_6 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)16)))), 4)))));
		V_1 = L_6;
		int32_t* L_7 = V_0;
		int32_t L_8 = ___1_idx;
		int32_t L_9 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))) = (int32_t)L_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_11 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_10->___firstFreeTLS);
		int32_t* L_12 = (int32_t*)(&L_11->___FixedElementField);
		int32_t L_13 = ___2_threadIndex;
		int32_t L_14 = ___1_idx;
		int32_t L_15 = V_1;
		int32_t L_16;
		L_16 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_13, ((int32_t)16)))), 4)))), L_14, L_15, NULL);
		int32_t L_17 = V_1;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_mCAE3A74A5AB042537557D83CCB3C4B27F509B19C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Il2CppFullySharedGenericStruct ___1_key, Il2CppFullySharedGenericStruct ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
	const uint32_t SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11));
	const uint32_t SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	void* L_14 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	const Il2CppFullySharedGenericStruct L_9 = L_1;
	const Il2CppFullySharedGenericStruct L_33 = L_1;
	const Il2CppFullySharedGenericStruct L_13 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	memset(V_0, 0, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 V_1 = alloca(SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
	memset(V_1, 0, SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		il2cpp_codegen_memcpy(L_1, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		bool L_2;
		L_2 = InvokerFuncInvoker4< bool, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct*, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1), NULL, L_0, L_1, (Il2CppFullySharedGenericStruct*)V_0, (NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51*)V_1);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		il2cpp_codegen_memcpy(L_9, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6), NULL, (void*)L_7, L_8, L_9);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		il2cpp_codegen_memcpy(L_13, ___2_item, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), NULL, (void*)L_11, L_12, L_13);
		int32_t L_15;
		L_15 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_14, (void*)(Il2CppFullySharedGenericStruct*)___1_key);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___bucketCapacityMask;
		V_3 = ((int32_t)(L_15&L_17));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___buckets;
		V_4 = (int32_t*)L_19;
		int32_t* L_20 = V_4;
		int32_t L_21 = V_3;
		int32_t L_22 = V_2;
		int32_t L_23;
		L_23 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4)))), L_22, (-1), NULL);
		if ((((int32_t)L_23) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_24 = ___0_data;
		NullCheck(L_24);
		uint8_t* L_25 = L_24->___next;
		V_5 = (int32_t*)L_25;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_26 = V_4;
		int32_t L_27 = V_3;
		int32_t L_28 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))));
		V_6 = L_28;
		int32_t* L_29 = V_5;
		int32_t L_30 = V_2;
		int32_t L_31 = V_6;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_31;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		il2cpp_codegen_memcpy(L_33, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		bool L_34;
		L_34 = InvokerFuncInvoker4< bool, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct*, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1), NULL, L_32, L_33, (Il2CppFullySharedGenericStruct*)V_0, (NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51*)V_1);
		if (!L_34)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		int32_t L_36 = V_2;
		int32_t L_37 = ___3_threadIndex;
		((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10)))(L_35, L_36, L_37, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_38 = V_4;
		int32_t L_39 = V_3;
		int32_t L_40 = V_2;
		int32_t L_41 = V_6;
		int32_t L_42;
		L_42 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4)))), L_40, L_41, NULL);
		int32_t L_43 = V_6;
		if ((!(((uint32_t)L_42) == ((uint32_t)L_43))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m943307074EE293074937D7AE27E1745AA05FE78E_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Il2CppFullySharedGenericStruct ___1_key, Il2CppFullySharedGenericStruct ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	const Il2CppFullySharedGenericStruct L_6 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		il2cpp_codegen_memcpy(L_6, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6), NULL, (void*)L_4, L_5, L_6);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		il2cpp_codegen_memcpy(L_10, ___2_item, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), NULL, (void*)L_8, L_9, L_10);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_11, (void*)(Il2CppFullySharedGenericStruct*)___1_key);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		int32_t L_14 = L_13->___bucketCapacityMask;
		V_1 = ((int32_t)(L_12&L_14));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		uint8_t* L_16 = L_15->___buckets;
		V_2 = (int32_t*)L_16;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___next;
		V_4 = (int32_t*)L_18;
	}

IL_0046:
	{
		int32_t* L_19 = V_2;
		int32_t L_20 = V_1;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
		int32_t* L_22 = V_4;
		int32_t L_23 = V_0;
		int32_t L_24 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))) = (int32_t)L_24;
		int32_t* L_25 = V_2;
		int32_t L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = V_3;
		int32_t L_29;
		L_29 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4)))), L_27, L_28, NULL);
		int32_t L_30 = V_3;
		if ((!(((uint32_t)L_29) == ((uint32_t)L_30))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m6F349BA91ED50CB53221A30136FCD2F0D0A2922B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Il2CppFullySharedGenericStruct ___1_key, Il2CppFullySharedGenericStruct ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
	const uint32_t SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11));
	const uint32_t SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	void* L_77 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	const Il2CppFullySharedGenericStruct L_72 = L_2;
	const Il2CppFullySharedGenericStruct L_76 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	memset(V_0, 0, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 V_1 = alloca(SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
	memset(V_1, 0, SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		il2cpp_codegen_memcpy(L_2, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		bool L_3;
		L_3 = InvokerFuncInvoker4< bool, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct*, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1), NULL, L_1, L_2, (Il2CppFullySharedGenericStruct*)V_0, (NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51*)V_1);
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00de;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_9 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_8->___firstFreeTLS);
		int32_t* L_10 = (int32_t*)(&L_9->___FixedElementField);
		int32_t L_11 = *((int32_t*)L_10);
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_00de;
		}
	}
	{
		V_6 = 1;
		goto IL_00a8;
	}

IL_003a:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_13 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_12->___firstFreeTLS);
		int32_t* L_14 = (int32_t*)(&L_13->___FixedElementField);
		int32_t L_15 = V_6;
		int32_t L_16 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_15, ((int32_t)16)))), 4)))));
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_18 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_17->___firstFreeTLS);
		int32_t* L_19 = (int32_t*)(&L_18->___FixedElementField);
		int32_t L_20 = V_6;
		int32_t L_21 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_20, ((int32_t)16)))), 4)))));
		V_2 = L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		uint8_t* L_23 = L_22->___next;
		V_3 = (int32_t*)L_23;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_24 = ___0_data;
		NullCheck(L_24);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_25 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_24->___firstFreeTLS);
		int32_t* L_26 = (int32_t*)(&L_25->___FixedElementField);
		int32_t L_27 = V_6;
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		int32_t L_30 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_27, ((int32_t)16)))), 4))))) = (int32_t)L_30;
		int32_t* L_31 = V_3;
		int32_t L_32 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_32), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_33 = ___0_data;
		NullCheck(L_33);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_34 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_33->___firstFreeTLS);
		int32_t* L_35 = (int32_t*)(&L_34->___FixedElementField);
		int32_t L_36 = V_2;
		*((int32_t*)L_35) = (int32_t)L_36;
		goto IL_00b1;
	}

IL_00a2:
	{
		int32_t L_37 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00a8:
	{
		int32_t L_38 = V_6;
		if ((((int32_t)L_38) < ((int32_t)((int32_t)128))))
		{
			goto IL_003a;
		}
	}

IL_00b1:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_40 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_39->___firstFreeTLS);
		int32_t* L_41 = (int32_t*)(&L_40->___FixedElementField);
		int32_t L_42 = *((int32_t*)L_41);
		if ((((int32_t)L_42) >= ((int32_t)0)))
		{
			goto IL_00de;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_43 = ___0_data;
		NullCheck(L_43);
		int32_t L_44 = L_43->___keyCapacity;
		int32_t L_45;
		L_45 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_44, NULL);
		V_7 = L_45;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		int32_t L_47 = V_7;
		int32_t L_48 = V_7;
		int32_t L_49;
		L_49 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_48, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_50 = ___4_allocation;
		((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_46, L_47, L_49, L_50, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00de:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		NullCheck(L_51);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_52 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_51->___firstFreeTLS);
		int32_t* L_53 = (int32_t*)(&L_52->___FixedElementField);
		int32_t L_54 = *((int32_t*)L_53);
		V_2 = L_54;
		int32_t L_55 = V_2;
		if ((((int32_t)L_55) < ((int32_t)0)))
		{
			goto IL_0109;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_56 = ___0_data;
		NullCheck(L_56);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_57 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_56->___firstFreeTLS);
		int32_t* L_58 = (int32_t*)(&L_57->___FixedElementField);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_59 = ___0_data;
		NullCheck(L_59);
		uint8_t* L_60 = L_59->___next;
		int32_t L_61 = V_2;
		int32_t L_62 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_60, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_61), 4)))));
		*((int32_t*)L_58) = (int32_t)L_62;
		goto IL_011b;
	}

IL_0109:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		int32_t* L_64 = (int32_t*)(&L_63->___allocatedIndexLength);
		int32_t* L_65 = L_64;
		int32_t L_66 = *((int32_t*)L_65);
		V_8 = L_66;
		int32_t L_67 = V_8;
		*((int32_t*)L_65) = (int32_t)((int32_t)il2cpp_codegen_add(L_67, 1));
		int32_t L_68 = V_8;
		V_2 = L_68;
	}

IL_011b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_69 = ___0_data;
		NullCheck(L_69);
		uint8_t* L_70 = L_69->___keys;
		int32_t L_71 = V_2;
		il2cpp_codegen_memcpy(L_72, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6), NULL, (void*)L_70, L_71, L_72);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_73 = ___0_data;
		NullCheck(L_73);
		uint8_t* L_74 = L_73->___values;
		int32_t L_75 = V_2;
		il2cpp_codegen_memcpy(L_76, ___2_item, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), NULL, (void*)L_74, L_75, L_76);
		int32_t L_78;
		L_78 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_77, (void*)(Il2CppFullySharedGenericStruct*)___1_key);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		V_4 = ((int32_t)(L_78&L_80));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___buckets;
		V_5 = (int32_t*)L_82;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_83 = ___0_data;
		NullCheck(L_83);
		uint8_t* L_84 = L_83->___next;
		V_3 = (int32_t*)L_84;
		int32_t* L_85 = V_3;
		int32_t L_86 = V_2;
		int32_t* L_87 = V_5;
		int32_t L_88 = V_4;
		int32_t L_89 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_87, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_88), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_85, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_86), 4))))) = (int32_t)L_89;
		int32_t* L_90 = V_5;
		int32_t L_91 = V_4;
		int32_t L_92 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_90, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_91), 4))))) = (int32_t)L_92;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m6648F1C82F87EE0C1EC2361356969E1893FF4EAC_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Il2CppFullySharedGenericStruct ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	void* L_6 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	void* L_18 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	const Il2CppFullySharedGenericStruct L_16 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	const Il2CppFullySharedGenericStruct L_17 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Il2CppFullySharedGenericStruct V_6 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	memset(V_6, 0, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		int32_t L_7;
		L_7 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_6, (void*)(Il2CppFullySharedGenericStruct*)___1_key);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		int32_t L_9 = L_8->___bucketCapacityMask;
		V_3 = ((int32_t)(L_7&L_9));
		V_4 = (-1);
		int32_t* L_10 = V_1;
		int32_t L_11 = V_3;
		int32_t L_12 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), 4))))));
		V_5 = L_12;
		goto IL_00c8;
	}

IL_0040:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		uint8_t* L_14 = L_13->___keys;
		int32_t L_15 = V_5;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13), NULL, (void*)L_14, L_15, (Il2CppFullySharedGenericStruct*)L_16);
		il2cpp_codegen_memcpy(V_6, L_16, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		il2cpp_codegen_memcpy(L_17, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		bool L_19;
		L_19 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15), L_18, (void*)(Il2CppFullySharedGenericStruct*)V_6, L_17);
		if (!L_19)
		{
			goto IL_00ba;
		}
	}
	{
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		int32_t L_21 = V_4;
		if ((((int32_t)L_21) >= ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		int32_t* L_22 = V_1;
		int32_t L_23 = V_3;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_5;
		int32_t L_26 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))) = (int32_t)L_26;
		goto IL_0089;
	}

IL_0079:
	{
		int32_t* L_27 = V_2;
		int32_t L_28 = V_4;
		int32_t* L_29 = V_2;
		int32_t L_30 = V_5;
		int32_t L_31 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))) = (int32_t)L_31;
	}

IL_0089:
	{
		int32_t* L_32 = V_2;
		int32_t L_33 = V_5;
		int32_t L_34 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_32, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))));
		int32_t* L_35 = V_2;
		int32_t L_36 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		NullCheck(L_37);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_38 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_37->___firstFreeTLS);
		int32_t* L_39 = (int32_t*)(&L_38->___FixedElementField);
		int32_t L_40 = *((int32_t*)L_39);
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_36), 4))))) = (int32_t)L_40;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		NullCheck(L_41);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_42 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_41->___firstFreeTLS);
		int32_t* L_43 = (int32_t*)(&L_42->___FixedElementField);
		int32_t L_44 = V_5;
		*((int32_t*)L_43) = (int32_t)L_44;
		V_5 = L_34;
		bool L_45 = ___2_isMultiHashMap;
		if (L_45)
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_00da;
	}

IL_00ba:
	{
		int32_t L_46 = V_5;
		V_4 = L_46;
		int32_t* L_47 = V_2;
		int32_t L_48 = V_5;
		int32_t L_49 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_47, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_48), 4))))));
		V_5 = L_49;
	}

IL_00c8:
	{
		int32_t L_50 = V_5;
		if ((((int32_t)L_50) < ((int32_t)0)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_51 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_52 = ___0_data;
		NullCheck(L_52);
		int32_t L_53 = L_52->___keyCapacity;
		if ((((int32_t)L_51) < ((int32_t)L_53)))
		{
			goto IL_0040;
		}
	}

IL_00da:
	{
		int32_t L_54 = V_0;
		return L_54;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_m8BAE6A94FC57AB2FD13A4FD8729670F270544F06_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 ___1_it, const RuntimeMethod* method) 
{
	void* L_4 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	const uint32_t SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11));
	const NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 L_12 = alloca(SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
	const NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 L_26 = L_12;
	const NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 L_32 = L_12;
	const NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 L_36 = L_12;
	const NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 L_45 = alloca(SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		int32_t L_5;
		L_5 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_4, (void*)(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_instance_field_data_pointer((NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51*)___1_it, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),0)))));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		il2cpp_codegen_memcpy(L_12, ___1_it, SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
		int32_t L_13 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),2));
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t* L_16 = V_1;
		int32_t L_17 = V_3;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4))))) = (int32_t)L_18;
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
	}

IL_0051:
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		il2cpp_codegen_memcpy(L_26, ___1_it, SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
		int32_t L_27 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_26, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),2));
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_28 = V_3;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_3;
		int32_t* L_31 = V_1;
		il2cpp_codegen_memcpy(L_32, ___1_it, SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
		int32_t L_33 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_32, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),2));
		int32_t L_34 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_34;
	}

IL_007b:
	{
		int32_t* L_35 = V_1;
		il2cpp_codegen_memcpy(L_36, ___1_it, SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
		int32_t L_37 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_36, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),2));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		NullCheck(L_38);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_39 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_38->___firstFreeTLS);
		int32_t* L_40 = (int32_t*)(&L_39->___FixedElementField);
		int32_t L_41 = *((int32_t*)L_40);
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_41;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		NullCheck(L_42);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_43 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_42->___firstFreeTLS);
		int32_t* L_44 = (int32_t*)(&L_43->___FixedElementField);
		il2cpp_codegen_memcpy(L_45, ___1_it, SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
		int32_t L_46 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_45, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),2));
		*((int32_t*)L_44) = (int32_t)L_46;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mB16D13831106B0DC2EF2AD361743D9FC6597B1DA_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Il2CppFullySharedGenericStruct ___1_key, Il2CppFullySharedGenericStruct* ___2_item, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* ___3_it, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_0 = ___3_it;
		il2cpp_codegen_memcpy(L_1, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		il2cpp_codegen_write_instance_field_data(L_0, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),0), L_1, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_5 = ___3_it;
		int32_t L_6 = (-1);
		V_2 = L_6;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),1), L_6);
		int32_t L_7 = V_2;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),2), L_7);
		Il2CppFullySharedGenericStruct* L_8 = ___2_item;
		il2cpp_codegen_initobj(L_8, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___buckets;
		V_0 = (int32_t*)L_10;
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_11, (void*)(Il2CppFullySharedGenericStruct*)___1_key);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		int32_t L_14 = L_13->___bucketCapacityMask;
		V_1 = ((int32_t)(L_12&L_14));
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_15 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_16 = ___3_it;
		int32_t* L_17 = V_0;
		int32_t L_18 = V_1;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_18), 4))))));
		int32_t L_20 = L_19;
		V_2 = L_20;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),1), L_20);
		int32_t L_21 = V_2;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_15, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),2), L_21);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		Il2CppFullySharedGenericStruct* L_23 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_24 = ___3_it;
		bool L_25;
		L_25 = ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, Il2CppFullySharedGenericStruct*, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16)))(L_22, L_23, L_24, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_25;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m02842BF5ACFFDD0CC5E0C86B2A523A797D5B0477_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Il2CppFullySharedGenericStruct* ___1_item, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* ___2_it, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
	void* L_24 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	const Il2CppFullySharedGenericStruct L_21 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	const Il2CppFullySharedGenericStruct L_23 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	const Il2CppFullySharedGenericStruct L_36 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	memset(V_2, 0, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	{
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_0 = ___2_it;
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_0, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),1));
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_2 = ___2_it;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),1), (-1));
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_3 = ___2_it;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),2), (-1));
		Il2CppFullySharedGenericStruct* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))))));
		V_0 = L_13;
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_15 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___keys;
		int32_t L_20 = V_0;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13), NULL, (void*)L_19, L_20, (Il2CppFullySharedGenericStruct*)L_21);
		il2cpp_codegen_memcpy(V_2, L_21, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_22 = ___2_it;
		il2cpp_codegen_memcpy(L_23, il2cpp_codegen_get_instance_field_data_pointer(L_22, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),0)), SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		bool L_25;
		L_25 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15), L_24, (void*)(Il2CppFullySharedGenericStruct*)V_2, L_23);
		if (!L_25)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_26 = ___2_it;
		int32_t* L_27 = V_1;
		int32_t L_28 = V_0;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		il2cpp_codegen_write_instance_field_data<int32_t>(L_26, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),1), L_29);
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_30 = ___2_it;
		int32_t L_31 = V_0;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_30, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),2), L_31);
		Il2CppFullySharedGenericStruct* L_32 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_33 = ___0_data;
		NullCheck(L_33);
		uint8_t* L_34 = L_33->___values;
		int32_t L_35 = V_0;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17), NULL, (void*)L_34, L_35, (Il2CppFullySharedGenericStruct*)L_36);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_32, L_36, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), (void**)(Il2CppFullySharedGenericStruct*)L_32, (void*)L_36);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m557C0D5801C035501701C60FE81775298FDD76A5_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* ___1_it, Il2CppFullySharedGenericStruct* ___2_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_0 = ___1_it;
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_0, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),2));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		Il2CppFullySharedGenericStruct* L_9 = ___2_item;
		il2cpp_codegen_memcpy(L_10, L_9, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), NULL, (void*)L_7, L_8, L_10);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m38D20A847D6996E7C118E952524DEE9592A2B629_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_mFE0B2263ABF50F3C1DD001FF39C0D0DC181DD163_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_mE68740A5B03A3A069612808990A947A3C61FCDE0_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_m01EFA9C0C2C6B2994ED33A385814CC4C0FF28B19_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_mF630FCE7949E40FA7E524673B29B778DE44E01C4_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		V_0 = 0;
		goto IL_0051;
	}

IL_0038:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_9 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_8->___firstFreeTLS);
		int32_t* L_10 = (int32_t*)(&L_9->___FixedElementField);
		int32_t L_11 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0051:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)128))))
		{
			goto IL_0038;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		L_14->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_mC9ADFD6E70310E8EA90D081699FE7BC3853900F0_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0007:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_3 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_2->___firstFreeTLS);
		int32_t* L_4 = (int32_t*)(&L_3->___FixedElementField);
		int32_t L_5 = ___1_threadIndex;
		int32_t L_6 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)16)))), 4)))));
		V_0 = L_6;
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_018a;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_9 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_8->___firstFreeTLS);
		int32_t* L_10 = (int32_t*)(&L_9->___FixedElementField);
		int32_t L_11 = ___1_threadIndex;
		int32_t L_12;
		L_12 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		int32_t L_14 = L_13->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___keyCapacity;
		if ((((int32_t)L_14) >= ((int32_t)L_16)))
		{
			goto IL_00f4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		int32_t* L_18 = (int32_t*)(&L_17->___allocatedIndexLength);
		int32_t L_19;
		L_19 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_18, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_19, ((int32_t)16)));
		int32_t L_20 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		NullCheck(L_21);
		int32_t L_22 = L_21->___keyCapacity;
		if ((((int32_t)L_20) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_22, 1)))))
		{
			goto IL_00cd;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		int32_t L_24 = L_23->___keyCapacity;
		int32_t L_25 = V_0;
		int32_t L_26;
		L_26 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_24, L_25)), NULL);
		V_3 = L_26;
		V_4 = 1;
		goto IL_0096;
	}

IL_0080:
	{
		int32_t* L_27 = V_1;
		int32_t L_28 = V_0;
		int32_t L_29 = V_4;
		int32_t L_30 = V_0;
		int32_t L_31 = V_4;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_28, L_29))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_30, L_31)), 1));
		int32_t L_32 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0096:
	{
		int32_t L_33 = V_4;
		int32_t L_34 = V_3;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t* L_35 = V_1;
		int32_t L_36 = V_0;
		int32_t L_37 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_36, L_37)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_38 = V_1;
		int32_t L_39 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_40 = ___0_data;
		NullCheck(L_40);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_41 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_40->___firstFreeTLS);
		int32_t* L_42 = (int32_t*)(&L_41->___FixedElementField);
		int32_t L_43 = ___1_threadIndex;
		int32_t L_44 = V_0;
		int32_t L_45;
		L_45 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_42, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_43, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_44, 1)), NULL);
		int32_t L_46 = V_0;
		return L_46;
	}

IL_00cd:
	{
		int32_t L_47 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		NullCheck(L_48);
		int32_t L_49 = L_48->___keyCapacity;
		if ((!(((uint32_t)L_47) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_49, 1))))))
		{
			goto IL_00f4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_50 = ___0_data;
		NullCheck(L_50);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_51 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_50->___firstFreeTLS);
		int32_t* L_52 = (int32_t*)(&L_51->___FixedElementField);
		int32_t L_53 = ___1_threadIndex;
		int32_t L_54;
		L_54 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_53, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_55 = V_0;
		return L_55;
	}

IL_00f4:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_56 = ___0_data;
		NullCheck(L_56);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_57 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_56->___firstFreeTLS);
		int32_t* L_58 = (int32_t*)(&L_57->___FixedElementField);
		int32_t L_59 = ___1_threadIndex;
		int32_t L_60;
		L_60 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_58, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_59, ((int32_t)16)))), 4)))), (-1), NULL);
		V_2 = (bool)1;
		goto IL_0187;
	}

IL_0112:
	{
		V_2 = (bool)0;
		int32_t L_61 = ___1_threadIndex;
		V_5 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_61, 1))%((int32_t)128)));
		goto IL_0182;
	}

IL_0121:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_62 = ___0_data;
		NullCheck(L_62);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_63 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_62->___firstFreeTLS);
		int32_t* L_64 = (int32_t*)(&L_63->___FixedElementField);
		int32_t L_65 = V_5;
		int32_t L_66 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_64, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_65, ((int32_t)16)))), 4)))));
		V_0 = L_66;
		int32_t L_67 = V_0;
		if ((((int32_t)L_67) < ((int32_t)0)))
		{
			goto IL_015f;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_68 = ___0_data;
		NullCheck(L_68);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_69 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_68->___firstFreeTLS);
		int32_t* L_70 = (int32_t*)(&L_69->___FixedElementField);
		int32_t L_71 = V_5;
		int32_t* L_72 = V_1;
		int32_t L_73 = V_0;
		int32_t L_74 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_72, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_73), 4))))));
		int32_t L_75 = V_0;
		int32_t L_76;
		L_76 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((int32_t*)il2cpp_codegen_add((intptr_t)L_70, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_71, ((int32_t)16)))), 4)))), L_74, L_75, NULL);
		int32_t L_77 = V_0;
		if ((!(((uint32_t)L_76) == ((uint32_t)L_77))))
		{
			goto IL_0121;
		}
	}

IL_015f:
	{
		int32_t L_78 = V_0;
		if ((!(((uint32_t)L_78) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0168;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0176;
	}

IL_0168:
	{
		int32_t L_79 = V_0;
		if ((((int32_t)L_79) < ((int32_t)0)))
		{
			goto IL_0176;
		}
	}
	{
		int32_t* L_80 = V_1;
		int32_t L_81 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_80, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_81), 4))))) = (int32_t)(-1);
		int32_t L_82 = V_0;
		return L_82;
	}

IL_0176:
	{
		int32_t L_83 = V_5;
		V_5 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_83, 1))%((int32_t)128)));
	}

IL_0182:
	{
		int32_t L_84 = V_5;
		int32_t L_85 = ___1_threadIndex;
		if ((!(((uint32_t)L_84) == ((uint32_t)L_85))))
		{
			goto IL_0121;
		}
	}

IL_0187:
	{
		bool L_86 = V_2;
		if (L_86)
		{
			goto IL_0112;
		}
	}

IL_018a:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_87 = ___0_data;
		NullCheck(L_87);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_88 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_87->___firstFreeTLS);
		int32_t* L_89 = (int32_t*)(&L_88->___FixedElementField);
		int32_t L_90 = ___1_threadIndex;
		int32_t* L_91 = V_1;
		int32_t L_92 = V_0;
		int32_t L_93 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_91, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_92), 4))))));
		int32_t L_94 = V_0;
		int32_t L_95;
		L_95 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_90, ((int32_t)16)))), 4)))), L_93, L_94, NULL);
		int32_t L_96 = V_0;
		if ((!(((uint32_t)L_95) == ((uint32_t)L_96))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t* L_97 = V_1;
		int32_t L_98 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_97, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_98), 4))))) = (int32_t)(-1);
		int32_t L_99 = V_0;
		return L_99;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m360248847C6FD4C0DBBAAF1F0993F18C86C72D71_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_3 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_2->___firstFreeTLS);
		int32_t* L_4 = (int32_t*)(&L_3->___FixedElementField);
		int32_t L_5 = ___2_threadIndex;
		int32_t L_6 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)16)))), 4)))));
		V_1 = L_6;
		int32_t* L_7 = V_0;
		int32_t L_8 = ___1_idx;
		int32_t L_9 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))) = (int32_t)L_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_11 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_10->___firstFreeTLS);
		int32_t* L_12 = (int32_t*)(&L_11->___FixedElementField);
		int32_t L_13 = ___2_threadIndex;
		int32_t L_14 = ___1_idx;
		int32_t L_15 = V_1;
		int32_t L_16;
		L_16 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_13, ((int32_t)16)))), 4)))), L_14, L_15, NULL);
		int32_t L_17 = V_1;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_m171835EF2F10F03159B32DD13AFF0FE8AF275E59_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___1_key, FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2 ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m5FAC141EBB9B079AFAFEB624C1E72D3A6FD155F4(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_mC9ADFD6E70310E8EA90D081699FE7BC3853900F0(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_m5084D24EC43390BB1675A6D796350DA00BAFAA2D_inline((void*)L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2 L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisFixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2_m4837515DA02459F7A686F93E833E1211A18E3E52_inline((void*)L_11, L_12, L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_14;
		L_14 = int2_GetHashCode_mDC30EB8816F1ABC7195872B81F3EA9E8090866A6_inline((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		int32_t L_21 = V_2;
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4)))), L_21, (-1), NULL);
		if ((((int32_t)L_22) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_5 = (int32_t*)L_24;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_25 = V_4;
		int32_t L_26 = V_3;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		V_6 = L_27;
		int32_t* L_28 = V_5;
		int32_t L_29 = V_2;
		int32_t L_30 = V_6;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)L_30;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_31 = ___0_data;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_32 = ___1_key;
		bool L_33;
		L_33 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m5FAC141EBB9B079AFAFEB624C1E72D3A6FD155F4(L_31, L_32, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_33)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		int32_t L_35 = V_2;
		int32_t L_36 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_m360248847C6FD4C0DBBAAF1F0993F18C86C72D71(L_34, L_35, L_36, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_37 = V_4;
		int32_t L_38 = V_3;
		int32_t L_39 = V_2;
		int32_t L_40 = V_6;
		int32_t L_41;
		L_41 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4)))), L_39, L_40, NULL);
		int32_t L_42 = V_6;
		if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m833B73FD7BBAD7C69CAC942AE81AB29DE3CB0BA9_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___1_key, FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2 ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_mC9ADFD6E70310E8EA90D081699FE7BC3853900F0(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_m5084D24EC43390BB1675A6D796350DA00BAFAA2D_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2 L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisFixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2_m4837515DA02459F7A686F93E833E1211A18E3E52_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_11;
		L_11 = int2_GetHashCode_mDC30EB8816F1ABC7195872B81F3EA9E8090866A6_inline((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		V_3 = L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))) = (int32_t)L_23;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4)))), L_26, L_27, NULL);
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m86AE8F280766D65CD3DA7FAB9EE0AFBC84E42BAC_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___1_key, FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2 ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m5FAC141EBB9B079AFAFEB624C1E72D3A6FD155F4(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00de;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_9 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_8->___firstFreeTLS);
		int32_t* L_10 = (int32_t*)(&L_9->___FixedElementField);
		int32_t L_11 = *((int32_t*)L_10);
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_00de;
		}
	}
	{
		V_6 = 1;
		goto IL_00a8;
	}

IL_003a:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_13 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_12->___firstFreeTLS);
		int32_t* L_14 = (int32_t*)(&L_13->___FixedElementField);
		int32_t L_15 = V_6;
		int32_t L_16 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_15, ((int32_t)16)))), 4)))));
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_18 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_17->___firstFreeTLS);
		int32_t* L_19 = (int32_t*)(&L_18->___FixedElementField);
		int32_t L_20 = V_6;
		int32_t L_21 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_20, ((int32_t)16)))), 4)))));
		V_2 = L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		uint8_t* L_23 = L_22->___next;
		V_3 = (int32_t*)L_23;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_24 = ___0_data;
		NullCheck(L_24);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_25 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_24->___firstFreeTLS);
		int32_t* L_26 = (int32_t*)(&L_25->___FixedElementField);
		int32_t L_27 = V_6;
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		int32_t L_30 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_27, ((int32_t)16)))), 4))))) = (int32_t)L_30;
		int32_t* L_31 = V_3;
		int32_t L_32 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_32), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_33 = ___0_data;
		NullCheck(L_33);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_34 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_33->___firstFreeTLS);
		int32_t* L_35 = (int32_t*)(&L_34->___FixedElementField);
		int32_t L_36 = V_2;
		*((int32_t*)L_35) = (int32_t)L_36;
		goto IL_00b1;
	}

IL_00a2:
	{
		int32_t L_37 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00a8:
	{
		int32_t L_38 = V_6;
		if ((((int32_t)L_38) < ((int32_t)((int32_t)128))))
		{
			goto IL_003a;
		}
	}

IL_00b1:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_40 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_39->___firstFreeTLS);
		int32_t* L_41 = (int32_t*)(&L_40->___FixedElementField);
		int32_t L_42 = *((int32_t*)L_41);
		if ((((int32_t)L_42) >= ((int32_t)0)))
		{
			goto IL_00de;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_43 = ___0_data;
		NullCheck(L_43);
		int32_t L_44 = L_43->___keyCapacity;
		int32_t L_45;
		L_45 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_44, NULL);
		V_7 = L_45;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		int32_t L_47 = V_7;
		int32_t L_48 = V_7;
		int32_t L_49;
		L_49 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_48, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_50 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisFixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2_m9C8850525C24852A4C1213C7841E608477BED4CC(L_46, L_47, L_49, L_50, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00de:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		NullCheck(L_51);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_52 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_51->___firstFreeTLS);
		int32_t* L_53 = (int32_t*)(&L_52->___FixedElementField);
		int32_t L_54 = *((int32_t*)L_53);
		V_2 = L_54;
		int32_t L_55 = V_2;
		if ((((int32_t)L_55) < ((int32_t)0)))
		{
			goto IL_0109;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_56 = ___0_data;
		NullCheck(L_56);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_57 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_56->___firstFreeTLS);
		int32_t* L_58 = (int32_t*)(&L_57->___FixedElementField);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_59 = ___0_data;
		NullCheck(L_59);
		uint8_t* L_60 = L_59->___next;
		int32_t L_61 = V_2;
		int32_t L_62 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_60, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_61), 4)))));
		*((int32_t*)L_58) = (int32_t)L_62;
		goto IL_011b;
	}

IL_0109:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		int32_t* L_64 = (int32_t*)(&L_63->___allocatedIndexLength);
		int32_t* L_65 = L_64;
		int32_t L_66 = *((int32_t*)L_65);
		V_8 = L_66;
		int32_t L_67 = V_8;
		*((int32_t*)L_65) = (int32_t)((int32_t)il2cpp_codegen_add(L_67, 1));
		int32_t L_68 = V_8;
		V_2 = L_68;
	}

IL_011b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_69 = ___0_data;
		NullCheck(L_69);
		uint8_t* L_70 = L_69->___keys;
		int32_t L_71 = V_2;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_72 = ___1_key;
		UnsafeUtility_WriteArrayElement_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_m5084D24EC43390BB1675A6D796350DA00BAFAA2D_inline((void*)L_70, L_71, L_72, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_73 = ___0_data;
		NullCheck(L_73);
		uint8_t* L_74 = L_73->___values;
		int32_t L_75 = V_2;
		FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2 L_76 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisFixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2_m4837515DA02459F7A686F93E833E1211A18E3E52_inline((void*)L_74, L_75, L_76, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_77;
		L_77 = int2_GetHashCode_mDC30EB8816F1ABC7195872B81F3EA9E8090866A6_inline((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_78 = ___0_data;
		NullCheck(L_78);
		int32_t L_79 = L_78->___bucketCapacityMask;
		V_4 = ((int32_t)(L_77&L_79));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_80 = ___0_data;
		NullCheck(L_80);
		uint8_t* L_81 = L_80->___buckets;
		V_5 = (int32_t*)L_81;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_82 = ___0_data;
		NullCheck(L_82);
		uint8_t* L_83 = L_82->___next;
		V_3 = (int32_t*)L_83;
		int32_t* L_84 = V_3;
		int32_t L_85 = V_2;
		int32_t* L_86 = V_5;
		int32_t L_87 = V_4;
		int32_t L_88 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_87), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_84, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_85), 4))))) = (int32_t)L_88;
		int32_t* L_89 = V_5;
		int32_t L_90 = V_4;
		int32_t L_91 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_90), 4))))) = (int32_t)L_91;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_mAD93EADED099DC66ECE247A546A4E4DB05539683_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		int32_t L_6;
		L_6 = int2_GetHashCode_mDC30EB8816F1ABC7195872B81F3EA9E8090866A6_inline((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		int32_t L_11 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), 4))))));
		V_5 = L_11;
		goto IL_00c8;
	}

IL_0040:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_5;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_15;
		L_15 = UnsafeUtility_ReadArrayElement_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mBB56303DF5D9BF30592847838B370074B0A0DC88_inline((void*)L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_15;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_16 = ___1_key;
		bool L_17;
		L_17 = int2_Equals_m4DB2E24953677E4E2497F1D0C4B48794257A89B6_inline((&V_6), L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_17)
		{
			goto IL_00ba;
		}
	}
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t* L_22 = V_2;
		int32_t L_23 = V_5;
		int32_t L_24 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))) = (int32_t)L_24;
		goto IL_0089;
	}

IL_0079:
	{
		int32_t* L_25 = V_2;
		int32_t L_26 = V_4;
		int32_t* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))) = (int32_t)L_29;
	}

IL_0089:
	{
		int32_t* L_30 = V_2;
		int32_t L_31 = V_5;
		int32_t L_32 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))));
		int32_t* L_33 = V_2;
		int32_t L_34 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		NullCheck(L_35);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_36 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_35->___firstFreeTLS);
		int32_t* L_37 = (int32_t*)(&L_36->___FixedElementField);
		int32_t L_38 = *((int32_t*)L_37);
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))) = (int32_t)L_38;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_40 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_39->___firstFreeTLS);
		int32_t* L_41 = (int32_t*)(&L_40->___FixedElementField);
		int32_t L_42 = V_5;
		*((int32_t*)L_41) = (int32_t)L_42;
		V_5 = L_32;
		bool L_43 = ___2_isMultiHashMap;
		if (L_43)
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_00da;
	}

IL_00ba:
	{
		int32_t L_44 = V_5;
		V_4 = L_44;
		int32_t* L_45 = V_2;
		int32_t L_46 = V_5;
		int32_t L_47 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_45, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_46), 4))))));
		V_5 = L_47;
	}

IL_00c8:
	{
		int32_t L_48 = V_5;
		if ((((int32_t)L_48) < ((int32_t)0)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_49 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_50 = ___0_data;
		NullCheck(L_50);
		int32_t L_51 = L_50->___keyCapacity;
		if ((((int32_t)L_49) < ((int32_t)L_51)))
		{
			goto IL_0040;
		}
	}

IL_00da:
	{
		int32_t L_52 = V_0;
		return L_52;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_mFB584B8AFEC6BF5CD78609DC5F7763B7F003E550_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A* L_4 = (int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = int2_GetHashCode_mDC30EB8816F1ABC7195872B81F3EA9E8090866A6_inline(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B L_12 = ___1_it;
		int32_t L_13 = L_12.___EntryIndex;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t* L_16 = V_1;
		int32_t L_17 = V_3;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4))))) = (int32_t)L_18;
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
	}

IL_0051:
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B L_26 = ___1_it;
		int32_t L_27 = L_26.___EntryIndex;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_28 = V_3;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_3;
		int32_t* L_31 = V_1;
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B L_32 = ___1_it;
		int32_t L_33 = L_32.___EntryIndex;
		int32_t L_34 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_34;
	}

IL_007b:
	{
		int32_t* L_35 = V_1;
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B L_36 = ___1_it;
		int32_t L_37 = L_36.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		NullCheck(L_38);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_39 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_38->___firstFreeTLS);
		int32_t* L_40 = (int32_t*)(&L_39->___FixedElementField);
		int32_t L_41 = *((int32_t*)L_40);
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_41;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		NullCheck(L_42);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_43 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_42->___firstFreeTLS);
		int32_t* L_44 = (int32_t*)(&L_43->___FixedElementField);
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B L_45 = ___1_it;
		int32_t L_46 = L_45.___EntryIndex;
		*((int32_t*)L_44) = (int32_t)L_46;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m5FAC141EBB9B079AFAFEB624C1E72D3A6FD155F4_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___1_key, FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2* ___2_item, NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* L_0 = ___3_it;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* L_5 = ___3_it;
		int32_t L_6 = (-1);
		V_2 = L_6;
		L_5->___NextEntryIndex = L_6;
		int32_t L_7 = V_2;
		L_4->___EntryIndex = L_7;
		FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2* L_8 = ___2_item;
		il2cpp_codegen_initobj(L_8, sizeof(FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___buckets;
		V_0 = (int32_t*)L_10;
		int32_t L_11;
		L_11 = int2_GetHashCode_mDC30EB8816F1ABC7195872B81F3EA9E8090866A6_inline((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* L_14 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* L_15 = ___3_it;
		int32_t* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_15->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_14->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m8FADFF771013736C9EE81BE1E8AD43910D26D116(L_21, L_22, L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m8FADFF771013736C9EE81BE1E8AD43910D26D116_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2* ___1_item, NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))))));
		V_0 = L_13;
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_15 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___keys;
		int32_t L_20 = V_0;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_21;
		L_21 = UnsafeUtility_ReadArrayElement_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mBB56303DF5D9BF30592847838B370074B0A0DC88_inline((void*)L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_2 = L_21;
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* L_22 = ___2_it;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_23 = L_22->___key;
		bool L_24;
		L_24 = int2_Equals_m4DB2E24953677E4E2497F1D0C4B48794257A89B6_inline((&V_2), L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_24)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* L_25 = ___2_it;
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))));
		L_25->___NextEntryIndex = L_28;
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* L_29 = ___2_it;
		int32_t L_30 = V_0;
		L_29->___EntryIndex = L_30;
		FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2* L_31 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___values;
		int32_t L_34 = V_0;
		FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2 L_35;
		L_35 = UnsafeUtility_ReadArrayElement_TisFixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2_m9AD3853DFCBD2F1ACBFE1C654300A095EB1D7F5F_inline((void*)L_33, L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2*)L_31 = L_35;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_mD4E4F3A93095B11FB1DB99C4F294AB2D8319DBD1_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* ___1_it, FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2* L_9 = ___2_item;
		FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2 L_10 = (*(FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2*)L_9);
		UnsafeUtility_WriteArrayElement_TisFixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2_m4837515DA02459F7A686F93E833E1211A18E3E52_inline((void*)L_7, L_8, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m0551A7566666FE1B7C9702BBB24C1C13A2C7E999_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_mE8438259E2BB8CDECD602B21CC6502F2878E5E01_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_mDBD68164A2C48D68496EDE03062EF4DB231C8425_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_m979CBE01D9062B4BB705F4005F1637E508105513_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_m60DB551E83610E7875C2E00BA7BDDDFFF12DAAED_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		V_0 = 0;
		goto IL_0051;
	}

IL_0038:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_9 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_8->___firstFreeTLS);
		int32_t* L_10 = (int32_t*)(&L_9->___FixedElementField);
		int32_t L_11 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0051:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)128))))
		{
			goto IL_0038;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		L_14->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m3A2185547CCAF3EADFF7727EBB4E88CD39FCEC04_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0007:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_3 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_2->___firstFreeTLS);
		int32_t* L_4 = (int32_t*)(&L_3->___FixedElementField);
		int32_t L_5 = ___1_threadIndex;
		int32_t L_6 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)16)))), 4)))));
		V_0 = L_6;
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_018a;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_9 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_8->___firstFreeTLS);
		int32_t* L_10 = (int32_t*)(&L_9->___FixedElementField);
		int32_t L_11 = ___1_threadIndex;
		int32_t L_12;
		L_12 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		int32_t L_14 = L_13->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___keyCapacity;
		if ((((int32_t)L_14) >= ((int32_t)L_16)))
		{
			goto IL_00f4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		int32_t* L_18 = (int32_t*)(&L_17->___allocatedIndexLength);
		int32_t L_19;
		L_19 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_18, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_19, ((int32_t)16)));
		int32_t L_20 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		NullCheck(L_21);
		int32_t L_22 = L_21->___keyCapacity;
		if ((((int32_t)L_20) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_22, 1)))))
		{
			goto IL_00cd;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		int32_t L_24 = L_23->___keyCapacity;
		int32_t L_25 = V_0;
		int32_t L_26;
		L_26 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_24, L_25)), NULL);
		V_3 = L_26;
		V_4 = 1;
		goto IL_0096;
	}

IL_0080:
	{
		int32_t* L_27 = V_1;
		int32_t L_28 = V_0;
		int32_t L_29 = V_4;
		int32_t L_30 = V_0;
		int32_t L_31 = V_4;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_28, L_29))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_30, L_31)), 1));
		int32_t L_32 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0096:
	{
		int32_t L_33 = V_4;
		int32_t L_34 = V_3;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t* L_35 = V_1;
		int32_t L_36 = V_0;
		int32_t L_37 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_36, L_37)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_38 = V_1;
		int32_t L_39 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_40 = ___0_data;
		NullCheck(L_40);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_41 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_40->___firstFreeTLS);
		int32_t* L_42 = (int32_t*)(&L_41->___FixedElementField);
		int32_t L_43 = ___1_threadIndex;
		int32_t L_44 = V_0;
		int32_t L_45;
		L_45 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_42, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_43, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_44, 1)), NULL);
		int32_t L_46 = V_0;
		return L_46;
	}

IL_00cd:
	{
		int32_t L_47 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		NullCheck(L_48);
		int32_t L_49 = L_48->___keyCapacity;
		if ((!(((uint32_t)L_47) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_49, 1))))))
		{
			goto IL_00f4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_50 = ___0_data;
		NullCheck(L_50);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_51 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_50->___firstFreeTLS);
		int32_t* L_52 = (int32_t*)(&L_51->___FixedElementField);
		int32_t L_53 = ___1_threadIndex;
		int32_t L_54;
		L_54 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_53, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_55 = V_0;
		return L_55;
	}

IL_00f4:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_56 = ___0_data;
		NullCheck(L_56);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_57 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_56->___firstFreeTLS);
		int32_t* L_58 = (int32_t*)(&L_57->___FixedElementField);
		int32_t L_59 = ___1_threadIndex;
		int32_t L_60;
		L_60 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_58, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_59, ((int32_t)16)))), 4)))), (-1), NULL);
		V_2 = (bool)1;
		goto IL_0187;
	}

IL_0112:
	{
		V_2 = (bool)0;
		int32_t L_61 = ___1_threadIndex;
		V_5 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_61, 1))%((int32_t)128)));
		goto IL_0182;
	}

IL_0121:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_62 = ___0_data;
		NullCheck(L_62);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_63 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_62->___firstFreeTLS);
		int32_t* L_64 = (int32_t*)(&L_63->___FixedElementField);
		int32_t L_65 = V_5;
		int32_t L_66 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_64, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_65, ((int32_t)16)))), 4)))));
		V_0 = L_66;
		int32_t L_67 = V_0;
		if ((((int32_t)L_67) < ((int32_t)0)))
		{
			goto IL_015f;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_68 = ___0_data;
		NullCheck(L_68);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_69 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_68->___firstFreeTLS);
		int32_t* L_70 = (int32_t*)(&L_69->___FixedElementField);
		int32_t L_71 = V_5;
		int32_t* L_72 = V_1;
		int32_t L_73 = V_0;
		int32_t L_74 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_72, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_73), 4))))));
		int32_t L_75 = V_0;
		int32_t L_76;
		L_76 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((int32_t*)il2cpp_codegen_add((intptr_t)L_70, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_71, ((int32_t)16)))), 4)))), L_74, L_75, NULL);
		int32_t L_77 = V_0;
		if ((!(((uint32_t)L_76) == ((uint32_t)L_77))))
		{
			goto IL_0121;
		}
	}

IL_015f:
	{
		int32_t L_78 = V_0;
		if ((!(((uint32_t)L_78) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0168;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0176;
	}

IL_0168:
	{
		int32_t L_79 = V_0;
		if ((((int32_t)L_79) < ((int32_t)0)))
		{
			goto IL_0176;
		}
	}
	{
		int32_t* L_80 = V_1;
		int32_t L_81 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_80, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_81), 4))))) = (int32_t)(-1);
		int32_t L_82 = V_0;
		return L_82;
	}

IL_0176:
	{
		int32_t L_83 = V_5;
		V_5 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_83, 1))%((int32_t)128)));
	}

IL_0182:
	{
		int32_t L_84 = V_5;
		int32_t L_85 = ___1_threadIndex;
		if ((!(((uint32_t)L_84) == ((uint32_t)L_85))))
		{
			goto IL_0121;
		}
	}

IL_0187:
	{
		bool L_86 = V_2;
		if (L_86)
		{
			goto IL_0112;
		}
	}

IL_018a:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_87 = ___0_data;
		NullCheck(L_87);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_88 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_87->___firstFreeTLS);
		int32_t* L_89 = (int32_t*)(&L_88->___FixedElementField);
		int32_t L_90 = ___1_threadIndex;
		int32_t* L_91 = V_1;
		int32_t L_92 = V_0;
		int32_t L_93 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_91, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_92), 4))))));
		int32_t L_94 = V_0;
		int32_t L_95;
		L_95 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_90, ((int32_t)16)))), 4)))), L_93, L_94, NULL);
		int32_t L_96 = V_0;
		if ((!(((uint32_t)L_95) == ((uint32_t)L_96))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t* L_97 = V_1;
		int32_t L_98 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_97, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_98), 4))))) = (int32_t)(-1);
		int32_t L_99 = V_0;
		return L_99;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_mE9FC1A8D2DE7057CA98BEF081A5A90FEE20423AA_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_3 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_2->___firstFreeTLS);
		int32_t* L_4 = (int32_t*)(&L_3->___FixedElementField);
		int32_t L_5 = ___2_threadIndex;
		int32_t L_6 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)16)))), 4)))));
		V_1 = L_6;
		int32_t* L_7 = V_0;
		int32_t L_8 = ___1_idx;
		int32_t L_9 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))) = (int32_t)L_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_11 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_10->___firstFreeTLS);
		int32_t* L_12 = (int32_t*)(&L_11->___FixedElementField);
		int32_t L_13 = ___2_threadIndex;
		int32_t L_14 = ___1_idx;
		int32_t L_15 = V_1;
		int32_t L_16;
		L_16 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_13, ((int32_t)16)))), 4)))), L_14, L_15, NULL);
		int32_t L_17 = V_1;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_m9F72165C26078D57C085600BA9C0EC3B41D64C4C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___1_key, bool ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	bool V_0 = false;
	NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mC7C0D3EBF7AF6EC934E3FAC35777A2215E9B325B(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_m3A2185547CCAF3EADFF7727EBB4E88CD39FCEC04(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_m5084D24EC43390BB1675A6D796350DA00BAFAA2D_inline((void*)L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		bool L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48259D1BF2B093A901E095965654FE2E58AEF18B_inline((void*)L_11, L_12, L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_14;
		L_14 = int2_GetHashCode_mDC30EB8816F1ABC7195872B81F3EA9E8090866A6_inline((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		int32_t L_21 = V_2;
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4)))), L_21, (-1), NULL);
		if ((((int32_t)L_22) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_5 = (int32_t*)L_24;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_25 = V_4;
		int32_t L_26 = V_3;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		V_6 = L_27;
		int32_t* L_28 = V_5;
		int32_t L_29 = V_2;
		int32_t L_30 = V_6;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)L_30;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_31 = ___0_data;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_32 = ___1_key;
		bool L_33;
		L_33 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mC7C0D3EBF7AF6EC934E3FAC35777A2215E9B325B(L_31, L_32, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_33)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		int32_t L_35 = V_2;
		int32_t L_36 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_mE9FC1A8D2DE7057CA98BEF081A5A90FEE20423AA(L_34, L_35, L_36, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_37 = V_4;
		int32_t L_38 = V_3;
		int32_t L_39 = V_2;
		int32_t L_40 = V_6;
		int32_t L_41;
		L_41 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4)))), L_39, L_40, NULL);
		int32_t L_42 = V_6;
		if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m31D1B26E8FF3E4CF3644139DF1337198952A6A97_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___1_key, bool ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_m3A2185547CCAF3EADFF7727EBB4E88CD39FCEC04(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_m5084D24EC43390BB1675A6D796350DA00BAFAA2D_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		bool L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48259D1BF2B093A901E095965654FE2E58AEF18B_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_11;
		L_11 = int2_GetHashCode_mDC30EB8816F1ABC7195872B81F3EA9E8090866A6_inline((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		V_3 = L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))) = (int32_t)L_23;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4)))), L_26, L_27, NULL);
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_mAAC6DFA50064CDC9A49B6B35412D6C09379F8264_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___1_key, bool ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	bool V_0 = false;
	NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mC7C0D3EBF7AF6EC934E3FAC35777A2215E9B325B(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00de;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_9 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_8->___firstFreeTLS);
		int32_t* L_10 = (int32_t*)(&L_9->___FixedElementField);
		int32_t L_11 = *((int32_t*)L_10);
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_00de;
		}
	}
	{
		V_6 = 1;
		goto IL_00a8;
	}

IL_003a:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_13 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_12->___firstFreeTLS);
		int32_t* L_14 = (int32_t*)(&L_13->___FixedElementField);
		int32_t L_15 = V_6;
		int32_t L_16 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_15, ((int32_t)16)))), 4)))));
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_18 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_17->___firstFreeTLS);
		int32_t* L_19 = (int32_t*)(&L_18->___FixedElementField);
		int32_t L_20 = V_6;
		int32_t L_21 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_20, ((int32_t)16)))), 4)))));
		V_2 = L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		uint8_t* L_23 = L_22->___next;
		V_3 = (int32_t*)L_23;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_24 = ___0_data;
		NullCheck(L_24);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_25 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_24->___firstFreeTLS);
		int32_t* L_26 = (int32_t*)(&L_25->___FixedElementField);
		int32_t L_27 = V_6;
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		int32_t L_30 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_27, ((int32_t)16)))), 4))))) = (int32_t)L_30;
		int32_t* L_31 = V_3;
		int32_t L_32 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_32), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_33 = ___0_data;
		NullCheck(L_33);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_34 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_33->___firstFreeTLS);
		int32_t* L_35 = (int32_t*)(&L_34->___FixedElementField);
		int32_t L_36 = V_2;
		*((int32_t*)L_35) = (int32_t)L_36;
		goto IL_00b1;
	}

IL_00a2:
	{
		int32_t L_37 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00a8:
	{
		int32_t L_38 = V_6;
		if ((((int32_t)L_38) < ((int32_t)((int32_t)128))))
		{
			goto IL_003a;
		}
	}

IL_00b1:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_40 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_39->___firstFreeTLS);
		int32_t* L_41 = (int32_t*)(&L_40->___FixedElementField);
		int32_t L_42 = *((int32_t*)L_41);
		if ((((int32_t)L_42) >= ((int32_t)0)))
		{
			goto IL_00de;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_43 = ___0_data;
		NullCheck(L_43);
		int32_t L_44 = L_43->___keyCapacity;
		int32_t L_45;
		L_45 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_44, NULL);
		V_7 = L_45;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		int32_t L_47 = V_7;
		int32_t L_48 = V_7;
		int32_t L_49;
		L_49 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_48, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_50 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6E9ADB960E424AAD44CD437927CDD6CED5A4D653(L_46, L_47, L_49, L_50, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00de:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		NullCheck(L_51);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_52 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_51->___firstFreeTLS);
		int32_t* L_53 = (int32_t*)(&L_52->___FixedElementField);
		int32_t L_54 = *((int32_t*)L_53);
		V_2 = L_54;
		int32_t L_55 = V_2;
		if ((((int32_t)L_55) < ((int32_t)0)))
		{
			goto IL_0109;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_56 = ___0_data;
		NullCheck(L_56);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_57 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_56->___firstFreeTLS);
		int32_t* L_58 = (int32_t*)(&L_57->___FixedElementField);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_59 = ___0_data;
		NullCheck(L_59);
		uint8_t* L_60 = L_59->___next;
		int32_t L_61 = V_2;
		int32_t L_62 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_60, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_61), 4)))));
		*((int32_t*)L_58) = (int32_t)L_62;
		goto IL_011b;
	}

IL_0109:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		int32_t* L_64 = (int32_t*)(&L_63->___allocatedIndexLength);
		int32_t* L_65 = L_64;
		int32_t L_66 = *((int32_t*)L_65);
		V_8 = L_66;
		int32_t L_67 = V_8;
		*((int32_t*)L_65) = (int32_t)((int32_t)il2cpp_codegen_add(L_67, 1));
		int32_t L_68 = V_8;
		V_2 = L_68;
	}

IL_011b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_69 = ___0_data;
		NullCheck(L_69);
		uint8_t* L_70 = L_69->___keys;
		int32_t L_71 = V_2;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_72 = ___1_key;
		UnsafeUtility_WriteArrayElement_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_m5084D24EC43390BB1675A6D796350DA00BAFAA2D_inline((void*)L_70, L_71, L_72, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_73 = ___0_data;
		NullCheck(L_73);
		uint8_t* L_74 = L_73->___values;
		int32_t L_75 = V_2;
		bool L_76 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48259D1BF2B093A901E095965654FE2E58AEF18B_inline((void*)L_74, L_75, L_76, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_77;
		L_77 = int2_GetHashCode_mDC30EB8816F1ABC7195872B81F3EA9E8090866A6_inline((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_78 = ___0_data;
		NullCheck(L_78);
		int32_t L_79 = L_78->___bucketCapacityMask;
		V_4 = ((int32_t)(L_77&L_79));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_80 = ___0_data;
		NullCheck(L_80);
		uint8_t* L_81 = L_80->___buckets;
		V_5 = (int32_t*)L_81;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_82 = ___0_data;
		NullCheck(L_82);
		uint8_t* L_83 = L_82->___next;
		V_3 = (int32_t*)L_83;
		int32_t* L_84 = V_3;
		int32_t L_85 = V_2;
		int32_t* L_86 = V_5;
		int32_t L_87 = V_4;
		int32_t L_88 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_87), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_84, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_85), 4))))) = (int32_t)L_88;
		int32_t* L_89 = V_5;
		int32_t L_90 = V_4;
		int32_t L_91 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_90), 4))))) = (int32_t)L_91;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m72E9918FD6AD12D77CA0D054ECB793C457E3D0F2_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		int32_t L_6;
		L_6 = int2_GetHashCode_mDC30EB8816F1ABC7195872B81F3EA9E8090866A6_inline((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		int32_t L_11 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), 4))))));
		V_5 = L_11;
		goto IL_00c8;
	}

IL_0040:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_5;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_15;
		L_15 = UnsafeUtility_ReadArrayElement_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mBB56303DF5D9BF30592847838B370074B0A0DC88_inline((void*)L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_15;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_16 = ___1_key;
		bool L_17;
		L_17 = int2_Equals_m4DB2E24953677E4E2497F1D0C4B48794257A89B6_inline((&V_6), L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_17)
		{
			goto IL_00ba;
		}
	}
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t* L_22 = V_2;
		int32_t L_23 = V_5;
		int32_t L_24 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))) = (int32_t)L_24;
		goto IL_0089;
	}

IL_0079:
	{
		int32_t* L_25 = V_2;
		int32_t L_26 = V_4;
		int32_t* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))) = (int32_t)L_29;
	}

IL_0089:
	{
		int32_t* L_30 = V_2;
		int32_t L_31 = V_5;
		int32_t L_32 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))));
		int32_t* L_33 = V_2;
		int32_t L_34 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		NullCheck(L_35);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_36 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_35->___firstFreeTLS);
		int32_t* L_37 = (int32_t*)(&L_36->___FixedElementField);
		int32_t L_38 = *((int32_t*)L_37);
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))) = (int32_t)L_38;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_40 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_39->___firstFreeTLS);
		int32_t* L_41 = (int32_t*)(&L_40->___FixedElementField);
		int32_t L_42 = V_5;
		*((int32_t*)L_41) = (int32_t)L_42;
		V_5 = L_32;
		bool L_43 = ___2_isMultiHashMap;
		if (L_43)
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_00da;
	}

IL_00ba:
	{
		int32_t L_44 = V_5;
		V_4 = L_44;
		int32_t* L_45 = V_2;
		int32_t L_46 = V_5;
		int32_t L_47 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_45, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_46), 4))))));
		V_5 = L_47;
	}

IL_00c8:
	{
		int32_t L_48 = V_5;
		if ((((int32_t)L_48) < ((int32_t)0)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_49 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_50 = ___0_data;
		NullCheck(L_50);
		int32_t L_51 = L_50->___keyCapacity;
		if ((((int32_t)L_49) < ((int32_t)L_51)))
		{
			goto IL_0040;
		}
	}

IL_00da:
	{
		int32_t L_52 = V_0;
		return L_52;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_mDEC5E3C84ABDFDAF5E5B930E6D5E0C05ED77665A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A* L_4 = (int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = int2_GetHashCode_mDC30EB8816F1ABC7195872B81F3EA9E8090866A6_inline(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B L_12 = ___1_it;
		int32_t L_13 = L_12.___EntryIndex;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t* L_16 = V_1;
		int32_t L_17 = V_3;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4))))) = (int32_t)L_18;
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
	}

IL_0051:
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B L_26 = ___1_it;
		int32_t L_27 = L_26.___EntryIndex;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_28 = V_3;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_3;
		int32_t* L_31 = V_1;
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B L_32 = ___1_it;
		int32_t L_33 = L_32.___EntryIndex;
		int32_t L_34 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_34;
	}

IL_007b:
	{
		int32_t* L_35 = V_1;
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B L_36 = ___1_it;
		int32_t L_37 = L_36.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		NullCheck(L_38);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_39 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_38->___firstFreeTLS);
		int32_t* L_40 = (int32_t*)(&L_39->___FixedElementField);
		int32_t L_41 = *((int32_t*)L_40);
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_41;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		NullCheck(L_42);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_43 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_42->___firstFreeTLS);
		int32_t* L_44 = (int32_t*)(&L_43->___FixedElementField);
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B L_45 = ___1_it;
		int32_t L_46 = L_45.___EntryIndex;
		*((int32_t*)L_44) = (int32_t)L_46;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mC7C0D3EBF7AF6EC934E3FAC35777A2215E9B325B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___1_key, bool* ___2_item, NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* L_0 = ___3_it;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* L_5 = ___3_it;
		int32_t L_6 = (-1);
		V_2 = L_6;
		L_5->___NextEntryIndex = L_6;
		int32_t L_7 = V_2;
		L_4->___EntryIndex = L_7;
		bool* L_8 = ___2_item;
		il2cpp_codegen_initobj(L_8, sizeof(bool));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___buckets;
		V_0 = (int32_t*)L_10;
		int32_t L_11;
		L_11 = int2_GetHashCode_mDC30EB8816F1ABC7195872B81F3EA9E8090866A6_inline((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* L_14 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* L_15 = ___3_it;
		int32_t* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_15->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_14->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		bool* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mB9DAD7C5B2BB0023DC79E4F2D09672BF7B5B68A5(L_21, L_22, L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mB9DAD7C5B2BB0023DC79E4F2D09672BF7B5B68A5_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, bool* ___1_item, NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		bool* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(bool));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))))));
		V_0 = L_13;
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_15 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___keys;
		int32_t L_20 = V_0;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_21;
		L_21 = UnsafeUtility_ReadArrayElement_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mBB56303DF5D9BF30592847838B370074B0A0DC88_inline((void*)L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_2 = L_21;
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* L_22 = ___2_it;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_23 = L_22->___key;
		bool L_24;
		L_24 = int2_Equals_m4DB2E24953677E4E2497F1D0C4B48794257A89B6_inline((&V_2), L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_24)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* L_25 = ___2_it;
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))));
		L_25->___NextEntryIndex = L_28;
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* L_29 = ___2_it;
		int32_t L_30 = V_0;
		L_29->___EntryIndex = L_30;
		bool* L_31 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___values;
		int32_t L_34 = V_0;
		bool L_35;
		L_35 = UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_inline((void*)L_33, L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(bool*)L_31 = L_35;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_mBA6B18C84543CB0620372F330573C14090096E0C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* ___1_it, bool* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		bool* L_9 = ___2_item;
		bool L_10 = (*(bool*)L_9);
		UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48259D1BF2B093A901E095965654FE2E58AEF18B_inline((void*)L_7, L_8, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_mB0C0A526EE7F1F9C21BADBA35226532F580327FB_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_m6706006F4A2080636C658CE4ABB62CA757091870_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_mBDBC0C8DCC8B0BC9DAD2513A2C02A88B4ADF19B3_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_m3223CFB05414F92EFC26595358CCC90BAA6B5220_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_m15A552BE1F01C5D0CC9AD213FFC0423EFB436125_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		V_0 = 0;
		goto IL_0051;
	}

IL_0038:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_9 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_8->___firstFreeTLS);
		int32_t* L_10 = (int32_t*)(&L_9->___FixedElementField);
		int32_t L_11 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0051:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)128))))
		{
			goto IL_0038;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		L_14->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m056252D0474A206A180FFB4472FC7F78503C737D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0007:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_3 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_2->___firstFreeTLS);
		int32_t* L_4 = (int32_t*)(&L_3->___FixedElementField);
		int32_t L_5 = ___1_threadIndex;
		int32_t L_6 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)16)))), 4)))));
		V_0 = L_6;
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_018a;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_9 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_8->___firstFreeTLS);
		int32_t* L_10 = (int32_t*)(&L_9->___FixedElementField);
		int32_t L_11 = ___1_threadIndex;
		int32_t L_12;
		L_12 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		int32_t L_14 = L_13->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___keyCapacity;
		if ((((int32_t)L_14) >= ((int32_t)L_16)))
		{
			goto IL_00f4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		int32_t* L_18 = (int32_t*)(&L_17->___allocatedIndexLength);
		int32_t L_19;
		L_19 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_18, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_19, ((int32_t)16)));
		int32_t L_20 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		NullCheck(L_21);
		int32_t L_22 = L_21->___keyCapacity;
		if ((((int32_t)L_20) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_22, 1)))))
		{
			goto IL_00cd;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		int32_t L_24 = L_23->___keyCapacity;
		int32_t L_25 = V_0;
		int32_t L_26;
		L_26 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_24, L_25)), NULL);
		V_3 = L_26;
		V_4 = 1;
		goto IL_0096;
	}

IL_0080:
	{
		int32_t* L_27 = V_1;
		int32_t L_28 = V_0;
		int32_t L_29 = V_4;
		int32_t L_30 = V_0;
		int32_t L_31 = V_4;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_28, L_29))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_30, L_31)), 1));
		int32_t L_32 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0096:
	{
		int32_t L_33 = V_4;
		int32_t L_34 = V_3;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t* L_35 = V_1;
		int32_t L_36 = V_0;
		int32_t L_37 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_36, L_37)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_38 = V_1;
		int32_t L_39 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_40 = ___0_data;
		NullCheck(L_40);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_41 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_40->___firstFreeTLS);
		int32_t* L_42 = (int32_t*)(&L_41->___FixedElementField);
		int32_t L_43 = ___1_threadIndex;
		int32_t L_44 = V_0;
		int32_t L_45;
		L_45 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_42, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_43, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_44, 1)), NULL);
		int32_t L_46 = V_0;
		return L_46;
	}

IL_00cd:
	{
		int32_t L_47 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		NullCheck(L_48);
		int32_t L_49 = L_48->___keyCapacity;
		if ((!(((uint32_t)L_47) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_49, 1))))))
		{
			goto IL_00f4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_50 = ___0_data;
		NullCheck(L_50);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_51 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_50->___firstFreeTLS);
		int32_t* L_52 = (int32_t*)(&L_51->___FixedElementField);
		int32_t L_53 = ___1_threadIndex;
		int32_t L_54;
		L_54 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_53, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_55 = V_0;
		return L_55;
	}

IL_00f4:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_56 = ___0_data;
		NullCheck(L_56);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_57 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_56->___firstFreeTLS);
		int32_t* L_58 = (int32_t*)(&L_57->___FixedElementField);
		int32_t L_59 = ___1_threadIndex;
		int32_t L_60;
		L_60 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(((int32_t*)il2cpp_codegen_add((intptr_t)L_58, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_59, ((int32_t)16)))), 4)))), (-1), NULL);
		V_2 = (bool)1;
		goto IL_0187;
	}

IL_0112:
	{
		V_2 = (bool)0;
		int32_t L_61 = ___1_threadIndex;
		V_5 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_61, 1))%((int32_t)128)));
		goto IL_0182;
	}

IL_0121:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_62 = ___0_data;
		NullCheck(L_62);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_63 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_62->___firstFreeTLS);
		int32_t* L_64 = (int32_t*)(&L_63->___FixedElementField);
		int32_t L_65 = V_5;
		int32_t L_66 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_64, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_65, ((int32_t)16)))), 4)))));
		V_0 = L_66;
		int32_t L_67 = V_0;
		if ((((int32_t)L_67) < ((int32_t)0)))
		{
			goto IL_015f;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_68 = ___0_data;
		NullCheck(L_68);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_69 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_68->___firstFreeTLS);
		int32_t* L_70 = (int32_t*)(&L_69->___FixedElementField);
		int32_t L_71 = V_5;
		int32_t* L_72 = V_1;
		int32_t L_73 = V_0;
		int32_t L_74 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_72, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_73), 4))))));
		int32_t L_75 = V_0;
		int32_t L_76;
		L_76 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((int32_t*)il2cpp_codegen_add((intptr_t)L_70, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_71, ((int32_t)16)))), 4)))), L_74, L_75, NULL);
		int32_t L_77 = V_0;
		if ((!(((uint32_t)L_76) == ((uint32_t)L_77))))
		{
			goto IL_0121;
		}
	}

IL_015f:
	{
		int32_t L_78 = V_0;
		if ((!(((uint32_t)L_78) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0168;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0176;
	}

IL_0168:
	{
		int32_t L_79 = V_0;
		if ((((int32_t)L_79) < ((int32_t)0)))
		{
			goto IL_0176;
		}
	}
	{
		int32_t* L_80 = V_1;
		int32_t L_81 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_80, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_81), 4))))) = (int32_t)(-1);
		int32_t L_82 = V_0;
		return L_82;
	}

IL_0176:
	{
		int32_t L_83 = V_5;
		V_5 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_83, 1))%((int32_t)128)));
	}

IL_0182:
	{
		int32_t L_84 = V_5;
		int32_t L_85 = ___1_threadIndex;
		if ((!(((uint32_t)L_84) == ((uint32_t)L_85))))
		{
			goto IL_0121;
		}
	}

IL_0187:
	{
		bool L_86 = V_2;
		if (L_86)
		{
			goto IL_0112;
		}
	}

IL_018a:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_87 = ___0_data;
		NullCheck(L_87);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_88 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_87->___firstFreeTLS);
		int32_t* L_89 = (int32_t*)(&L_88->___FixedElementField);
		int32_t L_90 = ___1_threadIndex;
		int32_t* L_91 = V_1;
		int32_t L_92 = V_0;
		int32_t L_93 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_91, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_92), 4))))));
		int32_t L_94 = V_0;
		int32_t L_95;
		L_95 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_90, ((int32_t)16)))), 4)))), L_93, L_94, NULL);
		int32_t L_96 = V_0;
		if ((!(((uint32_t)L_95) == ((uint32_t)L_96))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t* L_97 = V_1;
		int32_t L_98 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_97, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_98), 4))))) = (int32_t)(-1);
		int32_t L_99 = V_0;
		return L_99;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_mA1D94DF99870519FD354E527AAD063105ED64994_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_3 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_2->___firstFreeTLS);
		int32_t* L_4 = (int32_t*)(&L_3->___FixedElementField);
		int32_t L_5 = ___2_threadIndex;
		int32_t L_6 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)16)))), 4)))));
		V_1 = L_6;
		int32_t* L_7 = V_0;
		int32_t L_8 = ___1_idx;
		int32_t L_9 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4))))) = (int32_t)L_9;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_11 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_10->___firstFreeTLS);
		int32_t* L_12 = (int32_t*)(&L_11->___FixedElementField);
		int32_t L_13 = ___2_threadIndex;
		int32_t L_14 = ___1_idx;
		int32_t L_15 = V_1;
		int32_t L_16;
		L_16 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_13, ((int32_t)16)))), 4)))), L_14, L_15, NULL);
		int32_t L_17 = V_1;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_m56850B8AB635B24163BFA63485BD2474E05502CB_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___1_key, uint16_t ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mC826C4550D551B75154AEBD1635201FD15CA31BA(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_m056252D0474A206A180FFB4472FC7F78503C737D(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_m5084D24EC43390BB1675A6D796350DA00BAFAA2D_inline((void*)L_7, L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		uint16_t L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mAAF2E6888B17B2E7C3606BE66298D92F589F68C8_inline((void*)L_11, L_12, L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_14;
		L_14 = int2_GetHashCode_mDC30EB8816F1ABC7195872B81F3EA9E8090866A6_inline((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		int32_t L_21 = V_2;
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4)))), L_21, (-1), NULL);
		if ((((int32_t)L_22) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_5 = (int32_t*)L_24;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_25 = V_4;
		int32_t L_26 = V_3;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		V_6 = L_27;
		int32_t* L_28 = V_5;
		int32_t L_29 = V_2;
		int32_t L_30 = V_6;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)L_30;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_31 = ___0_data;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_32 = ___1_key;
		bool L_33;
		L_33 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mC826C4550D551B75154AEBD1635201FD15CA31BA(L_31, L_32, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_33)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		int32_t L_35 = V_2;
		int32_t L_36 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_mA1D94DF99870519FD354E527AAD063105ED64994(L_34, L_35, L_36, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_37 = V_4;
		int32_t L_38 = V_3;
		int32_t L_39 = V_2;
		int32_t L_40 = V_6;
		int32_t L_41;
		L_41 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4)))), L_39, L_40, NULL);
		int32_t L_42 = V_6;
		if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m88EBC4200605DF6063261ABBDB5C4DAC704E1582_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___1_key, uint16_t ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_m056252D0474A206A180FFB4472FC7F78503C737D(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_m5084D24EC43390BB1675A6D796350DA00BAFAA2D_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		uint16_t L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mAAF2E6888B17B2E7C3606BE66298D92F589F68C8_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_11;
		L_11 = int2_GetHashCode_mDC30EB8816F1ABC7195872B81F3EA9E8090866A6_inline((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		V_3 = L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))) = (int32_t)L_23;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4)))), L_26, L_27, NULL);
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)L_29))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m7CD96A240B845D2C134F46C151012429879A8746_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___1_key, uint16_t ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mC826C4550D551B75154AEBD1635201FD15CA31BA(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00de;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_9 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_8->___firstFreeTLS);
		int32_t* L_10 = (int32_t*)(&L_9->___FixedElementField);
		int32_t L_11 = *((int32_t*)L_10);
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_00de;
		}
	}
	{
		V_6 = 1;
		goto IL_00a8;
	}

IL_003a:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_13 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_12->___firstFreeTLS);
		int32_t* L_14 = (int32_t*)(&L_13->___FixedElementField);
		int32_t L_15 = V_6;
		int32_t L_16 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_15, ((int32_t)16)))), 4)))));
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_18 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_17->___firstFreeTLS);
		int32_t* L_19 = (int32_t*)(&L_18->___FixedElementField);
		int32_t L_20 = V_6;
		int32_t L_21 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_20, ((int32_t)16)))), 4)))));
		V_2 = L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		uint8_t* L_23 = L_22->___next;
		V_3 = (int32_t*)L_23;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_24 = ___0_data;
		NullCheck(L_24);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_25 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_24->___firstFreeTLS);
		int32_t* L_26 = (int32_t*)(&L_25->___FixedElementField);
		int32_t L_27 = V_6;
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		int32_t L_30 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_27, ((int32_t)16)))), 4))))) = (int32_t)L_30;
		int32_t* L_31 = V_3;
		int32_t L_32 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_32), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_33 = ___0_data;
		NullCheck(L_33);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_34 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_33->___firstFreeTLS);
		int32_t* L_35 = (int32_t*)(&L_34->___FixedElementField);
		int32_t L_36 = V_2;
		*((int32_t*)L_35) = (int32_t)L_36;
		goto IL_00b1;
	}

IL_00a2:
	{
		int32_t L_37 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00a8:
	{
		int32_t L_38 = V_6;
		if ((((int32_t)L_38) < ((int32_t)((int32_t)128))))
		{
			goto IL_003a;
		}
	}

IL_00b1:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_40 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_39->___firstFreeTLS);
		int32_t* L_41 = (int32_t*)(&L_40->___FixedElementField);
		int32_t L_42 = *((int32_t*)L_41);
		if ((((int32_t)L_42) >= ((int32_t)0)))
		{
			goto IL_00de;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_43 = ___0_data;
		NullCheck(L_43);
		int32_t L_44 = L_43->___keyCapacity;
		int32_t L_45;
		L_45 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_44, NULL);
		V_7 = L_45;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		int32_t L_47 = V_7;
		int32_t L_48 = V_7;
		int32_t L_49;
		L_49 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_48, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_50 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mBA19CDCDBDB9F51F1B8CAF2E6A718039AE05A07C(L_46, L_47, L_49, L_50, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00de:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		NullCheck(L_51);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_52 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_51->___firstFreeTLS);
		int32_t* L_53 = (int32_t*)(&L_52->___FixedElementField);
		int32_t L_54 = *((int32_t*)L_53);
		V_2 = L_54;
		int32_t L_55 = V_2;
		if ((((int32_t)L_55) < ((int32_t)0)))
		{
			goto IL_0109;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_56 = ___0_data;
		NullCheck(L_56);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_57 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_56->___firstFreeTLS);
		int32_t* L_58 = (int32_t*)(&L_57->___FixedElementField);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_59 = ___0_data;
		NullCheck(L_59);
		uint8_t* L_60 = L_59->___next;
		int32_t L_61 = V_2;
		int32_t L_62 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_60, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_61), 4)))));
		*((int32_t*)L_58) = (int32_t)L_62;
		goto IL_011b;
	}

IL_0109:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		int32_t* L_64 = (int32_t*)(&L_63->___allocatedIndexLength);
		int32_t* L_65 = L_64;
		int32_t L_66 = *((int32_t*)L_65);
		V_8 = L_66;
		int32_t L_67 = V_8;
		*((int32_t*)L_65) = (int32_t)((int32_t)il2cpp_codegen_add(L_67, 1));
		int32_t L_68 = V_8;
		V_2 = L_68;
	}

IL_011b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_69 = ___0_data;
		NullCheck(L_69);
		uint8_t* L_70 = L_69->___keys;
		int32_t L_71 = V_2;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_72 = ___1_key;
		UnsafeUtility_WriteArrayElement_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_m5084D24EC43390BB1675A6D796350DA00BAFAA2D_inline((void*)L_70, L_71, L_72, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_73 = ___0_data;
		NullCheck(L_73);
		uint8_t* L_74 = L_73->___values;
		int32_t L_75 = V_2;
		uint16_t L_76 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mAAF2E6888B17B2E7C3606BE66298D92F589F68C8_inline((void*)L_74, L_75, L_76, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_77;
		L_77 = int2_GetHashCode_mDC30EB8816F1ABC7195872B81F3EA9E8090866A6_inline((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_78 = ___0_data;
		NullCheck(L_78);
		int32_t L_79 = L_78->___bucketCapacityMask;
		V_4 = ((int32_t)(L_77&L_79));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_80 = ___0_data;
		NullCheck(L_80);
		uint8_t* L_81 = L_80->___buckets;
		V_5 = (int32_t*)L_81;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_82 = ___0_data;
		NullCheck(L_82);
		uint8_t* L_83 = L_82->___next;
		V_3 = (int32_t*)L_83;
		int32_t* L_84 = V_3;
		int32_t L_85 = V_2;
		int32_t* L_86 = V_5;
		int32_t L_87 = V_4;
		int32_t L_88 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_87), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_84, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_85), 4))))) = (int32_t)L_88;
		int32_t* L_89 = V_5;
		int32_t L_90 = V_4;
		int32_t L_91 = V_2;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_90), 4))))) = (int32_t)L_91;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m0E47DCAEDE66ECCAC4EDEC8632DF7EDD65873978_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		int32_t L_6;
		L_6 = int2_GetHashCode_mDC30EB8816F1ABC7195872B81F3EA9E8090866A6_inline((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		int32_t L_11 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), 4))))));
		V_5 = L_11;
		goto IL_00c8;
	}

IL_0040:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___keys;
		int32_t L_14 = V_5;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_15;
		L_15 = UnsafeUtility_ReadArrayElement_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mBB56303DF5D9BF30592847838B370074B0A0DC88_inline((void*)L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_15;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_16 = ___1_key;
		bool L_17;
		L_17 = int2_Equals_m4DB2E24953677E4E2497F1D0C4B48794257A89B6_inline((&V_6), L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_17)
		{
			goto IL_00ba;
		}
	}
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t* L_22 = V_2;
		int32_t L_23 = V_5;
		int32_t L_24 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))) = (int32_t)L_24;
		goto IL_0089;
	}

IL_0079:
	{
		int32_t* L_25 = V_2;
		int32_t L_26 = V_4;
		int32_t* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))) = (int32_t)L_29;
	}

IL_0089:
	{
		int32_t* L_30 = V_2;
		int32_t L_31 = V_5;
		int32_t L_32 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))));
		int32_t* L_33 = V_2;
		int32_t L_34 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		NullCheck(L_35);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_36 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_35->___firstFreeTLS);
		int32_t* L_37 = (int32_t*)(&L_36->___FixedElementField);
		int32_t L_38 = *((int32_t*)L_37);
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))) = (int32_t)L_38;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		NullCheck(L_39);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_40 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_39->___firstFreeTLS);
		int32_t* L_41 = (int32_t*)(&L_40->___FixedElementField);
		int32_t L_42 = V_5;
		*((int32_t*)L_41) = (int32_t)L_42;
		V_5 = L_32;
		bool L_43 = ___2_isMultiHashMap;
		if (L_43)
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_00da;
	}

IL_00ba:
	{
		int32_t L_44 = V_5;
		V_4 = L_44;
		int32_t* L_45 = V_2;
		int32_t L_46 = V_5;
		int32_t L_47 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_45, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_46), 4))))));
		V_5 = L_47;
	}

IL_00c8:
	{
		int32_t L_48 = V_5;
		if ((((int32_t)L_48) < ((int32_t)0)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_49 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_50 = ___0_data;
		NullCheck(L_50);
		int32_t L_51 = L_50->___keyCapacity;
		if ((((int32_t)L_49) < ((int32_t)L_51)))
		{
			goto IL_0040;
		}
	}

IL_00da:
	{
		int32_t L_52 = V_0;
		return L_52;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_mF548CC384C0BEC94A76E023232DAFE68261CCDC3_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A* L_4 = (int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = int2_GetHashCode_mDC30EB8816F1ABC7195872B81F3EA9E8090866A6_inline(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B L_12 = ___1_it;
		int32_t L_13 = L_12.___EntryIndex;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_13))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t* L_16 = V_1;
		int32_t L_17 = V_3;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4))))) = (int32_t)L_18;
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
	}

IL_0051:
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t L_25 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))));
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B L_26 = ___1_it;
		int32_t L_27 = L_26.___EntryIndex;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_28 = V_3;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_3;
		int32_t* L_31 = V_1;
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B L_32 = ___1_it;
		int32_t L_33 = L_32.___EntryIndex;
		int32_t L_34 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_34;
	}

IL_007b:
	{
		int32_t* L_35 = V_1;
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B L_36 = ___1_it;
		int32_t L_37 = L_36.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		NullCheck(L_38);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_39 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_38->___firstFreeTLS);
		int32_t* L_40 = (int32_t*)(&L_39->___FixedElementField);
		int32_t L_41 = *((int32_t*)L_40);
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_41;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		NullCheck(L_42);
		U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6* L_43 = (U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6*)(&L_42->___firstFreeTLS);
		int32_t* L_44 = (int32_t*)(&L_43->___FixedElementField);
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B L_45 = ___1_it;
		int32_t L_46 = L_45.___EntryIndex;
		*((int32_t*)L_44) = (int32_t)L_46;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mC826C4550D551B75154AEBD1635201FD15CA31BA_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___1_key, uint16_t* ___2_item, NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* L_0 = ___3_it;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* L_5 = ___3_it;
		int32_t L_6 = (-1);
		V_2 = L_6;
		L_5->___NextEntryIndex = L_6;
		int32_t L_7 = V_2;
		L_4->___EntryIndex = L_7;
		uint16_t* L_8 = ___2_item;
		il2cpp_codegen_initobj(L_8, sizeof(uint16_t));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___buckets;
		V_0 = (int32_t*)L_10;
		int32_t L_11;
		L_11 = int2_GetHashCode_mDC30EB8816F1ABC7195872B81F3EA9E8090866A6_inline((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* L_14 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* L_15 = ___3_it;
		int32_t* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_15->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_14->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		uint16_t* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m1946E9AA82CB48601E660DF6A0014B87789B00B3(L_21, L_22, L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m1946E9AA82CB48601E660DF6A0014B87789B00B3_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint16_t* ___1_item, NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		uint16_t* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(uint16_t));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))))));
		V_0 = L_13;
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_15 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___keys;
		int32_t L_20 = V_0;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_21;
		L_21 = UnsafeUtility_ReadArrayElement_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mBB56303DF5D9BF30592847838B370074B0A0DC88_inline((void*)L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_2 = L_21;
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* L_22 = ___2_it;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_23 = L_22->___key;
		bool L_24;
		L_24 = int2_Equals_m4DB2E24953677E4E2497F1D0C4B48794257A89B6_inline((&V_2), L_23, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		if (!L_24)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* L_25 = ___2_it;
		int32_t* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))));
		L_25->___NextEntryIndex = L_28;
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* L_29 = ___2_it;
		int32_t L_30 = V_0;
		L_29->___EntryIndex = L_30;
		uint16_t* L_31 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___values;
		int32_t L_34 = V_0;
		uint16_t L_35;
		L_35 = UnsafeUtility_ReadArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mDA4F2F1FC33E2F2F8CC3E761D626E638762C61E4_inline((void*)L_33, L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(uint16_t*)L_31 = L_35;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_mD50B9532D0B1F2134E2161B8E684D7D74A2FE2D0_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* ___1_it, uint16_t* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t9FA3E6095779C16B181682598A6BCDBA4075240B* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		uint16_t* L_9 = ___2_item;
		uint16_t L_10 = (*(uint16_t*)L_9);
		UnsafeUtility_WriteArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mAAF2E6888B17B2E7C3606BE66298D92F589F68C8_inline((void*)L_7, L_8, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m5718BC5C3D50D76975C4D1D9E71F75D42D50AE0E_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_mC4A098C23F314495CC62D5990E8A8949A8562DEC_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_m4B05C229409D03345817217AAFA8FC4B626E93BE_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_m79D9068E7CC7D1E702F6D336CE20FD3D31C111EC_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_max_m9083201D37A8ED0157B127B5878D9B7F3A2A40BE_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___1_y;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_2 = ___1_y;
		return L_2;
	}

IL_0006:
	{
		int32_t L_3 = ___0_x;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_min_m02D43DF516544C279AF660EA4731449C82991849_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___1_y;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_2 = ___1_y;
		return L_2;
	}

IL_0006:
	{
		int32_t L_3 = ___0_x;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t int2_GetHashCode_mDC30EB8816F1ABC7195872B81F3EA9E8090866A6_inline (int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A* __this, const RuntimeMethod* method) 
{
	{
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_0 = (*(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A*)__this);
		uint32_t L_1;
		L_1 = math_hash_m6B6E0FC08FCC3BC0940397676690F22B03DB4F16_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool int2_Equals_m4DB2E24953677E4E2497F1D0C4B48794257A89B6_inline (int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A* __this, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_rhs, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___x;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_1 = ___0_rhs;
		int32_t L_2 = L_1.___x;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = __this->___y;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_4 = ___0_rhs;
		int32_t L_5 = L_4.___y;
		return (bool)((((int32_t)L_3) == ((int32_t)L_5))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisWindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3_m426883B54AF30DDA55FA1F84E5083B86ECDECD15_gshared_inline (void* ___0_destination, int32_t ___1_index, WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3);
		WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3 L_3 = ___2_value;
		*(WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ParallelWriter__ctor_mBC1F78E6299EA08765C42B809498CDFF92312146_gshared_inline (ParallelWriter_t44CFE37FDC25ADFD53664D63793BA9A6C6D48FA4* __this, UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* ___0_listData, const RuntimeMethod* method) 
{
	{
		UnsafeList_1_tB5F1404CA8B1DC14D24B6CC429C23C2BC1F14057* L_0 = ___0_listData;
		__this->___ListData = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisWindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3_m2F9303AED865A1049498E360278CF4504F790F3D_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(WindData_t13A245B85F355C8A14B46F5CCB76D2A42FF0C0B3);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_gshared_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = ___2_value;
		*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48259D1BF2B093A901E095965654FE2E58AEF18B_gshared_inline (void* ___0_destination, int32_t ___1_index, bool ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(bool);
		bool L_3 = ___2_value;
		*(bool*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = (*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(bool);
		bool L_3 = (*(bool*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m193B136343991E144053A14C8C435C19E5516EE0_gshared_inline (void* ___0_destination, int32_t ___1_index, uint8_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = ___2_value;
		*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m06447B534673E0861DE4F55616DFAF9BD7DCBCC6_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = (*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mAAF2E6888B17B2E7C3606BE66298D92F589F68C8_gshared_inline (void* ___0_destination, int32_t ___1_index, uint16_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(uint16_t);
		uint16_t L_3 = ___2_value;
		*(uint16_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t UnsafeUtility_ReadArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mDA4F2F1FC33E2F2F8CC3E761D626E638762C61E4_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(uint16_t);
		uint16_t L_3 = (*(uint16_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisTransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20_mBD2C55B3AAF9B0F344497E789FDCDF26186EBA0F_gshared_inline (void* ___0_destination, int32_t ___1_index, TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20);
		TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20 L_3 = ___2_value;
		*(TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20 UnsafeUtility_ReadArrayElement_TisTransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20_m41A161AA831DC15C0FFE00918C25978D07864CD6_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20);
		TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20 L_3 = (*(TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E_m037B85F45E867FB9B0265056B549A1D51EDA8498_gshared_inline (void* ___0_destination, int32_t ___1_index, BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E);
		BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E L_3 = ___2_value;
		*(BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E UnsafeUtility_ReadArrayElement_TisBaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E_m4B42E098503E3D7B2A5BB163E12C18B3C8742901_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E);
		BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E L_3 = (*(BaseLineWork_t78B99A13F57FDC791F4DFE488CFCD590014EE81E*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_m5084D24EC43390BB1675A6D796350DA00BAFAA2D_gshared_inline (void* ___0_destination, int32_t ___1_index, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A);
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_3 = ___2_value;
		*(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisFixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2_m4837515DA02459F7A686F93E833E1211A18E3E52_gshared_inline (void* ___0_destination, int32_t ___1_index, FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2);
		FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2 L_3 = ___2_value;
		*(FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A UnsafeUtility_ReadArrayElement_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mBB56303DF5D9BF30592847838B370074B0A0DC88_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A);
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_3 = (*(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2 UnsafeUtility_ReadArrayElement_TisFixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2_m9AD3853DFCBD2F1ACBFE1C654300A095EB1D7F5F_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2);
		FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2 L_3 = (*(FixedList128Bytes_1_tB103FF1A7B0703B96730901FA0665CBD0ADC83D2*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t math_hash_m6B6E0FC08FCC3BC0940397676690F22B03DB4F16_inline (int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_v, const RuntimeMethod* method) 
{
	{
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_0 = ___0_v;
		uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F L_1;
		L_1 = math_asuint_m64DA623C5CFEB8445663480384F2B1C202150EE5_inline(L_0, NULL);
		uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F L_2;
		L_2 = math_uint2_m861F5F74EBBBD3DA19E84A1155320B89FF7341C3_inline(((int32_t)-2085256649), ((int32_t)-2093072855), NULL);
		uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F L_3;
		L_3 = uint2_op_Multiply_m2A4BC394328643E664AD9C17DA4BF1B0AC58E857_inline(L_1, L_2, NULL);
		uint32_t L_4;
		L_4 = math_csum_m0B6655875FE24428E18B97FC3F5C745E374530A3_inline(L_3, NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)L_4, ((int32_t)-1445389889)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F math_asuint_m64DA623C5CFEB8445663480384F2B1C202150EE5_inline (int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_x, const RuntimeMethod* method) 
{
	{
		uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F L_0 = (*(uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F*)((uintptr_t)(&___0_x)));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F math_uint2_m861F5F74EBBBD3DA19E84A1155320B89FF7341C3_inline (uint32_t ___0_x, uint32_t ___1_y, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_x;
		uint32_t L_1 = ___1_y;
		uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F L_2;
		memset((&L_2), 0, sizeof(L_2));
		uint2__ctor_mDE945EFF54FDA16335AC19E9E01A9BAE161B8D3F_inline((&L_2), L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F uint2_op_Multiply_m2A4BC394328643E664AD9C17DA4BF1B0AC58E857_inline (uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F ___0_lhs, uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F ___1_rhs, const RuntimeMethod* method) 
{
	{
		uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F L_0 = ___0_lhs;
		uint32_t L_1 = L_0.___x;
		uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F L_2 = ___1_rhs;
		uint32_t L_3 = L_2.___x;
		uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F L_4 = ___0_lhs;
		uint32_t L_5 = L_4.___y;
		uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F L_6 = ___1_rhs;
		uint32_t L_7 = L_6.___y;
		uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F L_8;
		memset((&L_8), 0, sizeof(L_8));
		uint2__ctor_mDE945EFF54FDA16335AC19E9E01A9BAE161B8D3F_inline((&L_8), ((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)L_3)), ((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)L_7)), NULL);
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t math_csum_m0B6655875FE24428E18B97FC3F5C745E374530A3_inline (uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F ___0_x, const RuntimeMethod* method) 
{
	{
		uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F L_0 = ___0_x;
		uint32_t L_1 = L_0.___x;
		uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F L_2 = ___0_x;
		uint32_t L_3 = L_2.___y;
		return ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_3));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void uint2__ctor_mDE945EFF54FDA16335AC19E9E01A9BAE161B8D3F_inline (uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F* __this, uint32_t ___0_x, uint32_t ___1_y, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_x;
		__this->___x = L_0;
		uint32_t L_1 = ___1_y;
		__this->___y = L_1;
		return;
	}
}
