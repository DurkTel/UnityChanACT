﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3* p3)
	{
		void* params[3] = { &p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
struct ConstrainedActionInvoker0
{
	static inline void Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, NULL);
	}
};

struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct EqualityComparer_1_t3623A572B0FA54A1BF249FA9AB30236498C32423;
struct EqualityComparer_1_tA3B1D933733F9FCD47DA56535ED7886D3422CB50;
struct EqualityComparer_1_t1A2724DE19E33ECECEDA97FE55A35054C6A07B89;
struct HashSetEqualityComparer_1_t1D099B36C6627D1A99D52592395FEA9EFEA4E9CF;
struct HashSetEqualityComparer_1_t1CD0AE30BF793E90CB641F81BFEE25F14A417091;
struct HashSetEqualityComparer_1_tDFACFD224D2EB4F75EA99B04686F77CCB360CFFB;
struct HashSetEqualityComparer_1_t689F5D78B6E49CAF0CEC9DBE5A5A6DD821AF2F8D;
struct HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206;
struct HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87;
struct HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1;
struct HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85;
struct HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51;
struct ICollection_1_t9500EF7ABF397CA3F4567A635AC50B314D532A13;
struct ICollection_1_tB388ED908E2D241F56264CA971F25D9ADC1ADEC3;
struct ICollection_1_t3C0100F00027A16ADBA56D59DCA1B72D70E9E98D;
struct ICollection_1_t4390BB4E6F48F13B0BF37ADA1CC070FB499DDBB7;
struct ICollection_1_t1AC551960A3C92A16E59550ABC8AEFF5A5C324D9;
struct IEnumerable_1_tA7E2E91E8B279A2BE8A22AA177C0ECD85F0098BD;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerable_1_t550740F6ECD06DC90120998C56A040937485A0CE;
struct IEnumerable_1_t980514A984CC4A0F82483CC7433522D8F76B4CD8;
struct IEnumerable_1_tB87F270E693A5A823212D6B39CB1C38239BC9729;
struct IEnumerator_1_t13370AA727EBC744585895C787F40C19A190C69C;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEnumerator_1_t86E9756A0B78899EAF3F1D82685BE442C9BB3AAC;
struct IEnumerator_1_tC4F671C2C503D985E4E09839EDCB2D38520C73B9;
struct IEnumerator_1_tE16F413739EE1D5105B436432A873327A9446A8D;
struct IEqualityComparer_1_t55C5A54265562D956576408F9DA0722B539480EF;
struct IEqualityComparer_1_t1B36A543A633D7B8E0FBCF0363577CE84C741182;
struct IEqualityComparer_1_t0975F63AA346F135DD05736A048D47B4A0BC76F5;
struct IEqualityComparer_1_t7F4F917EA84A2358BEA92FC66DC00A61D9FD90F4;
struct IEqualityComparer_1_t3B03E56461701314F1696C8102514A64BDE038B0;
struct IEqualityComparer_1_tC53A6B5E00FD0034DDB9D7A2B505C1E784820A60;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct IEqualityComparer_1_t6797F58B8B6FB866B6E7D11AABA21B657096767D;
struct IEqualityComparer_1_t07A5F71B8FE61568C3EE3802145E743EEFACE509;
struct IEqualityComparer_1_tC0F89B1C957DA6FB888E346FBD94901258FF0964;
struct Predicate_1_t9ADD2AEC8229E068388E35FC4B0E7C4F2AE588D6;
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107;
struct Predicate_1_tF41DB32AAF3F0B3D100E7030BD9909B760A73F5A;
struct Predicate_1_t7F3BBF48975AA1093F31885E875DDACD41E9AAF3;
struct Predicate_1_t6CD543AD1D01723C56EE7C9824DA046DB9B9F266;
struct SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51;
struct SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D;
struct SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347;
struct SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017;
struct SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct int2U5BU5D_tC349316FD7D3F522EC7DAD79861BE5B748271915;
struct int3U5BU5D_t229A503AFCA400BB5E6C562712AD389098E2FF26;
struct int4U5BU5D_t036E74070BB2037017010DB7F1DCF33D92281795;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414;
IL2CPP_EXTERN_C String_t* _stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B;
IL2CPP_EXTERN_C String_t* _stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25;
IL2CPP_EXTERN_C String_t* _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0;
IL2CPP_EXTERN_C String_t* _stringLiteral91930CCAB5CB8F6F327407F9A14CF42F57A0F27B;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4;
IL2CPP_EXTERN_C String_t* _stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7;
IL2CPP_EXTERN_C String_t* _stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E;
IL2CPP_EXTERN_C String_t* _stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
IL2CPP_EXTERN_C String_t* _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C String_t* _stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C;
IL2CPP_EXTERN_C String_t* _stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51;
struct SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D;
struct SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347;
struct SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017;
struct SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct int2U5BU5D_tC349316FD7D3F522EC7DAD79861BE5B748271915;
struct int3U5BU5D_t229A503AFCA400BB5E6C562712AD389098E2FF26;
struct int4U5BU5D_t036E74070BB2037017010DB7F1DCF33D92281795;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct EqualityComparer_1_t3623A572B0FA54A1BF249FA9AB30236498C32423  : public RuntimeObject
{
};
struct EqualityComparer_1_tA3B1D933733F9FCD47DA56535ED7886D3422CB50  : public RuntimeObject
{
};
struct EqualityComparer_1_t1A2724DE19E33ECECEDA97FE55A35054C6A07B89  : public RuntimeObject
{
};
struct HashSetEqualityComparer_1_t1D099B36C6627D1A99D52592395FEA9EFEA4E9CF  : public RuntimeObject
{
	RuntimeObject* ____comparer;
};
struct HashSetEqualityComparer_1_t4E49A00622F2BAD555A050ACB77609A289C9CE9B  : public RuntimeObject
{
	RuntimeObject* ____comparer;
};
struct HashSetEqualityComparer_1_t1CD0AE30BF793E90CB641F81BFEE25F14A417091  : public RuntimeObject
{
	RuntimeObject* ____comparer;
};
struct HashSetEqualityComparer_1_tDFACFD224D2EB4F75EA99B04686F77CCB360CFFB  : public RuntimeObject
{
	RuntimeObject* ____comparer;
};
struct HashSetEqualityComparer_1_t689F5D78B6E49CAF0CEC9DBE5A5A6DD821AF2F8D  : public RuntimeObject
{
	RuntimeObject* ____comparer;
};
struct HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1  : public RuntimeObject
{
	int32_t ____length;
	int32_t* ____arrayPtr;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____array;
	bool ____useStackAlloc;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex;
	int32_t ___m_currMember;
	RuntimeObject* ___m_converter;
	String_t* ___m_fullTypeName;
	String_t* ___m_assemName;
	Type_t* ___objectType;
	bool ___isFullTypeNameSetExplicit;
	bool ___isAssemblyNameSetExplicit;
	bool ___requireSameTokenInPartialTrust;
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
struct ElementCount_tE45FBE1CF2EAA8D8225A2C1014799D284061AB99 
{
	int32_t ___uniqueCount;
	int32_t ___unfoundCount;
};
struct ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 
{
	int32_t ___uniqueCount;
	int32_t ___unfoundCount;
};
struct ElementCount_t8A008F159849D422F571730DBAD055B05471FB61 
{
	int32_t ___uniqueCount;
	int32_t ___unfoundCount;
};
struct ElementCount_tC619A6BA4F7B87ECD3DFC8B1500C28F177C6B5CA 
{
	int32_t ___uniqueCount;
	int32_t ___unfoundCount;
};
struct ElementCount_t09BC3D71FBA88FF07695C2BE3838AB49E877F0D5 
{
	int32_t ___uniqueCount;
	int32_t ___unfoundCount;
};
typedef Il2CppFullySharedGenericStruct Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB;
typedef Il2CppFullySharedGenericStruct Slot_tEC146EEEF7022C6542EBF082D658446682962BFD;
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
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
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Z;
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
struct int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A 
{
	int32_t ___x;
	int32_t ___y;
};
struct int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF 
{
	int32_t ___x;
	int32_t ___y;
	int32_t ___z;
};
struct int4_tBA77D4945786DE82C3A487B33955EA1004996052 
{
	int32_t ___x;
	int32_t ___y;
	int32_t ___z;
	int32_t ___w;
};
struct Enumerator_t0C7989F0F45B4D7A9C7BD464806B72BDA3020B8C 
{
	HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* ____set;
	int32_t ____index;
	int32_t ____version;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ____current;
};
struct Enumerator_t9CF79F755FC8DD7C2EA5EE61D7046718C0F8E77A 
{
	HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* ____set;
	int32_t ____index;
	int32_t ____version;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ____current;
};
struct Enumerator_t3A3D0CB1E039CA2A4D21932E46575AA117FA0F9A 
{
	HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* ____set;
	int32_t ____index;
	int32_t ____version;
	int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ____current;
};
struct Enumerator_t444D848AC8669A1715E471A02D6102B43CE95821 
{
	HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* ____set;
	int32_t ____index;
	int32_t ____version;
	int4_tBA77D4945786DE82C3A487B33955EA1004996052 ____current;
};
struct Slot_t5EC3D0B1C424F7E912B3CE58F54AD84E43456844 
{
	int32_t ___hashCode;
	int32_t ___next;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___value;
};
struct Slot_tDADFD32C0C0380387FBD2D8865316D63782E26C5 
{
	int32_t ___hashCode;
	int32_t ___next;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___value;
};
struct Slot_tB63CD2518F6D7144210EB8A285CA4C855672E937 
{
	int32_t ___hashCode;
	int32_t ___next;
	int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___value;
};
struct Slot_t3A2DF3D20576140ECA68FC0F9CA5D090F24F7D60 
{
	int32_t ___hashCode;
	int32_t ___next;
	int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___value;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
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
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	int32_t ___value__;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Predicate_1_t9ADD2AEC8229E068388E35FC4B0E7C4F2AE588D6  : public MulticastDelegate_t
{
};
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107  : public MulticastDelegate_t
{
};
struct Predicate_1_tF41DB32AAF3F0B3D100E7030BD9909B760A73F5A  : public MulticastDelegate_t
{
};
struct Predicate_1_t7F3BBF48975AA1093F31885E875DDACD41E9AAF3  : public MulticastDelegate_t
{
};
struct Predicate_1_t6CD543AD1D01723C56EE7C9824DA046DB9B9F266  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09_StaticFields
{
	EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* ___defaultComparer;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct EqualityComparer_1_t3623A572B0FA54A1BF249FA9AB30236498C32423_StaticFields
{
	EqualityComparer_1_t3623A572B0FA54A1BF249FA9AB30236498C32423* ___defaultComparer;
};
struct EqualityComparer_1_tA3B1D933733F9FCD47DA56535ED7886D3422CB50_StaticFields
{
	EqualityComparer_1_tA3B1D933733F9FCD47DA56535ED7886D3422CB50* ___defaultComparer;
};
struct EqualityComparer_1_t1A2724DE19E33ECECEDA97FE55A35054C6A07B89_StaticFields
{
	EqualityComparer_1_t1A2724DE19E33ECECEDA97FE55A35054C6A07B89* ___defaultComparer;
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
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back;
};
struct int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_StaticFields
{
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___zero;
};
struct int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_StaticFields
{
	int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___zero;
};
struct int4_tBA77D4945786DE82C3A487B33955EA1004996052_StaticFields
{
	int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___zero;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_StaticFields
{
	String_t* ___s_nullMessage;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_t5EC3D0B1C424F7E912B3CE58F54AD84E43456844 m_Items[1];

	inline Slot_t5EC3D0B1C424F7E912B3CE58F54AD84E43456844 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_t5EC3D0B1C424F7E912B3CE58F54AD84E43456844* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_t5EC3D0B1C424F7E912B3CE58F54AD84E43456844 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Slot_t5EC3D0B1C424F7E912B3CE58F54AD84E43456844 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_t5EC3D0B1C424F7E912B3CE58F54AD84E43456844* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_t5EC3D0B1C424F7E912B3CE58F54AD84E43456844 value)
	{
		m_Items[index] = value;
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 m_Items[1];

	inline Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 value)
	{
		m_Items[index] = value;
	}
};
struct SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_tDADFD32C0C0380387FBD2D8865316D63782E26C5 m_Items[1];

	inline Slot_tDADFD32C0C0380387FBD2D8865316D63782E26C5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_tDADFD32C0C0380387FBD2D8865316D63782E26C5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_tDADFD32C0C0380387FBD2D8865316D63782E26C5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Slot_tDADFD32C0C0380387FBD2D8865316D63782E26C5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_tDADFD32C0C0380387FBD2D8865316D63782E26C5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_tDADFD32C0C0380387FBD2D8865316D63782E26C5 value)
	{
		m_Items[index] = value;
	}
};
struct int2U5BU5D_tC349316FD7D3F522EC7DAD79861BE5B748271915  : public RuntimeArray
{
	ALIGN_FIELD (8) int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A m_Items[1];

	inline int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A value)
	{
		m_Items[index] = value;
	}
};
struct SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_tB63CD2518F6D7144210EB8A285CA4C855672E937 m_Items[1];

	inline Slot_tB63CD2518F6D7144210EB8A285CA4C855672E937 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_tB63CD2518F6D7144210EB8A285CA4C855672E937* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_tB63CD2518F6D7144210EB8A285CA4C855672E937 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Slot_tB63CD2518F6D7144210EB8A285CA4C855672E937 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_tB63CD2518F6D7144210EB8A285CA4C855672E937* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_tB63CD2518F6D7144210EB8A285CA4C855672E937 value)
	{
		m_Items[index] = value;
	}
};
struct int3U5BU5D_t229A503AFCA400BB5E6C562712AD389098E2FF26  : public RuntimeArray
{
	ALIGN_FIELD (8) int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF m_Items[1];

	inline int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF value)
	{
		m_Items[index] = value;
	}
};
struct SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_t3A2DF3D20576140ECA68FC0F9CA5D090F24F7D60 m_Items[1];

	inline Slot_t3A2DF3D20576140ECA68FC0F9CA5D090F24F7D60 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_t3A2DF3D20576140ECA68FC0F9CA5D090F24F7D60* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_t3A2DF3D20576140ECA68FC0F9CA5D090F24F7D60 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Slot_t3A2DF3D20576140ECA68FC0F9CA5D090F24F7D60 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_t3A2DF3D20576140ECA68FC0F9CA5D090F24F7D60* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_t3A2DF3D20576140ECA68FC0F9CA5D090F24F7D60 value)
	{
		m_Items[index] = value;
	}
};
struct int4U5BU5D_t036E74070BB2037017010DB7F1DCF33D92281795  : public RuntimeArray
{
	ALIGN_FIELD (8) int4_tBA77D4945786DE82C3A487B33955EA1004996052 m_Items[1];

	inline int4_tBA77D4945786DE82C3A487B33955EA1004996052 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int4_tBA77D4945786DE82C3A487B33955EA1004996052* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int4_tBA77D4945786DE82C3A487B33955EA1004996052 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int4_tBA77D4945786DE82C3A487B33955EA1004996052 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int4_tBA77D4945786DE82C3A487B33955EA1004996052* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int4_tBA77D4945786DE82C3A487B33955EA1004996052 value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* EqualityComparer_1_get_Default_m165DD3094175955D08A5F82EE68A51CB660ECB35_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m3B13B24F25A9585742686CBBC6E62F4FBB71ED0E_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m67409B94BBBB6F2CE3C0B8FF7B056FAC001DEE6B_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m7785AAD79631315CDC3CE377B5F7D569510F81C0_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_m24AB1C428CF69A20C7006FA98063A675FEFE5C08_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* ___0_set1, HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* ___1_set2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m2FB3E458C2E80D5280C2142FC8EDAF3003892CA2_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m91B757109985496B87D12AADF01B0E3EADA6B1AA_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_mC3AEF962E9ED5BC310A3D006417BD10521A0188C_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_mAA9D5071655D30CE928502F9E0197F79D7538F52_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_mD030E7EF55F002EE06DAE707324241072C552BBE_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, int32_t ___0_index, int32_t ___1_hashCode, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_m18AC5E6888A07CA9D750022D5C6F385C53F82B80_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_mDF00F338B7A9F7395CE0D5E0C806C4ABAA05609E_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m8FCE3B4F65BDE34A7C90D943C4536DA875709695_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mCD984FA25C14209D03737ED1BA80E117300B6565_gshared (Enumerator_t0C7989F0F45B4D7A9C7BD464806B72BDA3020B8C* __this, HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m05E986C567C44C0593868AB7740623F55B3BCEFF_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalIndexOf_mC77941EE82B2CCBFFEFA911B5DD8EE3D73A28809_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_mC6F14B68114CDA921868056229A9E84D044A95EC_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithHashSetWithSameEC_mE18C2EDDD29AB2492870FE585E61410EFDB38343_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithEnumerable_m33C307C3F4AC9228A8F1C69EABF0BBF788674800_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m86DC3E3C44662829D9ED89390B8D279F79615111_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithUniqueHashSet_m72375E1B6CD241B7236D787DB9852189190CD714_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithEnumerable_m443359966B7985B222913BEE6828C95CBB740849_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_mFB71560159D8163320DA0651E1F05936B175803C_gshared_inline (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOfHashSetWithSameEC_mDA2B3185B79BDC115ED1E9DE4C466E16B004AE8F_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementCount_tE45FBE1CF2EAA8D8225A2C1014799D284061AB99 HashSet_1_CheckUniqueAndUnfoundElements_mA7CEA03A8D2B121235FD7CA56C21A7DF1B92E5AC_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_ContainsAllElements_m8A2BDBB95EB3CDFEA33CDA6C2A8F06F7720CD4AC_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_mF0DB26284CB57E818068D8940E37B48565E4C688_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mB0F7DE9471912D4DA1C88986F3A1E6D4A1631F00_gshared_inline (Predicate_1_t9ADD2AEC8229E068388E35FC4B0E7C4F2AE588D6* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_mAFDEE46F46BCCF8B18F36E85CECF8611D0752802_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetEqualityComparer_1__ctor_mD130A04E00569FC1F74F28306FB00E9C167BF7CA_gshared (HashSetEqualityComparer_1_t1D099B36C6627D1A99D52592395FEA9EFEA4E9CF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_mBE2058DA6AF7E5A806C3D41CA779778C52932075_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t0C7989F0F45B4D7A9C7BD464806B72BDA3020B8C HashSet_1_GetEnumerator_m0B88ADAC18FFB66D069C900DEBB9DBAD47358382_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m43A9A2AE7F9F37568D075B81C2CBF966157DC640_gshared (Enumerator_t0C7989F0F45B4D7A9C7BD464806B72BDA3020B8C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 Enumerator_get_Current_m3159B7369EC62631C4C10AD1055F55B6B15218E9_gshared_inline (Enumerator_t0C7989F0F45B4D7A9C7BD464806B72BDA3020B8C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m917546674D1D13C3F3E49962CD1006DF18F4196F_gshared (Enumerator_t0C7989F0F45B4D7A9C7BD464806B72BDA3020B8C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddOrGetLocation_mD9C917E898F8FB72F17D9D03774B10CFEC6EB8D0_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_value, int32_t* ___1_location, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_m302A4EEC161C86619F472AD3FC4A634D53CB1FA0_gshared_inline (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m62B32E8D2F70569824269DDC82F384BDBC8662F5_gshared (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* __this, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___0_set, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t3623A572B0FA54A1BF249FA9AB30236498C32423* EqualityComparer_1_get_Default_mE1A8E1F0A77A6C7B6F2EAFF3246AEDF7E22F7E69_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mB40DC09EF650CC86210818231255FCC960D8C688_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m58C4B2BFFA2343F36BDEB7C407B3BC086419298B_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m89BFE73EE594C790CF219AB0570F3D2B1B8E9197_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_m80B2D2C00AB07F2C6D8EC516572FD36E007CD487_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* ___0_set1, HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* ___1_set2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m9DDC4A4462B9D99764DFF30F3BB9A76B817A5E09_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_mFC6B68188562FC358678927CA39C0118E3E9FB01_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_m2235053BE00511A8473539181A4CB6F544F136AA_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_m130124985B5DA4E6C18C1855CE972046894B73D9_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_mA7E85B34B85A81E7082B49E320B94A130413AF84_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, int32_t ___0_index, int32_t ___1_hashCode, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_mDDA4F4C8239E8105D88AD1D8C535606D5CCBB255_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m38C32C3B5A7094BC22FE52EBCCF45EBD690E5252_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mB5A25106DA209EFEB296695D6416EC6A283A1B86_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, int2U5BU5D_tC349316FD7D3F522EC7DAD79861BE5B748271915* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m9965034FB4FC9028EDA7A04A5F9B9C7512047889_gshared (Enumerator_t9CF79F755FC8DD7C2EA5EE61D7046718C0F8E77A* __this, HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mB28611BF66F45444301EB815BD44042721120439_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, int2U5BU5D_tC349316FD7D3F522EC7DAD79861BE5B748271915* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalIndexOf_m8BC1AD852D2EC56E820628C9A4B00026CABFA87E_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m28A7D11E936B2BBE05FB20DA7385CB82CB1781B0_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithHashSetWithSameEC_m9383FF9F82C9454A67F94BCC2707397225B57B1A_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithEnumerable_m5E71140E025A11D2846563E797517B05AE10FB24_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mD4851D6512BB33211CBB5B520254AA33FE45EFB9_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithUniqueHashSet_mF755891654E02E455E96A50875E6943592C6DBB0_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithEnumerable_m1669EF86E3F89103DA77E8B13179C82DA9C3F9AE_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m24CFCD730AE8EB3AE4D250B05692718E272F8940_gshared_inline (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOfHashSetWithSameEC_m8F85274FA267DACD46BAED82D75582888133B578_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementCount_t8A008F159849D422F571730DBAD055B05471FB61 HashSet_1_CheckUniqueAndUnfoundElements_mDF221DA6D8D968D4E5C0617A4E94223D0BF9E6B2_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_ContainsAllElements_m6F2BDB847FB091EF6690D7D4602035086F26B9EA_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m8C956F26A04EC4599CD398F4C96B8BF1433E43E2_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m2947F3CB956C7AE73995537B4046EC17478AEF7D_gshared_inline (Predicate_1_tF41DB32AAF3F0B3D100E7030BD9909B760A73F5A* __this, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_mC4EC5823B0DDC5D3FF2483AFB6562925D981FC71_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetEqualityComparer_1__ctor_mF77C996164B367953F95083C459EAE5F99D3C908_gshared (HashSetEqualityComparer_1_t1CD0AE30BF793E90CB641F81BFEE25F14A417091* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_mA5C676C545835B66F3D34EC85BB7B8D147F324FB_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9CF79F755FC8DD7C2EA5EE61D7046718C0F8E77A HashSet_1_GetEnumerator_m545CA8C794A8CF8BEAC976CEB23D89CD0213F779_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m4F548EDA912670C783CD065F48283424425505C4_gshared (Enumerator_t9CF79F755FC8DD7C2EA5EE61D7046718C0F8E77A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A Enumerator_get_Current_m402B297175A3F69505C145B0FA96EF769001C61E_gshared_inline (Enumerator_t9CF79F755FC8DD7C2EA5EE61D7046718C0F8E77A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m6BFCA349EAC2509C0D75B27CD64354E8BB2E0929_gshared (Enumerator_t9CF79F755FC8DD7C2EA5EE61D7046718C0F8E77A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddOrGetLocation_m212B8418FC9A77E8E02D5AE7CD994CBA87129250_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_value, int32_t* ___1_location, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_m9E0C308E111E5BB1B52F8FD1F03688AADB791982_gshared_inline (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tA3B1D933733F9FCD47DA56535ED7886D3422CB50* EqualityComparer_1_get_Default_mFB695EAD762B1CFF4DB8B7A33C6C8327EF377731_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mA84331C832D0E79D91D87364D68D10C1E4FE6AF7_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m68B4C8486DEF4ADF77AE1EAE5520D671D990FADD_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m8E66B9416E08EE5E8ED4E04BABA8E3D5C75D231A_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_mF86C3DA368B770FD0FB4D9295F2314C38B38784D_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* ___0_set1, HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* ___1_set2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_mFF26F13F600E70EE63A7BB6D11D2DF0DFE90CDF1_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_mE3FA0817AFC7D623138A8F6634D2F9003F369580_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_m132500A60EC477412D12F7AE95D9C0E9840EA70B_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_mCE655D3A846C3F4249E315B02CD75C3398F1CDE3_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m96A0A64CA666C113BC119202615514C8F745DAB1_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, int32_t ___0_index, int32_t ___1_hashCode, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_m8B0536551F4711335C12E1681CE3BD5B54FDF66A_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_mF732F65D490EE103994E0F586A91ED1F0468DBF2_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m47B5E068904A3A9B5F90DA9A34770AA3AD2EB88C_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, int3U5BU5D_t229A503AFCA400BB5E6C562712AD389098E2FF26* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m9633D23E13B67B1AAC008BB0F7E9DFE8DCB8DD62_gshared (Enumerator_t3A3D0CB1E039CA2A4D21932E46575AA117FA0F9A* __this, HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mAABBA9B15620D48EE8CF6F17CE7746391D7B91E5_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, int3U5BU5D_t229A503AFCA400BB5E6C562712AD389098E2FF26* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalIndexOf_mCEA12CBE772BDE247D7095341B6B7DB821798268_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m11932525C3BF62A509C2B1791260C61850AFBAFF_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithHashSetWithSameEC_m3C3C456EA0CC853F8181FE7E1E88D39046DA84D2_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithEnumerable_mAEA29924CC49946DCB5601E9279EEFD770860041_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mECC76AFB2377CA54428F1076B18526913E9568DF_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithUniqueHashSet_mE6C6FF13E1AD272A09DCFFB5D8D9D77E0C09EEA6_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithEnumerable_m71DEC7F85AFE40C6DEE77707F98A1DC32CF6FA0C_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_mA102A68A3C7550BA9E888E08C4495D88C23E4685_gshared_inline (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOfHashSetWithSameEC_m546FAC26FF7973B82997C1EE004C8957DDF417F9_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementCount_tC619A6BA4F7B87ECD3DFC8B1500C28F177C6B5CA HashSet_1_CheckUniqueAndUnfoundElements_m10283339477DFFB8F2A17B32F1634ADC41E2A66A_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_ContainsAllElements_mD92047BCA431E17F5B6668030BEC2566295EFAC3_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m93591D4087832CAB4ED735F3803B8EDDCC39246B_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mDF73A0B6D0DF1E104D3A8E1AABE0A355D00ECEE2_gshared_inline (Predicate_1_t7F3BBF48975AA1093F31885E875DDACD41E9AAF3* __this, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_mC9D37AF68CEEF6AC91CB1195ADF93D58C12421AD_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetEqualityComparer_1__ctor_m9AE008FBBDB462B7003EF456764FACCB0D012B80_gshared (HashSetEqualityComparer_1_tDFACFD224D2EB4F75EA99B04686F77CCB360CFFB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m2DE98E1E8C23CB414B7FC96311B6C332B13FE8DB_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t3A3D0CB1E039CA2A4D21932E46575AA117FA0F9A HashSet_1_GetEnumerator_m49847C49F34A02169D4E1C6E2546E73A96AEA1C7_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m131B1D6B6B3B83539DD9608E0F98C2642BEDE8AB_gshared (Enumerator_t3A3D0CB1E039CA2A4D21932E46575AA117FA0F9A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF Enumerator_get_Current_m210CE4A2BAA9537A817DBE89106EC3F0876B369A_gshared_inline (Enumerator_t3A3D0CB1E039CA2A4D21932E46575AA117FA0F9A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mBC1EFDA8FA71B5BB546AE0B519FBBB6C66CBD553_gshared (Enumerator_t3A3D0CB1E039CA2A4D21932E46575AA117FA0F9A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddOrGetLocation_m2A4CD21A41A634889CDE75A447AA8B41FD5EF6C7_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___0_value, int32_t* ___1_location, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_mCAEE62B8999A728702AFE3940A3EA6082FB39546_gshared_inline (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t1A2724DE19E33ECECEDA97FE55A35054C6A07B89* EqualityComparer_1_get_Default_m4464B0DA95E648A79240409742917C9853AD8686_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m87017D5FBAACA0F2959A7105E35C84829A3F696F_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m2DC7B2CA8877B5DAB7DFD56707447B54EBF9BE25_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m42A57BB8AAADC0ECE9108C0E3906DB23E101CDE1_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_mDB32BC9986BCAE9DD3B862B75797CC8DE54CF1EF_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* ___0_set1, HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* ___1_set2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_mE8F695FBCEE3C3DD199042AF7CA690D2C2FB3B72_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m93E4BAB3F76B559B526334D597B9A247C5DA7F82_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_mE9FA254FE713A95E1AEFF108B4DF42648DAB6ECD_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_m636C60E6A48CEB953D190593B0D744D0C0ED0E26_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m498B2C6998F0A2045E852E03F7D531083F144821_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, int32_t ___0_index, int32_t ___1_hashCode, int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_m720A82B4E4CEC46E250E958F5C29E47575861C1E_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m4185811C4A6DE37CAC8E8D38ED33AC0E52452F2B_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m1297F5B119EE4CBF8D4AF477B738E28048E3C9E8_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, int4U5BU5D_t036E74070BB2037017010DB7F1DCF33D92281795* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m94158CC8AD2465DDDB1B5413572A52080BDF67C6_gshared (Enumerator_t444D848AC8669A1715E471A02D6102B43CE95821* __this, HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mE70DD2CA43FA234B1E455628992A9F2438579FE9_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, int4U5BU5D_t036E74070BB2037017010DB7F1DCF33D92281795* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalIndexOf_m8D27BFD88C06FDB763E5D0F5B7957A0EA2F3A22A_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m7E40D2F26769BDD5C83DF753D1D3929DE9BB2C61_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithHashSetWithSameEC_mD8F571BCFF2415FFEB2E5CD0C2FDB7A68CDBE7CD_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithEnumerable_m0ED18A9504BAC458143A7DEE7C405ADB151E435B_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m00D151BA0CCF666DC4F75800661B5711CD1198ED_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithUniqueHashSet_m69617C0D5D309C4A5C9600C62CC79BE09415983F_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithEnumerable_mE66EBBD1F3A7672987D902273D2DF7FACD82045F_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_mA9A5AD31DE364B32358790213F952B7BAB7C1B3B_gshared_inline (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOfHashSetWithSameEC_mF0C37EFF334D02075C7A24662DC934AF68E71BEE_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementCount_t09BC3D71FBA88FF07695C2BE3838AB49E877F0D5 HashSet_1_CheckUniqueAndUnfoundElements_m0BB03E56F8D597ABE6DE3D80124C326BC5B23895_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_ContainsAllElements_mE987AB3D9305882B219B0DFE15E6705E8FE205AD_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_mF55E9A6954362E9691131BB12F96479E031EB061_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mD102C7E848768B7C3A4CD761EED5C561287427F2_gshared_inline (Predicate_1_t6CD543AD1D01723C56EE7C9824DA046DB9B9F266* __this, int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_mA25253B10ED11045C0B6DA3AF27D7EAFB967010D_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetEqualityComparer_1__ctor_m8186197B39D01C29BA631B44A1E6E454FF4CF33C_gshared (HashSetEqualityComparer_1_t689F5D78B6E49CAF0CEC9DBE5A5A6DD821AF2F8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m6BEC5B8F9D1ADF68469563CD4E9508187BB5E3C4_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t444D848AC8669A1715E471A02D6102B43CE95821 HashSet_1_GetEnumerator_mB0BDE1F92D08FFC64D8527B53EBF8EE2DAF34A46_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m4D3B873ECB9FC40CCDD6C7390399DF25D5D74E7D_gshared (Enumerator_t444D848AC8669A1715E471A02D6102B43CE95821* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int4_tBA77D4945786DE82C3A487B33955EA1004996052 Enumerator_get_Current_m1F35A2595ECCDBDD016ACA8F0EC5FACF40B713EF_gshared_inline (Enumerator_t444D848AC8669A1715E471A02D6102B43CE95821* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mF0E956533D364C01DE5779814BA73D46C127FE3F_gshared (Enumerator_t444D848AC8669A1715E471A02D6102B43CE95821* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddOrGetLocation_m8FC0F19FE59AC90029E3555F43A092B337170428_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___0_value, int32_t* ___1_location, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_m4EC62D967B860311534D68F4F275C0FC87CAA8C3_gshared_inline (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* EqualityComparer_1_CreateComparer_mEAA90163C77E0AFC6E891B34A7FDBFEEF699502A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t3623A572B0FA54A1BF249FA9AB30236498C32423* EqualityComparer_1_CreateComparer_m62E7E9C26460FD3A0A63B7926D62F87D61AB68EE_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tA3B1D933733F9FCD47DA56535ED7886D3422CB50* EqualityComparer_1_CreateComparer_mDC22DC332352F08EB8CFAE121408311D10BCA57C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t1A2724DE19E33ECECEDA97FE55A35054C6A07B89* EqualityComparer_1_CreateComparer_mD915EE72AF73F448B7A5D31E16512557BA5BB6C8_gshared (const RuntimeMethod* method) ;

inline EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* EqualityComparer_1_get_Default_m165DD3094175955D08A5F82EE68A51CB660ECB35_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m165DD3094175955D08A5F82EE68A51CB660ECB35_gshared_inline)(method);
}
inline void HashSet_1__ctor_m3B13B24F25A9585742686CBBC6E62F4FBB71ED0E (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m3B13B24F25A9585742686CBBC6E62F4FBB71ED0E_gshared)(__this, ___0_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void HashSet_1__ctor_m67409B94BBBB6F2CE3C0B8FF7B056FAC001DEE6B (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*, int32_t, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m67409B94BBBB6F2CE3C0B8FF7B056FAC001DEE6B_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline void HashSet_1__ctor_m7785AAD79631315CDC3CE377B5F7D569510F81C0 (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m7785AAD79631315CDC3CE377B5F7D569510F81C0_gshared)(__this, ___0_collection, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline bool HashSet_1_AreEqualityComparersEqual_m24AB1C428CF69A20C7006FA98063A675FEFE5C08 (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* ___0_set1, HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* ___1_set2, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*, HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*, const RuntimeMethod*))HashSet_1_AreEqualityComparersEqual_m24AB1C428CF69A20C7006FA98063A675FEFE5C08_gshared)(___0_set1, ___1_set2, method);
}
inline void HashSet_1_CopyFrom_m2FB3E458C2E80D5280C2142FC8EDAF3003892CA2 (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*, HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*, const RuntimeMethod*))HashSet_1_CopyFrom_m2FB3E458C2E80D5280C2142FC8EDAF3003892CA2_gshared)(__this, ___0_source, method);
}
inline int32_t HashSet_1_Initialize_m91B757109985496B87D12AADF01B0E3EADA6B1AA (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*, int32_t, const RuntimeMethod*))HashSet_1_Initialize_m91B757109985496B87D12AADF01B0E3EADA6B1AA_gshared)(__this, ___0_capacity, method);
}
inline void HashSet_1_UnionWith_mC3AEF962E9ED5BC310A3D006417BD10521A0188C (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*, RuntimeObject*, const RuntimeMethod*))HashSet_1_UnionWith_mC3AEF962E9ED5BC310A3D006417BD10521A0188C_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_TrimExcess_mAA9D5071655D30CE928502F9E0197F79D7538F52 (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*, const RuntimeMethod*))HashSet_1_TrimExcess_mAA9D5071655D30CE928502F9E0197F79D7538F52_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9 (int32_t ___0_oldSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042 (RuntimeArray* __this, const RuntimeMethod* method) ;
inline void HashSet_1_AddValue_mD030E7EF55F002EE06DAE707324241072C552BBE (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, int32_t ___0_index, int32_t ___1_hashCode, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___2_value, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*, int32_t, int32_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, const RuntimeMethod*))HashSet_1_AddValue_mD030E7EF55F002EE06DAE707324241072C552BBE_gshared)(__this, ___0_index, ___1_hashCode, ___2_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline bool HashSet_1_AddIfNotPresent_m18AC5E6888A07CA9D750022D5C6F385C53F82B80 (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, const RuntimeMethod*))HashSet_1_AddIfNotPresent_m18AC5E6888A07CA9D750022D5C6F385C53F82B80_gshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline int32_t HashSet_1_InternalGetHashCode_mDF00F338B7A9F7395CE0D5E0C806C4ABAA05609E (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, const RuntimeMethod*))HashSet_1_InternalGetHashCode_mDF00F338B7A9F7395CE0D5E0C806C4ABAA05609E_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void HashSet_1_CopyTo_m8FCE3B4F65BDE34A7C90D943C4536DA875709695 (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*, Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E*, int32_t, int32_t, const RuntimeMethod*))HashSet_1_CopyTo_m8FCE3B4F65BDE34A7C90D943C4536DA875709695_gshared)(__this, ___0_array, ___1_arrayIndex, ___2_count, method);
}
inline void Enumerator__ctor_mCD984FA25C14209D03737ED1BA80E117300B6565 (Enumerator_t0C7989F0F45B4D7A9C7BD464806B72BDA3020B8C* __this, HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* ___0_set, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0C7989F0F45B4D7A9C7BD464806B72BDA3020B8C*, HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*, const RuntimeMethod*))Enumerator__ctor_mCD984FA25C14209D03737ED1BA80E117300B6565_gshared)(__this, ___0_set, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, Type_t* ___2_type, const RuntimeMethod* method) ;
inline void HashSet_1_CopyTo_m05E986C567C44C0593868AB7740623F55B3BCEFF (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*, Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E*, const RuntimeMethod*))HashSet_1_CopyTo_m05E986C567C44C0593868AB7740623F55B3BCEFF_gshared)(__this, ___0_array, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0 (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline int32_t HashSet_1_InternalIndexOf_mC77941EE82B2CCBFFEFA911B5DD8EE3D73A28809 (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, const RuntimeMethod*))HashSet_1_InternalIndexOf_mC77941EE82B2CCBFFEFA911B5DD8EE3D73A28809_gshared)(__this, ___0_item, method);
}
inline void HashSet_1_Clear_mC6F14B68114CDA921868056229A9E84D044A95EC (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*, const RuntimeMethod*))HashSet_1_Clear_mC6F14B68114CDA921868056229A9E84D044A95EC_gshared)(__this, method);
}
inline void HashSet_1_IntersectWithHashSetWithSameEC_mE18C2EDDD29AB2492870FE585E61410EFDB38343 (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*, HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*, const RuntimeMethod*))HashSet_1_IntersectWithHashSetWithSameEC_mE18C2EDDD29AB2492870FE585E61410EFDB38343_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_IntersectWithEnumerable_m33C307C3F4AC9228A8F1C69EABF0BBF788674800 (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*, RuntimeObject*, const RuntimeMethod*))HashSet_1_IntersectWithEnumerable_m33C307C3F4AC9228A8F1C69EABF0BBF788674800_gshared)(__this, ___0_other, method);
}
inline bool HashSet_1_Remove_m86DC3E3C44662829D9ED89390B8D279F79615111 (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, const RuntimeMethod*))HashSet_1_Remove_m86DC3E3C44662829D9ED89390B8D279F79615111_gshared)(__this, ___0_item, method);
}
inline void HashSet_1_SymmetricExceptWithUniqueHashSet_m72375E1B6CD241B7236D787DB9852189190CD714 (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*, HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*, const RuntimeMethod*))HashSet_1_SymmetricExceptWithUniqueHashSet_m72375E1B6CD241B7236D787DB9852189190CD714_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_SymmetricExceptWithEnumerable_m443359966B7985B222913BEE6828C95CBB740849 (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*, RuntimeObject*, const RuntimeMethod*))HashSet_1_SymmetricExceptWithEnumerable_m443359966B7985B222913BEE6828C95CBB740849_gshared)(__this, ___0_other, method);
}
inline int32_t HashSet_1_get_Count_mFB71560159D8163320DA0651E1F05936B175803C_inline (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*, const RuntimeMethod*))HashSet_1_get_Count_mFB71560159D8163320DA0651E1F05936B175803C_gshared_inline)(__this, method);
}
inline bool HashSet_1_IsSubsetOfHashSetWithSameEC_mDA2B3185B79BDC115ED1E9DE4C466E16B004AE8F (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*, HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*, const RuntimeMethod*))HashSet_1_IsSubsetOfHashSetWithSameEC_mDA2B3185B79BDC115ED1E9DE4C466E16B004AE8F_gshared)(__this, ___0_other, method);
}
inline ElementCount_tE45FBE1CF2EAA8D8225A2C1014799D284061AB99 HashSet_1_CheckUniqueAndUnfoundElements_mA7CEA03A8D2B121235FD7CA56C21A7DF1B92E5AC (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method)
{
	return ((  ElementCount_tE45FBE1CF2EAA8D8225A2C1014799D284061AB99 (*) (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*, RuntimeObject*, bool, const RuntimeMethod*))HashSet_1_CheckUniqueAndUnfoundElements_mA7CEA03A8D2B121235FD7CA56C21A7DF1B92E5AC_gshared)(__this, ___0_other, ___1_returnIfUnfound, method);
}
inline bool HashSet_1_ContainsAllElements_m8A2BDBB95EB3CDFEA33CDA6C2A8F06F7720CD4AC (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*, RuntimeObject*, const RuntimeMethod*))HashSet_1_ContainsAllElements_m8A2BDBB95EB3CDFEA33CDA6C2A8F06F7720CD4AC_gshared)(__this, ___0_other, method);
}
inline bool HashSet_1_Contains_mF0DB26284CB57E818068D8940E37B48565E4C688 (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, const RuntimeMethod*))HashSet_1_Contains_mF0DB26284CB57E818068D8940E37B48565E4C688_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, RuntimeObject* ___1_actualValue, String_t* ___2_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline bool Predicate_1_Invoke_mB0F7DE9471912D4DA1C88986F3A1E6D4A1631F00_inline (Predicate_1_t9ADD2AEC8229E068388E35FC4B0E7C4F2AE588D6* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t9ADD2AEC8229E068388E35FC4B0E7C4F2AE588D6*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, const RuntimeMethod*))Predicate_1_Invoke_mB0F7DE9471912D4DA1C88986F3A1E6D4A1631F00_gshared_inline)(__this, ___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472 (int32_t ___0_min, const RuntimeMethod* method) ;
inline void HashSet_1_SetCapacity_mAFDEE46F46BCCF8B18F36E85CECF8611D0752802 (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, int32_t ___0_newSize, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*, int32_t, const RuntimeMethod*))HashSet_1_SetCapacity_mAFDEE46F46BCCF8B18F36E85CECF8611D0752802_gshared)(__this, ___0_newSize, method);
}
inline void HashSetEqualityComparer_1__ctor_mD130A04E00569FC1F74F28306FB00E9C167BF7CA (HashSetEqualityComparer_1_t1D099B36C6627D1A99D52592395FEA9EFEA4E9CF* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSetEqualityComparer_1_t1D099B36C6627D1A99D52592395FEA9EFEA4E9CF*, const RuntimeMethod*))HashSetEqualityComparer_1__ctor_mD130A04E00569FC1F74F28306FB00E9C167BF7CA_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
inline void HashSet_1_IncreaseCapacity_mBE2058DA6AF7E5A806C3D41CA779778C52932075 (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*, const RuntimeMethod*))HashSet_1_IncreaseCapacity_mBE2058DA6AF7E5A806C3D41CA779778C52932075_gshared)(__this, method);
}
inline Enumerator_t0C7989F0F45B4D7A9C7BD464806B72BDA3020B8C HashSet_1_GetEnumerator_m0B88ADAC18FFB66D069C900DEBB9DBAD47358382 (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t0C7989F0F45B4D7A9C7BD464806B72BDA3020B8C (*) (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*, const RuntimeMethod*))HashSet_1_GetEnumerator_m0B88ADAC18FFB66D069C900DEBB9DBAD47358382_gshared)(__this, method);
}
inline void Enumerator_Dispose_m43A9A2AE7F9F37568D075B81C2CBF966157DC640 (Enumerator_t0C7989F0F45B4D7A9C7BD464806B72BDA3020B8C* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0C7989F0F45B4D7A9C7BD464806B72BDA3020B8C*, const RuntimeMethod*))Enumerator_Dispose_m43A9A2AE7F9F37568D075B81C2CBF966157DC640_gshared)(__this, method);
}
inline Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 Enumerator_get_Current_m3159B7369EC62631C4C10AD1055F55B6B15218E9_inline (Enumerator_t0C7989F0F45B4D7A9C7BD464806B72BDA3020B8C* __this, const RuntimeMethod* method)
{
	return ((  Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 (*) (Enumerator_t0C7989F0F45B4D7A9C7BD464806B72BDA3020B8C*, const RuntimeMethod*))Enumerator_get_Current_m3159B7369EC62631C4C10AD1055F55B6B15218E9_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_m917546674D1D13C3F3E49962CD1006DF18F4196F (Enumerator_t0C7989F0F45B4D7A9C7BD464806B72BDA3020B8C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t0C7989F0F45B4D7A9C7BD464806B72BDA3020B8C*, const RuntimeMethod*))Enumerator_MoveNext_m917546674D1D13C3F3E49962CD1006DF18F4196F_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C (int32_t ___0_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3 (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* __this, int32_t* ___0_bitArrayPtr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19 (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_bitArray, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86 (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* __this, int32_t ___0_bitPosition, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2 (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* __this, int32_t ___0_bitPosition, const RuntimeMethod* method) ;
inline bool HashSet_1_AddOrGetLocation_mD9C917E898F8FB72F17D9D03774B10CFEC6EB8D0 (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_value, int32_t* ___1_location, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, int32_t*, const RuntimeMethod*))HashSet_1_AddOrGetLocation_mD9C917E898F8FB72F17D9D03774B10CFEC6EB8D0_gshared)(__this, ___0_value, ___1_location, method);
}
inline RuntimeObject* HashSet_1_get_Comparer_m302A4EEC161C86619F472AD3FC4A634D53CB1FA0_inline (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*, const RuntimeMethod*))HashSet_1_get_Comparer_m302A4EEC161C86619F472AD3FC4A634D53CB1FA0_gshared_inline)(__this, method);
}
inline void Enumerator__ctor_m62B32E8D2F70569824269DDC82F384BDBC8662F5 (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* __this, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___0_set, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))Enumerator__ctor_m62B32E8D2F70569824269DDC82F384BDBC8662F5_gshared)(__this, ___0_set, method);
}
inline EqualityComparer_1_t3623A572B0FA54A1BF249FA9AB30236498C32423* EqualityComparer_1_get_Default_mE1A8E1F0A77A6C7B6F2EAFF3246AEDF7E22F7E69_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t3623A572B0FA54A1BF249FA9AB30236498C32423* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mE1A8E1F0A77A6C7B6F2EAFF3246AEDF7E22F7E69_gshared_inline)(method);
}
inline void HashSet_1__ctor_mB40DC09EF650CC86210818231255FCC960D8C688 (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_mB40DC09EF650CC86210818231255FCC960D8C688_gshared)(__this, ___0_comparer, method);
}
inline void HashSet_1__ctor_m58C4B2BFFA2343F36BDEB7C407B3BC086419298B (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*, int32_t, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m58C4B2BFFA2343F36BDEB7C407B3BC086419298B_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline void HashSet_1__ctor_m89BFE73EE594C790CF219AB0570F3D2B1B8E9197 (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m89BFE73EE594C790CF219AB0570F3D2B1B8E9197_gshared)(__this, ___0_collection, ___1_comparer, method);
}
inline bool HashSet_1_AreEqualityComparersEqual_m80B2D2C00AB07F2C6D8EC516572FD36E007CD487 (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* ___0_set1, HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* ___1_set2, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*, HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*, const RuntimeMethod*))HashSet_1_AreEqualityComparersEqual_m80B2D2C00AB07F2C6D8EC516572FD36E007CD487_gshared)(___0_set1, ___1_set2, method);
}
inline void HashSet_1_CopyFrom_m9DDC4A4462B9D99764DFF30F3BB9A76B817A5E09 (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*, HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*, const RuntimeMethod*))HashSet_1_CopyFrom_m9DDC4A4462B9D99764DFF30F3BB9A76B817A5E09_gshared)(__this, ___0_source, method);
}
inline int32_t HashSet_1_Initialize_mFC6B68188562FC358678927CA39C0118E3E9FB01 (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*, int32_t, const RuntimeMethod*))HashSet_1_Initialize_mFC6B68188562FC358678927CA39C0118E3E9FB01_gshared)(__this, ___0_capacity, method);
}
inline void HashSet_1_UnionWith_m2235053BE00511A8473539181A4CB6F544F136AA (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*, RuntimeObject*, const RuntimeMethod*))HashSet_1_UnionWith_m2235053BE00511A8473539181A4CB6F544F136AA_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_TrimExcess_m130124985B5DA4E6C18C1855CE972046894B73D9 (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*, const RuntimeMethod*))HashSet_1_TrimExcess_m130124985B5DA4E6C18C1855CE972046894B73D9_gshared)(__this, method);
}
inline void HashSet_1_AddValue_mA7E85B34B85A81E7082B49E320B94A130413AF84 (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, int32_t ___0_index, int32_t ___1_hashCode, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___2_value, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*, int32_t, int32_t, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, const RuntimeMethod*))HashSet_1_AddValue_mA7E85B34B85A81E7082B49E320B94A130413AF84_gshared)(__this, ___0_index, ___1_hashCode, ___2_value, method);
}
inline bool HashSet_1_AddIfNotPresent_mDDA4F4C8239E8105D88AD1D8C535606D5CCBB255 (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, const RuntimeMethod*))HashSet_1_AddIfNotPresent_mDDA4F4C8239E8105D88AD1D8C535606D5CCBB255_gshared)(__this, ___0_value, method);
}
inline int32_t HashSet_1_InternalGetHashCode_m38C32C3B5A7094BC22FE52EBCCF45EBD690E5252 (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, const RuntimeMethod*))HashSet_1_InternalGetHashCode_m38C32C3B5A7094BC22FE52EBCCF45EBD690E5252_gshared)(__this, ___0_item, method);
}
inline void HashSet_1_CopyTo_mB5A25106DA209EFEB296695D6416EC6A283A1B86 (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, int2U5BU5D_tC349316FD7D3F522EC7DAD79861BE5B748271915* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*, int2U5BU5D_tC349316FD7D3F522EC7DAD79861BE5B748271915*, int32_t, int32_t, const RuntimeMethod*))HashSet_1_CopyTo_mB5A25106DA209EFEB296695D6416EC6A283A1B86_gshared)(__this, ___0_array, ___1_arrayIndex, ___2_count, method);
}
inline void Enumerator__ctor_m9965034FB4FC9028EDA7A04A5F9B9C7512047889 (Enumerator_t9CF79F755FC8DD7C2EA5EE61D7046718C0F8E77A* __this, HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* ___0_set, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9CF79F755FC8DD7C2EA5EE61D7046718C0F8E77A*, HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*, const RuntimeMethod*))Enumerator__ctor_m9965034FB4FC9028EDA7A04A5F9B9C7512047889_gshared)(__this, ___0_set, method);
}
inline void HashSet_1_CopyTo_mB28611BF66F45444301EB815BD44042721120439 (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, int2U5BU5D_tC349316FD7D3F522EC7DAD79861BE5B748271915* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*, int2U5BU5D_tC349316FD7D3F522EC7DAD79861BE5B748271915*, const RuntimeMethod*))HashSet_1_CopyTo_mB28611BF66F45444301EB815BD44042721120439_gshared)(__this, ___0_array, method);
}
inline int32_t HashSet_1_InternalIndexOf_m8BC1AD852D2EC56E820628C9A4B00026CABFA87E (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, const RuntimeMethod*))HashSet_1_InternalIndexOf_m8BC1AD852D2EC56E820628C9A4B00026CABFA87E_gshared)(__this, ___0_item, method);
}
inline void HashSet_1_Clear_m28A7D11E936B2BBE05FB20DA7385CB82CB1781B0 (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*, const RuntimeMethod*))HashSet_1_Clear_m28A7D11E936B2BBE05FB20DA7385CB82CB1781B0_gshared)(__this, method);
}
inline void HashSet_1_IntersectWithHashSetWithSameEC_m9383FF9F82C9454A67F94BCC2707397225B57B1A (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*, HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*, const RuntimeMethod*))HashSet_1_IntersectWithHashSetWithSameEC_m9383FF9F82C9454A67F94BCC2707397225B57B1A_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_IntersectWithEnumerable_m5E71140E025A11D2846563E797517B05AE10FB24 (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*, RuntimeObject*, const RuntimeMethod*))HashSet_1_IntersectWithEnumerable_m5E71140E025A11D2846563E797517B05AE10FB24_gshared)(__this, ___0_other, method);
}
inline bool HashSet_1_Remove_mD4851D6512BB33211CBB5B520254AA33FE45EFB9 (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, const RuntimeMethod*))HashSet_1_Remove_mD4851D6512BB33211CBB5B520254AA33FE45EFB9_gshared)(__this, ___0_item, method);
}
inline void HashSet_1_SymmetricExceptWithUniqueHashSet_mF755891654E02E455E96A50875E6943592C6DBB0 (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*, HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*, const RuntimeMethod*))HashSet_1_SymmetricExceptWithUniqueHashSet_mF755891654E02E455E96A50875E6943592C6DBB0_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_SymmetricExceptWithEnumerable_m1669EF86E3F89103DA77E8B13179C82DA9C3F9AE (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*, RuntimeObject*, const RuntimeMethod*))HashSet_1_SymmetricExceptWithEnumerable_m1669EF86E3F89103DA77E8B13179C82DA9C3F9AE_gshared)(__this, ___0_other, method);
}
inline int32_t HashSet_1_get_Count_m24CFCD730AE8EB3AE4D250B05692718E272F8940_inline (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*, const RuntimeMethod*))HashSet_1_get_Count_m24CFCD730AE8EB3AE4D250B05692718E272F8940_gshared_inline)(__this, method);
}
inline bool HashSet_1_IsSubsetOfHashSetWithSameEC_m8F85274FA267DACD46BAED82D75582888133B578 (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*, HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*, const RuntimeMethod*))HashSet_1_IsSubsetOfHashSetWithSameEC_m8F85274FA267DACD46BAED82D75582888133B578_gshared)(__this, ___0_other, method);
}
inline ElementCount_t8A008F159849D422F571730DBAD055B05471FB61 HashSet_1_CheckUniqueAndUnfoundElements_mDF221DA6D8D968D4E5C0617A4E94223D0BF9E6B2 (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method)
{
	return ((  ElementCount_t8A008F159849D422F571730DBAD055B05471FB61 (*) (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*, RuntimeObject*, bool, const RuntimeMethod*))HashSet_1_CheckUniqueAndUnfoundElements_mDF221DA6D8D968D4E5C0617A4E94223D0BF9E6B2_gshared)(__this, ___0_other, ___1_returnIfUnfound, method);
}
inline bool HashSet_1_ContainsAllElements_m6F2BDB847FB091EF6690D7D4602035086F26B9EA (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*, RuntimeObject*, const RuntimeMethod*))HashSet_1_ContainsAllElements_m6F2BDB847FB091EF6690D7D4602035086F26B9EA_gshared)(__this, ___0_other, method);
}
inline bool HashSet_1_Contains_m8C956F26A04EC4599CD398F4C96B8BF1433E43E2 (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, const RuntimeMethod*))HashSet_1_Contains_m8C956F26A04EC4599CD398F4C96B8BF1433E43E2_gshared)(__this, ___0_item, method);
}
inline bool Predicate_1_Invoke_m2947F3CB956C7AE73995537B4046EC17478AEF7D_inline (Predicate_1_tF41DB32AAF3F0B3D100E7030BD9909B760A73F5A* __this, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_tF41DB32AAF3F0B3D100E7030BD9909B760A73F5A*, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, const RuntimeMethod*))Predicate_1_Invoke_m2947F3CB956C7AE73995537B4046EC17478AEF7D_gshared_inline)(__this, ___0_obj, method);
}
inline void HashSet_1_SetCapacity_mC4EC5823B0DDC5D3FF2483AFB6562925D981FC71 (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, int32_t ___0_newSize, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*, int32_t, const RuntimeMethod*))HashSet_1_SetCapacity_mC4EC5823B0DDC5D3FF2483AFB6562925D981FC71_gshared)(__this, ___0_newSize, method);
}
inline void HashSetEqualityComparer_1__ctor_mF77C996164B367953F95083C459EAE5F99D3C908 (HashSetEqualityComparer_1_t1CD0AE30BF793E90CB641F81BFEE25F14A417091* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSetEqualityComparer_1_t1CD0AE30BF793E90CB641F81BFEE25F14A417091*, const RuntimeMethod*))HashSetEqualityComparer_1__ctor_mF77C996164B367953F95083C459EAE5F99D3C908_gshared)(__this, method);
}
inline void HashSet_1_IncreaseCapacity_mA5C676C545835B66F3D34EC85BB7B8D147F324FB (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*, const RuntimeMethod*))HashSet_1_IncreaseCapacity_mA5C676C545835B66F3D34EC85BB7B8D147F324FB_gshared)(__this, method);
}
inline Enumerator_t9CF79F755FC8DD7C2EA5EE61D7046718C0F8E77A HashSet_1_GetEnumerator_m545CA8C794A8CF8BEAC976CEB23D89CD0213F779 (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9CF79F755FC8DD7C2EA5EE61D7046718C0F8E77A (*) (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*, const RuntimeMethod*))HashSet_1_GetEnumerator_m545CA8C794A8CF8BEAC976CEB23D89CD0213F779_gshared)(__this, method);
}
inline void Enumerator_Dispose_m4F548EDA912670C783CD065F48283424425505C4 (Enumerator_t9CF79F755FC8DD7C2EA5EE61D7046718C0F8E77A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9CF79F755FC8DD7C2EA5EE61D7046718C0F8E77A*, const RuntimeMethod*))Enumerator_Dispose_m4F548EDA912670C783CD065F48283424425505C4_gshared)(__this, method);
}
inline int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A Enumerator_get_Current_m402B297175A3F69505C145B0FA96EF769001C61E_inline (Enumerator_t9CF79F755FC8DD7C2EA5EE61D7046718C0F8E77A* __this, const RuntimeMethod* method)
{
	return ((  int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A (*) (Enumerator_t9CF79F755FC8DD7C2EA5EE61D7046718C0F8E77A*, const RuntimeMethod*))Enumerator_get_Current_m402B297175A3F69505C145B0FA96EF769001C61E_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_m6BFCA349EAC2509C0D75B27CD64354E8BB2E0929 (Enumerator_t9CF79F755FC8DD7C2EA5EE61D7046718C0F8E77A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9CF79F755FC8DD7C2EA5EE61D7046718C0F8E77A*, const RuntimeMethod*))Enumerator_MoveNext_m6BFCA349EAC2509C0D75B27CD64354E8BB2E0929_gshared)(__this, method);
}
inline bool HashSet_1_AddOrGetLocation_m212B8418FC9A77E8E02D5AE7CD994CBA87129250 (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_value, int32_t* ___1_location, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, int32_t*, const RuntimeMethod*))HashSet_1_AddOrGetLocation_m212B8418FC9A77E8E02D5AE7CD994CBA87129250_gshared)(__this, ___0_value, ___1_location, method);
}
inline RuntimeObject* HashSet_1_get_Comparer_m9E0C308E111E5BB1B52F8FD1F03688AADB791982_inline (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*, const RuntimeMethod*))HashSet_1_get_Comparer_m9E0C308E111E5BB1B52F8FD1F03688AADB791982_gshared_inline)(__this, method);
}
inline EqualityComparer_1_tA3B1D933733F9FCD47DA56535ED7886D3422CB50* EqualityComparer_1_get_Default_mFB695EAD762B1CFF4DB8B7A33C6C8327EF377731_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tA3B1D933733F9FCD47DA56535ED7886D3422CB50* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mFB695EAD762B1CFF4DB8B7A33C6C8327EF377731_gshared_inline)(method);
}
inline void HashSet_1__ctor_mA84331C832D0E79D91D87364D68D10C1E4FE6AF7 (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_mA84331C832D0E79D91D87364D68D10C1E4FE6AF7_gshared)(__this, ___0_comparer, method);
}
inline void HashSet_1__ctor_m68B4C8486DEF4ADF77AE1EAE5520D671D990FADD (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*, int32_t, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m68B4C8486DEF4ADF77AE1EAE5520D671D990FADD_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline void HashSet_1__ctor_m8E66B9416E08EE5E8ED4E04BABA8E3D5C75D231A (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m8E66B9416E08EE5E8ED4E04BABA8E3D5C75D231A_gshared)(__this, ___0_collection, ___1_comparer, method);
}
inline bool HashSet_1_AreEqualityComparersEqual_mF86C3DA368B770FD0FB4D9295F2314C38B38784D (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* ___0_set1, HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* ___1_set2, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*, HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*, const RuntimeMethod*))HashSet_1_AreEqualityComparersEqual_mF86C3DA368B770FD0FB4D9295F2314C38B38784D_gshared)(___0_set1, ___1_set2, method);
}
inline void HashSet_1_CopyFrom_mFF26F13F600E70EE63A7BB6D11D2DF0DFE90CDF1 (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*, HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*, const RuntimeMethod*))HashSet_1_CopyFrom_mFF26F13F600E70EE63A7BB6D11D2DF0DFE90CDF1_gshared)(__this, ___0_source, method);
}
inline int32_t HashSet_1_Initialize_mE3FA0817AFC7D623138A8F6634D2F9003F369580 (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*, int32_t, const RuntimeMethod*))HashSet_1_Initialize_mE3FA0817AFC7D623138A8F6634D2F9003F369580_gshared)(__this, ___0_capacity, method);
}
inline void HashSet_1_UnionWith_m132500A60EC477412D12F7AE95D9C0E9840EA70B (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*, RuntimeObject*, const RuntimeMethod*))HashSet_1_UnionWith_m132500A60EC477412D12F7AE95D9C0E9840EA70B_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_TrimExcess_mCE655D3A846C3F4249E315B02CD75C3398F1CDE3 (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*, const RuntimeMethod*))HashSet_1_TrimExcess_mCE655D3A846C3F4249E315B02CD75C3398F1CDE3_gshared)(__this, method);
}
inline void HashSet_1_AddValue_m96A0A64CA666C113BC119202615514C8F745DAB1 (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, int32_t ___0_index, int32_t ___1_hashCode, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___2_value, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*, int32_t, int32_t, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF, const RuntimeMethod*))HashSet_1_AddValue_m96A0A64CA666C113BC119202615514C8F745DAB1_gshared)(__this, ___0_index, ___1_hashCode, ___2_value, method);
}
inline bool HashSet_1_AddIfNotPresent_m8B0536551F4711335C12E1681CE3BD5B54FDF66A (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF, const RuntimeMethod*))HashSet_1_AddIfNotPresent_m8B0536551F4711335C12E1681CE3BD5B54FDF66A_gshared)(__this, ___0_value, method);
}
inline int32_t HashSet_1_InternalGetHashCode_mF732F65D490EE103994E0F586A91ED1F0468DBF2 (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF, const RuntimeMethod*))HashSet_1_InternalGetHashCode_mF732F65D490EE103994E0F586A91ED1F0468DBF2_gshared)(__this, ___0_item, method);
}
inline void HashSet_1_CopyTo_m47B5E068904A3A9B5F90DA9A34770AA3AD2EB88C (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, int3U5BU5D_t229A503AFCA400BB5E6C562712AD389098E2FF26* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*, int3U5BU5D_t229A503AFCA400BB5E6C562712AD389098E2FF26*, int32_t, int32_t, const RuntimeMethod*))HashSet_1_CopyTo_m47B5E068904A3A9B5F90DA9A34770AA3AD2EB88C_gshared)(__this, ___0_array, ___1_arrayIndex, ___2_count, method);
}
inline void Enumerator__ctor_m9633D23E13B67B1AAC008BB0F7E9DFE8DCB8DD62 (Enumerator_t3A3D0CB1E039CA2A4D21932E46575AA117FA0F9A* __this, HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* ___0_set, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3A3D0CB1E039CA2A4D21932E46575AA117FA0F9A*, HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*, const RuntimeMethod*))Enumerator__ctor_m9633D23E13B67B1AAC008BB0F7E9DFE8DCB8DD62_gshared)(__this, ___0_set, method);
}
inline void HashSet_1_CopyTo_mAABBA9B15620D48EE8CF6F17CE7746391D7B91E5 (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, int3U5BU5D_t229A503AFCA400BB5E6C562712AD389098E2FF26* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*, int3U5BU5D_t229A503AFCA400BB5E6C562712AD389098E2FF26*, const RuntimeMethod*))HashSet_1_CopyTo_mAABBA9B15620D48EE8CF6F17CE7746391D7B91E5_gshared)(__this, ___0_array, method);
}
inline int32_t HashSet_1_InternalIndexOf_mCEA12CBE772BDE247D7095341B6B7DB821798268 (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF, const RuntimeMethod*))HashSet_1_InternalIndexOf_mCEA12CBE772BDE247D7095341B6B7DB821798268_gshared)(__this, ___0_item, method);
}
inline void HashSet_1_Clear_m11932525C3BF62A509C2B1791260C61850AFBAFF (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*, const RuntimeMethod*))HashSet_1_Clear_m11932525C3BF62A509C2B1791260C61850AFBAFF_gshared)(__this, method);
}
inline void HashSet_1_IntersectWithHashSetWithSameEC_m3C3C456EA0CC853F8181FE7E1E88D39046DA84D2 (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*, HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*, const RuntimeMethod*))HashSet_1_IntersectWithHashSetWithSameEC_m3C3C456EA0CC853F8181FE7E1E88D39046DA84D2_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_IntersectWithEnumerable_mAEA29924CC49946DCB5601E9279EEFD770860041 (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*, RuntimeObject*, const RuntimeMethod*))HashSet_1_IntersectWithEnumerable_mAEA29924CC49946DCB5601E9279EEFD770860041_gshared)(__this, ___0_other, method);
}
inline bool HashSet_1_Remove_mECC76AFB2377CA54428F1076B18526913E9568DF (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF, const RuntimeMethod*))HashSet_1_Remove_mECC76AFB2377CA54428F1076B18526913E9568DF_gshared)(__this, ___0_item, method);
}
inline void HashSet_1_SymmetricExceptWithUniqueHashSet_mE6C6FF13E1AD272A09DCFFB5D8D9D77E0C09EEA6 (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*, HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*, const RuntimeMethod*))HashSet_1_SymmetricExceptWithUniqueHashSet_mE6C6FF13E1AD272A09DCFFB5D8D9D77E0C09EEA6_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_SymmetricExceptWithEnumerable_m71DEC7F85AFE40C6DEE77707F98A1DC32CF6FA0C (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*, RuntimeObject*, const RuntimeMethod*))HashSet_1_SymmetricExceptWithEnumerable_m71DEC7F85AFE40C6DEE77707F98A1DC32CF6FA0C_gshared)(__this, ___0_other, method);
}
inline int32_t HashSet_1_get_Count_mA102A68A3C7550BA9E888E08C4495D88C23E4685_inline (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*, const RuntimeMethod*))HashSet_1_get_Count_mA102A68A3C7550BA9E888E08C4495D88C23E4685_gshared_inline)(__this, method);
}
inline bool HashSet_1_IsSubsetOfHashSetWithSameEC_m546FAC26FF7973B82997C1EE004C8957DDF417F9 (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*, HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*, const RuntimeMethod*))HashSet_1_IsSubsetOfHashSetWithSameEC_m546FAC26FF7973B82997C1EE004C8957DDF417F9_gshared)(__this, ___0_other, method);
}
inline ElementCount_tC619A6BA4F7B87ECD3DFC8B1500C28F177C6B5CA HashSet_1_CheckUniqueAndUnfoundElements_m10283339477DFFB8F2A17B32F1634ADC41E2A66A (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method)
{
	return ((  ElementCount_tC619A6BA4F7B87ECD3DFC8B1500C28F177C6B5CA (*) (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*, RuntimeObject*, bool, const RuntimeMethod*))HashSet_1_CheckUniqueAndUnfoundElements_m10283339477DFFB8F2A17B32F1634ADC41E2A66A_gshared)(__this, ___0_other, ___1_returnIfUnfound, method);
}
inline bool HashSet_1_ContainsAllElements_mD92047BCA431E17F5B6668030BEC2566295EFAC3 (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*, RuntimeObject*, const RuntimeMethod*))HashSet_1_ContainsAllElements_mD92047BCA431E17F5B6668030BEC2566295EFAC3_gshared)(__this, ___0_other, method);
}
inline bool HashSet_1_Contains_m93591D4087832CAB4ED735F3803B8EDDCC39246B (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF, const RuntimeMethod*))HashSet_1_Contains_m93591D4087832CAB4ED735F3803B8EDDCC39246B_gshared)(__this, ___0_item, method);
}
inline bool Predicate_1_Invoke_mDF73A0B6D0DF1E104D3A8E1AABE0A355D00ECEE2_inline (Predicate_1_t7F3BBF48975AA1093F31885E875DDACD41E9AAF3* __this, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t7F3BBF48975AA1093F31885E875DDACD41E9AAF3*, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF, const RuntimeMethod*))Predicate_1_Invoke_mDF73A0B6D0DF1E104D3A8E1AABE0A355D00ECEE2_gshared_inline)(__this, ___0_obj, method);
}
inline void HashSet_1_SetCapacity_mC9D37AF68CEEF6AC91CB1195ADF93D58C12421AD (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, int32_t ___0_newSize, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*, int32_t, const RuntimeMethod*))HashSet_1_SetCapacity_mC9D37AF68CEEF6AC91CB1195ADF93D58C12421AD_gshared)(__this, ___0_newSize, method);
}
inline void HashSetEqualityComparer_1__ctor_m9AE008FBBDB462B7003EF456764FACCB0D012B80 (HashSetEqualityComparer_1_tDFACFD224D2EB4F75EA99B04686F77CCB360CFFB* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSetEqualityComparer_1_tDFACFD224D2EB4F75EA99B04686F77CCB360CFFB*, const RuntimeMethod*))HashSetEqualityComparer_1__ctor_m9AE008FBBDB462B7003EF456764FACCB0D012B80_gshared)(__this, method);
}
inline void HashSet_1_IncreaseCapacity_m2DE98E1E8C23CB414B7FC96311B6C332B13FE8DB (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*, const RuntimeMethod*))HashSet_1_IncreaseCapacity_m2DE98E1E8C23CB414B7FC96311B6C332B13FE8DB_gshared)(__this, method);
}
inline Enumerator_t3A3D0CB1E039CA2A4D21932E46575AA117FA0F9A HashSet_1_GetEnumerator_m49847C49F34A02169D4E1C6E2546E73A96AEA1C7 (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3A3D0CB1E039CA2A4D21932E46575AA117FA0F9A (*) (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*, const RuntimeMethod*))HashSet_1_GetEnumerator_m49847C49F34A02169D4E1C6E2546E73A96AEA1C7_gshared)(__this, method);
}
inline void Enumerator_Dispose_m131B1D6B6B3B83539DD9608E0F98C2642BEDE8AB (Enumerator_t3A3D0CB1E039CA2A4D21932E46575AA117FA0F9A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3A3D0CB1E039CA2A4D21932E46575AA117FA0F9A*, const RuntimeMethod*))Enumerator_Dispose_m131B1D6B6B3B83539DD9608E0F98C2642BEDE8AB_gshared)(__this, method);
}
inline int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF Enumerator_get_Current_m210CE4A2BAA9537A817DBE89106EC3F0876B369A_inline (Enumerator_t3A3D0CB1E039CA2A4D21932E46575AA117FA0F9A* __this, const RuntimeMethod* method)
{
	return ((  int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF (*) (Enumerator_t3A3D0CB1E039CA2A4D21932E46575AA117FA0F9A*, const RuntimeMethod*))Enumerator_get_Current_m210CE4A2BAA9537A817DBE89106EC3F0876B369A_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_mBC1EFDA8FA71B5BB546AE0B519FBBB6C66CBD553 (Enumerator_t3A3D0CB1E039CA2A4D21932E46575AA117FA0F9A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3A3D0CB1E039CA2A4D21932E46575AA117FA0F9A*, const RuntimeMethod*))Enumerator_MoveNext_mBC1EFDA8FA71B5BB546AE0B519FBBB6C66CBD553_gshared)(__this, method);
}
inline bool HashSet_1_AddOrGetLocation_m2A4CD21A41A634889CDE75A447AA8B41FD5EF6C7 (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___0_value, int32_t* ___1_location, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF, int32_t*, const RuntimeMethod*))HashSet_1_AddOrGetLocation_m2A4CD21A41A634889CDE75A447AA8B41FD5EF6C7_gshared)(__this, ___0_value, ___1_location, method);
}
inline RuntimeObject* HashSet_1_get_Comparer_mCAEE62B8999A728702AFE3940A3EA6082FB39546_inline (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*, const RuntimeMethod*))HashSet_1_get_Comparer_mCAEE62B8999A728702AFE3940A3EA6082FB39546_gshared_inline)(__this, method);
}
inline EqualityComparer_1_t1A2724DE19E33ECECEDA97FE55A35054C6A07B89* EqualityComparer_1_get_Default_m4464B0DA95E648A79240409742917C9853AD8686_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t1A2724DE19E33ECECEDA97FE55A35054C6A07B89* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m4464B0DA95E648A79240409742917C9853AD8686_gshared_inline)(method);
}
inline void HashSet_1__ctor_m87017D5FBAACA0F2959A7105E35C84829A3F696F (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m87017D5FBAACA0F2959A7105E35C84829A3F696F_gshared)(__this, ___0_comparer, method);
}
inline void HashSet_1__ctor_m2DC7B2CA8877B5DAB7DFD56707447B54EBF9BE25 (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*, int32_t, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m2DC7B2CA8877B5DAB7DFD56707447B54EBF9BE25_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline void HashSet_1__ctor_m42A57BB8AAADC0ECE9108C0E3906DB23E101CDE1 (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m42A57BB8AAADC0ECE9108C0E3906DB23E101CDE1_gshared)(__this, ___0_collection, ___1_comparer, method);
}
inline bool HashSet_1_AreEqualityComparersEqual_mDB32BC9986BCAE9DD3B862B75797CC8DE54CF1EF (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* ___0_set1, HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* ___1_set2, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*, HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*, const RuntimeMethod*))HashSet_1_AreEqualityComparersEqual_mDB32BC9986BCAE9DD3B862B75797CC8DE54CF1EF_gshared)(___0_set1, ___1_set2, method);
}
inline void HashSet_1_CopyFrom_mE8F695FBCEE3C3DD199042AF7CA690D2C2FB3B72 (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*, HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*, const RuntimeMethod*))HashSet_1_CopyFrom_mE8F695FBCEE3C3DD199042AF7CA690D2C2FB3B72_gshared)(__this, ___0_source, method);
}
inline int32_t HashSet_1_Initialize_m93E4BAB3F76B559B526334D597B9A247C5DA7F82 (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*, int32_t, const RuntimeMethod*))HashSet_1_Initialize_m93E4BAB3F76B559B526334D597B9A247C5DA7F82_gshared)(__this, ___0_capacity, method);
}
inline void HashSet_1_UnionWith_mE9FA254FE713A95E1AEFF108B4DF42648DAB6ECD (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*, RuntimeObject*, const RuntimeMethod*))HashSet_1_UnionWith_mE9FA254FE713A95E1AEFF108B4DF42648DAB6ECD_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_TrimExcess_m636C60E6A48CEB953D190593B0D744D0C0ED0E26 (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*, const RuntimeMethod*))HashSet_1_TrimExcess_m636C60E6A48CEB953D190593B0D744D0C0ED0E26_gshared)(__this, method);
}
inline void HashSet_1_AddValue_m498B2C6998F0A2045E852E03F7D531083F144821 (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, int32_t ___0_index, int32_t ___1_hashCode, int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___2_value, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*, int32_t, int32_t, int4_tBA77D4945786DE82C3A487B33955EA1004996052, const RuntimeMethod*))HashSet_1_AddValue_m498B2C6998F0A2045E852E03F7D531083F144821_gshared)(__this, ___0_index, ___1_hashCode, ___2_value, method);
}
inline bool HashSet_1_AddIfNotPresent_m720A82B4E4CEC46E250E958F5C29E47575861C1E (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*, int4_tBA77D4945786DE82C3A487B33955EA1004996052, const RuntimeMethod*))HashSet_1_AddIfNotPresent_m720A82B4E4CEC46E250E958F5C29E47575861C1E_gshared)(__this, ___0_value, method);
}
inline int32_t HashSet_1_InternalGetHashCode_m4185811C4A6DE37CAC8E8D38ED33AC0E52452F2B (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*, int4_tBA77D4945786DE82C3A487B33955EA1004996052, const RuntimeMethod*))HashSet_1_InternalGetHashCode_m4185811C4A6DE37CAC8E8D38ED33AC0E52452F2B_gshared)(__this, ___0_item, method);
}
inline void HashSet_1_CopyTo_m1297F5B119EE4CBF8D4AF477B738E28048E3C9E8 (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, int4U5BU5D_t036E74070BB2037017010DB7F1DCF33D92281795* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*, int4U5BU5D_t036E74070BB2037017010DB7F1DCF33D92281795*, int32_t, int32_t, const RuntimeMethod*))HashSet_1_CopyTo_m1297F5B119EE4CBF8D4AF477B738E28048E3C9E8_gshared)(__this, ___0_array, ___1_arrayIndex, ___2_count, method);
}
inline void Enumerator__ctor_m94158CC8AD2465DDDB1B5413572A52080BDF67C6 (Enumerator_t444D848AC8669A1715E471A02D6102B43CE95821* __this, HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* ___0_set, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t444D848AC8669A1715E471A02D6102B43CE95821*, HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*, const RuntimeMethod*))Enumerator__ctor_m94158CC8AD2465DDDB1B5413572A52080BDF67C6_gshared)(__this, ___0_set, method);
}
inline void HashSet_1_CopyTo_mE70DD2CA43FA234B1E455628992A9F2438579FE9 (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, int4U5BU5D_t036E74070BB2037017010DB7F1DCF33D92281795* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*, int4U5BU5D_t036E74070BB2037017010DB7F1DCF33D92281795*, const RuntimeMethod*))HashSet_1_CopyTo_mE70DD2CA43FA234B1E455628992A9F2438579FE9_gshared)(__this, ___0_array, method);
}
inline int32_t HashSet_1_InternalIndexOf_m8D27BFD88C06FDB763E5D0F5B7957A0EA2F3A22A (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*, int4_tBA77D4945786DE82C3A487B33955EA1004996052, const RuntimeMethod*))HashSet_1_InternalIndexOf_m8D27BFD88C06FDB763E5D0F5B7957A0EA2F3A22A_gshared)(__this, ___0_item, method);
}
inline void HashSet_1_Clear_m7E40D2F26769BDD5C83DF753D1D3929DE9BB2C61 (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*, const RuntimeMethod*))HashSet_1_Clear_m7E40D2F26769BDD5C83DF753D1D3929DE9BB2C61_gshared)(__this, method);
}
inline void HashSet_1_IntersectWithHashSetWithSameEC_mD8F571BCFF2415FFEB2E5CD0C2FDB7A68CDBE7CD (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*, HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*, const RuntimeMethod*))HashSet_1_IntersectWithHashSetWithSameEC_mD8F571BCFF2415FFEB2E5CD0C2FDB7A68CDBE7CD_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_IntersectWithEnumerable_m0ED18A9504BAC458143A7DEE7C405ADB151E435B (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*, RuntimeObject*, const RuntimeMethod*))HashSet_1_IntersectWithEnumerable_m0ED18A9504BAC458143A7DEE7C405ADB151E435B_gshared)(__this, ___0_other, method);
}
inline bool HashSet_1_Remove_m00D151BA0CCF666DC4F75800661B5711CD1198ED (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*, int4_tBA77D4945786DE82C3A487B33955EA1004996052, const RuntimeMethod*))HashSet_1_Remove_m00D151BA0CCF666DC4F75800661B5711CD1198ED_gshared)(__this, ___0_item, method);
}
inline void HashSet_1_SymmetricExceptWithUniqueHashSet_m69617C0D5D309C4A5C9600C62CC79BE09415983F (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*, HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*, const RuntimeMethod*))HashSet_1_SymmetricExceptWithUniqueHashSet_m69617C0D5D309C4A5C9600C62CC79BE09415983F_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_SymmetricExceptWithEnumerable_mE66EBBD1F3A7672987D902273D2DF7FACD82045F (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*, RuntimeObject*, const RuntimeMethod*))HashSet_1_SymmetricExceptWithEnumerable_mE66EBBD1F3A7672987D902273D2DF7FACD82045F_gshared)(__this, ___0_other, method);
}
inline int32_t HashSet_1_get_Count_mA9A5AD31DE364B32358790213F952B7BAB7C1B3B_inline (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*, const RuntimeMethod*))HashSet_1_get_Count_mA9A5AD31DE364B32358790213F952B7BAB7C1B3B_gshared_inline)(__this, method);
}
inline bool HashSet_1_IsSubsetOfHashSetWithSameEC_mF0C37EFF334D02075C7A24662DC934AF68E71BEE (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*, HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*, const RuntimeMethod*))HashSet_1_IsSubsetOfHashSetWithSameEC_mF0C37EFF334D02075C7A24662DC934AF68E71BEE_gshared)(__this, ___0_other, method);
}
inline ElementCount_t09BC3D71FBA88FF07695C2BE3838AB49E877F0D5 HashSet_1_CheckUniqueAndUnfoundElements_m0BB03E56F8D597ABE6DE3D80124C326BC5B23895 (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method)
{
	return ((  ElementCount_t09BC3D71FBA88FF07695C2BE3838AB49E877F0D5 (*) (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*, RuntimeObject*, bool, const RuntimeMethod*))HashSet_1_CheckUniqueAndUnfoundElements_m0BB03E56F8D597ABE6DE3D80124C326BC5B23895_gshared)(__this, ___0_other, ___1_returnIfUnfound, method);
}
inline bool HashSet_1_ContainsAllElements_mE987AB3D9305882B219B0DFE15E6705E8FE205AD (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*, RuntimeObject*, const RuntimeMethod*))HashSet_1_ContainsAllElements_mE987AB3D9305882B219B0DFE15E6705E8FE205AD_gshared)(__this, ___0_other, method);
}
inline bool HashSet_1_Contains_mF55E9A6954362E9691131BB12F96479E031EB061 (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*, int4_tBA77D4945786DE82C3A487B33955EA1004996052, const RuntimeMethod*))HashSet_1_Contains_mF55E9A6954362E9691131BB12F96479E031EB061_gshared)(__this, ___0_item, method);
}
inline bool Predicate_1_Invoke_mD102C7E848768B7C3A4CD761EED5C561287427F2_inline (Predicate_1_t6CD543AD1D01723C56EE7C9824DA046DB9B9F266* __this, int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t6CD543AD1D01723C56EE7C9824DA046DB9B9F266*, int4_tBA77D4945786DE82C3A487B33955EA1004996052, const RuntimeMethod*))Predicate_1_Invoke_mD102C7E848768B7C3A4CD761EED5C561287427F2_gshared_inline)(__this, ___0_obj, method);
}
inline void HashSet_1_SetCapacity_mA25253B10ED11045C0B6DA3AF27D7EAFB967010D (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, int32_t ___0_newSize, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*, int32_t, const RuntimeMethod*))HashSet_1_SetCapacity_mA25253B10ED11045C0B6DA3AF27D7EAFB967010D_gshared)(__this, ___0_newSize, method);
}
inline void HashSetEqualityComparer_1__ctor_m8186197B39D01C29BA631B44A1E6E454FF4CF33C (HashSetEqualityComparer_1_t689F5D78B6E49CAF0CEC9DBE5A5A6DD821AF2F8D* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSetEqualityComparer_1_t689F5D78B6E49CAF0CEC9DBE5A5A6DD821AF2F8D*, const RuntimeMethod*))HashSetEqualityComparer_1__ctor_m8186197B39D01C29BA631B44A1E6E454FF4CF33C_gshared)(__this, method);
}
inline void HashSet_1_IncreaseCapacity_m6BEC5B8F9D1ADF68469563CD4E9508187BB5E3C4 (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*, const RuntimeMethod*))HashSet_1_IncreaseCapacity_m6BEC5B8F9D1ADF68469563CD4E9508187BB5E3C4_gshared)(__this, method);
}
inline Enumerator_t444D848AC8669A1715E471A02D6102B43CE95821 HashSet_1_GetEnumerator_mB0BDE1F92D08FFC64D8527B53EBF8EE2DAF34A46 (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t444D848AC8669A1715E471A02D6102B43CE95821 (*) (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*, const RuntimeMethod*))HashSet_1_GetEnumerator_mB0BDE1F92D08FFC64D8527B53EBF8EE2DAF34A46_gshared)(__this, method);
}
inline void Enumerator_Dispose_m4D3B873ECB9FC40CCDD6C7390399DF25D5D74E7D (Enumerator_t444D848AC8669A1715E471A02D6102B43CE95821* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t444D848AC8669A1715E471A02D6102B43CE95821*, const RuntimeMethod*))Enumerator_Dispose_m4D3B873ECB9FC40CCDD6C7390399DF25D5D74E7D_gshared)(__this, method);
}
inline int4_tBA77D4945786DE82C3A487B33955EA1004996052 Enumerator_get_Current_m1F35A2595ECCDBDD016ACA8F0EC5FACF40B713EF_inline (Enumerator_t444D848AC8669A1715E471A02D6102B43CE95821* __this, const RuntimeMethod* method)
{
	return ((  int4_tBA77D4945786DE82C3A487B33955EA1004996052 (*) (Enumerator_t444D848AC8669A1715E471A02D6102B43CE95821*, const RuntimeMethod*))Enumerator_get_Current_m1F35A2595ECCDBDD016ACA8F0EC5FACF40B713EF_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_mF0E956533D364C01DE5779814BA73D46C127FE3F (Enumerator_t444D848AC8669A1715E471A02D6102B43CE95821* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t444D848AC8669A1715E471A02D6102B43CE95821*, const RuntimeMethod*))Enumerator_MoveNext_mF0E956533D364C01DE5779814BA73D46C127FE3F_gshared)(__this, method);
}
inline bool HashSet_1_AddOrGetLocation_m8FC0F19FE59AC90029E3555F43A092B337170428 (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___0_value, int32_t* ___1_location, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*, int4_tBA77D4945786DE82C3A487B33955EA1004996052, int32_t*, const RuntimeMethod*))HashSet_1_AddOrGetLocation_m8FC0F19FE59AC90029E3555F43A092B337170428_gshared)(__this, ___0_value, ___1_location, method);
}
inline RuntimeObject* HashSet_1_get_Comparer_m4EC62D967B860311534D68F4F275C0FC87CAA8C3_inline (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*, const RuntimeMethod*))HashSet_1_get_Comparer_m4EC62D967B860311534D68F4F275C0FC87CAA8C3_gshared_inline)(__this, method);
}
inline EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* EqualityComparer_1_CreateComparer_mEAA90163C77E0AFC6E891B34A7FDBFEEF699502A (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mEAA90163C77E0AFC6E891B34A7FDBFEEF699502A_gshared)(method);
}
inline EqualityComparer_1_t3623A572B0FA54A1BF249FA9AB30236498C32423* EqualityComparer_1_CreateComparer_m62E7E9C26460FD3A0A63B7926D62F87D61AB68EE (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t3623A572B0FA54A1BF249FA9AB30236498C32423* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m62E7E9C26460FD3A0A63B7926D62F87D61AB68EE_gshared)(method);
}
inline EqualityComparer_1_tA3B1D933733F9FCD47DA56535ED7886D3422CB50* EqualityComparer_1_CreateComparer_mDC22DC332352F08EB8CFAE121408311D10BCA57C (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tA3B1D933733F9FCD47DA56535ED7886D3422CB50* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mDC22DC332352F08EB8CFAE121408311D10BCA57C_gshared)(method);
}
inline EqualityComparer_1_t1A2724DE19E33ECECEDA97FE55A35054C6A07B89* EqualityComparer_1_CreateComparer_mD915EE72AF73F448B7A5D31E16512557BA5BB6C8 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t1A2724DE19E33ECECEDA97FE55A35054C6A07B89* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mD915EE72AF73F448B7A5D31E16512557BA5BB6C8_gshared)(method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m1DE3B8C8D025B3AF37E1940DEF69361BEAC6AD38_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* L_0;
		L_0 = EqualityComparer_1_get_Default_m165DD3094175955D08A5F82EE68A51CB660ECB35_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_m3B13B24F25A9585742686CBBC6E62F4FBB71ED0E(__this, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m3B13B24F25A9585742686CBBC6E62F4FBB71ED0E_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* L_1;
		L_1 = EqualityComparer_1_get_Default_m165DD3094175955D08A5F82EE68A51CB660ECB35_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		___0_comparer = (RuntimeObject*)L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->____comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_2);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____version = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m277F3B79EFE7F86902DFF1F5E70CF0CE390A9A3B_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* L_1;
		L_1 = EqualityComparer_1_get_Default_m165DD3094175955D08A5F82EE68A51CB660ECB35_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_m67409B94BBBB6F2CE3C0B8FF7B056FAC001DEE6B(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m58AA7568B4F88EA64A6B698C785F4234C2843B93_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_collection;
		EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* L_1;
		L_1 = EqualityComparer_1_get_Default_m165DD3094175955D08A5F82EE68A51CB660ECB35_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_m7785AAD79631315CDC3CE377B5F7D569510F81C0(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m7785AAD79631315CDC3CE377B5F7D569510F81C0_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B8_0 = 0;
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_m3B13B24F25A9585742686CBBC6E62F4FBB71ED0E(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RuntimeObject* L_1 = ___0_collection;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_collection;
		V_0 = ((HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_m24AB1C428CF69A20C7006FA98063A675FEFE5C08(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_7 = V_0;
		HashSet_1_CopyFrom_m2FB3E458C2E80D5280C2142FC8EDAF3003892CA2(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}

IL_0030:
	{
		RuntimeObject* L_8 = ___0_collection;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_10);
		G_B8_0 = L_11;
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 0;
	}

IL_0043:
	{
		V_2 = G_B8_0;
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = HashSet_1_Initialize_m91B757109985496B87D12AADF01B0E3EADA6B1AA(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		RuntimeObject* L_14 = ___0_collection;
		HashSet_1_UnionWith_mC3AEF962E9ED5BC310A3D006417BD10521A0188C(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_15 = __this->____count;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_16 = __this->____slots;
		NullCheck(L_16);
		int32_t L_17 = __this->____count;
		if ((((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_16)->max_length))/L_17))) <= ((int32_t)3)))
		{
			goto IL_0074;
		}
	}
	{
		HashSet_1_TrimExcess_mAA9D5071655D30CE928502F9E0197F79D7538F52(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
	}

IL_0074:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mDEC3FE90CBE8DA2C12F3D2D485C36A2EBBBDAC9D_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		__this->____siInfo = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m2FB3E458C2E80D5280C2142FC8EDAF3003892CA2_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_0 = ___0_source;
		NullCheck(L_0);
		int32_t L_1 = L_0->____count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_3 = ___0_source;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->____buckets;
		NullCheck(L_4);
		V_1 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		int32_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(((int32_t)il2cpp_codegen_add(L_5, 1)), NULL);
		int32_t L_7 = V_1;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_8 = ___0_source;
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->____buckets;
		NullCheck((RuntimeArray*)L_9);
		RuntimeObject* L_10;
		L_10 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_9, NULL);
		__this->____buckets = ((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_10, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_10, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var)));
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_11 = ___0_source;
		NullCheck(L_11);
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_12 = L_11->____slots;
		NullCheck((RuntimeArray*)L_12);
		RuntimeObject* L_13;
		L_13 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_12, NULL);
		__this->____slots = ((SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51*)Castclass((RuntimeObject*)L_13, il2cpp_rgctx_data(method->klass->rgctx_data, 16)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)((SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51*)Castclass((RuntimeObject*)L_13, il2cpp_rgctx_data(method->klass->rgctx_data, 16))));
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_14 = ___0_source;
		NullCheck(L_14);
		int32_t L_15 = L_14->____lastIndex;
		__this->____lastIndex = L_15;
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_16 = ___0_source;
		NullCheck(L_16);
		int32_t L_17 = L_16->____freeList;
		__this->____freeList = L_17;
		goto IL_00c7;
	}

IL_0065:
	{
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_18 = ___0_source;
		NullCheck(L_18);
		int32_t L_19 = L_18->____lastIndex;
		V_2 = L_19;
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_20 = ___0_source;
		NullCheck(L_20);
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_21 = L_20->____slots;
		V_3 = L_21;
		int32_t L_22 = V_0;
		int32_t L_23;
		L_23 = HashSet_1_Initialize_m91B757109985496B87D12AADF01B0E3EADA6B1AA(__this, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_4 = 0;
		V_5 = 0;
		goto IL_00ba;
	}

IL_0083:
	{
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_24 = V_3;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode;
		V_6 = L_26;
		int32_t L_27 = V_6;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_28 = V_4;
		int32_t L_29 = V_6;
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_30 = V_3;
		int32_t L_31 = V_5;
		NullCheck(L_30);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		HashSet_1_AddValue_mD030E7EF55F002EE06DAE707324241072C552BBE(__this, L_28, L_29, L_32, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00b4:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00ba:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = V_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_37 = V_4;
		__this->____lastIndex = L_37;
	}

IL_00c7:
	{
		int32_t L_38 = V_0;
		__this->____count = L_38;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m67409B94BBBB6F2CE3C0B8FF7B056FAC001DEE6B_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_m3B13B24F25A9585742686CBBC6E62F4FBB71ED0E(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0016:
	{
		int32_t L_3 = ___0_capacity;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___0_capacity;
		int32_t L_5;
		L_5 = HashSet_1_Initialize_m91B757109985496B87D12AADF01B0E3EADA6B1AA(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0022:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_mA953133A660DF3CED376F591371B1DBE01F37E63_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_item, const RuntimeMethod* method) 
{
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_m18AC5E6888A07CA9D750022D5C6F385C53F82B80(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_mC6F14B68114CDA921868056229A9E84D044A95EC_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____lastIndex;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_1 = __this->____slots;
		int32_t L_2 = __this->____lastIndex;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, L_2, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
	}

IL_0044:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_mF0DB26284CB57E818068D8940E37B48565E4C688_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0080;
		}
	}
	{
		V_0 = 0;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_mDF00F338B7A9F7395CE0D5E0C806C4ABAA05609E(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_1 = L_2;
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_3 = __this->____slots;
		V_2 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		int32_t L_5 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		NullCheck(L_6);
		NullCheck(L_4);
		int32_t L_7 = ((int32_t)(L_5%((int32_t)(((RuntimeArray*)L_6)->max_length))));
		int32_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		goto IL_007c;
	}

IL_002f:
	{
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_9 = V_2;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___hashCode;
		int32_t L_12 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_13 = __this->____comparer;
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___value;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_17 = ___0_item;
		NullCheck(L_13);
		bool L_18;
		L_18 = InterfaceFuncInvoker2< bool, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_13, L_16, L_17);
		if (!L_18)
		{
			goto IL_005a;
		}
	}
	{
		return (bool)1;
	}

IL_005a:
	{
		int32_t L_19 = V_0;
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_20 = V_2;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_006b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_21 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_006b:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_23 = V_2;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___next;
		V_3 = L_25;
	}

IL_007c:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}

IL_0080:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m2D5145F60B1BE88B63684B125671E1DBF9B44B3A_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* L_0 = ___0_array;
		int32_t L_1 = ___1_arrayIndex;
		int32_t L_2 = __this->____count;
		HashSet_1_CopyTo_m8FCE3B4F65BDE34A7C90D943C4536DA875709695(__this, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m86DC3E3C44662829D9ED89390B8D279F79615111_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* V_4 = NULL;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0154;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_mDF00F338B7A9F7395CE0D5E0C806C4ABAA05609E(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_2;
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		V_1 = ((int32_t)(L_3%((int32_t)(((RuntimeArray*)L_4)->max_length))));
		V_2 = (-1);
		V_3 = 0;
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_5 = __this->____slots;
		V_4 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_014c;
	}

IL_003b:
	{
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_10 = V_4;
		int32_t L_11 = V_5;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0123;
		}
	}
	{
		RuntimeObject* L_14 = __this->____comparer;
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_15 = V_4;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___value;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_18 = ___0_item;
		NullCheck(L_14);
		bool L_19;
		L_19 = InterfaceFuncInvoker2< bool, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_14, L_17, L_18);
		if (!L_19)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->____buckets;
		int32_t L_22 = V_1;
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_23 = V_4;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___next;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (int32_t)((int32_t)il2cpp_codegen_add(L_25, 1)));
		goto IL_00a7;
	}

IL_008c:
	{
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_26 = V_4;
		int32_t L_27 = V_2;
		NullCheck(L_26);
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_28 = V_4;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		int32_t L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___next;
		((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___next = L_30;
	}

IL_00a7:
	{
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_31 = V_4;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___hashCode = (-1);
		goto IL_00d1;
	}

IL_00d1:
	{
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_33 = V_4;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		int32_t L_35 = __this->____freeList;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___next = L_35;
		int32_t L_36 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		int32_t L_38 = __this->____count;
		if (L_38)
		{
			goto IL_0119;
		}
	}
	{
		__this->____lastIndex = 0;
		__this->____freeList = (-1);
		goto IL_0121;
	}

IL_0119:
	{
		int32_t L_39 = V_5;
		__this->____freeList = L_39;
	}

IL_0121:
	{
		return (bool)1;
	}

IL_0123:
	{
		int32_t L_40 = V_3;
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_41 = V_4;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_0135;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_42 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_42, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, method);
	}

IL_0135:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		int32_t L_44 = V_5;
		V_2 = L_44;
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_45 = V_4;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = ((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___next;
		V_5 = L_47;
	}

IL_014c:
	{
		int32_t L_48 = V_5;
		if ((((int32_t)L_48) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}

IL_0154:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_mFB71560159D8163320DA0651E1F05936B175803C_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_mAC1655F5F74CF32E30467DFA9CEA522ECE3B5B9E_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t0C7989F0F45B4D7A9C7BD464806B72BDA3020B8C HashSet_1_GetEnumerator_m0B88ADAC18FFB66D069C900DEBB9DBAD47358382_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0C7989F0F45B4D7A9C7BD464806B72BDA3020B8C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mCD984FA25C14209D03737ED1BA80E117300B6565((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1F5344DA0E6DC1E91CCC9A211064041F435D78B1_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0C7989F0F45B4D7A9C7BD464806B72BDA3020B8C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mCD984FA25C14209D03737ED1BA80E117300B6565((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_t0C7989F0F45B4D7A9C7BD464806B72BDA3020B8C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_IEnumerable_GetEnumerator_mF05605EC9B43A72E9AA0060C04F1E7016D5C14F4_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0C7989F0F45B4D7A9C7BD464806B72BDA3020B8C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mCD984FA25C14209D03737ED1BA80E117300B6565((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_t0C7989F0F45B4D7A9C7BD464806B72BDA3020B8C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_GetObjectData_m7851DBC2A39A0FD51F2A302409D06F22AFA7E9CE_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		int32_t L_3 = __this->____version;
		NullCheck(L_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_2, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeObject* L_5 = __this->____comparer;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 30)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_4, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, (RuntimeObject*)L_5, L_7, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		if (!L_9)
		{
			G_B4_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
			G_B4_1 = L_8;
			goto IL_0052;
		}
		G_B3_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
		G_B3_1 = L_8;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		NullCheck(L_10);
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_10)->max_length));
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0053;
	}

IL_0052:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0053:
	{
		NullCheck(G_B5_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B5_2, G_B5_1, G_B5_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		if (!L_11)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_12 = __this->____count;
		Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* L_13 = (Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E*)(Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 31), (uint32_t)L_12);
		V_0 = L_13;
		Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* L_14 = V_0;
		HashSet_1_CopyTo_m05E986C567C44C0593868AB7740623F55B3BCEFF(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_15 = ___0_info;
		Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* L_16 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		NullCheck(L_15);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_15, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, (RuntimeObject*)L_16, L_18, NULL);
	}

IL_0089:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_OnDeserialization_m80ADE8A138B18A05E3966F4CAADBDA6C97F5DD95_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* V_1 = NULL;
	int32_t V_2 = 0;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = __this->____siInfo;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = __this->____siInfo;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_1, _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865, NULL);
		V_0 = L_2;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		NullCheck(L_3);
		RuntimeObject* L_6;
		L_6 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_3, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4))));
		__this->____freeList = (-1);
		int32_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->____buckets = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_9);
		int32_t L_10 = V_0;
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_11 = (SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51*)(SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_10);
		__this->____slots = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_11);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_12 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		NullCheck(L_12);
		RuntimeObject* L_15;
		L_15 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_12, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, L_14, NULL);
		V_1 = ((Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E*)Castclass((RuntimeObject*)L_15, il2cpp_rgctx_data(method->klass->rgctx_data, 24)));
		Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* L_16 = V_1;
		if (L_16)
		{
			goto IL_008f;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_17 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_008f:
	{
		V_2 = 0;
		goto IL_00a5;
	}

IL_0093:
	{
		Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		bool L_22;
		L_22 = HashSet_1_AddIfNotPresent_m18AC5E6888A07CA9D750022D5C6F385C53F82B80(__this, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00a5:
	{
		int32_t L_24 = V_2;
		Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* L_25 = V_1;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0093;
		}
	}
	{
		goto IL_00b4;
	}

IL_00ad:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00b4:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_26 = __this->____siInfo;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_26, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		__this->____version = L_27;
		__this->____siInfo = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mA024658A4ED8E38324AB60A5CDA6DFCAE4FFF4A5_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_item, const RuntimeMethod* method) 
{
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_m18AC5E6888A07CA9D750022D5C6F385C53F82B80(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_TryGetValue_mBBC7893B23A120B4D5B0A6E83C522B70414ED117_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_equalValue, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_actualValue, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1 = ___0_equalValue;
		int32_t L_2;
		L_2 = HashSet_1_InternalIndexOf_mC77941EE82B2CCBFFEFA911B5DD8EE3D73A28809(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_4 = ___1_actualValue;
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_5 = __this->____slots;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_4 = L_7;
		return (bool)1;
	}

IL_002d:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_8 = ___1_actualValue;
		il2cpp_codegen_initobj(L_8, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_mC3AEF962E9ED5BC310A3D006417BD10521A0188C_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck((RuntimeObject*)L_5);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
				}

IL_0039:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0026_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_7;
				L_7 = InterfaceFuncInvoker0< Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_6);
				V_1 = L_7;
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_8 = V_1;
				bool L_9;
				L_9 = HashSet_1_AddIfNotPresent_m18AC5E6888A07CA9D750022D5C6F385C53F82B80(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
			}

IL_0026_1:
			{
				RuntimeObject* L_10 = V_0;
				NullCheck((RuntimeObject*)L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
				if (L_11)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_003a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWith_m0D6D400F9982581D46F0D22135CEE2E39CF2520E_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*)__this))))
		{
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_6);
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		HashSet_1_Clear_mC6F14B68114CDA921868056229A9E84D044A95EC(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		return;
	}

IL_0035:
	{
		RuntimeObject* L_8 = ___0_other;
		V_1 = ((HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*)IsInstClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_10 = V_1;
		bool L_11;
		L_11 = HashSet_1_AreEqualityComparersEqual_m24AB1C428CF69A20C7006FA98063A675FEFE5C08(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_11)
		{
			goto IL_0050;
		}
	}
	{
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_12 = V_1;
		HashSet_1_IntersectWithHashSetWithSameEC_mE18C2EDDD29AB2492870FE585E61410EFDB38343(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}

IL_0050:
	{
		RuntimeObject* L_13 = ___0_other;
		HashSet_1_IntersectWithEnumerable_m33C307C3F4AC9228A8F1C69EABF0BBF788674800(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_ExceptWith_m2BBB4E04E85DF59C3DE6DFBD355DB6F01ED402A2_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*)__this))))
		{
			goto IL_0022;
		}
	}
	{
		HashSet_1_Clear_mC6F14B68114CDA921868056229A9E84D044A95EC(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		return;
	}

IL_0022:
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				}

IL_004d:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003a_1;
			}

IL_002b_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_9;
				L_9 = InterfaceFuncInvoker0< Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_8);
				V_1 = L_9;
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_10 = V_1;
				bool L_11;
				L_11 = HashSet_1_Remove_m86DC3E3C44662829D9ED89390B8D279F79615111(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
			}

IL_003a_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck((RuntimeObject*)L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
				if (L_13)
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_004e;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWith_m148703A626435192B65A4587381AC025004BCBDC_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_3 = ___0_other;
		HashSet_1_UnionWith_mC3AEF962E9ED5BC310A3D006417BD10521A0188C(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*)__this))))
		{
			goto IL_0029;
		}
	}
	{
		HashSet_1_Clear_mC6F14B68114CDA921868056229A9E84D044A95EC(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		return;
	}

IL_0029:
	{
		RuntimeObject* L_5 = ___0_other;
		V_0 = ((HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*)IsInstClass((RuntimeObject*)L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_6 = V_0;
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_7 = V_0;
		bool L_8;
		L_8 = HashSet_1_AreEqualityComparersEqual_m24AB1C428CF69A20C7006FA98063A675FEFE5C08(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_9 = V_0;
		HashSet_1_SymmetricExceptWithUniqueHashSet_m72375E1B6CD241B7236D787DB9852189190CD714(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}

IL_0044:
	{
		RuntimeObject* L_10 = ___0_other;
		HashSet_1_SymmetricExceptWithEnumerable_m443359966B7985B222913BEE6828C95CBB740849(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOf_m0F035A02EDA3D5B69A1B4F2CBB063E606B1DB8AC_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* V_0 = NULL;
	ElementCount_tE45FBE1CF2EAA8D8225A2C1014799D284061AB99 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)1;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*)IsInstClass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_6 = V_0;
		bool L_7;
		L_7 = HashSet_1_AreEqualityComparersEqual_m24AB1C428CF69A20C7006FA98063A675FEFE5C08(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_8 = __this->____count;
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = HashSet_1_get_Count_mFB71560159D8163320DA0651E1F05936B175803C_inline(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		if ((((int32_t)L_8) <= ((int32_t)L_10)))
		{
			goto IL_0041;
		}
	}
	{
		return (bool)0;
	}

IL_0041:
	{
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_11 = V_0;
		bool L_12;
		L_12 = HashSet_1_IsSubsetOfHashSetWithSameEC_mDA2B3185B79BDC115ED1E9DE4C466E16B004AE8F(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return L_12;
	}

IL_0049:
	{
		RuntimeObject* L_13 = ___0_other;
		ElementCount_tE45FBE1CF2EAA8D8225A2C1014799D284061AB99 L_14;
		L_14 = HashSet_1_CheckUniqueAndUnfoundElements_mA7CEA03A8D2B121235FD7CA56C21A7DF1B92E5AC(__this, L_13, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		V_1 = L_14;
		ElementCount_tE45FBE1CF2EAA8D8225A2C1014799D284061AB99 L_15 = V_1;
		int32_t L_16 = L_15.___uniqueCount;
		int32_t L_17 = __this->____count;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_006d;
		}
	}
	{
		ElementCount_tE45FBE1CF2EAA8D8225A2C1014799D284061AB99 L_18 = V_1;
		int32_t L_19 = L_18.___unfoundCount;
		return (bool)((((int32_t)((((int32_t)L_19) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_006d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsProperSubsetOf_m1378325EC34C5D47AC92DA1C5A11283521D210E5_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	ElementCount_tE45FBE1CF2EAA8D8225A2C1014799D284061AB99 V_1;
	memset((&V_1), 0, sizeof(V_1));
	HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0065;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)0;
	}

IL_0028:
	{
		int32_t L_7 = __this->____count;
		if (L_7)
		{
			goto IL_003a;
		}
	}
	{
		RuntimeObject* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_8);
		return (bool)((((int32_t)L_9) > ((int32_t)0))? 1 : 0);
	}

IL_003a:
	{
		RuntimeObject* L_10 = ___0_other;
		V_2 = ((HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*)IsInstClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_12 = V_2;
		bool L_13;
		L_13 = HashSet_1_AreEqualityComparersEqual_m24AB1C428CF69A20C7006FA98063A675FEFE5C08(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_13)
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_14 = __this->____count;
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = HashSet_1_get_Count_mFB71560159D8163320DA0651E1F05936B175803C_inline(L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_005d;
		}
	}
	{
		return (bool)0;
	}

IL_005d:
	{
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_17 = V_2;
		bool L_18;
		L_18 = HashSet_1_IsSubsetOfHashSetWithSameEC_mDA2B3185B79BDC115ED1E9DE4C466E16B004AE8F(__this, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return L_18;
	}

IL_0065:
	{
		RuntimeObject* L_19 = ___0_other;
		ElementCount_tE45FBE1CF2EAA8D8225A2C1014799D284061AB99 L_20;
		L_20 = HashSet_1_CheckUniqueAndUnfoundElements_mA7CEA03A8D2B121235FD7CA56C21A7DF1B92E5AC(__this, L_19, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		V_1 = L_20;
		ElementCount_tE45FBE1CF2EAA8D8225A2C1014799D284061AB99 L_21 = V_1;
		int32_t L_22 = L_21.___uniqueCount;
		int32_t L_23 = __this->____count;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_0086;
		}
	}
	{
		ElementCount_tE45FBE1CF2EAA8D8225A2C1014799D284061AB99 L_24 = V_1;
		int32_t L_25 = L_24.___unfoundCount;
		return (bool)((((int32_t)L_25) > ((int32_t)0))? 1 : 0);
	}

IL_0086:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSupersetOf_m39567EA5BFECAC78AD7465986C69081C8D364D6E_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		RuntimeObject* L_7 = ___0_other;
		V_1 = ((HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*)IsInstClass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_8 = V_1;
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_9 = V_1;
		bool L_10;
		L_10 = HashSet_1_AreEqualityComparersEqual_m24AB1C428CF69A20C7006FA98063A675FEFE5C08(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = HashSet_1_get_Count_mFB71560159D8163320DA0651E1F05936B175803C_inline(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		int32_t L_13 = __this->____count;
		if ((((int32_t)L_12) <= ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		return (bool)0;
	}

IL_004b:
	{
		RuntimeObject* L_14 = ___0_other;
		bool L_15;
		L_15 = HashSet_1_ContainsAllElements_m8A2BDBB95EB3CDFEA33CDA6C2A8F06F7720CD4AC(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsProperSupersetOf_m5AEEC9C25390174D69D26B60FB8F85CF43AF55B7_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	ElementCount_tE45FBE1CF2EAA8D8225A2C1014799D284061AB99 V_1;
	memset((&V_1), 0, sizeof(V_1));
	HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)0;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_5 = V_0;
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		RuntimeObject* L_8 = ___0_other;
		V_2 = ((HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*)IsInstClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_9 = V_2;
		if (!L_9)
		{
			goto IL_005d;
		}
	}
	{
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_10 = V_2;
		bool L_11;
		L_11 = HashSet_1_AreEqualityComparersEqual_m24AB1C428CF69A20C7006FA98063A675FEFE5C08(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = HashSet_1_get_Count_mFB71560159D8163320DA0651E1F05936B175803C_inline(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0055;
		}
	}
	{
		return (bool)0;
	}

IL_0055:
	{
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_15 = V_2;
		bool L_16;
		L_16 = HashSet_1_ContainsAllElements_m8A2BDBB95EB3CDFEA33CDA6C2A8F06F7720CD4AC(__this, (RuntimeObject*)L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		return L_16;
	}

IL_005d:
	{
		RuntimeObject* L_17 = ___0_other;
		ElementCount_tE45FBE1CF2EAA8D8225A2C1014799D284061AB99 L_18;
		L_18 = HashSet_1_CheckUniqueAndUnfoundElements_mA7CEA03A8D2B121235FD7CA56C21A7DF1B92E5AC(__this, L_17, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		V_1 = L_18;
		ElementCount_tE45FBE1CF2EAA8D8225A2C1014799D284061AB99 L_19 = V_1;
		int32_t L_20 = L_19.___uniqueCount;
		int32_t L_21 = __this->____count;
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_007e;
		}
	}
	{
		ElementCount_tE45FBE1CF2EAA8D8225A2C1014799D284061AB99 L_22 = V_1;
		int32_t L_23 = L_22.___unfoundCount;
		return (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_007e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Overlaps_m5BD86009BF445A802EE00C00C141F4D70F66062A_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004e;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				}

IL_004e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003b_1;
			}

IL_0027_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_9;
				L_9 = InterfaceFuncInvoker0< Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_8);
				V_1 = L_9;
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_10 = V_1;
				bool L_11;
				L_11 = HashSet_1_Contains_mF0DB26284CB57E818068D8940E37B48565E4C688(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
				if (!L_11)
				{
					goto IL_003b_1;
				}
			}
			{
				V_2 = (bool)1;
				goto IL_0051;
			}

IL_003b_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck((RuntimeObject*)L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
				if (L_13)
				{
					goto IL_0027_1;
				}
			}
			{
				goto IL_004f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		return (bool)0;
	}

IL_0051:
	{
		bool L_14 = V_2;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_SetEquals_mF7FCB6231C95F3C00E520409E4CE61D6FF76DD6C_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	ElementCount_tE45FBE1CF2EAA8D8225A2C1014799D284061AB99 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_4 = V_0;
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_m24AB1C428CF69A20C7006FA98063A675FEFE5C08(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_7 = __this->____count;
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = HashSet_1_get_Count_mFB71560159D8163320DA0651E1F05936B175803C_inline(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		if ((((int32_t)L_7) == ((int32_t)L_9)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0037:
	{
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_10 = V_0;
		bool L_11;
		L_11 = HashSet_1_ContainsAllElements_m8A2BDBB95EB3CDFEA33CDA6C2A8F06F7720CD4AC(__this, (RuntimeObject*)L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		return L_11;
	}

IL_003f:
	{
		RuntimeObject* L_12 = ___0_other;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_13 = V_1;
		if (!L_13)
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_14 = __this->____count;
		if (L_14)
		{
			goto IL_005c;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_15);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		return (bool)0;
	}

IL_005c:
	{
		RuntimeObject* L_17 = ___0_other;
		ElementCount_tE45FBE1CF2EAA8D8225A2C1014799D284061AB99 L_18;
		L_18 = HashSet_1_CheckUniqueAndUnfoundElements_mA7CEA03A8D2B121235FD7CA56C21A7DF1B92E5AC(__this, L_17, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		V_2 = L_18;
		ElementCount_tE45FBE1CF2EAA8D8225A2C1014799D284061AB99 L_19 = V_2;
		int32_t L_20 = L_19.___uniqueCount;
		int32_t L_21 = __this->____count;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_007d;
		}
	}
	{
		ElementCount_tE45FBE1CF2EAA8D8225A2C1014799D284061AB99 L_22 = V_2;
		int32_t L_23 = L_22.___unfoundCount;
		return (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_007d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m05E986C567C44C0593868AB7740623F55B3BCEFF_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* ___0_array, const RuntimeMethod* method) 
{
	{
		Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* L_0 = ___0_array;
		int32_t L_1 = __this->____count;
		HashSet_1_CopyTo_m8FCE3B4F65BDE34A7C90D943C4536DA875709695(__this, L_0, 0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m8FCE3B4F65BDE34A7C90D943C4536DA875709695_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0028:
	{
		int32_t L_7 = ___2_count;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = ___2_count;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_9);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0042:
	{
		int32_t L_12 = ___1_arrayIndex;
		Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* L_13 = ___0_array;
		NullCheck(L_13);
		if ((((int32_t)L_12) > ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_14 = ___2_count;
		Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* L_15 = ___0_array;
		NullCheck(L_15);
		int32_t L_16 = ___1_arrayIndex;
		if ((((int32_t)L_14) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)))))
		{
			goto IL_005b;
		}
	}

IL_0050:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_17 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_005b:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0097;
	}

IL_0061:
	{
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_18 = __this->____slots;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___hashCode;
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* L_21 = ___0_array;
		int32_t L_22 = ___1_arrayIndex;
		int32_t L_23 = V_0;
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_24 = __this->____slots;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___value;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, L_23))), (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376)L_26);
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0093:
	{
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0097:
	{
		int32_t L_29 = V_1;
		int32_t L_30 = __this->____lastIndex;
		if ((((int32_t)L_29) >= ((int32_t)L_30)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_31 = V_0;
		int32_t L_32 = ___2_count;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0061;
		}
	}

IL_00a4:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_RemoveWhere_m190E5A8F2D8E08F713DD5B857F24C995BA8063FF_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, Predicate_1_t9ADD2AEC8229E068388E35FC4B0E7C4F2AE588D6* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Predicate_1_t9ADD2AEC8229E068388E35FC4B0E7C4F2AE588D6* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0054;
	}

IL_0014:
	{
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_2 = __this->____slots;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_5 = __this->____slots;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		V_2 = L_7;
		Predicate_1_t9ADD2AEC8229E068388E35FC4B0E7C4F2AE588D6* L_8 = ___0_match;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_9 = V_2;
		NullCheck(L_8);
		bool L_10;
		L_10 = Predicate_1_Invoke_mB0F7DE9471912D4DA1C88986F3A1E6D4A1631F00_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_11 = V_2;
		bool L_12;
		L_12 = HashSet_1_Remove_m86DC3E3C44662829D9ED89390B8D279F79615111(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0050:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____lastIndex;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_m302A4EEC161C86619F472AD3FC4A634D53CB1FA0_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____comparer;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_EnsureCapacity_mAE14D5E8A3B5E49C395FDAA09987750172F95499_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000f:
	{
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_3 = __this->____slots;
		NullCheck(L_3);
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
		goto IL_0022;
	}

IL_0021:
	{
		G_B5_0 = 0;
	}

IL_0022:
	{
		V_0 = G_B5_0;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_capacity;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		if (L_7)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_8 = ___0_capacity;
		int32_t L_9;
		L_9 = HashSet_1_Initialize_m91B757109985496B87D12AADF01B0E3EADA6B1AA(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return L_9;
	}

IL_0039:
	{
		int32_t L_10 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_10, NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		HashSet_1_SetCapacity_mAFDEE46F46BCCF8B18F36E85CECF8611D0752802(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		int32_t L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_mAA9D5071655D30CE928502F9E0197F79D7538F52_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->____slots = (SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)(SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51*)NULL);
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}

IL_0025:
	{
		int32_t L_2 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_5 = (SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51*)(SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_4);
		V_1 = L_5;
		int32_t L_6 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_2 = L_7;
		V_3 = 0;
		V_4 = 0;
		goto IL_00a2;
	}

IL_0046:
	{
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_8 = __this->____slots;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_11 = V_1;
		int32_t L_12 = V_3;
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_13 = __this->____slots;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Slot_t5EC3D0B1C424F7E912B3CE58F54AD84E43456844 L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (Slot_t5EC3D0B1C424F7E912B3CE58F54AD84E43456844)L_16);
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_17 = V_1;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_0;
		V_5 = ((int32_t)(L_19%L_20));
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_21 = V_1;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_2;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___next = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = V_3;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)((int32_t)il2cpp_codegen_add(L_29, 1)));
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_009c:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00a2:
	{
		int32_t L_32 = V_4;
		int32_t L_33 = __this->____lastIndex;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_34 = V_3;
		__this->____lastIndex = L_34;
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_35 = V_1;
		__this->____slots = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_35);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_2;
		__this->____buckets = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_36);
		__this->____freeList = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_CreateSetComparer_m06F0ACCA72B7ED2B516A2722F7F40188D81A8509_gshared (const RuntimeMethod* method) 
{
	{
		HashSetEqualityComparer_1_t1D099B36C6627D1A99D52592395FEA9EFEA4E9CF* L_0 = (HashSetEqualityComparer_1_t1D099B36C6627D1A99D52592395FEA9EFEA4E9CF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 55));
		HashSetEqualityComparer_1__ctor_mD130A04E00569FC1F74F28306FB00E9C167BF7CA(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 56));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m91B757109985496B87D12AADF01B0E3EADA6B1AA_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_5 = (SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51*)(SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_4);
		__this->____slots = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_mBE2058DA6AF7E5A806C3D41CA779778C52932075_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____count;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91930CCAB5CB8F6F327407F9A14CF42F57A0F27B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = V_0;
		HashSet_1_SetCapacity_mAFDEE46F46BCCF8B18F36E85CECF8611D0752802(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_mAFDEE46F46BCCF8B18F36E85CECF8611D0752802_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___0_newSize;
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_1 = (SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51*)(SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_0);
		V_0 = L_1;
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_3 = __this->____slots;
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_4 = V_0;
		int32_t L_5 = __this->____lastIndex;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0023:
	{
		int32_t L_6 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0058;
	}

IL_002e:
	{
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = ___0_newSize;
		V_3 = ((int32_t)(L_10%L_11));
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___next = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_3;
		int32_t L_20 = V_2;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1)));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0058:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = __this->____lastIndex;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002e;
		}
	}
	{
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_24 = V_0;
		__this->____slots = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_1;
		__this->____buckets = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_25);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_m18AC5E6888A07CA9D750022D5C6F385C53F82B80_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1;
		L_1 = HashSet_1_Initialize_m91B757109985496B87D12AADF01B0E3EADA6B1AA(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0010:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_2 = ___0_value;
		int32_t L_3;
		L_3 = HashSet_1_InternalGetHashCode_mDF00F338B7A9F7395CE0D5E0C806C4ABAA05609E(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_3;
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		V_1 = ((int32_t)(L_4%((int32_t)(((RuntimeArray*)L_5)->max_length))));
		V_2 = 0;
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_6 = __this->____slots;
		V_3 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		goto IL_008b;
	}

IL_003a:
	{
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_11 = V_3;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		int32_t L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___hashCode;
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_15 = __this->____comparer;
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_16 = V_3;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		int32_t L_21 = V_2;
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_22 = V_3;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0078;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_0078:
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_25 = V_3;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_5 = L_27;
	}

IL_008b:
	{
		int32_t L_28 = V_5;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_29 = __this->____freeList;
		if ((((int32_t)L_29) < ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_30 = __this->____freeList;
		V_4 = L_30;
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_31 = V_3;
		int32_t L_32 = V_4;
		NullCheck(L_31);
		int32_t L_33 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next;
		__this->____freeList = L_33;
		goto IL_00ef;
	}

IL_00b6:
	{
		int32_t L_34 = __this->____lastIndex;
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_35 = V_3;
		NullCheck(L_35);
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))))
		{
			goto IL_00d9;
		}
	}
	{
		HashSet_1_IncreaseCapacity_mBE2058DA6AF7E5A806C3D41CA779778C52932075(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_36 = __this->____slots;
		V_3 = L_36;
		int32_t L_37 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->____buckets;
		NullCheck(L_38);
		V_1 = ((int32_t)(L_37%((int32_t)(((RuntimeArray*)L_38)->max_length))));
	}

IL_00d9:
	{
		int32_t L_39 = __this->____lastIndex;
		V_4 = L_39;
		int32_t L_40 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ef:
	{
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_41 = V_3;
		int32_t L_42 = V_4;
		NullCheck(L_41);
		int32_t L_43 = V_0;
		((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode = L_43;
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_44 = V_3;
		int32_t L_45 = V_4;
		NullCheck(L_44);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_46 = ___0_value;
		((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___value = L_46;
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_47 = V_3;
		int32_t L_48 = V_4;
		NullCheck(L_47);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = __this->____buckets;
		int32_t L_50 = V_1;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___next = ((int32_t)il2cpp_codegen_subtract(L_52, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		int32_t L_55 = V_4;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(L_54), (int32_t)((int32_t)il2cpp_codegen_add(L_55, 1)));
		int32_t L_56 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_56, 1));
		int32_t L_57 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_57, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_mD030E7EF55F002EE06DAE707324241072C552BBE_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, int32_t ___0_index, int32_t ___1_hashCode, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___2_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		NullCheck(L_1);
		V_0 = ((int32_t)(L_0%((int32_t)(((RuntimeArray*)L_1)->max_length))));
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_2 = __this->____slots;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		int32_t L_4 = ___1_hashCode;
		((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode = L_4;
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_5 = __this->____slots;
		int32_t L_6 = ___0_index;
		NullCheck(L_5);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_7 = ___2_value;
		((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value = L_7;
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_8 = __this->____slots;
		int32_t L_9 = ___0_index;
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___next = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____buckets;
		int32_t L_15 = V_0;
		int32_t L_16 = ___0_index;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (int32_t)((int32_t)il2cpp_codegen_add(L_16, 1)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_ContainsAllElements_m8A2BDBB95EB3CDFEA33CDA6C2A8F06F7720CD4AC_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0030;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_0030:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_001d_1;
			}

IL_0009_1:
			{
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_5;
				L_5 = InterfaceFuncInvoker0< Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_4);
				V_1 = L_5;
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_6 = V_1;
				bool L_7;
				L_7 = HashSet_1_Contains_mF0DB26284CB57E818068D8940E37B48565E4C688(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
				if (L_7)
				{
					goto IL_001d_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0033;
			}

IL_001d_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck((RuntimeObject*)L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				if (L_9)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0031;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		return (bool)1;
	}

IL_0033:
	{
		bool L_10 = V_2;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOfHashSetWithSameEC_mDA2B3185B79BDC115ED1E9DE4C466E16B004AE8F_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* ___0_other, const RuntimeMethod* method) 
{
	Enumerator_t0C7989F0F45B4D7A9C7BD464806B72BDA3020B8C V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		Enumerator_t0C7989F0F45B4D7A9C7BD464806B72BDA3020B8C L_0;
		L_0 = HashSet_1_GetEnumerator_m0B88ADAC18FFB66D069C900DEBB9DBAD47358382(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{
				Enumerator_Dispose_m43A9A2AE7F9F37568D075B81C2CBF966157DC640((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 63));
				return;
			}
		});
		try
		{
			{
				goto IL_001e_1;
			}

IL_0009_1:
			{
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1;
				L_1 = Enumerator_get_Current_m3159B7369EC62631C4C10AD1055F55B6B15218E9_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 60));
				V_1 = L_1;
				HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_2 = ___0_other;
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_3 = V_1;
				NullCheck(L_2);
				bool L_4;
				L_4 = HashSet_1_Contains_mF0DB26284CB57E818068D8940E37B48565E4C688(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
				if (L_4)
				{
					goto IL_001e_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0039;
			}

IL_001e_1:
			{
				bool L_5;
				L_5 = Enumerator_MoveNext_m917546674D1D13C3F3E49962CD1006DF18F4196F((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
				if (L_5)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0037;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		return (bool)1;
	}

IL_0039:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithHashSetWithSameEC_mE18C2EDDD29AB2492870FE585E61410EFDB38343_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* ___0_other, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = 0;
		goto IL_003f;
	}

IL_0004:
	{
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_0 = __this->____slots;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->___hashCode;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_3 = __this->____slots;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		V_1 = L_5;
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_6 = ___0_other;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_7 = V_1;
		NullCheck(L_6);
		bool L_8;
		L_8 = HashSet_1_Contains_mF0DB26284CB57E818068D8940E37B48565E4C688(L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		if (L_8)
		{
			goto IL_003b;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_9 = V_1;
		bool L_10;
		L_10 = HashSet_1_Remove_m86DC3E3C44662829D9ED89390B8D279F79615111(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
	}

IL_003b:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_003f:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____lastIndex;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithEnumerable_m33C307C3F4AC9228A8F1C69EABF0BBF788674800_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = __this->____lastIndex;
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_1, NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)100))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = V_1;
		if ((uintptr_t)((uintptr_t)L_4) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_5 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_4), 4));
		int8_t* L_6 = (int8_t*) (L_5 ? alloca(L_5) : NULL);
		memset(L_6, 0, L_5);
		int32_t L_7 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_8 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_8, (int32_t*)(L_6), L_7, NULL);
		V_2 = L_8;
		goto IL_002f;
	}

IL_0022:
	{
		int32_t L_9 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_9);
		int32_t L_11 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_12 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_12, L_10, L_11, NULL);
		V_2 = L_12;
	}

IL_002f:
	{
		RuntimeObject* L_13 = ___0_other;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_13);
		V_3 = L_14;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0061:
			{
				{
					RuntimeObject* L_15 = V_3;
					if (!L_15)
					{
						goto IL_006a;
					}
				}
				{
					RuntimeObject* L_16 = V_3;
					NullCheck((RuntimeObject*)L_16);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
				}

IL_006a:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0057_1;
			}

IL_0038_1:
			{
				RuntimeObject* L_17 = V_3;
				NullCheck(L_17);
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_18;
				L_18 = InterfaceFuncInvoker0< Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_17);
				V_4 = L_18;
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_19 = V_4;
				int32_t L_20;
				L_20 = HashSet_1_InternalIndexOf_mC77941EE82B2CCBFFEFA911B5DD8EE3D73A28809(__this, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
				V_5 = L_20;
				int32_t L_21 = V_5;
				if ((((int32_t)L_21) < ((int32_t)0)))
				{
					goto IL_0057_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_22 = V_2;
				int32_t L_23 = V_5;
				NullCheck(L_22);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_22, L_23, NULL);
			}

IL_0057_1:
			{
				RuntimeObject* L_24 = V_3;
				NullCheck((RuntimeObject*)L_24);
				bool L_25;
				L_25 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_24);
				if (L_25)
				{
					goto IL_0038_1;
				}
			}
			{
				goto IL_006b;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006b:
	{
		V_6 = 0;
		goto IL_00ae;
	}

IL_0070:
	{
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_26 = __this->____slots;
		int32_t L_27 = V_6;
		NullCheck(L_26);
		int32_t L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___hashCode;
		if ((((int32_t)L_28) < ((int32_t)0)))
		{
			goto IL_00a8;
		}
	}
	{
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_29 = V_2;
		int32_t L_30 = V_6;
		NullCheck(L_29);
		bool L_31;
		L_31 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00a8;
		}
	}
	{
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_32 = __this->____slots;
		int32_t L_33 = V_6;
		NullCheck(L_32);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_34 = ((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->___value;
		bool L_35;
		L_35 = HashSet_1_Remove_m86DC3E3C44662829D9ED89390B8D279F79615111(__this, L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
	}

IL_00a8:
	{
		int32_t L_36 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00ae:
	{
		int32_t L_37 = V_6;
		int32_t L_38 = V_0;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0070;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalIndexOf_mC77941EE82B2CCBFFEFA911B5DD8EE3D73A28809_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___0_item;
		int32_t L_1;
		L_1 = HashSet_1_InternalGetHashCode_mDF00F338B7A9F7395CE0D5E0C806C4ABAA05609E(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_1 = L_1;
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_2 = __this->____slots;
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		int32_t L_4 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)(L_4%((int32_t)(((RuntimeArray*)L_5)->max_length))));
		int32_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		goto IL_0074;
	}

IL_0027:
	{
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_8 = V_2;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = V_1;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_12 = __this->____comparer;
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_13 = V_2;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_15 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___value;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_16 = ___0_item;
		NullCheck(L_12);
		bool L_17;
		L_17 = InterfaceFuncInvoker2< bool, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_12, L_15, L_16);
		if (!L_17)
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_18 = V_3;
		return L_18;
	}

IL_0052:
	{
		int32_t L_19 = V_0;
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_20 = V_2;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0063;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_21 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_0063:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_23 = V_2;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___next;
		V_3 = L_25;
	}

IL_0074:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithUniqueHashSet_m72375E1B6CD241B7236D787DB9852189190CD714_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* ___0_other, const RuntimeMethod* method) 
{
	Enumerator_t0C7989F0F45B4D7A9C7BD464806B72BDA3020B8C V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_0 = ___0_other;
		NullCheck(L_0);
		Enumerator_t0C7989F0F45B4D7A9C7BD464806B72BDA3020B8C L_1;
		L_1 = HashSet_1_GetEnumerator_m0B88ADAC18FFB66D069C900DEBB9DBAD47358382(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{
				Enumerator_Dispose_m43A9A2AE7F9F37568D075B81C2CBF966157DC640((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 63));
				return;
			}
		});
		try
		{
			{
				goto IL_0022_1;
			}

IL_0009_1:
			{
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_2;
				L_2 = Enumerator_get_Current_m3159B7369EC62631C4C10AD1055F55B6B15218E9_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 60));
				V_1 = L_2;
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_3 = V_1;
				bool L_4;
				L_4 = HashSet_1_Remove_m86DC3E3C44662829D9ED89390B8D279F79615111(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
				if (L_4)
				{
					goto IL_0022_1;
				}
			}
			{
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_5 = V_1;
				bool L_6;
				L_6 = HashSet_1_AddIfNotPresent_m18AC5E6888A07CA9D750022D5C6F385C53F82B80(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
			}

IL_0022_1:
			{
				bool L_7;
				L_7 = Enumerator_MoveNext_m917546674D1D13C3F3E49962CD1006DF18F4196F((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
				if (L_7)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_003b;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithEnumerable_m443359966B7985B222913BEE6828C95CBB740849_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		int32_t L_0 = __this->____lastIndex;
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_1, NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)50))))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_4 = V_1;
		if ((uintptr_t)((uintptr_t)L_4) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_5 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_4), 4));
		int8_t* L_6 = (int8_t*) (L_5 ? alloca(L_5) : NULL);
		memset(L_6, 0, L_5);
		int32_t L_7 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_8 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_8, (int32_t*)(L_6), L_7, NULL);
		V_2 = L_8;
		int32_t L_9 = V_1;
		if ((uintptr_t)((uintptr_t)L_9) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_10 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_9), 4));
		int8_t* L_11 = (int8_t*) (L_10 ? alloca(L_10) : NULL);
		memset(L_11, 0, L_10);
		int32_t L_12 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_13 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_13, (int32_t*)(L_11), L_12, NULL);
		V_3 = L_13;
		goto IL_0049;
	}

IL_002f:
	{
		int32_t L_14 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_14);
		int32_t L_16 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_17 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_17, L_15, L_16, NULL);
		V_2 = L_17;
		int32_t L_18 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_18);
		int32_t L_20 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_21 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_21, L_19, L_20, NULL);
		V_3 = L_21;
	}

IL_0049:
	{
		RuntimeObject* L_22 = ___0_other;
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_22);
		V_4 = L_23;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0097:
			{
				{
					RuntimeObject* L_24 = V_4;
					if (!L_24)
					{
						goto IL_00a2;
					}
				}
				{
					RuntimeObject* L_25 = V_4;
					NullCheck((RuntimeObject*)L_25);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_25);
				}

IL_00a2:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_008c_1;
			}

IL_0053_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_27;
				L_27 = InterfaceFuncInvoker0< Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_26);
				V_5 = L_27;
				V_6 = 0;
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_28 = V_5;
				bool L_29;
				L_29 = HashSet_1_AddOrGetLocation_mD9C917E898F8FB72F17D9D03774B10CFEC6EB8D0(__this, L_28, (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 64));
				if (!L_29)
				{
					goto IL_0075_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_30 = V_3;
				int32_t L_31 = V_6;
				NullCheck(L_30);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_30, L_31, NULL);
				goto IL_008c_1;
			}

IL_0075_1:
			{
				int32_t L_32 = V_6;
				int32_t L_33 = V_0;
				if ((((int32_t)L_32) >= ((int32_t)L_33)))
				{
					goto IL_008c_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_34 = V_3;
				int32_t L_35 = V_6;
				NullCheck(L_34);
				bool L_36;
				L_36 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_34, L_35, NULL);
				if (L_36)
				{
					goto IL_008c_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_37 = V_2;
				int32_t L_38 = V_6;
				NullCheck(L_37);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_37, L_38, NULL);
			}

IL_008c_1:
			{
				RuntimeObject* L_39 = V_4;
				NullCheck((RuntimeObject*)L_39);
				bool L_40;
				L_40 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_39);
				if (L_40)
				{
					goto IL_0053_1;
				}
			}
			{
				goto IL_00a3;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a3:
	{
		V_7 = 0;
		goto IL_00d1;
	}

IL_00a8:
	{
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_41 = V_2;
		int32_t L_42 = V_7;
		NullCheck(L_41);
		bool L_43;
		L_43 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_41, L_42, NULL);
		if (!L_43)
		{
			goto IL_00cb;
		}
	}
	{
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_44 = __this->____slots;
		int32_t L_45 = V_7;
		NullCheck(L_44);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_46 = ((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___value;
		bool L_47;
		L_47 = HashSet_1_Remove_m86DC3E3C44662829D9ED89390B8D279F79615111(__this, L_46, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
	}

IL_00cb:
	{
		int32_t L_48 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_00d1:
	{
		int32_t L_49 = V_7;
		int32_t L_50 = V_0;
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			goto IL_00a8;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddOrGetLocation_mD9C917E898F8FB72F17D9D03774B10CFEC6EB8D0_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_value, int32_t* ___1_location, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___0_value;
		int32_t L_1;
		L_1 = HashSet_1_InternalGetHashCode_mDF00F338B7A9F7395CE0D5E0C806C4ABAA05609E(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		V_1 = ((int32_t)(L_2%((int32_t)(((RuntimeArray*)L_3)->max_length))));
		V_2 = 0;
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_4 = __this->____slots;
		V_3 = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		goto IL_007f;
	}

IL_002a:
	{
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_9 = V_3;
		int32_t L_10 = V_5;
		NullCheck(L_9);
		int32_t L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___hashCode;
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_005b;
		}
	}
	{
		RuntimeObject* L_13 = __this->____comparer;
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_14 = V_3;
		int32_t L_15 = V_5;
		NullCheck(L_14);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___value;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_17 = ___0_value;
		NullCheck(L_13);
		bool L_18;
		L_18 = InterfaceFuncInvoker2< bool, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_13, L_16, L_17);
		if (!L_18)
		{
			goto IL_005b;
		}
	}
	{
		int32_t* L_19 = ___1_location;
		int32_t L_20 = V_5;
		*((int32_t*)L_19) = (int32_t)L_20;
		return (bool)0;
	}

IL_005b:
	{
		int32_t L_21 = V_2;
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_22 = V_3;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_006c;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_006c:
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_25 = V_3;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_5 = L_27;
	}

IL_007f:
	{
		int32_t L_28 = V_5;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_29 = __this->____freeList;
		if ((((int32_t)L_29) < ((int32_t)0)))
		{
			goto IL_00aa;
		}
	}
	{
		int32_t L_30 = __this->____freeList;
		V_4 = L_30;
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_31 = V_3;
		int32_t L_32 = V_4;
		NullCheck(L_31);
		int32_t L_33 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next;
		__this->____freeList = L_33;
		goto IL_00e3;
	}

IL_00aa:
	{
		int32_t L_34 = __this->____lastIndex;
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_35 = V_3;
		NullCheck(L_35);
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))))
		{
			goto IL_00cd;
		}
	}
	{
		HashSet_1_IncreaseCapacity_mBE2058DA6AF7E5A806C3D41CA779778C52932075(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_36 = __this->____slots;
		V_3 = L_36;
		int32_t L_37 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->____buckets;
		NullCheck(L_38);
		V_1 = ((int32_t)(L_37%((int32_t)(((RuntimeArray*)L_38)->max_length))));
	}

IL_00cd:
	{
		int32_t L_39 = __this->____lastIndex;
		V_4 = L_39;
		int32_t L_40 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00e3:
	{
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_41 = V_3;
		int32_t L_42 = V_4;
		NullCheck(L_41);
		int32_t L_43 = V_0;
		((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode = L_43;
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_44 = V_3;
		int32_t L_45 = V_4;
		NullCheck(L_44);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_46 = ___0_value;
		((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___value = L_46;
		SlotU5BU5D_t1E4222EA9293721C2CDCF9F993401C932816BC51* L_47 = V_3;
		int32_t L_48 = V_4;
		NullCheck(L_47);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = __this->____buckets;
		int32_t L_50 = V_1;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___next = ((int32_t)il2cpp_codegen_subtract(L_52, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		int32_t L_55 = V_4;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(L_54), (int32_t)((int32_t)il2cpp_codegen_add(L_55, 1)));
		int32_t L_56 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_56, 1));
		int32_t L_57 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_57, 1));
		int32_t* L_58 = ___1_location;
		int32_t L_59 = V_4;
		*((int32_t*)L_58) = (int32_t)L_59;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementCount_tE45FBE1CF2EAA8D8225A2C1014799D284061AB99 HashSet_1_CheckUniqueAndUnfoundElements_mA7CEA03A8D2B121235FD7CA56C21A7DF1B92E5AC_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ElementCount_tE45FBE1CF2EAA8D8225A2C1014799D284061AB99 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_004f;
		}
	}
	{
		V_5 = 0;
		RuntimeObject* L_1 = ___0_other;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_1);
		V_6 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_3 = V_6;
					if (!L_3)
					{
						goto IL_003b;
					}
				}
				{
					RuntimeObject* L_4 = V_6;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_003b:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0025_1;
			}

IL_0015_1:
			{
				RuntimeObject* L_5 = V_6;
				NullCheck(L_5);
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_6;
				L_6 = InterfaceFuncInvoker0< Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_5);
				int32_t L_7 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_7, 1));
				goto IL_003c;
			}

IL_0025_1:
			{
				RuntimeObject* L_8 = V_6;
				NullCheck((RuntimeObject*)L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				if (L_9)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_003c;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		(&V_0)->___uniqueCount = 0;
		int32_t L_10 = V_5;
		(&V_0)->___unfoundCount = L_10;
		ElementCount_tE45FBE1CF2EAA8D8225A2C1014799D284061AB99 L_11 = V_0;
		return L_11;
	}

IL_004f:
	{
		int32_t L_12 = __this->____lastIndex;
		int32_t L_13;
		L_13 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_12, NULL);
		V_1 = L_13;
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)100))))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_15 = V_1;
		if ((uintptr_t)((uintptr_t)L_15) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_16 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_15), 4));
		int8_t* L_17 = (int8_t*) (L_16 ? alloca(L_16) : NULL);
		memset(L_17, 0, L_16);
		int32_t L_18 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_19 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_19, (int32_t*)(L_17), L_18, NULL);
		V_2 = L_19;
		goto IL_007c;
	}

IL_006f:
	{
		int32_t L_20 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_20);
		int32_t L_22 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_23 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_23, L_21, L_22, NULL);
		V_2 = L_23;
	}

IL_007c:
	{
		V_3 = 0;
		V_4 = 0;
		RuntimeObject* L_24 = ___0_other;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_24);
		V_6 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d1:
			{
				{
					RuntimeObject* L_26 = V_6;
					if (!L_26)
					{
						goto IL_00dc;
					}
				}
				{
					RuntimeObject* L_27 = V_6;
					NullCheck((RuntimeObject*)L_27);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00dc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00c6_1;
			}

IL_008b_1:
			{
				RuntimeObject* L_28 = V_6;
				NullCheck(L_28);
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_29;
				L_29 = InterfaceFuncInvoker0< Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_28);
				V_7 = L_29;
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_30 = V_7;
				int32_t L_31;
				L_31 = HashSet_1_InternalIndexOf_mC77941EE82B2CCBFFEFA911B5DD8EE3D73A28809(__this, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
				V_8 = L_31;
				int32_t L_32 = V_8;
				if ((((int32_t)L_32) < ((int32_t)0)))
				{
					goto IL_00bd_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_33 = V_2;
				int32_t L_34 = V_8;
				NullCheck(L_33);
				bool L_35;
				L_35 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_33, L_34, NULL);
				if (L_35)
				{
					goto IL_00c6_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_36 = V_2;
				int32_t L_37 = V_8;
				NullCheck(L_36);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_36, L_37, NULL);
				int32_t L_38 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
				goto IL_00c6_1;
			}

IL_00bd_1:
			{
				int32_t L_39 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_39, 1));
				bool L_40 = ___1_returnIfUnfound;
				if (!L_40)
				{
					goto IL_00c6_1;
				}
			}
			{
				goto IL_00dd;
			}

IL_00c6_1:
			{
				RuntimeObject* L_41 = V_6;
				NullCheck((RuntimeObject*)L_41);
				bool L_42;
				L_42 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				if (L_42)
				{
					goto IL_008b_1;
				}
			}
			{
				goto IL_00dd;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00dd:
	{
		int32_t L_43 = V_4;
		(&V_0)->___uniqueCount = L_43;
		int32_t L_44 = V_3;
		(&V_0)->___unfoundCount = L_44;
		ElementCount_tE45FBE1CF2EAA8D8225A2C1014799D284061AB99 L_45 = V_0;
		return L_45;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_HashSetEquals_m1F0D348C28AFEC400630B0B7B5E2EB0ACFAF6A73_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* ___0_set1, HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* ___1_set2, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	Enumerator_t0C7989F0F45B4D7A9C7BD464806B72BDA3020B8C V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	Enumerator_t0C7989F0F45B4D7A9C7BD464806B72BDA3020B8C V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_0 = ___0_set1;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_1 = ___1_set2;
		return (bool)((((RuntimeObject*)(HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}

IL_0008:
	{
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_2 = ___1_set2;
		if (L_2)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_3 = ___0_set1;
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_4 = ___1_set2;
		bool L_5;
		L_5 = HashSet_1_AreEqualityComparersEqual_m24AB1C428CF69A20C7006FA98063A675FEFE5C08(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (!L_5)
		{
			goto IL_0062;
		}
	}
	{
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_6 = ___0_set1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = HashSet_1_get_Count_mFB71560159D8163320DA0651E1F05936B175803C_inline(L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 46));
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_8 = ___1_set2;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = HashSet_1_get_Count_mFB71560159D8163320DA0651E1F05936B175803C_inline(L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 46));
		if ((((int32_t)L_7) == ((int32_t)L_9)))
		{
			goto IL_0026;
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_10 = ___1_set2;
		NullCheck(L_10);
		Enumerator_t0C7989F0F45B4D7A9C7BD464806B72BDA3020B8C L_11;
		L_11 = HashSet_1_GetEnumerator_m0B88ADAC18FFB66D069C900DEBB9DBAD47358382(L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 59));
		V_0 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0052:
			{
				Enumerator_Dispose_m43A9A2AE7F9F37568D075B81C2CBF966157DC640((&V_0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 63));
				return;
			}
		});
		try
		{
			{
				goto IL_0047_1;
			}

IL_002f_1:
			{
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_12;
				L_12 = Enumerator_get_Current_m3159B7369EC62631C4C10AD1055F55B6B15218E9_inline((&V_0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 60));
				V_1 = L_12;
				HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_13 = ___0_set1;
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_14 = V_1;
				NullCheck(L_13);
				bool L_15;
				L_15 = HashSet_1_Contains_mF0DB26284CB57E818068D8940E37B48565E4C688(L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 51));
				if (L_15)
				{
					goto IL_0047_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_00d5;
			}

IL_0047_1:
			{
				bool L_16;
				L_16 = Enumerator_MoveNext_m917546674D1D13C3F3E49962CD1006DF18F4196F((&V_0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 62));
				if (L_16)
				{
					goto IL_002f_1;
				}
			}
			{
				goto IL_0060;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0060:
	{
		return (bool)1;
	}

IL_0062:
	{
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_17 = ___1_set2;
		NullCheck(L_17);
		Enumerator_t0C7989F0F45B4D7A9C7BD464806B72BDA3020B8C L_18;
		L_18 = HashSet_1_GetEnumerator_m0B88ADAC18FFB66D069C900DEBB9DBAD47358382(L_17, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 59));
		V_0 = L_18;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c5:
			{
				Enumerator_Dispose_m43A9A2AE7F9F37568D075B81C2CBF966157DC640((&V_0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 63));
				return;
			}
		});
		try
		{
			{
				goto IL_00ba_1;
			}

IL_006b_1:
			{
				Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_19;
				L_19 = Enumerator_get_Current_m3159B7369EC62631C4C10AD1055F55B6B15218E9_inline((&V_0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 60));
				V_3 = L_19;
				V_4 = (bool)0;
				HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_20 = ___0_set1;
				NullCheck(L_20);
				Enumerator_t0C7989F0F45B4D7A9C7BD464806B72BDA3020B8C L_21;
				L_21 = HashSet_1_GetEnumerator_m0B88ADAC18FFB66D069C900DEBB9DBAD47358382(L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 59));
				V_5 = L_21;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00a4_1:
					{
						Enumerator_Dispose_m43A9A2AE7F9F37568D075B81C2CBF966157DC640((&V_5), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 63));
						return;
					}
				});
				try
				{
					{
						goto IL_0099_2;
					}

IL_0080_2:
					{
						Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_22;
						L_22 = Enumerator_get_Current_m3159B7369EC62631C4C10AD1055F55B6B15218E9_inline((&V_5), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 60));
						V_6 = L_22;
						RuntimeObject* L_23 = ___2_comparer;
						Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_24 = V_3;
						Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_25 = V_6;
						NullCheck(L_23);
						bool L_26;
						L_26 = InterfaceFuncInvoker2< bool, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_23, L_24, L_25);
						if (!L_26)
						{
							goto IL_0099_2;
						}
					}
					{
						V_4 = (bool)1;
						goto IL_00b2_1;
					}

IL_0099_2:
					{
						bool L_27;
						L_27 = Enumerator_MoveNext_m917546674D1D13C3F3E49962CD1006DF18F4196F((&V_5), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 62));
						if (L_27)
						{
							goto IL_0080_2;
						}
					}
					{
						goto IL_00b2_1;
					}
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00b2_1:
			{
				bool L_28 = V_4;
				if (L_28)
				{
					goto IL_00ba_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_00d5;
			}

IL_00ba_1:
			{
				bool L_29;
				L_29 = Enumerator_MoveNext_m917546674D1D13C3F3E49962CD1006DF18F4196F((&V_0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 62));
				if (L_29)
				{
					goto IL_006b_1;
				}
			}
			{
				goto IL_00d3;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d3:
	{
		return (bool)1;
	}

IL_00d5:
	{
		bool L_30 = V_2;
		return L_30;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_m24AB1C428CF69A20C7006FA98063A675FEFE5C08_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* ___0_set1, HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* ___1_set2, const RuntimeMethod* method) 
{
	{
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_0 = ___0_set1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = HashSet_1_get_Comparer_m302A4EEC161C86619F472AD3FC4A634D53CB1FA0_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 65));
		HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* L_2 = ___1_set2;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = HashSet_1_get_Comparer_m302A4EEC161C86619F472AD3FC4A634D53CB1FA0_inline(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 65));
		NullCheck((RuntimeObject*)L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, (RuntimeObject*)L_1, (RuntimeObject*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_mDF00F338B7A9F7395CE0D5E0C806C4ABAA05609E_gshared (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_item, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->____comparer;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_2 = ___0_item;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1, L_2);
		return ((int32_t)(L_3&((int32_t)2147483647LL)));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m5E12B490550D90B0686D55F8F4E7B0506BD07120_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_0;
		L_0 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m938F8F1E5CECD06A2575952EC6D253BF0053EC3D_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_1;
		L_1 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		___0_comparer = (RuntimeObject*)L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->____comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_2);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____version = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mAFD9C455FC1D54D3BBD67275A15A02AD4193A4DE_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_1;
		L_1 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mDEE8470968EF687DF9B40AE07DE41E0B09652532_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_collection;
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_1;
		L_1 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m4523730BBAA53ADE100ED764690FEC1639243C75_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B8_0 = 0;
	{
		RuntimeObject* L_0 = ___1_comparer;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RuntimeObject* L_1 = ___0_collection;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_collection;
		V_0 = ((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_5 = V_0;
		bool L_6;
		L_6 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_7 = V_0;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}

IL_0030:
	{
		RuntimeObject* L_8 = ___0_collection;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_10);
		G_B8_0 = L_11;
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 0;
	}

IL_0043:
	{
		V_2 = G_B8_0;
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		RuntimeObject* L_14 = ___0_collection;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_15 = __this->____count;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_16 = __this->____slots;
		NullCheck(L_16);
		int32_t L_17 = __this->____count;
		if ((((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_16)->max_length))/L_17))) <= ((int32_t)3)))
		{
			goto IL_0074;
		}
	}
	{
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
	}

IL_0074:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mA1015BCA85A81FCEC34284D87AAE4E1AB7526FDD_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		__this->____siInfo = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_mFBAD19B5E7335AF392786729D62E2D9B04E0DDF4_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_32 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_0 = ___0_source;
		NullCheck(L_0);
		int32_t L_1 = L_0->____count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_3 = ___0_source;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->____buckets;
		NullCheck(L_4);
		V_1 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		int32_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(((int32_t)il2cpp_codegen_add(L_5, 1)), NULL);
		int32_t L_7 = V_1;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_8 = ___0_source;
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->____buckets;
		NullCheck((RuntimeArray*)L_9);
		RuntimeObject* L_10;
		L_10 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_9, NULL);
		__this->____buckets = ((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_10, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_10, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var)));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_11 = ___0_source;
		NullCheck(L_11);
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_12 = L_11->____slots;
		NullCheck((RuntimeArray*)L_12);
		RuntimeObject* L_13;
		L_13 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_12, NULL);
		__this->____slots = ((SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)Castclass((RuntimeObject*)L_13, il2cpp_rgctx_data(method->klass->rgctx_data, 16)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)((SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)Castclass((RuntimeObject*)L_13, il2cpp_rgctx_data(method->klass->rgctx_data, 16))));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_14 = ___0_source;
		NullCheck(L_14);
		int32_t L_15 = L_14->____lastIndex;
		__this->____lastIndex = L_15;
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_16 = ___0_source;
		NullCheck(L_16);
		int32_t L_17 = L_16->____freeList;
		__this->____freeList = L_17;
		goto IL_00c7;
	}

IL_0065:
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_18 = ___0_source;
		NullCheck(L_18);
		int32_t L_19 = L_18->____lastIndex;
		V_2 = L_19;
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_20 = ___0_source;
		NullCheck(L_20);
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_21 = L_20->____slots;
		V_3 = L_21;
		int32_t L_22 = V_0;
		int32_t L_23;
		L_23 = ((  int32_t (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_4 = 0;
		V_5 = 0;
		goto IL_00ba;
	}

IL_0083:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_24 = V_3;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		V_6 = L_26;
		int32_t L_27 = V_6;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_28 = V_4;
		int32_t L_29 = V_6;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_30 = V_3;
		int32_t L_31 = V_5;
		NullCheck(L_30);
		il2cpp_codegen_memcpy(L_32, il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		InvokerActionInvoker3< int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), __this, L_28, L_29, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_32: *(void**)L_32));
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00b4:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00ba:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = V_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_37 = V_4;
		__this->____lastIndex = L_37;
	}

IL_00c7:
	{
		int32_t L_38 = V_0;
		__this->____count = L_38;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mB3665C091D8A36D90CC380C1D4FA37220DC6C40D_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___1_comparer;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0016:
	{
		int32_t L_3 = ___0_capacity;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___0_capacity;
		int32_t L_5;
		L_5 = ((  int32_t (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0022:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_mF6F4FF6F131B5A5671352C1A2E44A08203658B06_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		bool L_1;
		L_1 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_0: *(void**)L_0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_mCD863950F0D273BF34801FDD92CBEC230ECD5A6D_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____lastIndex;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_1 = __this->____slots;
		int32_t L_2 = __this->____lastIndex;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, L_2, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
	}

IL_0044:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m6D40586EE21316C2647D81169AFFF9B4C7719F74_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_16 = L_1;
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0080;
		}
	}
	{
		V_0 = 0;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		int32_t L_2;
		L_2 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_1: *(void**)L_1));
		V_1 = L_2;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_3 = __this->____slots;
		V_2 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		int32_t L_5 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		NullCheck(L_6);
		NullCheck(L_4);
		int32_t L_7 = ((int32_t)(L_5%((int32_t)(((RuntimeArray*)L_6)->max_length))));
		int32_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		goto IL_007c;
	}

IL_002f:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_9 = V_2;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		int32_t L_12 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_13 = __this->____comparer;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		il2cpp_codegen_memcpy(L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		NullCheck(L_13);
		bool L_18;
		L_18 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_16: *(void**)L_16), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_17: *(void**)L_17));
		if (!L_18)
		{
			goto IL_005a;
		}
	}
	{
		return (bool)1;
	}

IL_005a:
	{
		int32_t L_19 = V_0;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_20 = V_2;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_006b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_21 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_006b:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_23 = V_2;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1));
		V_3 = L_25;
	}

IL_007c:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}

IL_0080:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m88DE8E9D3C3D641EB7F4567A05CB23A65AAABB4A_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		int32_t L_1 = ___1_arrayIndex;
		int32_t L_2 = __this->____count;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mE12E434B402CFEB49197444DE1D52A3AE4C7F6EE_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_17 = L_1;
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* V_4 = NULL;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0154;
		}
	}
	{
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		int32_t L_2;
		L_2 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_1: *(void**)L_1));
		V_0 = L_2;
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		V_1 = ((int32_t)(L_3%((int32_t)(((RuntimeArray*)L_4)->max_length))));
		V_2 = (-1);
		V_3 = 0;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_5 = __this->____slots;
		V_4 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_014c;
	}

IL_003b:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_10 = V_4;
		int32_t L_11 = V_5;
		NullCheck(L_10);
		int32_t L_12 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0123;
		}
	}
	{
		RuntimeObject* L_14 = __this->____comparer;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_15 = V_4;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		il2cpp_codegen_memcpy(L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		NullCheck(L_14);
		bool L_19;
		L_19 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_17: *(void**)L_17), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_18: *(void**)L_18));
		if (!L_19)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->____buckets;
		int32_t L_22 = V_1;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_23 = V_4;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1));
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (int32_t)((int32_t)il2cpp_codegen_add(L_25, 1)));
		goto IL_00a7;
	}

IL_008c:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_26 = V_4;
		int32_t L_27 = V_2;
		NullCheck(L_26);
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_28 = V_4;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		int32_t L_30 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1), L_30);
	}

IL_00a7:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_31 = V_4;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0), (-1));
		bool L_33;
		L_33 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_33)
		{
			goto IL_00d1;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_34 = V_4;
		int32_t L_35 = V_5;
		NullCheck(L_34);
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2)))), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	}

IL_00d1:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_36 = V_4;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		int32_t L_38 = __this->____freeList;
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1), L_38);
		int32_t L_39 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
		int32_t L_40 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_40, 1));
		int32_t L_41 = __this->____count;
		if (L_41)
		{
			goto IL_0119;
		}
	}
	{
		__this->____lastIndex = 0;
		__this->____freeList = (-1);
		goto IL_0121;
	}

IL_0119:
	{
		int32_t L_42 = V_5;
		__this->____freeList = L_42;
	}

IL_0121:
	{
		return (bool)1;
	}

IL_0123:
	{
		int32_t L_43 = V_3;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_44 = V_4;
		NullCheck(L_44);
		if ((((int32_t)L_43) < ((int32_t)((int32_t)(((RuntimeArray*)L_44)->max_length)))))
		{
			goto IL_0135;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_45 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_45, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_45, method);
	}

IL_0135:
	{
		int32_t L_46 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = V_5;
		V_2 = L_47;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_48 = V_4;
		int32_t L_49 = V_5;
		NullCheck(L_48);
		int32_t L_50 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1));
		V_5 = L_50;
	}

IL_014c:
	{
		int32_t L_51 = V_5;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}

IL_0154:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_mA764DCA3CB14CB2CBDF742A163492FF4DA515B63_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m76BECFED2AFB768A9DE14C29899DD46F16044F4D_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_GetEnumerator_m75DD344FE9A073CA9564DC6A425EC36883FB32A7_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27));
	const Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB L_0 = alloca(SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
	{
		memset(L_0, 0, SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
		Enumerator__ctor_m62B32E8D2F70569824269DDC82F384BDBC8662F5((Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mB077531C4148EC6AF72C7EC429E44A8636D2A8AA_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27));
	const Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB L_0 = alloca(SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
	{
		memset(L_0, 0, SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
		Enumerator__ctor_m62B32E8D2F70569824269DDC82F384BDBC8662F5((Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_IEnumerable_GetEnumerator_m63E181A7F597D9BB07C674DA40F21F4A2B755FB3_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27));
	const Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB L_0 = alloca(SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
	{
		memset(L_0, 0, SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
		Enumerator__ctor_m62B32E8D2F70569824269DDC82F384BDBC8662F5((Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_GetObjectData_m2D69A3859D85C85A103B08728E096D87DC9F5715_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		int32_t L_3 = __this->____version;
		NullCheck(L_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_2, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeObject* L_5 = __this->____comparer;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 30)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_4, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, (RuntimeObject*)L_5, L_7, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		if (!L_9)
		{
			G_B4_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
			G_B4_1 = L_8;
			goto IL_0052;
		}
		G_B3_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
		G_B3_1 = L_8;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		NullCheck(L_10);
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_10)->max_length));
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0053;
	}

IL_0052:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0053:
	{
		NullCheck(G_B5_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B5_2, G_B5_1, G_B5_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		if (!L_11)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_12 = __this->____count;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 31), (uint32_t)L_12);
		V_0 = L_13;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = V_0;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_15 = ___0_info;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		NullCheck(L_15);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_15, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, (RuntimeObject*)L_16, L_18, NULL);
	}

IL_0089:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_OnDeserialization_m05AAB1A1992F82537C1125645B4D0D82676561FA_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_0 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	int32_t V_2 = 0;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = __this->____siInfo;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = __this->____siInfo;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_1, _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865, NULL);
		V_0 = L_2;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		NullCheck(L_3);
		RuntimeObject* L_6;
		L_6 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_3, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4))));
		__this->____freeList = (-1);
		int32_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->____buckets = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_9);
		int32_t L_10 = V_0;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_11 = (SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)(SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_10);
		__this->____slots = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_11);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_12 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		NullCheck(L_12);
		RuntimeObject* L_15;
		L_15 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_12, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, L_14, NULL);
		V_1 = ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)Castclass((RuntimeObject*)L_15, il2cpp_rgctx_data(method->klass->rgctx_data, 24)));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = V_1;
		if (L_16)
		{
			goto IL_008f;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_17 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_008f:
	{
		V_2 = 0;
		goto IL_00a5;
	}

IL_0093:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		il2cpp_codegen_memcpy(L_21, (L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		bool L_22;
		L_22 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_21: *(void**)L_21));
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00a5:
	{
		int32_t L_24 = V_2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_25 = V_1;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0093;
		}
	}
	{
		goto IL_00b4;
	}

IL_00ad:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00b4:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_26 = __this->____siInfo;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_26, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		__this->____version = L_27;
		__this->____siInfo = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m73E14DB94D21272EEE1E28E4D74704B0095D8064_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		bool L_1;
		L_1 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_0: *(void**)L_0));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_TryGetValue_m50D94B9F21F6B39636380E6ECF5CA61E895BEB74_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Il2CppFullySharedGenericAny ___0_equalValue, Il2CppFullySharedGenericAny* ___1_actualValue, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_7 = L_1;
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_equalValue : &___0_equalValue), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		int32_t L_2;
		L_2 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)), il2cpp_rgctx_method(method->klass->rgctx_data, 36), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_1: *(void**)L_1));
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_4 = ___1_actualValue;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_5 = __this->____slots;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_4, L_7, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 19), (void**)(Il2CppFullySharedGenericAny*)L_4, (void*)L_7);
		return (bool)1;
	}

IL_002d:
	{
		Il2CppFullySharedGenericAny* L_8 = ___1_actualValue;
		il2cpp_codegen_initobj(L_8, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_m1C3E9C4A4AE3555B04CD0140644DC4387D7592C6_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	RuntimeObject* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	memset(V_1, 0, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck((RuntimeObject*)L_5);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
				}

IL_0039:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0026_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_6, (Il2CppFullySharedGenericAny*)L_7);
				il2cpp_codegen_memcpy(V_1, L_7, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				il2cpp_codegen_memcpy(L_8, V_1, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				bool L_9;
				L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_8: *(void**)L_8));
			}

IL_0026_1:
			{
				RuntimeObject* L_10 = V_0;
				NullCheck((RuntimeObject*)L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
				if (L_11)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_003a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWith_m2DFB51A15E178713AE3ABB12712C98533143593D_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this))))
		{
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_6);
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		return;
	}

IL_0035:
	{
		RuntimeObject* L_8 = ___0_other;
		V_1 = ((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)IsInstClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_10 = V_1;
		bool L_11;
		L_11 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_11)
		{
			goto IL_0050;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_12 = V_1;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}

IL_0050:
	{
		RuntimeObject* L_13 = ___0_other;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)))(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_ExceptWith_m36DD4EF6FD936E9120140D6BCCA67DA891759D7E_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	RuntimeObject* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	memset(V_1, 0, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this))))
		{
			goto IL_0022;
		}
	}
	{
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		return;
	}

IL_0022:
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				}

IL_004d:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003a_1;
			}

IL_002b_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_8, (Il2CppFullySharedGenericAny*)L_9);
				il2cpp_codegen_memcpy(V_1, L_9, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				il2cpp_codegen_memcpy(L_10, V_1, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				bool L_11;
				L_11 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)), il2cpp_rgctx_method(method->klass->rgctx_data, 43), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_10: *(void**)L_10));
			}

IL_003a_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck((RuntimeObject*)L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
				if (L_13)
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_004e;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWith_mCA7D558C2AE735D36A2FCB8EF798AD03C5352082_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_3 = ___0_other;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this))))
		{
			goto IL_0029;
		}
	}
	{
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		return;
	}

IL_0029:
	{
		RuntimeObject* L_5 = ___0_other;
		V_0 = ((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)IsInstClass((RuntimeObject*)L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_6 = V_0;
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_7 = V_0;
		bool L_8;
		L_8 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_9 = V_0;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 44)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}

IL_0044:
	{
		RuntimeObject* L_10 = ___0_other;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOf_mE61DEFCE1DB528373434DB1E0AC232016D93C34D_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* V_0 = NULL;
	ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)1;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)IsInstClass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_6 = V_0;
		bool L_7;
		L_7 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_8 = __this->____count;
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = ((  int32_t (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		if ((((int32_t)L_8) <= ((int32_t)L_10)))
		{
			goto IL_0041;
		}
	}
	{
		return (bool)0;
	}

IL_0041:
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_11 = V_0;
		bool L_12;
		L_12 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return L_12;
	}

IL_0049:
	{
		RuntimeObject* L_13 = ___0_other;
		ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 L_14;
		L_14 = ((  ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(__this, L_13, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		V_1 = L_14;
		ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 L_15 = V_1;
		int32_t L_16 = L_15.___uniqueCount;
		int32_t L_17 = __this->____count;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_006d;
		}
	}
	{
		ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 L_18 = V_1;
		int32_t L_19 = L_18.___unfoundCount;
		return (bool)((((int32_t)((((int32_t)L_19) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_006d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsProperSubsetOf_m9D9C7E3C85E93DD072CA3337BAE50942BC7B34C7_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 V_1;
	memset((&V_1), 0, sizeof(V_1));
	HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0065;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)0;
	}

IL_0028:
	{
		int32_t L_7 = __this->____count;
		if (L_7)
		{
			goto IL_003a;
		}
	}
	{
		RuntimeObject* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_8);
		return (bool)((((int32_t)L_9) > ((int32_t)0))? 1 : 0);
	}

IL_003a:
	{
		RuntimeObject* L_10 = ___0_other;
		V_2 = ((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)IsInstClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_12 = V_2;
		bool L_13;
		L_13 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_13)
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_14 = __this->____count;
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = ((  int32_t (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_005d;
		}
	}
	{
		return (bool)0;
	}

IL_005d:
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_17 = V_2;
		bool L_18;
		L_18 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(__this, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return L_18;
	}

IL_0065:
	{
		RuntimeObject* L_19 = ___0_other;
		ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 L_20;
		L_20 = ((  ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(__this, L_19, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		V_1 = L_20;
		ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 L_21 = V_1;
		int32_t L_22 = L_21.___uniqueCount;
		int32_t L_23 = __this->____count;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_0086;
		}
	}
	{
		ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 L_24 = V_1;
		int32_t L_25 = L_24.___unfoundCount;
		return (bool)((((int32_t)L_25) > ((int32_t)0))? 1 : 0);
	}

IL_0086:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSupersetOf_m0FBBADEC459533F60E5093A26C91FDB9510B783A_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		RuntimeObject* L_7 = ___0_other;
		V_1 = ((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)IsInstClass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_8 = V_1;
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_9 = V_1;
		bool L_10;
		L_10 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = ((  int32_t (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		int32_t L_13 = __this->____count;
		if ((((int32_t)L_12) <= ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		return (bool)0;
	}

IL_004b:
	{
		RuntimeObject* L_14 = ___0_other;
		bool L_15;
		L_15 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 50)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsProperSupersetOf_m69AD22254EF51FB475202B4710FE0DBA6F0929C2_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 V_1;
	memset((&V_1), 0, sizeof(V_1));
	HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)0;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_5 = V_0;
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		RuntimeObject* L_8 = ___0_other;
		V_2 = ((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)IsInstClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_9 = V_2;
		if (!L_9)
		{
			goto IL_005d;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_10 = V_2;
		bool L_11;
		L_11 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = ((  int32_t (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0055;
		}
	}
	{
		return (bool)0;
	}

IL_0055:
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_15 = V_2;
		bool L_16;
		L_16 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 50)))(__this, (RuntimeObject*)L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		return L_16;
	}

IL_005d:
	{
		RuntimeObject* L_17 = ___0_other;
		ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 L_18;
		L_18 = ((  ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(__this, L_17, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		V_1 = L_18;
		ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 L_19 = V_1;
		int32_t L_20 = L_19.___uniqueCount;
		int32_t L_21 = __this->____count;
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_007e;
		}
	}
	{
		ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 L_22 = V_1;
		int32_t L_23 = L_22.___unfoundCount;
		return (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_007e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Overlaps_mACE07913C77D92D54A542F3BDBE27FDB5343CE99_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	RuntimeObject* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	memset(V_1, 0, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004e;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				}

IL_004e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003b_1;
			}

IL_0027_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_8, (Il2CppFullySharedGenericAny*)L_9);
				il2cpp_codegen_memcpy(V_1, L_9, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				il2cpp_codegen_memcpy(L_10, V_1, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				bool L_11;
				L_11 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)), il2cpp_rgctx_method(method->klass->rgctx_data, 51), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_10: *(void**)L_10));
				if (!L_11)
				{
					goto IL_003b_1;
				}
			}
			{
				V_2 = (bool)1;
				goto IL_0051;
			}

IL_003b_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck((RuntimeObject*)L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
				if (L_13)
				{
					goto IL_0027_1;
				}
			}
			{
				goto IL_004f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		return (bool)0;
	}

IL_0051:
	{
		bool L_14 = V_2;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_SetEquals_mEE1A697B324249DAF55E5030E26E7FF1606A2E26_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_4 = V_0;
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_5 = V_0;
		bool L_6;
		L_6 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_7 = __this->____count;
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = ((  int32_t (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		if ((((int32_t)L_7) == ((int32_t)L_9)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0037:
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_10 = V_0;
		bool L_11;
		L_11 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 50)))(__this, (RuntimeObject*)L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		return L_11;
	}

IL_003f:
	{
		RuntimeObject* L_12 = ___0_other;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_13 = V_1;
		if (!L_13)
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_14 = __this->____count;
		if (L_14)
		{
			goto IL_005c;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_15);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		return (bool)0;
	}

IL_005c:
	{
		RuntimeObject* L_17 = ___0_other;
		ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 L_18;
		L_18 = ((  ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(__this, L_17, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		V_2 = L_18;
		ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 L_19 = V_2;
		int32_t L_20 = L_19.___uniqueCount;
		int32_t L_21 = __this->____count;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_007d;
		}
	}
	{
		ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 L_22 = V_2;
		int32_t L_23 = L_22.___unfoundCount;
		return (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_007d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m3B04E1071B17DF96CD5B72299EE55F25E75EBD50_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		int32_t L_1 = __this->____count;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_0, 0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m3A8192100B5A0772B9962D3F1AA5CF3760ED113F_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0028:
	{
		int32_t L_7 = ___2_count;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = ___2_count;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_9);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0042:
	{
		int32_t L_12 = ___1_arrayIndex;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = ___0_array;
		NullCheck(L_13);
		if ((((int32_t)L_12) > ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_14 = ___2_count;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = ___0_array;
		NullCheck(L_15);
		int32_t L_16 = ___1_arrayIndex;
		if ((((int32_t)L_14) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)))))
		{
			goto IL_005b;
		}
	}

IL_0050:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_17 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_005b:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0097;
	}

IL_0061:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_18 = __this->____slots;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = ___0_array;
		int32_t L_22 = ___1_arrayIndex;
		int32_t L_23 = V_0;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_24 = __this->____slots;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		il2cpp_codegen_memcpy(L_26, il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		NullCheck(L_21);
		il2cpp_codegen_memcpy((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, L_23)))), L_26, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 19), (void**)(L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, L_23)))), (void*)L_26);
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0093:
	{
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0097:
	{
		int32_t L_29 = V_1;
		int32_t L_30 = __this->____lastIndex;
		if ((((int32_t)L_29) >= ((int32_t)L_30)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_31 = V_0;
		int32_t L_32 = ___2_count;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0061;
		}
	}

IL_00a4:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_RemoveWhere_m779C784616153E67C9EB38CEF6875A7DCC2492AA_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___0_match, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_11 = L_7;
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	memset(V_2, 0, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0054;
	}

IL_0014:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_2 = __this->____slots;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_5 = __this->____slots;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		il2cpp_codegen_memcpy(V_2, L_7, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_8 = ___0_match;
		il2cpp_codegen_memcpy(L_9, V_2, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		NullCheck(L_8);
		bool L_10;
		L_10 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 53)), il2cpp_rgctx_method(method->klass->rgctx_data, 53), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_9: *(void**)L_9));
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		il2cpp_codegen_memcpy(L_11, V_2, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		bool L_12;
		L_12 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)), il2cpp_rgctx_method(method->klass->rgctx_data, 43), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_11: *(void**)L_11));
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0050:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____lastIndex;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_m3025B6666A254AEDE933EDE04AD66D456C52AD00_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____comparer;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_EnsureCapacity_m982F29942CDAFCCD11F30A8C909788138E5694A3_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000f:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_3 = __this->____slots;
		NullCheck(L_3);
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
		goto IL_0022;
	}

IL_0021:
	{
		G_B5_0 = 0;
	}

IL_0022:
	{
		V_0 = G_B5_0;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_capacity;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		if (L_7)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_8 = ___0_capacity;
		int32_t L_9;
		L_9 = ((  int32_t (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return L_9;
	}

IL_0039:
	{
		int32_t L_10 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_10, NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 54)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		int32_t L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_m61244B342437754775955075EDF4F12C60341CE0_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_Slot_t997B45C664ACE85A6BC6136C9A4A25A71BA8FFD5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18));
	const Slot_tEC146EEEF7022C6542EBF082D658446682962BFD L_16 = alloca(SizeOf_Slot_t997B45C664ACE85A6BC6136C9A4A25A71BA8FFD5);
	int32_t V_0 = 0;
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->____slots = (SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)(SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)NULL);
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}

IL_0025:
	{
		int32_t L_2 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_5 = (SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)(SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_4);
		V_1 = L_5;
		int32_t L_6 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_2 = L_7;
		V_3 = 0;
		V_4 = 0;
		goto IL_00a2;
	}

IL_0046:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_8 = __this->____slots;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_11 = V_1;
		int32_t L_12 = V_3;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_13 = __this->____slots;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		il2cpp_codegen_memcpy(L_16, (L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)), SizeOf_Slot_t997B45C664ACE85A6BC6136C9A4A25A71BA8FFD5);
		NullCheck(L_11);
		il2cpp_codegen_memcpy((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)), L_16, SizeOf_Slot_t997B45C664ACE85A6BC6136C9A4A25A71BA8FFD5);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 18), (void**)(L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)), (void*)L_16);
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_17 = V_1;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		int32_t L_20 = V_0;
		V_5 = ((int32_t)(L_19%L_20));
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_21 = V_1;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_2;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1), ((int32_t)il2cpp_codegen_subtract(L_26, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = V_3;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)((int32_t)il2cpp_codegen_add(L_29, 1)));
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_009c:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00a2:
	{
		int32_t L_32 = V_4;
		int32_t L_33 = __this->____lastIndex;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_34 = V_3;
		__this->____lastIndex = L_34;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_35 = V_1;
		__this->____slots = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_35);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_2;
		__this->____buckets = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_36);
		__this->____freeList = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_CreateSetComparer_m6E65D0541C3F657B961D1414D3D49113ACC3DF61_gshared (const RuntimeMethod* method) 
{
	{
		HashSetEqualityComparer_1_t4E49A00622F2BAD555A050ACB77609A289C9CE9B* L_0 = (HashSetEqualityComparer_1_t4E49A00622F2BAD555A050ACB77609A289C9CE9B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 55));
		((  void (*) (HashSetEqualityComparer_1_t4E49A00622F2BAD555A050ACB77609A289C9CE9B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 56)))(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 56));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_mB8584D1E01509492EE6C3DC75184140DBE2F053B_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_5 = (SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)(SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_4);
		__this->____slots = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_mC3B321603207D03BD776F91FF7741EFF27621BD2_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____count;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91930CCAB5CB8F6F327407F9A14CF42F57A0F27B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = V_0;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 54)))(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_mA861522E8D0DB9628EEABF16F04BD49C6C0DC774_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___0_newSize;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_1 = (SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)(SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_0);
		V_0 = L_1;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_3 = __this->____slots;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_4 = V_0;
		int32_t L_5 = __this->____lastIndex;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0023:
	{
		int32_t L_6 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0058;
	}

IL_002e:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		int32_t L_11 = ___0_newSize;
		V_3 = ((int32_t)(L_10%L_11));
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1), ((int32_t)il2cpp_codegen_subtract(L_17, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_3;
		int32_t L_20 = V_2;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1)));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0058:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = __this->____lastIndex;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002e;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_24 = V_0;
		__this->____slots = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_1;
		__this->____buckets = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_25);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_m58D69C8710CAB51D00282379158F183A79344DFB_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_18 = L_2;
	const Il2CppFullySharedGenericAny L_46 = L_2;
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1;
		L_1 = ((  int32_t (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0010:
	{
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_value : &___0_value), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		int32_t L_3;
		L_3 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_2: *(void**)L_2));
		V_0 = L_3;
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		V_1 = ((int32_t)(L_4%((int32_t)(((RuntimeArray*)L_5)->max_length))));
		V_2 = 0;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_6 = __this->____slots;
		V_3 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		goto IL_008b;
	}

IL_003a:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_11 = V_3;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		int32_t L_13 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_15 = __this->____comparer;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_16 = V_3;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		il2cpp_codegen_memcpy(L_19, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_value : &___0_value), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		NullCheck(L_15);
		bool L_20;
		L_20 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_18: *(void**)L_18), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_19: *(void**)L_19));
		if (!L_20)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		int32_t L_21 = V_2;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_22 = V_3;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0078;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_0078:
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_25 = V_3;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1));
		V_5 = L_27;
	}

IL_008b:
	{
		int32_t L_28 = V_5;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_29 = __this->____freeList;
		if ((((int32_t)L_29) < ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_30 = __this->____freeList;
		V_4 = L_30;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_31 = V_3;
		int32_t L_32 = V_4;
		NullCheck(L_31);
		int32_t L_33 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1));
		__this->____freeList = L_33;
		goto IL_00ef;
	}

IL_00b6:
	{
		int32_t L_34 = __this->____lastIndex;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_35 = V_3;
		NullCheck(L_35);
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))))
		{
			goto IL_00d9;
		}
	}
	{
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 58)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_36 = __this->____slots;
		V_3 = L_36;
		int32_t L_37 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->____buckets;
		NullCheck(L_38);
		V_1 = ((int32_t)(L_37%((int32_t)(((RuntimeArray*)L_38)->max_length))));
	}

IL_00d9:
	{
		int32_t L_39 = __this->____lastIndex;
		V_4 = L_39;
		int32_t L_40 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ef:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_41 = V_3;
		int32_t L_42 = V_4;
		NullCheck(L_41);
		int32_t L_43 = V_0;
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0), L_43);
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_44 = V_3;
		int32_t L_45 = V_4;
		NullCheck(L_44);
		il2cpp_codegen_memcpy(L_46, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_value : &___0_value), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		il2cpp_codegen_write_instance_field_data(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2), L_46, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_47 = V_3;
		int32_t L_48 = V_4;
		NullCheck(L_47);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = __this->____buckets;
		int32_t L_50 = V_1;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1), ((int32_t)il2cpp_codegen_subtract(L_52, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		int32_t L_55 = V_4;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(L_54), (int32_t)((int32_t)il2cpp_codegen_add(L_55, 1)));
		int32_t L_56 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_56, 1));
		int32_t L_57 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_57, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m038B507326561F3D8BD44AD54E3FFAC497ED5C05_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, int32_t ___0_index, int32_t ___1_hashCode, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		NullCheck(L_1);
		V_0 = ((int32_t)(L_0%((int32_t)(((RuntimeArray*)L_1)->max_length))));
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_2 = __this->____slots;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		int32_t L_4 = ___1_hashCode;
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0), L_4);
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_5 = __this->____slots;
		int32_t L_6 = ___0_index;
		NullCheck(L_5);
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___2_value : &___2_value), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		il2cpp_codegen_write_instance_field_data(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2), L_7, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_8 = __this->____slots;
		int32_t L_9 = ___0_index;
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1), ((int32_t)il2cpp_codegen_subtract(L_13, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____buckets;
		int32_t L_15 = V_0;
		int32_t L_16 = ___0_index;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (int32_t)((int32_t)il2cpp_codegen_add(L_16, 1)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_ContainsAllElements_mFB7B29A9FDD11C8B7C465C5D9A77008A14776F8F_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	RuntimeObject* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	memset(V_1, 0, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0030;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_0030:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_001d_1;
			}

IL_0009_1:
			{
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_4, (Il2CppFullySharedGenericAny*)L_5);
				il2cpp_codegen_memcpy(V_1, L_5, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				il2cpp_codegen_memcpy(L_6, V_1, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				bool L_7;
				L_7 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)), il2cpp_rgctx_method(method->klass->rgctx_data, 51), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_6: *(void**)L_6));
				if (L_7)
				{
					goto IL_001d_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0033;
			}

IL_001d_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck((RuntimeObject*)L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				if (L_9)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0031;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		return (bool)1;
	}

IL_0033:
	{
		bool L_10 = V_2;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOfHashSetWithSameEC_mD3C0C7C7B1ACC01867AEDBE3E68CB155D11485F9_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___0_other, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27));
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	void* L_1 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 27)));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB L_0 = alloca(SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
	Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB V_0 = alloca(SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
	memset(V_0, 0, SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	memset(V_1, 0, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	bool V_2 = false;
	{
		InvokerActionInvoker1< Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 59)), il2cpp_rgctx_method(method->klass->rgctx_data, 59), __this, (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)L_0);
		il2cpp_codegen_memcpy(V_0, L_0, SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{
				ConstrainedActionInvoker0::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 27), il2cpp_rgctx_method(method->klass->rgctx_data, 63), L_1, (void*)(Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)V_0);
				return;
			}
		});
		try
		{
			{
				goto IL_001e_1;
			}

IL_0009_1:
			{
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 60)), il2cpp_rgctx_method(method->klass->rgctx_data, 60), (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)V_0, (Il2CppFullySharedGenericAny*)L_2);
				il2cpp_codegen_memcpy(V_1, L_2, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_3 = ___0_other;
				il2cpp_codegen_memcpy(L_4, V_1, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				NullCheck(L_3);
				bool L_5;
				L_5 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)), il2cpp_rgctx_method(method->klass->rgctx_data, 51), L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_4: *(void**)L_4));
				if (L_5)
				{
					goto IL_001e_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0039;
			}

IL_001e_1:
			{
				bool L_6;
				L_6 = ((  bool (*) (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 62)))((Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)V_0, il2cpp_rgctx_method(method->klass->rgctx_data, 62));
				if (L_6)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0037;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		return (bool)1;
	}

IL_0039:
	{
		bool L_7 = V_2;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithHashSetWithSameEC_mD2B4043947170AB6CF12C8F738DFF5BFDC77FC97_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___0_other, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_9 = L_5;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	memset(V_1, 0, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	{
		V_0 = 0;
		goto IL_003f;
	}

IL_0004:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_0 = __this->____slots;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_3 = __this->____slots;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		il2cpp_codegen_memcpy(V_1, L_5, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_6 = ___0_other;
		il2cpp_codegen_memcpy(L_7, V_1, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		NullCheck(L_6);
		bool L_8;
		L_8 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)), il2cpp_rgctx_method(method->klass->rgctx_data, 51), L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_7: *(void**)L_7));
		if (L_8)
		{
			goto IL_003b;
		}
	}
	{
		il2cpp_codegen_memcpy(L_9, V_1, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		bool L_10;
		L_10 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)), il2cpp_rgctx_method(method->klass->rgctx_data, 43), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_9: *(void**)L_9));
	}

IL_003b:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_003f:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____lastIndex;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithEnumerable_m93E0FAE7B792664A04D177546C9EEEB0D83348ED_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_34 = L_18;
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	memset(V_4, 0, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = __this->____lastIndex;
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_1, NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)100))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = V_1;
		if ((uintptr_t)((uintptr_t)L_4) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_5 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_4), 4));
		int8_t* L_6 = (int8_t*) (L_5 ? alloca(L_5) : NULL);
		memset(L_6, 0, L_5);
		int32_t L_7 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_8 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_8, (int32_t*)(L_6), L_7, NULL);
		V_2 = L_8;
		goto IL_002f;
	}

IL_0022:
	{
		int32_t L_9 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_9);
		int32_t L_11 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_12 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_12, L_10, L_11, NULL);
		V_2 = L_12;
	}

IL_002f:
	{
		RuntimeObject* L_13 = ___0_other;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_13);
		V_3 = L_14;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0061:
			{
				{
					RuntimeObject* L_15 = V_3;
					if (!L_15)
					{
						goto IL_006a;
					}
				}
				{
					RuntimeObject* L_16 = V_3;
					NullCheck((RuntimeObject*)L_16);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
				}

IL_006a:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0057_1;
			}

IL_0038_1:
			{
				RuntimeObject* L_17 = V_3;
				NullCheck(L_17);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_17, (Il2CppFullySharedGenericAny*)L_18);
				il2cpp_codegen_memcpy(V_4, L_18, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				il2cpp_codegen_memcpy(L_19, V_4, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				int32_t L_20;
				L_20 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)), il2cpp_rgctx_method(method->klass->rgctx_data, 36), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_19: *(void**)L_19));
				V_5 = L_20;
				int32_t L_21 = V_5;
				if ((((int32_t)L_21) < ((int32_t)0)))
				{
					goto IL_0057_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_22 = V_2;
				int32_t L_23 = V_5;
				NullCheck(L_22);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_22, L_23, NULL);
			}

IL_0057_1:
			{
				RuntimeObject* L_24 = V_3;
				NullCheck((RuntimeObject*)L_24);
				bool L_25;
				L_25 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_24);
				if (L_25)
				{
					goto IL_0038_1;
				}
			}
			{
				goto IL_006b;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006b:
	{
		V_6 = 0;
		goto IL_00ae;
	}

IL_0070:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_26 = __this->____slots;
		int32_t L_27 = V_6;
		NullCheck(L_26);
		int32_t L_28 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		if ((((int32_t)L_28) < ((int32_t)0)))
		{
			goto IL_00a8;
		}
	}
	{
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_29 = V_2;
		int32_t L_30 = V_6;
		NullCheck(L_29);
		bool L_31;
		L_31 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00a8;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_32 = __this->____slots;
		int32_t L_33 = V_6;
		NullCheck(L_32);
		il2cpp_codegen_memcpy(L_34, il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		bool L_35;
		L_35 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)), il2cpp_rgctx_method(method->klass->rgctx_data, 43), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_34: *(void**)L_34));
	}

IL_00a8:
	{
		int32_t L_36 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00ae:
	{
		int32_t L_37 = V_6;
		int32_t L_38 = V_0;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0070;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalIndexOf_m247DC7E2CE2AE78F3825DD44108362C2CE93F017_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_15 = L_0;
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_0: *(void**)L_0));
		V_1 = L_1;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_2 = __this->____slots;
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		int32_t L_4 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)(L_4%((int32_t)(((RuntimeArray*)L_5)->max_length))));
		int32_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		goto IL_0074;
	}

IL_0027:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_8 = V_2;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		int32_t L_11 = V_1;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_12 = __this->____comparer;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_13 = V_2;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		il2cpp_codegen_memcpy(L_15, il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		il2cpp_codegen_memcpy(L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		NullCheck(L_12);
		bool L_17;
		L_17 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_15: *(void**)L_15), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_16: *(void**)L_16));
		if (!L_17)
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_18 = V_3;
		return L_18;
	}

IL_0052:
	{
		int32_t L_19 = V_0;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_20 = V_2;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0063;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_21 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_0063:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_23 = V_2;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1));
		V_3 = L_25;
	}

IL_0074:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithUniqueHashSet_mF0364E4CA386A32E64A3486495014CEE7D8160E2_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___0_other, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27));
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	void* L_2 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 27)));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_6 = L_3;
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB L_1 = alloca(SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
	Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB V_0 = alloca(SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
	memset(V_0, 0, SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	memset(V_1, 0, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_0 = ___0_other;
		NullCheck(L_0);
		InvokerActionInvoker1< Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 59)), il2cpp_rgctx_method(method->klass->rgctx_data, 59), L_0, (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{
				ConstrainedActionInvoker0::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 27), il2cpp_rgctx_method(method->klass->rgctx_data, 63), L_2, (void*)(Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)V_0);
				return;
			}
		});
		try
		{
			{
				goto IL_0022_1;
			}

IL_0009_1:
			{
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 60)), il2cpp_rgctx_method(method->klass->rgctx_data, 60), (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)V_0, (Il2CppFullySharedGenericAny*)L_3);
				il2cpp_codegen_memcpy(V_1, L_3, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				il2cpp_codegen_memcpy(L_4, V_1, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				bool L_5;
				L_5 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)), il2cpp_rgctx_method(method->klass->rgctx_data, 43), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_4: *(void**)L_4));
				if (L_5)
				{
					goto IL_0022_1;
				}
			}
			{
				il2cpp_codegen_memcpy(L_6, V_1, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				bool L_7;
				L_7 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_6: *(void**)L_6));
			}

IL_0022_1:
			{
				bool L_8;
				L_8 = ((  bool (*) (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 62)))((Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)V_0, il2cpp_rgctx_method(method->klass->rgctx_data, 62));
				if (L_8)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_003b;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithEnumerable_mD0496C8210742F63B2B8397ADCB7457944668841_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_46 = L_27;
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	memset(V_5, 0, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		int32_t L_0 = __this->____lastIndex;
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_1, NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)50))))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_4 = V_1;
		if ((uintptr_t)((uintptr_t)L_4) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_5 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_4), 4));
		int8_t* L_6 = (int8_t*) (L_5 ? alloca(L_5) : NULL);
		memset(L_6, 0, L_5);
		int32_t L_7 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_8 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_8, (int32_t*)(L_6), L_7, NULL);
		V_2 = L_8;
		int32_t L_9 = V_1;
		if ((uintptr_t)((uintptr_t)L_9) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_10 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_9), 4));
		int8_t* L_11 = (int8_t*) (L_10 ? alloca(L_10) : NULL);
		memset(L_11, 0, L_10);
		int32_t L_12 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_13 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_13, (int32_t*)(L_11), L_12, NULL);
		V_3 = L_13;
		goto IL_0049;
	}

IL_002f:
	{
		int32_t L_14 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_14);
		int32_t L_16 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_17 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_17, L_15, L_16, NULL);
		V_2 = L_17;
		int32_t L_18 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_18);
		int32_t L_20 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_21 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_21, L_19, L_20, NULL);
		V_3 = L_21;
	}

IL_0049:
	{
		RuntimeObject* L_22 = ___0_other;
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_22);
		V_4 = L_23;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0097:
			{
				{
					RuntimeObject* L_24 = V_4;
					if (!L_24)
					{
						goto IL_00a2;
					}
				}
				{
					RuntimeObject* L_25 = V_4;
					NullCheck((RuntimeObject*)L_25);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_25);
				}

IL_00a2:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_008c_1;
			}

IL_0053_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_26, (Il2CppFullySharedGenericAny*)L_27);
				il2cpp_codegen_memcpy(V_5, L_27, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				V_6 = 0;
				il2cpp_codegen_memcpy(L_28, V_5, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				bool L_29;
				L_29 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, int32_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 64)), il2cpp_rgctx_method(method->klass->rgctx_data, 64), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_28: *(void**)L_28), (&V_6));
				if (!L_29)
				{
					goto IL_0075_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_30 = V_3;
				int32_t L_31 = V_6;
				NullCheck(L_30);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_30, L_31, NULL);
				goto IL_008c_1;
			}

IL_0075_1:
			{
				int32_t L_32 = V_6;
				int32_t L_33 = V_0;
				if ((((int32_t)L_32) >= ((int32_t)L_33)))
				{
					goto IL_008c_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_34 = V_3;
				int32_t L_35 = V_6;
				NullCheck(L_34);
				bool L_36;
				L_36 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_34, L_35, NULL);
				if (L_36)
				{
					goto IL_008c_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_37 = V_2;
				int32_t L_38 = V_6;
				NullCheck(L_37);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_37, L_38, NULL);
			}

IL_008c_1:
			{
				RuntimeObject* L_39 = V_4;
				NullCheck((RuntimeObject*)L_39);
				bool L_40;
				L_40 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_39);
				if (L_40)
				{
					goto IL_0053_1;
				}
			}
			{
				goto IL_00a3;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a3:
	{
		V_7 = 0;
		goto IL_00d1;
	}

IL_00a8:
	{
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_41 = V_2;
		int32_t L_42 = V_7;
		NullCheck(L_41);
		bool L_43;
		L_43 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_41, L_42, NULL);
		if (!L_43)
		{
			goto IL_00cb;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_44 = __this->____slots;
		int32_t L_45 = V_7;
		NullCheck(L_44);
		il2cpp_codegen_memcpy(L_46, il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		bool L_47;
		L_47 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)), il2cpp_rgctx_method(method->klass->rgctx_data, 43), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_46: *(void**)L_46));
	}

IL_00cb:
	{
		int32_t L_48 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_00d1:
	{
		int32_t L_49 = V_7;
		int32_t L_50 = V_0;
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			goto IL_00a8;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddOrGetLocation_mB53F0CC8A5811925F87B7DAD06914055BEB6A861_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Il2CppFullySharedGenericAny ___0_value, int32_t* ___1_location, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_16 = L_0;
	const Il2CppFullySharedGenericAny L_46 = L_0;
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_value : &___0_value), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		V_1 = ((int32_t)(L_2%((int32_t)(((RuntimeArray*)L_3)->max_length))));
		V_2 = 0;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_4 = __this->____slots;
		V_3 = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		goto IL_007f;
	}

IL_002a:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_9 = V_3;
		int32_t L_10 = V_5;
		NullCheck(L_9);
		int32_t L_11 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_005b;
		}
	}
	{
		RuntimeObject* L_13 = __this->____comparer;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_14 = V_3;
		int32_t L_15 = V_5;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		il2cpp_codegen_memcpy(L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_value : &___0_value), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		NullCheck(L_13);
		bool L_18;
		L_18 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_16: *(void**)L_16), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_17: *(void**)L_17));
		if (!L_18)
		{
			goto IL_005b;
		}
	}
	{
		int32_t* L_19 = ___1_location;
		int32_t L_20 = V_5;
		*((int32_t*)L_19) = (int32_t)L_20;
		return (bool)0;
	}

IL_005b:
	{
		int32_t L_21 = V_2;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_22 = V_3;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_006c;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_006c:
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_25 = V_3;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1));
		V_5 = L_27;
	}

IL_007f:
	{
		int32_t L_28 = V_5;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_29 = __this->____freeList;
		if ((((int32_t)L_29) < ((int32_t)0)))
		{
			goto IL_00aa;
		}
	}
	{
		int32_t L_30 = __this->____freeList;
		V_4 = L_30;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_31 = V_3;
		int32_t L_32 = V_4;
		NullCheck(L_31);
		int32_t L_33 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1));
		__this->____freeList = L_33;
		goto IL_00e3;
	}

IL_00aa:
	{
		int32_t L_34 = __this->____lastIndex;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_35 = V_3;
		NullCheck(L_35);
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))))
		{
			goto IL_00cd;
		}
	}
	{
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 58)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_36 = __this->____slots;
		V_3 = L_36;
		int32_t L_37 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->____buckets;
		NullCheck(L_38);
		V_1 = ((int32_t)(L_37%((int32_t)(((RuntimeArray*)L_38)->max_length))));
	}

IL_00cd:
	{
		int32_t L_39 = __this->____lastIndex;
		V_4 = L_39;
		int32_t L_40 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00e3:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_41 = V_3;
		int32_t L_42 = V_4;
		NullCheck(L_41);
		int32_t L_43 = V_0;
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0), L_43);
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_44 = V_3;
		int32_t L_45 = V_4;
		NullCheck(L_44);
		il2cpp_codegen_memcpy(L_46, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_value : &___0_value), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		il2cpp_codegen_write_instance_field_data(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2), L_46, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_47 = V_3;
		int32_t L_48 = V_4;
		NullCheck(L_47);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = __this->____buckets;
		int32_t L_50 = V_1;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1), ((int32_t)il2cpp_codegen_subtract(L_52, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		int32_t L_55 = V_4;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(L_54), (int32_t)((int32_t)il2cpp_codegen_add(L_55, 1)));
		int32_t L_56 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_56, 1));
		int32_t L_57 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_57, 1));
		int32_t* L_58 = ___1_location;
		int32_t L_59 = V_4;
		*((int32_t*)L_58) = (int32_t)L_59;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 HashSet_1_CheckUniqueAndUnfoundElements_mE015C3640B788E156F8AE69EB69B867C0EC7F006_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_29 = L_6;
	const Il2CppFullySharedGenericAny L_30 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	Il2CppFullySharedGenericAny V_7 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	memset(V_7, 0, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_8 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_004f;
		}
	}
	{
		V_5 = 0;
		RuntimeObject* L_1 = ___0_other;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_1);
		V_6 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_3 = V_6;
					if (!L_3)
					{
						goto IL_003b;
					}
				}
				{
					RuntimeObject* L_4 = V_6;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_003b:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0025_1;
			}

IL_0015_1:
			{
				RuntimeObject* L_5 = V_6;
				NullCheck(L_5);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_5, (Il2CppFullySharedGenericAny*)L_6);
				int32_t L_7 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_7, 1));
				goto IL_003c;
			}

IL_0025_1:
			{
				RuntimeObject* L_8 = V_6;
				NullCheck((RuntimeObject*)L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				if (L_9)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_003c;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		(&V_0)->___uniqueCount = 0;
		int32_t L_10 = V_5;
		(&V_0)->___unfoundCount = L_10;
		ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 L_11 = V_0;
		return L_11;
	}

IL_004f:
	{
		int32_t L_12 = __this->____lastIndex;
		int32_t L_13;
		L_13 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_12, NULL);
		V_1 = L_13;
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)100))))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_15 = V_1;
		if ((uintptr_t)((uintptr_t)L_15) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_16 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_15), 4));
		int8_t* L_17 = (int8_t*) (L_16 ? alloca(L_16) : NULL);
		memset(L_17, 0, L_16);
		int32_t L_18 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_19 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_19, (int32_t*)(L_17), L_18, NULL);
		V_2 = L_19;
		goto IL_007c;
	}

IL_006f:
	{
		int32_t L_20 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_20);
		int32_t L_22 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_23 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_23, L_21, L_22, NULL);
		V_2 = L_23;
	}

IL_007c:
	{
		V_3 = 0;
		V_4 = 0;
		RuntimeObject* L_24 = ___0_other;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_24);
		V_6 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d1:
			{
				{
					RuntimeObject* L_26 = V_6;
					if (!L_26)
					{
						goto IL_00dc;
					}
				}
				{
					RuntimeObject* L_27 = V_6;
					NullCheck((RuntimeObject*)L_27);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00dc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00c6_1;
			}

IL_008b_1:
			{
				RuntimeObject* L_28 = V_6;
				NullCheck(L_28);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_28, (Il2CppFullySharedGenericAny*)L_29);
				il2cpp_codegen_memcpy(V_7, L_29, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				il2cpp_codegen_memcpy(L_30, V_7, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				int32_t L_31;
				L_31 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)), il2cpp_rgctx_method(method->klass->rgctx_data, 36), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_30: *(void**)L_30));
				V_8 = L_31;
				int32_t L_32 = V_8;
				if ((((int32_t)L_32) < ((int32_t)0)))
				{
					goto IL_00bd_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_33 = V_2;
				int32_t L_34 = V_8;
				NullCheck(L_33);
				bool L_35;
				L_35 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_33, L_34, NULL);
				if (L_35)
				{
					goto IL_00c6_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_36 = V_2;
				int32_t L_37 = V_8;
				NullCheck(L_36);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_36, L_37, NULL);
				int32_t L_38 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
				goto IL_00c6_1;
			}

IL_00bd_1:
			{
				int32_t L_39 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_39, 1));
				bool L_40 = ___1_returnIfUnfound;
				if (!L_40)
				{
					goto IL_00c6_1;
				}
			}
			{
				goto IL_00dd;
			}

IL_00c6_1:
			{
				RuntimeObject* L_41 = V_6;
				NullCheck((RuntimeObject*)L_41);
				bool L_42;
				L_42 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				if (L_42)
				{
					goto IL_008b_1;
				}
			}
			{
				goto IL_00dd;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00dd:
	{
		int32_t L_43 = V_4;
		(&V_0)->___uniqueCount = L_43;
		int32_t L_44 = V_3;
		(&V_0)->___unfoundCount = L_44;
		ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 L_45 = V_0;
		return L_45;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_HashSetEquals_m6B1B90E20BA45E07A5A70C563E7CE894B78CD85C_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___0_set1, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___1_set2, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 27));
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 27)));
	void* L_20 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 27)));
	void* L_24 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 27)));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_21 = L_13;
	const Il2CppFullySharedGenericAny L_25 = L_13;
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_27 = L_15;
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB L_11 = alloca(SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
	const Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB L_19 = L_11;
	const Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB L_23 = L_11;
	Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB V_0 = alloca(SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
	memset(V_0, 0, SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	memset(V_1, 0, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	bool V_2 = false;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	memset(V_3, 0, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	bool V_4 = false;
	Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB V_5 = alloca(SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
	memset(V_5, 0, SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	memset(V_6, 0, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_0 = ___0_set1;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_1 = ___1_set2;
		return (bool)((((RuntimeObject*)(HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}

IL_0008:
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_2 = ___1_set2;
		if (L_2)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_3 = ___0_set1;
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_4 = ___1_set2;
		bool L_5;
		L_5 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)))(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (!L_5)
		{
			goto IL_0062;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_6 = ___0_set1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = ((  int32_t (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 46)))(L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 46));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_8 = ___1_set2;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = ((  int32_t (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 46)))(L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 46));
		if ((((int32_t)L_7) == ((int32_t)L_9)))
		{
			goto IL_0026;
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_10 = ___1_set2;
		NullCheck(L_10);
		InvokerActionInvoker1< Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 59)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 59), L_10, (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)L_11);
		il2cpp_codegen_memcpy(V_0, L_11, SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0052:
			{
				ConstrainedActionInvoker0::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 27), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 63), L_12, (void*)(Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)V_0);
				return;
			}
		});
		try
		{
			{
				goto IL_0047_1;
			}

IL_002f_1:
			{
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 60)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 60), (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)V_0, (Il2CppFullySharedGenericAny*)L_13);
				il2cpp_codegen_memcpy(V_1, L_13, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_14 = ___0_set1;
				il2cpp_codegen_memcpy(L_15, V_1, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				NullCheck(L_14);
				bool L_16;
				L_16 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 51)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 51), L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)) ? L_15: *(void**)L_15));
				if (L_16)
				{
					goto IL_0047_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_00d5;
			}

IL_0047_1:
			{
				bool L_17;
				L_17 = ((  bool (*) (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 62)))((Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)V_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 62));
				if (L_17)
				{
					goto IL_002f_1;
				}
			}
			{
				goto IL_0060;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0060:
	{
		return (bool)1;
	}

IL_0062:
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_18 = ___1_set2;
		NullCheck(L_18);
		InvokerActionInvoker1< Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 59)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 59), L_18, (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)L_19);
		il2cpp_codegen_memcpy(V_0, L_19, SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c5:
			{
				ConstrainedActionInvoker0::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 27), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 63), L_20, (void*)(Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)V_0);
				return;
			}
		});
		try
		{
			{
				goto IL_00ba_1;
			}

IL_006b_1:
			{
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 60)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 60), (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)V_0, (Il2CppFullySharedGenericAny*)L_21);
				il2cpp_codegen_memcpy(V_3, L_21, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				V_4 = (bool)0;
				HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_22 = ___0_set1;
				NullCheck(L_22);
				InvokerActionInvoker1< Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 59)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 59), L_22, (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)L_23);
				il2cpp_codegen_memcpy(V_5, L_23, SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00a4_1:
					{
						ConstrainedActionInvoker0::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 27), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 63), L_24, (void*)(Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)V_5);
						return;
					}
				});
				try
				{
					{
						goto IL_0099_2;
					}

IL_0080_2:
					{
						InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 60)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 60), (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)V_5, (Il2CppFullySharedGenericAny*)L_25);
						il2cpp_codegen_memcpy(V_6, L_25, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
						RuntimeObject* L_26 = ___2_comparer;
						il2cpp_codegen_memcpy(L_27, V_3, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
						il2cpp_codegen_memcpy(L_28, V_6, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
						NullCheck(L_26);
						bool L_29;
						L_29 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_26, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)) ? L_27: *(void**)L_27), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 19)) ? L_28: *(void**)L_28));
						if (!L_29)
						{
							goto IL_0099_2;
						}
					}
					{
						V_4 = (bool)1;
						goto IL_00b2_1;
					}

IL_0099_2:
					{
						bool L_30;
						L_30 = ((  bool (*) (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 62)))((Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)V_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 62));
						if (L_30)
						{
							goto IL_0080_2;
						}
					}
					{
						goto IL_00b2_1;
					}
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00b2_1:
			{
				bool L_31 = V_4;
				if (L_31)
				{
					goto IL_00ba_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_00d5;
			}

IL_00ba_1:
			{
				bool L_32;
				L_32 = ((  bool (*) (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 62)))((Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)V_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 62));
				if (L_32)
				{
					goto IL_006b_1;
				}
			}
			{
				goto IL_00d3;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d3:
	{
		return (bool)1;
	}

IL_00d5:
	{
		bool L_33 = V_2;
		return L_33;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_m2BEC57F75CABAE588E047406FED797DC3F7B8B71_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___0_set1, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___1_set2, const RuntimeMethod* method) 
{
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_0 = ___0_set1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 65)))(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 65));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_2 = ___1_set2;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 65)))(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 65));
		NullCheck((RuntimeObject*)L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, (RuntimeObject*)L_1, (RuntimeObject*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m1A1758DA258D8DE5AA075333D2B6D4DF0B75A4D6_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_3 = L_0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19), L_0);
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
		RuntimeObject* L_2 = __this->____comparer;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_3: *(void**)L_3));
		return ((int32_t)(L_4&((int32_t)2147483647LL)));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m2B0E06297ECEA84A003BD799CE04C421A54F5A8B_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1_t3623A572B0FA54A1BF249FA9AB30236498C32423* L_0;
		L_0 = EqualityComparer_1_get_Default_mE1A8E1F0A77A6C7B6F2EAFF3246AEDF7E22F7E69_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_mB40DC09EF650CC86210818231255FCC960D8C688(__this, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mB40DC09EF650CC86210818231255FCC960D8C688_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_t3623A572B0FA54A1BF249FA9AB30236498C32423* L_1;
		L_1 = EqualityComparer_1_get_Default_mE1A8E1F0A77A6C7B6F2EAFF3246AEDF7E22F7E69_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		___0_comparer = (RuntimeObject*)L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->____comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_2);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____version = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mF4D00AE2369924635FA30E1F70E2E9A27E6EABA0_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		EqualityComparer_1_t3623A572B0FA54A1BF249FA9AB30236498C32423* L_1;
		L_1 = EqualityComparer_1_get_Default_mE1A8E1F0A77A6C7B6F2EAFF3246AEDF7E22F7E69_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_m58C4B2BFFA2343F36BDEB7C407B3BC086419298B(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m0AA359A5E7D0FF4640EED0FFB455A3701B74FC28_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_collection;
		EqualityComparer_1_t3623A572B0FA54A1BF249FA9AB30236498C32423* L_1;
		L_1 = EqualityComparer_1_get_Default_mE1A8E1F0A77A6C7B6F2EAFF3246AEDF7E22F7E69_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_m89BFE73EE594C790CF219AB0570F3D2B1B8E9197(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m89BFE73EE594C790CF219AB0570F3D2B1B8E9197_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B8_0 = 0;
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_mB40DC09EF650CC86210818231255FCC960D8C688(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RuntimeObject* L_1 = ___0_collection;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_collection;
		V_0 = ((HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_m80B2D2C00AB07F2C6D8EC516572FD36E007CD487(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_7 = V_0;
		HashSet_1_CopyFrom_m9DDC4A4462B9D99764DFF30F3BB9A76B817A5E09(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}

IL_0030:
	{
		RuntimeObject* L_8 = ___0_collection;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_10);
		G_B8_0 = L_11;
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 0;
	}

IL_0043:
	{
		V_2 = G_B8_0;
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = HashSet_1_Initialize_mFC6B68188562FC358678927CA39C0118E3E9FB01(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		RuntimeObject* L_14 = ___0_collection;
		HashSet_1_UnionWith_m2235053BE00511A8473539181A4CB6F544F136AA(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_15 = __this->____count;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_16 = __this->____slots;
		NullCheck(L_16);
		int32_t L_17 = __this->____count;
		if ((((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_16)->max_length))/L_17))) <= ((int32_t)3)))
		{
			goto IL_0074;
		}
	}
	{
		HashSet_1_TrimExcess_m130124985B5DA4E6C18C1855CE972046894B73D9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
	}

IL_0074:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m8FF07EB3CBDC6D3BD265A3357D5105A743DD8B2B_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		__this->____siInfo = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m9DDC4A4462B9D99764DFF30F3BB9A76B817A5E09_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_0 = ___0_source;
		NullCheck(L_0);
		int32_t L_1 = L_0->____count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_3 = ___0_source;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->____buckets;
		NullCheck(L_4);
		V_1 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		int32_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(((int32_t)il2cpp_codegen_add(L_5, 1)), NULL);
		int32_t L_7 = V_1;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_8 = ___0_source;
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->____buckets;
		NullCheck((RuntimeArray*)L_9);
		RuntimeObject* L_10;
		L_10 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_9, NULL);
		__this->____buckets = ((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_10, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_10, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var)));
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_11 = ___0_source;
		NullCheck(L_11);
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_12 = L_11->____slots;
		NullCheck((RuntimeArray*)L_12);
		RuntimeObject* L_13;
		L_13 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_12, NULL);
		__this->____slots = ((SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347*)Castclass((RuntimeObject*)L_13, il2cpp_rgctx_data(method->klass->rgctx_data, 16)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)((SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347*)Castclass((RuntimeObject*)L_13, il2cpp_rgctx_data(method->klass->rgctx_data, 16))));
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_14 = ___0_source;
		NullCheck(L_14);
		int32_t L_15 = L_14->____lastIndex;
		__this->____lastIndex = L_15;
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_16 = ___0_source;
		NullCheck(L_16);
		int32_t L_17 = L_16->____freeList;
		__this->____freeList = L_17;
		goto IL_00c7;
	}

IL_0065:
	{
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_18 = ___0_source;
		NullCheck(L_18);
		int32_t L_19 = L_18->____lastIndex;
		V_2 = L_19;
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_20 = ___0_source;
		NullCheck(L_20);
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_21 = L_20->____slots;
		V_3 = L_21;
		int32_t L_22 = V_0;
		int32_t L_23;
		L_23 = HashSet_1_Initialize_mFC6B68188562FC358678927CA39C0118E3E9FB01(__this, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_4 = 0;
		V_5 = 0;
		goto IL_00ba;
	}

IL_0083:
	{
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_24 = V_3;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode;
		V_6 = L_26;
		int32_t L_27 = V_6;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_28 = V_4;
		int32_t L_29 = V_6;
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_30 = V_3;
		int32_t L_31 = V_5;
		NullCheck(L_30);
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		HashSet_1_AddValue_mA7E85B34B85A81E7082B49E320B94A130413AF84(__this, L_28, L_29, L_32, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00b4:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00ba:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = V_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_37 = V_4;
		__this->____lastIndex = L_37;
	}

IL_00c7:
	{
		int32_t L_38 = V_0;
		__this->____count = L_38;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m58C4B2BFFA2343F36BDEB7C407B3BC086419298B_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_mB40DC09EF650CC86210818231255FCC960D8C688(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0016:
	{
		int32_t L_3 = ___0_capacity;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___0_capacity;
		int32_t L_5;
		L_5 = HashSet_1_Initialize_mFC6B68188562FC358678927CA39C0118E3E9FB01(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0022:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m20A499B1316312D488B4C7CCD3FB54F658F6CE30_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_item, const RuntimeMethod* method) 
{
	{
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_mDDA4F4C8239E8105D88AD1D8C535606D5CCBB255(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m28A7D11E936B2BBE05FB20DA7385CB82CB1781B0_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____lastIndex;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_1 = __this->____slots;
		int32_t L_2 = __this->____lastIndex;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, L_2, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
	}

IL_0044:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m8C956F26A04EC4599CD398F4C96B8BF1433E43E2_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0080;
		}
	}
	{
		V_0 = 0;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m38C32C3B5A7094BC22FE52EBCCF45EBD690E5252(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_1 = L_2;
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_3 = __this->____slots;
		V_2 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		int32_t L_5 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		NullCheck(L_6);
		NullCheck(L_4);
		int32_t L_7 = ((int32_t)(L_5%((int32_t)(((RuntimeArray*)L_6)->max_length))));
		int32_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		goto IL_007c;
	}

IL_002f:
	{
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_9 = V_2;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___hashCode;
		int32_t L_12 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_13 = __this->____comparer;
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___value;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_17 = ___0_item;
		NullCheck(L_13);
		bool L_18;
		L_18 = InterfaceFuncInvoker2< bool, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_13, L_16, L_17);
		if (!L_18)
		{
			goto IL_005a;
		}
	}
	{
		return (bool)1;
	}

IL_005a:
	{
		int32_t L_19 = V_0;
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_20 = V_2;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_006b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_21 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_006b:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_23 = V_2;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___next;
		V_3 = L_25;
	}

IL_007c:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}

IL_0080:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m76EBC63A5B4361C2138DD47D07E1074DFF956230_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, int2U5BU5D_tC349316FD7D3F522EC7DAD79861BE5B748271915* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		int2U5BU5D_tC349316FD7D3F522EC7DAD79861BE5B748271915* L_0 = ___0_array;
		int32_t L_1 = ___1_arrayIndex;
		int32_t L_2 = __this->____count;
		HashSet_1_CopyTo_mB5A25106DA209EFEB296695D6416EC6A283A1B86(__this, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mD4851D6512BB33211CBB5B520254AA33FE45EFB9_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* V_4 = NULL;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0154;
		}
	}
	{
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m38C32C3B5A7094BC22FE52EBCCF45EBD690E5252(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_2;
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		V_1 = ((int32_t)(L_3%((int32_t)(((RuntimeArray*)L_4)->max_length))));
		V_2 = (-1);
		V_3 = 0;
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_5 = __this->____slots;
		V_4 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_014c;
	}

IL_003b:
	{
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_10 = V_4;
		int32_t L_11 = V_5;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0123;
		}
	}
	{
		RuntimeObject* L_14 = __this->____comparer;
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_15 = V_4;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___value;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_18 = ___0_item;
		NullCheck(L_14);
		bool L_19;
		L_19 = InterfaceFuncInvoker2< bool, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_14, L_17, L_18);
		if (!L_19)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->____buckets;
		int32_t L_22 = V_1;
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_23 = V_4;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___next;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (int32_t)((int32_t)il2cpp_codegen_add(L_25, 1)));
		goto IL_00a7;
	}

IL_008c:
	{
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_26 = V_4;
		int32_t L_27 = V_2;
		NullCheck(L_26);
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_28 = V_4;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		int32_t L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___next;
		((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___next = L_30;
	}

IL_00a7:
	{
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_31 = V_4;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___hashCode = (-1);
		goto IL_00d1;
	}

IL_00d1:
	{
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_33 = V_4;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		int32_t L_35 = __this->____freeList;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___next = L_35;
		int32_t L_36 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		int32_t L_38 = __this->____count;
		if (L_38)
		{
			goto IL_0119;
		}
	}
	{
		__this->____lastIndex = 0;
		__this->____freeList = (-1);
		goto IL_0121;
	}

IL_0119:
	{
		int32_t L_39 = V_5;
		__this->____freeList = L_39;
	}

IL_0121:
	{
		return (bool)1;
	}

IL_0123:
	{
		int32_t L_40 = V_3;
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_41 = V_4;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_0135;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_42 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_42, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, method);
	}

IL_0135:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		int32_t L_44 = V_5;
		V_2 = L_44;
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_45 = V_4;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = ((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___next;
		V_5 = L_47;
	}

IL_014c:
	{
		int32_t L_48 = V_5;
		if ((((int32_t)L_48) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}

IL_0154:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m24CFCD730AE8EB3AE4D250B05692718E272F8940_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m0F625A4A9C41D921169D624F7B737F26F6B3D2F5_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9CF79F755FC8DD7C2EA5EE61D7046718C0F8E77A HashSet_1_GetEnumerator_m545CA8C794A8CF8BEAC976CEB23D89CD0213F779_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9CF79F755FC8DD7C2EA5EE61D7046718C0F8E77A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m9965034FB4FC9028EDA7A04A5F9B9C7512047889((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mBC59B4B7B47BF03A55702FA422B9D239EE02ACBF_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9CF79F755FC8DD7C2EA5EE61D7046718C0F8E77A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m9965034FB4FC9028EDA7A04A5F9B9C7512047889((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_t9CF79F755FC8DD7C2EA5EE61D7046718C0F8E77A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_IEnumerable_GetEnumerator_mC0E1D85B744D794A8378CA765EBB7CBB80E0A71F_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9CF79F755FC8DD7C2EA5EE61D7046718C0F8E77A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m9965034FB4FC9028EDA7A04A5F9B9C7512047889((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_t9CF79F755FC8DD7C2EA5EE61D7046718C0F8E77A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_GetObjectData_m7665A500138E7B1BE3942AF5CD53FD2385E0E30C_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	int2U5BU5D_tC349316FD7D3F522EC7DAD79861BE5B748271915* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		int32_t L_3 = __this->____version;
		NullCheck(L_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_2, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeObject* L_5 = __this->____comparer;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 30)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_4, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, (RuntimeObject*)L_5, L_7, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		if (!L_9)
		{
			G_B4_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
			G_B4_1 = L_8;
			goto IL_0052;
		}
		G_B3_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
		G_B3_1 = L_8;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		NullCheck(L_10);
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_10)->max_length));
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0053;
	}

IL_0052:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0053:
	{
		NullCheck(G_B5_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B5_2, G_B5_1, G_B5_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		if (!L_11)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_12 = __this->____count;
		int2U5BU5D_tC349316FD7D3F522EC7DAD79861BE5B748271915* L_13 = (int2U5BU5D_tC349316FD7D3F522EC7DAD79861BE5B748271915*)(int2U5BU5D_tC349316FD7D3F522EC7DAD79861BE5B748271915*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 31), (uint32_t)L_12);
		V_0 = L_13;
		int2U5BU5D_tC349316FD7D3F522EC7DAD79861BE5B748271915* L_14 = V_0;
		HashSet_1_CopyTo_mB28611BF66F45444301EB815BD44042721120439(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_15 = ___0_info;
		int2U5BU5D_tC349316FD7D3F522EC7DAD79861BE5B748271915* L_16 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		NullCheck(L_15);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_15, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, (RuntimeObject*)L_16, L_18, NULL);
	}

IL_0089:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_OnDeserialization_mFECC7F334D0563A2FEA7ACAB8907DC04B44EEAA8_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int2U5BU5D_tC349316FD7D3F522EC7DAD79861BE5B748271915* V_1 = NULL;
	int32_t V_2 = 0;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = __this->____siInfo;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = __this->____siInfo;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_1, _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865, NULL);
		V_0 = L_2;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		NullCheck(L_3);
		RuntimeObject* L_6;
		L_6 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_3, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4))));
		__this->____freeList = (-1);
		int32_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->____buckets = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_9);
		int32_t L_10 = V_0;
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_11 = (SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347*)(SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_10);
		__this->____slots = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_11);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_12 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		NullCheck(L_12);
		RuntimeObject* L_15;
		L_15 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_12, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, L_14, NULL);
		V_1 = ((int2U5BU5D_tC349316FD7D3F522EC7DAD79861BE5B748271915*)Castclass((RuntimeObject*)L_15, il2cpp_rgctx_data(method->klass->rgctx_data, 24)));
		int2U5BU5D_tC349316FD7D3F522EC7DAD79861BE5B748271915* L_16 = V_1;
		if (L_16)
		{
			goto IL_008f;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_17 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_008f:
	{
		V_2 = 0;
		goto IL_00a5;
	}

IL_0093:
	{
		int2U5BU5D_tC349316FD7D3F522EC7DAD79861BE5B748271915* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		bool L_22;
		L_22 = HashSet_1_AddIfNotPresent_mDDA4F4C8239E8105D88AD1D8C535606D5CCBB255(__this, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00a5:
	{
		int32_t L_24 = V_2;
		int2U5BU5D_tC349316FD7D3F522EC7DAD79861BE5B748271915* L_25 = V_1;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0093;
		}
	}
	{
		goto IL_00b4;
	}

IL_00ad:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00b4:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_26 = __this->____siInfo;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_26, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		__this->____version = L_27;
		__this->____siInfo = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m9643ED822A6E3BC316E95923DD0B0B5FBEEBFD1E_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_item, const RuntimeMethod* method) 
{
	{
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_mDDA4F4C8239E8105D88AD1D8C535606D5CCBB255(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_TryGetValue_m7902C37D35C46F035F09C9D192E5520892FF87BA_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_equalValue, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A* ___1_actualValue, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_1 = ___0_equalValue;
		int32_t L_2;
		L_2 = HashSet_1_InternalIndexOf_m8BC1AD852D2EC56E820628C9A4B00026CABFA87E(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A* L_4 = ___1_actualValue;
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_5 = __this->____slots;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		*(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A*)L_4 = L_7;
		return (bool)1;
	}

IL_002d:
	{
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A* L_8 = ___1_actualValue;
		il2cpp_codegen_initobj(L_8, sizeof(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_m2235053BE00511A8473539181A4CB6F544F136AA_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck((RuntimeObject*)L_5);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
				}

IL_0039:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0026_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_7;
				L_7 = InterfaceFuncInvoker0< int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_6);
				V_1 = L_7;
				int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_8 = V_1;
				bool L_9;
				L_9 = HashSet_1_AddIfNotPresent_mDDA4F4C8239E8105D88AD1D8C535606D5CCBB255(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
			}

IL_0026_1:
			{
				RuntimeObject* L_10 = V_0;
				NullCheck((RuntimeObject*)L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
				if (L_11)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_003a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWith_m840AB0F4BA4EB18E8C67BE6D57C72DC33BAECDCA_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*)__this))))
		{
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_6);
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		HashSet_1_Clear_m28A7D11E936B2BBE05FB20DA7385CB82CB1781B0(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		return;
	}

IL_0035:
	{
		RuntimeObject* L_8 = ___0_other;
		V_1 = ((HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*)IsInstClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_10 = V_1;
		bool L_11;
		L_11 = HashSet_1_AreEqualityComparersEqual_m80B2D2C00AB07F2C6D8EC516572FD36E007CD487(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_11)
		{
			goto IL_0050;
		}
	}
	{
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_12 = V_1;
		HashSet_1_IntersectWithHashSetWithSameEC_m9383FF9F82C9454A67F94BCC2707397225B57B1A(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}

IL_0050:
	{
		RuntimeObject* L_13 = ___0_other;
		HashSet_1_IntersectWithEnumerable_m5E71140E025A11D2846563E797517B05AE10FB24(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_ExceptWith_m143447A3A51CFCF18371AEDC299504D5B011CAEF_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*)__this))))
		{
			goto IL_0022;
		}
	}
	{
		HashSet_1_Clear_m28A7D11E936B2BBE05FB20DA7385CB82CB1781B0(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		return;
	}

IL_0022:
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				}

IL_004d:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003a_1;
			}

IL_002b_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_9;
				L_9 = InterfaceFuncInvoker0< int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_8);
				V_1 = L_9;
				int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_10 = V_1;
				bool L_11;
				L_11 = HashSet_1_Remove_mD4851D6512BB33211CBB5B520254AA33FE45EFB9(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
			}

IL_003a_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck((RuntimeObject*)L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
				if (L_13)
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_004e;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWith_m7DE965E2DB0089B3B92F07C8FFCD0C4A322A16DC_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_3 = ___0_other;
		HashSet_1_UnionWith_m2235053BE00511A8473539181A4CB6F544F136AA(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*)__this))))
		{
			goto IL_0029;
		}
	}
	{
		HashSet_1_Clear_m28A7D11E936B2BBE05FB20DA7385CB82CB1781B0(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		return;
	}

IL_0029:
	{
		RuntimeObject* L_5 = ___0_other;
		V_0 = ((HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*)IsInstClass((RuntimeObject*)L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_6 = V_0;
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_7 = V_0;
		bool L_8;
		L_8 = HashSet_1_AreEqualityComparersEqual_m80B2D2C00AB07F2C6D8EC516572FD36E007CD487(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_9 = V_0;
		HashSet_1_SymmetricExceptWithUniqueHashSet_mF755891654E02E455E96A50875E6943592C6DBB0(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}

IL_0044:
	{
		RuntimeObject* L_10 = ___0_other;
		HashSet_1_SymmetricExceptWithEnumerable_m1669EF86E3F89103DA77E8B13179C82DA9C3F9AE(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOf_mAD4430B8F5BB36C4FA90F02316B3605CB092F4D3_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* V_0 = NULL;
	ElementCount_t8A008F159849D422F571730DBAD055B05471FB61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)1;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*)IsInstClass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_6 = V_0;
		bool L_7;
		L_7 = HashSet_1_AreEqualityComparersEqual_m80B2D2C00AB07F2C6D8EC516572FD36E007CD487(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_8 = __this->____count;
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = HashSet_1_get_Count_m24CFCD730AE8EB3AE4D250B05692718E272F8940_inline(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		if ((((int32_t)L_8) <= ((int32_t)L_10)))
		{
			goto IL_0041;
		}
	}
	{
		return (bool)0;
	}

IL_0041:
	{
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_11 = V_0;
		bool L_12;
		L_12 = HashSet_1_IsSubsetOfHashSetWithSameEC_m8F85274FA267DACD46BAED82D75582888133B578(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return L_12;
	}

IL_0049:
	{
		RuntimeObject* L_13 = ___0_other;
		ElementCount_t8A008F159849D422F571730DBAD055B05471FB61 L_14;
		L_14 = HashSet_1_CheckUniqueAndUnfoundElements_mDF221DA6D8D968D4E5C0617A4E94223D0BF9E6B2(__this, L_13, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		V_1 = L_14;
		ElementCount_t8A008F159849D422F571730DBAD055B05471FB61 L_15 = V_1;
		int32_t L_16 = L_15.___uniqueCount;
		int32_t L_17 = __this->____count;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_006d;
		}
	}
	{
		ElementCount_t8A008F159849D422F571730DBAD055B05471FB61 L_18 = V_1;
		int32_t L_19 = L_18.___unfoundCount;
		return (bool)((((int32_t)((((int32_t)L_19) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_006d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsProperSubsetOf_m9C22DA7DD364199384CC32EA4EA481401F076F73_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	ElementCount_t8A008F159849D422F571730DBAD055B05471FB61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0065;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)0;
	}

IL_0028:
	{
		int32_t L_7 = __this->____count;
		if (L_7)
		{
			goto IL_003a;
		}
	}
	{
		RuntimeObject* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_8);
		return (bool)((((int32_t)L_9) > ((int32_t)0))? 1 : 0);
	}

IL_003a:
	{
		RuntimeObject* L_10 = ___0_other;
		V_2 = ((HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*)IsInstClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_12 = V_2;
		bool L_13;
		L_13 = HashSet_1_AreEqualityComparersEqual_m80B2D2C00AB07F2C6D8EC516572FD36E007CD487(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_13)
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_14 = __this->____count;
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = HashSet_1_get_Count_m24CFCD730AE8EB3AE4D250B05692718E272F8940_inline(L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_005d;
		}
	}
	{
		return (bool)0;
	}

IL_005d:
	{
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_17 = V_2;
		bool L_18;
		L_18 = HashSet_1_IsSubsetOfHashSetWithSameEC_m8F85274FA267DACD46BAED82D75582888133B578(__this, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return L_18;
	}

IL_0065:
	{
		RuntimeObject* L_19 = ___0_other;
		ElementCount_t8A008F159849D422F571730DBAD055B05471FB61 L_20;
		L_20 = HashSet_1_CheckUniqueAndUnfoundElements_mDF221DA6D8D968D4E5C0617A4E94223D0BF9E6B2(__this, L_19, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		V_1 = L_20;
		ElementCount_t8A008F159849D422F571730DBAD055B05471FB61 L_21 = V_1;
		int32_t L_22 = L_21.___uniqueCount;
		int32_t L_23 = __this->____count;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_0086;
		}
	}
	{
		ElementCount_t8A008F159849D422F571730DBAD055B05471FB61 L_24 = V_1;
		int32_t L_25 = L_24.___unfoundCount;
		return (bool)((((int32_t)L_25) > ((int32_t)0))? 1 : 0);
	}

IL_0086:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSupersetOf_m552642CEB186CC26E9F2AFC11B3A9B71823278DD_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		RuntimeObject* L_7 = ___0_other;
		V_1 = ((HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*)IsInstClass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_8 = V_1;
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_9 = V_1;
		bool L_10;
		L_10 = HashSet_1_AreEqualityComparersEqual_m80B2D2C00AB07F2C6D8EC516572FD36E007CD487(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = HashSet_1_get_Count_m24CFCD730AE8EB3AE4D250B05692718E272F8940_inline(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		int32_t L_13 = __this->____count;
		if ((((int32_t)L_12) <= ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		return (bool)0;
	}

IL_004b:
	{
		RuntimeObject* L_14 = ___0_other;
		bool L_15;
		L_15 = HashSet_1_ContainsAllElements_m6F2BDB847FB091EF6690D7D4602035086F26B9EA(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsProperSupersetOf_mB8BBB116BEA51370EF83435BDBEBC4630AC6163D_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	ElementCount_t8A008F159849D422F571730DBAD055B05471FB61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)0;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_5 = V_0;
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		RuntimeObject* L_8 = ___0_other;
		V_2 = ((HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*)IsInstClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_9 = V_2;
		if (!L_9)
		{
			goto IL_005d;
		}
	}
	{
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_10 = V_2;
		bool L_11;
		L_11 = HashSet_1_AreEqualityComparersEqual_m80B2D2C00AB07F2C6D8EC516572FD36E007CD487(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = HashSet_1_get_Count_m24CFCD730AE8EB3AE4D250B05692718E272F8940_inline(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0055;
		}
	}
	{
		return (bool)0;
	}

IL_0055:
	{
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_15 = V_2;
		bool L_16;
		L_16 = HashSet_1_ContainsAllElements_m6F2BDB847FB091EF6690D7D4602035086F26B9EA(__this, (RuntimeObject*)L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		return L_16;
	}

IL_005d:
	{
		RuntimeObject* L_17 = ___0_other;
		ElementCount_t8A008F159849D422F571730DBAD055B05471FB61 L_18;
		L_18 = HashSet_1_CheckUniqueAndUnfoundElements_mDF221DA6D8D968D4E5C0617A4E94223D0BF9E6B2(__this, L_17, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		V_1 = L_18;
		ElementCount_t8A008F159849D422F571730DBAD055B05471FB61 L_19 = V_1;
		int32_t L_20 = L_19.___uniqueCount;
		int32_t L_21 = __this->____count;
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_007e;
		}
	}
	{
		ElementCount_t8A008F159849D422F571730DBAD055B05471FB61 L_22 = V_1;
		int32_t L_23 = L_22.___unfoundCount;
		return (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_007e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Overlaps_m14290F915B464EC7DA61E839C77DF31114B230D9_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004e;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				}

IL_004e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003b_1;
			}

IL_0027_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_9;
				L_9 = InterfaceFuncInvoker0< int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_8);
				V_1 = L_9;
				int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_10 = V_1;
				bool L_11;
				L_11 = HashSet_1_Contains_m8C956F26A04EC4599CD398F4C96B8BF1433E43E2(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
				if (!L_11)
				{
					goto IL_003b_1;
				}
			}
			{
				V_2 = (bool)1;
				goto IL_0051;
			}

IL_003b_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck((RuntimeObject*)L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
				if (L_13)
				{
					goto IL_0027_1;
				}
			}
			{
				goto IL_004f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		return (bool)0;
	}

IL_0051:
	{
		bool L_14 = V_2;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_SetEquals_m44579FB64E797AC74CD2156E073C5757CD643399_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	ElementCount_t8A008F159849D422F571730DBAD055B05471FB61 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_4 = V_0;
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_m80B2D2C00AB07F2C6D8EC516572FD36E007CD487(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_7 = __this->____count;
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = HashSet_1_get_Count_m24CFCD730AE8EB3AE4D250B05692718E272F8940_inline(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		if ((((int32_t)L_7) == ((int32_t)L_9)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0037:
	{
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_10 = V_0;
		bool L_11;
		L_11 = HashSet_1_ContainsAllElements_m6F2BDB847FB091EF6690D7D4602035086F26B9EA(__this, (RuntimeObject*)L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		return L_11;
	}

IL_003f:
	{
		RuntimeObject* L_12 = ___0_other;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_13 = V_1;
		if (!L_13)
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_14 = __this->____count;
		if (L_14)
		{
			goto IL_005c;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_15);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		return (bool)0;
	}

IL_005c:
	{
		RuntimeObject* L_17 = ___0_other;
		ElementCount_t8A008F159849D422F571730DBAD055B05471FB61 L_18;
		L_18 = HashSet_1_CheckUniqueAndUnfoundElements_mDF221DA6D8D968D4E5C0617A4E94223D0BF9E6B2(__this, L_17, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		V_2 = L_18;
		ElementCount_t8A008F159849D422F571730DBAD055B05471FB61 L_19 = V_2;
		int32_t L_20 = L_19.___uniqueCount;
		int32_t L_21 = __this->____count;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_007d;
		}
	}
	{
		ElementCount_t8A008F159849D422F571730DBAD055B05471FB61 L_22 = V_2;
		int32_t L_23 = L_22.___unfoundCount;
		return (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_007d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mB28611BF66F45444301EB815BD44042721120439_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, int2U5BU5D_tC349316FD7D3F522EC7DAD79861BE5B748271915* ___0_array, const RuntimeMethod* method) 
{
	{
		int2U5BU5D_tC349316FD7D3F522EC7DAD79861BE5B748271915* L_0 = ___0_array;
		int32_t L_1 = __this->____count;
		HashSet_1_CopyTo_mB5A25106DA209EFEB296695D6416EC6A283A1B86(__this, L_0, 0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mB5A25106DA209EFEB296695D6416EC6A283A1B86_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, int2U5BU5D_tC349316FD7D3F522EC7DAD79861BE5B748271915* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int2U5BU5D_tC349316FD7D3F522EC7DAD79861BE5B748271915* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0028:
	{
		int32_t L_7 = ___2_count;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = ___2_count;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_9);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0042:
	{
		int32_t L_12 = ___1_arrayIndex;
		int2U5BU5D_tC349316FD7D3F522EC7DAD79861BE5B748271915* L_13 = ___0_array;
		NullCheck(L_13);
		if ((((int32_t)L_12) > ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_14 = ___2_count;
		int2U5BU5D_tC349316FD7D3F522EC7DAD79861BE5B748271915* L_15 = ___0_array;
		NullCheck(L_15);
		int32_t L_16 = ___1_arrayIndex;
		if ((((int32_t)L_14) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)))))
		{
			goto IL_005b;
		}
	}

IL_0050:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_17 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_005b:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0097;
	}

IL_0061:
	{
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_18 = __this->____slots;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___hashCode;
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		int2U5BU5D_tC349316FD7D3F522EC7DAD79861BE5B748271915* L_21 = ___0_array;
		int32_t L_22 = ___1_arrayIndex;
		int32_t L_23 = V_0;
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_24 = __this->____slots;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___value;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, L_23))), (int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A)L_26);
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0093:
	{
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0097:
	{
		int32_t L_29 = V_1;
		int32_t L_30 = __this->____lastIndex;
		if ((((int32_t)L_29) >= ((int32_t)L_30)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_31 = V_0;
		int32_t L_32 = ___2_count;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0061;
		}
	}

IL_00a4:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_RemoveWhere_mC696CA61F7F9886BE7092E78BE708BDD0506CFE4_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, Predicate_1_tF41DB32AAF3F0B3D100E7030BD9909B760A73F5A* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Predicate_1_tF41DB32AAF3F0B3D100E7030BD9909B760A73F5A* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0054;
	}

IL_0014:
	{
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_2 = __this->____slots;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_5 = __this->____slots;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		V_2 = L_7;
		Predicate_1_tF41DB32AAF3F0B3D100E7030BD9909B760A73F5A* L_8 = ___0_match;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_9 = V_2;
		NullCheck(L_8);
		bool L_10;
		L_10 = Predicate_1_Invoke_m2947F3CB956C7AE73995537B4046EC17478AEF7D_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_11 = V_2;
		bool L_12;
		L_12 = HashSet_1_Remove_mD4851D6512BB33211CBB5B520254AA33FE45EFB9(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0050:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____lastIndex;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_m9E0C308E111E5BB1B52F8FD1F03688AADB791982_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____comparer;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_EnsureCapacity_m2B9E3105AA1E28E0051ED11BD4D01B411FFFC0CD_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000f:
	{
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_3 = __this->____slots;
		NullCheck(L_3);
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
		goto IL_0022;
	}

IL_0021:
	{
		G_B5_0 = 0;
	}

IL_0022:
	{
		V_0 = G_B5_0;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_capacity;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		if (L_7)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_8 = ___0_capacity;
		int32_t L_9;
		L_9 = HashSet_1_Initialize_mFC6B68188562FC358678927CA39C0118E3E9FB01(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return L_9;
	}

IL_0039:
	{
		int32_t L_10 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_10, NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		HashSet_1_SetCapacity_mC4EC5823B0DDC5D3FF2483AFB6562925D981FC71(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		int32_t L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_m130124985B5DA4E6C18C1855CE972046894B73D9_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->____slots = (SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)(SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347*)NULL);
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}

IL_0025:
	{
		int32_t L_2 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_5 = (SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347*)(SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_4);
		V_1 = L_5;
		int32_t L_6 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_2 = L_7;
		V_3 = 0;
		V_4 = 0;
		goto IL_00a2;
	}

IL_0046:
	{
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_8 = __this->____slots;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_11 = V_1;
		int32_t L_12 = V_3;
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_13 = __this->____slots;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Slot_tDADFD32C0C0380387FBD2D8865316D63782E26C5 L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (Slot_tDADFD32C0C0380387FBD2D8865316D63782E26C5)L_16);
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_17 = V_1;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_0;
		V_5 = ((int32_t)(L_19%L_20));
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_21 = V_1;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_2;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___next = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = V_3;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)((int32_t)il2cpp_codegen_add(L_29, 1)));
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_009c:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00a2:
	{
		int32_t L_32 = V_4;
		int32_t L_33 = __this->____lastIndex;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_34 = V_3;
		__this->____lastIndex = L_34;
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_35 = V_1;
		__this->____slots = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_35);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_2;
		__this->____buckets = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_36);
		__this->____freeList = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_CreateSetComparer_m4ED66498A9142EB3611C851A5FC2A014F6B68724_gshared (const RuntimeMethod* method) 
{
	{
		HashSetEqualityComparer_1_t1CD0AE30BF793E90CB641F81BFEE25F14A417091* L_0 = (HashSetEqualityComparer_1_t1CD0AE30BF793E90CB641F81BFEE25F14A417091*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 55));
		HashSetEqualityComparer_1__ctor_mF77C996164B367953F95083C459EAE5F99D3C908(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 56));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_mFC6B68188562FC358678927CA39C0118E3E9FB01_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_5 = (SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347*)(SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_4);
		__this->____slots = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_mA5C676C545835B66F3D34EC85BB7B8D147F324FB_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____count;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91930CCAB5CB8F6F327407F9A14CF42F57A0F27B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = V_0;
		HashSet_1_SetCapacity_mC4EC5823B0DDC5D3FF2483AFB6562925D981FC71(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_mC4EC5823B0DDC5D3FF2483AFB6562925D981FC71_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___0_newSize;
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_1 = (SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347*)(SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_0);
		V_0 = L_1;
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_3 = __this->____slots;
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_4 = V_0;
		int32_t L_5 = __this->____lastIndex;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0023:
	{
		int32_t L_6 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0058;
	}

IL_002e:
	{
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = ___0_newSize;
		V_3 = ((int32_t)(L_10%L_11));
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___next = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_3;
		int32_t L_20 = V_2;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1)));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0058:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = __this->____lastIndex;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002e;
		}
	}
	{
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_24 = V_0;
		__this->____slots = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_1;
		__this->____buckets = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_25);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_mDDA4F4C8239E8105D88AD1D8C535606D5CCBB255_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1;
		L_1 = HashSet_1_Initialize_mFC6B68188562FC358678927CA39C0118E3E9FB01(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0010:
	{
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_2 = ___0_value;
		int32_t L_3;
		L_3 = HashSet_1_InternalGetHashCode_m38C32C3B5A7094BC22FE52EBCCF45EBD690E5252(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_3;
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		V_1 = ((int32_t)(L_4%((int32_t)(((RuntimeArray*)L_5)->max_length))));
		V_2 = 0;
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_6 = __this->____slots;
		V_3 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		goto IL_008b;
	}

IL_003a:
	{
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_11 = V_3;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		int32_t L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___hashCode;
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_15 = __this->____comparer;
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_16 = V_3;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		int32_t L_21 = V_2;
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_22 = V_3;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0078;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_0078:
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_25 = V_3;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_5 = L_27;
	}

IL_008b:
	{
		int32_t L_28 = V_5;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_29 = __this->____freeList;
		if ((((int32_t)L_29) < ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_30 = __this->____freeList;
		V_4 = L_30;
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_31 = V_3;
		int32_t L_32 = V_4;
		NullCheck(L_31);
		int32_t L_33 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next;
		__this->____freeList = L_33;
		goto IL_00ef;
	}

IL_00b6:
	{
		int32_t L_34 = __this->____lastIndex;
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_35 = V_3;
		NullCheck(L_35);
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))))
		{
			goto IL_00d9;
		}
	}
	{
		HashSet_1_IncreaseCapacity_mA5C676C545835B66F3D34EC85BB7B8D147F324FB(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_36 = __this->____slots;
		V_3 = L_36;
		int32_t L_37 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->____buckets;
		NullCheck(L_38);
		V_1 = ((int32_t)(L_37%((int32_t)(((RuntimeArray*)L_38)->max_length))));
	}

IL_00d9:
	{
		int32_t L_39 = __this->____lastIndex;
		V_4 = L_39;
		int32_t L_40 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ef:
	{
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_41 = V_3;
		int32_t L_42 = V_4;
		NullCheck(L_41);
		int32_t L_43 = V_0;
		((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode = L_43;
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_44 = V_3;
		int32_t L_45 = V_4;
		NullCheck(L_44);
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_46 = ___0_value;
		((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___value = L_46;
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_47 = V_3;
		int32_t L_48 = V_4;
		NullCheck(L_47);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = __this->____buckets;
		int32_t L_50 = V_1;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___next = ((int32_t)il2cpp_codegen_subtract(L_52, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		int32_t L_55 = V_4;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(L_54), (int32_t)((int32_t)il2cpp_codegen_add(L_55, 1)));
		int32_t L_56 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_56, 1));
		int32_t L_57 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_57, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_mA7E85B34B85A81E7082B49E320B94A130413AF84_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, int32_t ___0_index, int32_t ___1_hashCode, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___2_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		NullCheck(L_1);
		V_0 = ((int32_t)(L_0%((int32_t)(((RuntimeArray*)L_1)->max_length))));
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_2 = __this->____slots;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		int32_t L_4 = ___1_hashCode;
		((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode = L_4;
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_5 = __this->____slots;
		int32_t L_6 = ___0_index;
		NullCheck(L_5);
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_7 = ___2_value;
		((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value = L_7;
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_8 = __this->____slots;
		int32_t L_9 = ___0_index;
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___next = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____buckets;
		int32_t L_15 = V_0;
		int32_t L_16 = ___0_index;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (int32_t)((int32_t)il2cpp_codegen_add(L_16, 1)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_ContainsAllElements_m6F2BDB847FB091EF6690D7D4602035086F26B9EA_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0030;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_0030:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_001d_1;
			}

IL_0009_1:
			{
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_5;
				L_5 = InterfaceFuncInvoker0< int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_4);
				V_1 = L_5;
				int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_6 = V_1;
				bool L_7;
				L_7 = HashSet_1_Contains_m8C956F26A04EC4599CD398F4C96B8BF1433E43E2(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
				if (L_7)
				{
					goto IL_001d_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0033;
			}

IL_001d_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck((RuntimeObject*)L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				if (L_9)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0031;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		return (bool)1;
	}

IL_0033:
	{
		bool L_10 = V_2;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOfHashSetWithSameEC_m8F85274FA267DACD46BAED82D75582888133B578_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* ___0_other, const RuntimeMethod* method) 
{
	Enumerator_t9CF79F755FC8DD7C2EA5EE61D7046718C0F8E77A V_0;
	memset((&V_0), 0, sizeof(V_0));
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		Enumerator_t9CF79F755FC8DD7C2EA5EE61D7046718C0F8E77A L_0;
		L_0 = HashSet_1_GetEnumerator_m545CA8C794A8CF8BEAC976CEB23D89CD0213F779(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{
				Enumerator_Dispose_m4F548EDA912670C783CD065F48283424425505C4((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 63));
				return;
			}
		});
		try
		{
			{
				goto IL_001e_1;
			}

IL_0009_1:
			{
				int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_1;
				L_1 = Enumerator_get_Current_m402B297175A3F69505C145B0FA96EF769001C61E_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 60));
				V_1 = L_1;
				HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_2 = ___0_other;
				int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_3 = V_1;
				NullCheck(L_2);
				bool L_4;
				L_4 = HashSet_1_Contains_m8C956F26A04EC4599CD398F4C96B8BF1433E43E2(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
				if (L_4)
				{
					goto IL_001e_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0039;
			}

IL_001e_1:
			{
				bool L_5;
				L_5 = Enumerator_MoveNext_m6BFCA349EAC2509C0D75B27CD64354E8BB2E0929((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
				if (L_5)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0037;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		return (bool)1;
	}

IL_0039:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithHashSetWithSameEC_m9383FF9F82C9454A67F94BCC2707397225B57B1A_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* ___0_other, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = 0;
		goto IL_003f;
	}

IL_0004:
	{
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_0 = __this->____slots;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->___hashCode;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_3 = __this->____slots;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		V_1 = L_5;
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_6 = ___0_other;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_7 = V_1;
		NullCheck(L_6);
		bool L_8;
		L_8 = HashSet_1_Contains_m8C956F26A04EC4599CD398F4C96B8BF1433E43E2(L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		if (L_8)
		{
			goto IL_003b;
		}
	}
	{
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_9 = V_1;
		bool L_10;
		L_10 = HashSet_1_Remove_mD4851D6512BB33211CBB5B520254AA33FE45EFB9(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
	}

IL_003b:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_003f:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____lastIndex;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithEnumerable_m5E71140E025A11D2846563E797517B05AE10FB24_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = __this->____lastIndex;
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_1, NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)100))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = V_1;
		if ((uintptr_t)((uintptr_t)L_4) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_5 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_4), 4));
		int8_t* L_6 = (int8_t*) (L_5 ? alloca(L_5) : NULL);
		memset(L_6, 0, L_5);
		int32_t L_7 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_8 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_8, (int32_t*)(L_6), L_7, NULL);
		V_2 = L_8;
		goto IL_002f;
	}

IL_0022:
	{
		int32_t L_9 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_9);
		int32_t L_11 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_12 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_12, L_10, L_11, NULL);
		V_2 = L_12;
	}

IL_002f:
	{
		RuntimeObject* L_13 = ___0_other;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_13);
		V_3 = L_14;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0061:
			{
				{
					RuntimeObject* L_15 = V_3;
					if (!L_15)
					{
						goto IL_006a;
					}
				}
				{
					RuntimeObject* L_16 = V_3;
					NullCheck((RuntimeObject*)L_16);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
				}

IL_006a:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0057_1;
			}

IL_0038_1:
			{
				RuntimeObject* L_17 = V_3;
				NullCheck(L_17);
				int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_18;
				L_18 = InterfaceFuncInvoker0< int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_17);
				V_4 = L_18;
				int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_19 = V_4;
				int32_t L_20;
				L_20 = HashSet_1_InternalIndexOf_m8BC1AD852D2EC56E820628C9A4B00026CABFA87E(__this, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
				V_5 = L_20;
				int32_t L_21 = V_5;
				if ((((int32_t)L_21) < ((int32_t)0)))
				{
					goto IL_0057_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_22 = V_2;
				int32_t L_23 = V_5;
				NullCheck(L_22);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_22, L_23, NULL);
			}

IL_0057_1:
			{
				RuntimeObject* L_24 = V_3;
				NullCheck((RuntimeObject*)L_24);
				bool L_25;
				L_25 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_24);
				if (L_25)
				{
					goto IL_0038_1;
				}
			}
			{
				goto IL_006b;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006b:
	{
		V_6 = 0;
		goto IL_00ae;
	}

IL_0070:
	{
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_26 = __this->____slots;
		int32_t L_27 = V_6;
		NullCheck(L_26);
		int32_t L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___hashCode;
		if ((((int32_t)L_28) < ((int32_t)0)))
		{
			goto IL_00a8;
		}
	}
	{
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_29 = V_2;
		int32_t L_30 = V_6;
		NullCheck(L_29);
		bool L_31;
		L_31 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00a8;
		}
	}
	{
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_32 = __this->____slots;
		int32_t L_33 = V_6;
		NullCheck(L_32);
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_34 = ((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->___value;
		bool L_35;
		L_35 = HashSet_1_Remove_mD4851D6512BB33211CBB5B520254AA33FE45EFB9(__this, L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
	}

IL_00a8:
	{
		int32_t L_36 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00ae:
	{
		int32_t L_37 = V_6;
		int32_t L_38 = V_0;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0070;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalIndexOf_m8BC1AD852D2EC56E820628C9A4B00026CABFA87E_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_0 = ___0_item;
		int32_t L_1;
		L_1 = HashSet_1_InternalGetHashCode_m38C32C3B5A7094BC22FE52EBCCF45EBD690E5252(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_1 = L_1;
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_2 = __this->____slots;
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		int32_t L_4 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)(L_4%((int32_t)(((RuntimeArray*)L_5)->max_length))));
		int32_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		goto IL_0074;
	}

IL_0027:
	{
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_8 = V_2;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = V_1;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_12 = __this->____comparer;
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_13 = V_2;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_15 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___value;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_16 = ___0_item;
		NullCheck(L_12);
		bool L_17;
		L_17 = InterfaceFuncInvoker2< bool, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_12, L_15, L_16);
		if (!L_17)
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_18 = V_3;
		return L_18;
	}

IL_0052:
	{
		int32_t L_19 = V_0;
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_20 = V_2;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0063;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_21 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_0063:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_23 = V_2;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___next;
		V_3 = L_25;
	}

IL_0074:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithUniqueHashSet_mF755891654E02E455E96A50875E6943592C6DBB0_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* ___0_other, const RuntimeMethod* method) 
{
	Enumerator_t9CF79F755FC8DD7C2EA5EE61D7046718C0F8E77A V_0;
	memset((&V_0), 0, sizeof(V_0));
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_0 = ___0_other;
		NullCheck(L_0);
		Enumerator_t9CF79F755FC8DD7C2EA5EE61D7046718C0F8E77A L_1;
		L_1 = HashSet_1_GetEnumerator_m545CA8C794A8CF8BEAC976CEB23D89CD0213F779(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{
				Enumerator_Dispose_m4F548EDA912670C783CD065F48283424425505C4((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 63));
				return;
			}
		});
		try
		{
			{
				goto IL_0022_1;
			}

IL_0009_1:
			{
				int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_2;
				L_2 = Enumerator_get_Current_m402B297175A3F69505C145B0FA96EF769001C61E_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 60));
				V_1 = L_2;
				int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_3 = V_1;
				bool L_4;
				L_4 = HashSet_1_Remove_mD4851D6512BB33211CBB5B520254AA33FE45EFB9(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
				if (L_4)
				{
					goto IL_0022_1;
				}
			}
			{
				int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_5 = V_1;
				bool L_6;
				L_6 = HashSet_1_AddIfNotPresent_mDDA4F4C8239E8105D88AD1D8C535606D5CCBB255(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
			}

IL_0022_1:
			{
				bool L_7;
				L_7 = Enumerator_MoveNext_m6BFCA349EAC2509C0D75B27CD64354E8BB2E0929((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
				if (L_7)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_003b;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithEnumerable_m1669EF86E3F89103DA77E8B13179C82DA9C3F9AE_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		int32_t L_0 = __this->____lastIndex;
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_1, NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)50))))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_4 = V_1;
		if ((uintptr_t)((uintptr_t)L_4) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_5 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_4), 4));
		int8_t* L_6 = (int8_t*) (L_5 ? alloca(L_5) : NULL);
		memset(L_6, 0, L_5);
		int32_t L_7 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_8 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_8, (int32_t*)(L_6), L_7, NULL);
		V_2 = L_8;
		int32_t L_9 = V_1;
		if ((uintptr_t)((uintptr_t)L_9) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_10 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_9), 4));
		int8_t* L_11 = (int8_t*) (L_10 ? alloca(L_10) : NULL);
		memset(L_11, 0, L_10);
		int32_t L_12 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_13 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_13, (int32_t*)(L_11), L_12, NULL);
		V_3 = L_13;
		goto IL_0049;
	}

IL_002f:
	{
		int32_t L_14 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_14);
		int32_t L_16 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_17 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_17, L_15, L_16, NULL);
		V_2 = L_17;
		int32_t L_18 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_18);
		int32_t L_20 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_21 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_21, L_19, L_20, NULL);
		V_3 = L_21;
	}

IL_0049:
	{
		RuntimeObject* L_22 = ___0_other;
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_22);
		V_4 = L_23;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0097:
			{
				{
					RuntimeObject* L_24 = V_4;
					if (!L_24)
					{
						goto IL_00a2;
					}
				}
				{
					RuntimeObject* L_25 = V_4;
					NullCheck((RuntimeObject*)L_25);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_25);
				}

IL_00a2:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_008c_1;
			}

IL_0053_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_27;
				L_27 = InterfaceFuncInvoker0< int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_26);
				V_5 = L_27;
				V_6 = 0;
				int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_28 = V_5;
				bool L_29;
				L_29 = HashSet_1_AddOrGetLocation_m212B8418FC9A77E8E02D5AE7CD994CBA87129250(__this, L_28, (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 64));
				if (!L_29)
				{
					goto IL_0075_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_30 = V_3;
				int32_t L_31 = V_6;
				NullCheck(L_30);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_30, L_31, NULL);
				goto IL_008c_1;
			}

IL_0075_1:
			{
				int32_t L_32 = V_6;
				int32_t L_33 = V_0;
				if ((((int32_t)L_32) >= ((int32_t)L_33)))
				{
					goto IL_008c_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_34 = V_3;
				int32_t L_35 = V_6;
				NullCheck(L_34);
				bool L_36;
				L_36 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_34, L_35, NULL);
				if (L_36)
				{
					goto IL_008c_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_37 = V_2;
				int32_t L_38 = V_6;
				NullCheck(L_37);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_37, L_38, NULL);
			}

IL_008c_1:
			{
				RuntimeObject* L_39 = V_4;
				NullCheck((RuntimeObject*)L_39);
				bool L_40;
				L_40 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_39);
				if (L_40)
				{
					goto IL_0053_1;
				}
			}
			{
				goto IL_00a3;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a3:
	{
		V_7 = 0;
		goto IL_00d1;
	}

IL_00a8:
	{
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_41 = V_2;
		int32_t L_42 = V_7;
		NullCheck(L_41);
		bool L_43;
		L_43 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_41, L_42, NULL);
		if (!L_43)
		{
			goto IL_00cb;
		}
	}
	{
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_44 = __this->____slots;
		int32_t L_45 = V_7;
		NullCheck(L_44);
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_46 = ((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___value;
		bool L_47;
		L_47 = HashSet_1_Remove_mD4851D6512BB33211CBB5B520254AA33FE45EFB9(__this, L_46, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
	}

IL_00cb:
	{
		int32_t L_48 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_00d1:
	{
		int32_t L_49 = V_7;
		int32_t L_50 = V_0;
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			goto IL_00a8;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddOrGetLocation_m212B8418FC9A77E8E02D5AE7CD994CBA87129250_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_value, int32_t* ___1_location, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_0 = ___0_value;
		int32_t L_1;
		L_1 = HashSet_1_InternalGetHashCode_m38C32C3B5A7094BC22FE52EBCCF45EBD690E5252(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		V_1 = ((int32_t)(L_2%((int32_t)(((RuntimeArray*)L_3)->max_length))));
		V_2 = 0;
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_4 = __this->____slots;
		V_3 = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		goto IL_007f;
	}

IL_002a:
	{
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_9 = V_3;
		int32_t L_10 = V_5;
		NullCheck(L_9);
		int32_t L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___hashCode;
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_005b;
		}
	}
	{
		RuntimeObject* L_13 = __this->____comparer;
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_14 = V_3;
		int32_t L_15 = V_5;
		NullCheck(L_14);
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___value;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_17 = ___0_value;
		NullCheck(L_13);
		bool L_18;
		L_18 = InterfaceFuncInvoker2< bool, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_13, L_16, L_17);
		if (!L_18)
		{
			goto IL_005b;
		}
	}
	{
		int32_t* L_19 = ___1_location;
		int32_t L_20 = V_5;
		*((int32_t*)L_19) = (int32_t)L_20;
		return (bool)0;
	}

IL_005b:
	{
		int32_t L_21 = V_2;
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_22 = V_3;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_006c;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_006c:
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_25 = V_3;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_5 = L_27;
	}

IL_007f:
	{
		int32_t L_28 = V_5;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_29 = __this->____freeList;
		if ((((int32_t)L_29) < ((int32_t)0)))
		{
			goto IL_00aa;
		}
	}
	{
		int32_t L_30 = __this->____freeList;
		V_4 = L_30;
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_31 = V_3;
		int32_t L_32 = V_4;
		NullCheck(L_31);
		int32_t L_33 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next;
		__this->____freeList = L_33;
		goto IL_00e3;
	}

IL_00aa:
	{
		int32_t L_34 = __this->____lastIndex;
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_35 = V_3;
		NullCheck(L_35);
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))))
		{
			goto IL_00cd;
		}
	}
	{
		HashSet_1_IncreaseCapacity_mA5C676C545835B66F3D34EC85BB7B8D147F324FB(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_36 = __this->____slots;
		V_3 = L_36;
		int32_t L_37 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->____buckets;
		NullCheck(L_38);
		V_1 = ((int32_t)(L_37%((int32_t)(((RuntimeArray*)L_38)->max_length))));
	}

IL_00cd:
	{
		int32_t L_39 = __this->____lastIndex;
		V_4 = L_39;
		int32_t L_40 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00e3:
	{
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_41 = V_3;
		int32_t L_42 = V_4;
		NullCheck(L_41);
		int32_t L_43 = V_0;
		((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode = L_43;
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_44 = V_3;
		int32_t L_45 = V_4;
		NullCheck(L_44);
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_46 = ___0_value;
		((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___value = L_46;
		SlotU5BU5D_tDC9AF63A9FD52482BB9F92302E601350DDBD3347* L_47 = V_3;
		int32_t L_48 = V_4;
		NullCheck(L_47);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = __this->____buckets;
		int32_t L_50 = V_1;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___next = ((int32_t)il2cpp_codegen_subtract(L_52, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		int32_t L_55 = V_4;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(L_54), (int32_t)((int32_t)il2cpp_codegen_add(L_55, 1)));
		int32_t L_56 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_56, 1));
		int32_t L_57 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_57, 1));
		int32_t* L_58 = ___1_location;
		int32_t L_59 = V_4;
		*((int32_t*)L_58) = (int32_t)L_59;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementCount_t8A008F159849D422F571730DBAD055B05471FB61 HashSet_1_CheckUniqueAndUnfoundElements_mDF221DA6D8D968D4E5C0617A4E94223D0BF9E6B2_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ElementCount_t8A008F159849D422F571730DBAD055B05471FB61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_004f;
		}
	}
	{
		V_5 = 0;
		RuntimeObject* L_1 = ___0_other;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_1);
		V_6 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_3 = V_6;
					if (!L_3)
					{
						goto IL_003b;
					}
				}
				{
					RuntimeObject* L_4 = V_6;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_003b:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0025_1;
			}

IL_0015_1:
			{
				RuntimeObject* L_5 = V_6;
				NullCheck(L_5);
				int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_6;
				L_6 = InterfaceFuncInvoker0< int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_5);
				int32_t L_7 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_7, 1));
				goto IL_003c;
			}

IL_0025_1:
			{
				RuntimeObject* L_8 = V_6;
				NullCheck((RuntimeObject*)L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				if (L_9)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_003c;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		(&V_0)->___uniqueCount = 0;
		int32_t L_10 = V_5;
		(&V_0)->___unfoundCount = L_10;
		ElementCount_t8A008F159849D422F571730DBAD055B05471FB61 L_11 = V_0;
		return L_11;
	}

IL_004f:
	{
		int32_t L_12 = __this->____lastIndex;
		int32_t L_13;
		L_13 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_12, NULL);
		V_1 = L_13;
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)100))))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_15 = V_1;
		if ((uintptr_t)((uintptr_t)L_15) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_16 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_15), 4));
		int8_t* L_17 = (int8_t*) (L_16 ? alloca(L_16) : NULL);
		memset(L_17, 0, L_16);
		int32_t L_18 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_19 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_19, (int32_t*)(L_17), L_18, NULL);
		V_2 = L_19;
		goto IL_007c;
	}

IL_006f:
	{
		int32_t L_20 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_20);
		int32_t L_22 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_23 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_23, L_21, L_22, NULL);
		V_2 = L_23;
	}

IL_007c:
	{
		V_3 = 0;
		V_4 = 0;
		RuntimeObject* L_24 = ___0_other;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_24);
		V_6 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d1:
			{
				{
					RuntimeObject* L_26 = V_6;
					if (!L_26)
					{
						goto IL_00dc;
					}
				}
				{
					RuntimeObject* L_27 = V_6;
					NullCheck((RuntimeObject*)L_27);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00dc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00c6_1;
			}

IL_008b_1:
			{
				RuntimeObject* L_28 = V_6;
				NullCheck(L_28);
				int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_29;
				L_29 = InterfaceFuncInvoker0< int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_28);
				V_7 = L_29;
				int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_30 = V_7;
				int32_t L_31;
				L_31 = HashSet_1_InternalIndexOf_m8BC1AD852D2EC56E820628C9A4B00026CABFA87E(__this, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
				V_8 = L_31;
				int32_t L_32 = V_8;
				if ((((int32_t)L_32) < ((int32_t)0)))
				{
					goto IL_00bd_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_33 = V_2;
				int32_t L_34 = V_8;
				NullCheck(L_33);
				bool L_35;
				L_35 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_33, L_34, NULL);
				if (L_35)
				{
					goto IL_00c6_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_36 = V_2;
				int32_t L_37 = V_8;
				NullCheck(L_36);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_36, L_37, NULL);
				int32_t L_38 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
				goto IL_00c6_1;
			}

IL_00bd_1:
			{
				int32_t L_39 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_39, 1));
				bool L_40 = ___1_returnIfUnfound;
				if (!L_40)
				{
					goto IL_00c6_1;
				}
			}
			{
				goto IL_00dd;
			}

IL_00c6_1:
			{
				RuntimeObject* L_41 = V_6;
				NullCheck((RuntimeObject*)L_41);
				bool L_42;
				L_42 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				if (L_42)
				{
					goto IL_008b_1;
				}
			}
			{
				goto IL_00dd;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00dd:
	{
		int32_t L_43 = V_4;
		(&V_0)->___uniqueCount = L_43;
		int32_t L_44 = V_3;
		(&V_0)->___unfoundCount = L_44;
		ElementCount_t8A008F159849D422F571730DBAD055B05471FB61 L_45 = V_0;
		return L_45;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_HashSetEquals_m0EC9133FC80E158A42E071EE36D9123D85253EA4_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* ___0_set1, HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* ___1_set2, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	Enumerator_t9CF79F755FC8DD7C2EA5EE61D7046718C0F8E77A V_0;
	memset((&V_0), 0, sizeof(V_0));
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	Enumerator_t9CF79F755FC8DD7C2EA5EE61D7046718C0F8E77A V_5;
	memset((&V_5), 0, sizeof(V_5));
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_0 = ___0_set1;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_1 = ___1_set2;
		return (bool)((((RuntimeObject*)(HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}

IL_0008:
	{
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_2 = ___1_set2;
		if (L_2)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_3 = ___0_set1;
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_4 = ___1_set2;
		bool L_5;
		L_5 = HashSet_1_AreEqualityComparersEqual_m80B2D2C00AB07F2C6D8EC516572FD36E007CD487(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (!L_5)
		{
			goto IL_0062;
		}
	}
	{
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_6 = ___0_set1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = HashSet_1_get_Count_m24CFCD730AE8EB3AE4D250B05692718E272F8940_inline(L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 46));
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_8 = ___1_set2;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = HashSet_1_get_Count_m24CFCD730AE8EB3AE4D250B05692718E272F8940_inline(L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 46));
		if ((((int32_t)L_7) == ((int32_t)L_9)))
		{
			goto IL_0026;
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_10 = ___1_set2;
		NullCheck(L_10);
		Enumerator_t9CF79F755FC8DD7C2EA5EE61D7046718C0F8E77A L_11;
		L_11 = HashSet_1_GetEnumerator_m545CA8C794A8CF8BEAC976CEB23D89CD0213F779(L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 59));
		V_0 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0052:
			{
				Enumerator_Dispose_m4F548EDA912670C783CD065F48283424425505C4((&V_0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 63));
				return;
			}
		});
		try
		{
			{
				goto IL_0047_1;
			}

IL_002f_1:
			{
				int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_12;
				L_12 = Enumerator_get_Current_m402B297175A3F69505C145B0FA96EF769001C61E_inline((&V_0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 60));
				V_1 = L_12;
				HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_13 = ___0_set1;
				int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_14 = V_1;
				NullCheck(L_13);
				bool L_15;
				L_15 = HashSet_1_Contains_m8C956F26A04EC4599CD398F4C96B8BF1433E43E2(L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 51));
				if (L_15)
				{
					goto IL_0047_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_00d5;
			}

IL_0047_1:
			{
				bool L_16;
				L_16 = Enumerator_MoveNext_m6BFCA349EAC2509C0D75B27CD64354E8BB2E0929((&V_0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 62));
				if (L_16)
				{
					goto IL_002f_1;
				}
			}
			{
				goto IL_0060;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0060:
	{
		return (bool)1;
	}

IL_0062:
	{
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_17 = ___1_set2;
		NullCheck(L_17);
		Enumerator_t9CF79F755FC8DD7C2EA5EE61D7046718C0F8E77A L_18;
		L_18 = HashSet_1_GetEnumerator_m545CA8C794A8CF8BEAC976CEB23D89CD0213F779(L_17, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 59));
		V_0 = L_18;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c5:
			{
				Enumerator_Dispose_m4F548EDA912670C783CD065F48283424425505C4((&V_0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 63));
				return;
			}
		});
		try
		{
			{
				goto IL_00ba_1;
			}

IL_006b_1:
			{
				int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_19;
				L_19 = Enumerator_get_Current_m402B297175A3F69505C145B0FA96EF769001C61E_inline((&V_0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 60));
				V_3 = L_19;
				V_4 = (bool)0;
				HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_20 = ___0_set1;
				NullCheck(L_20);
				Enumerator_t9CF79F755FC8DD7C2EA5EE61D7046718C0F8E77A L_21;
				L_21 = HashSet_1_GetEnumerator_m545CA8C794A8CF8BEAC976CEB23D89CD0213F779(L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 59));
				V_5 = L_21;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00a4_1:
					{
						Enumerator_Dispose_m4F548EDA912670C783CD065F48283424425505C4((&V_5), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 63));
						return;
					}
				});
				try
				{
					{
						goto IL_0099_2;
					}

IL_0080_2:
					{
						int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_22;
						L_22 = Enumerator_get_Current_m402B297175A3F69505C145B0FA96EF769001C61E_inline((&V_5), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 60));
						V_6 = L_22;
						RuntimeObject* L_23 = ___2_comparer;
						int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_24 = V_3;
						int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_25 = V_6;
						NullCheck(L_23);
						bool L_26;
						L_26 = InterfaceFuncInvoker2< bool, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_23, L_24, L_25);
						if (!L_26)
						{
							goto IL_0099_2;
						}
					}
					{
						V_4 = (bool)1;
						goto IL_00b2_1;
					}

IL_0099_2:
					{
						bool L_27;
						L_27 = Enumerator_MoveNext_m6BFCA349EAC2509C0D75B27CD64354E8BB2E0929((&V_5), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 62));
						if (L_27)
						{
							goto IL_0080_2;
						}
					}
					{
						goto IL_00b2_1;
					}
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00b2_1:
			{
				bool L_28 = V_4;
				if (L_28)
				{
					goto IL_00ba_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_00d5;
			}

IL_00ba_1:
			{
				bool L_29;
				L_29 = Enumerator_MoveNext_m6BFCA349EAC2509C0D75B27CD64354E8BB2E0929((&V_0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 62));
				if (L_29)
				{
					goto IL_006b_1;
				}
			}
			{
				goto IL_00d3;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d3:
	{
		return (bool)1;
	}

IL_00d5:
	{
		bool L_30 = V_2;
		return L_30;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_m80B2D2C00AB07F2C6D8EC516572FD36E007CD487_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* ___0_set1, HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* ___1_set2, const RuntimeMethod* method) 
{
	{
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_0 = ___0_set1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = HashSet_1_get_Comparer_m9E0C308E111E5BB1B52F8FD1F03688AADB791982_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 65));
		HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* L_2 = ___1_set2;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = HashSet_1_get_Comparer_m9E0C308E111E5BB1B52F8FD1F03688AADB791982_inline(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 65));
		NullCheck((RuntimeObject*)L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, (RuntimeObject*)L_1, (RuntimeObject*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m38C32C3B5A7094BC22FE52EBCCF45EBD690E5252_gshared (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_item, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->____comparer;
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_2 = ___0_item;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1, L_2);
		return ((int32_t)(L_3&((int32_t)2147483647LL)));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m5EE40B5EE446107AFADBA2525C1C7508759658A8_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1_tA3B1D933733F9FCD47DA56535ED7886D3422CB50* L_0;
		L_0 = EqualityComparer_1_get_Default_mFB695EAD762B1CFF4DB8B7A33C6C8327EF377731_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_mA84331C832D0E79D91D87364D68D10C1E4FE6AF7(__this, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mA84331C832D0E79D91D87364D68D10C1E4FE6AF7_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_tA3B1D933733F9FCD47DA56535ED7886D3422CB50* L_1;
		L_1 = EqualityComparer_1_get_Default_mFB695EAD762B1CFF4DB8B7A33C6C8327EF377731_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		___0_comparer = (RuntimeObject*)L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->____comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_2);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____version = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m182D7D9EB68FE947010CB677595149D3EDC4AA30_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		EqualityComparer_1_tA3B1D933733F9FCD47DA56535ED7886D3422CB50* L_1;
		L_1 = EqualityComparer_1_get_Default_mFB695EAD762B1CFF4DB8B7A33C6C8327EF377731_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_m68B4C8486DEF4ADF77AE1EAE5520D671D990FADD(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m3242F932CB4FAC7584CA29E4271DE35A6F980443_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_collection;
		EqualityComparer_1_tA3B1D933733F9FCD47DA56535ED7886D3422CB50* L_1;
		L_1 = EqualityComparer_1_get_Default_mFB695EAD762B1CFF4DB8B7A33C6C8327EF377731_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_m8E66B9416E08EE5E8ED4E04BABA8E3D5C75D231A(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m8E66B9416E08EE5E8ED4E04BABA8E3D5C75D231A_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B8_0 = 0;
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_mA84331C832D0E79D91D87364D68D10C1E4FE6AF7(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RuntimeObject* L_1 = ___0_collection;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_collection;
		V_0 = ((HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_mF86C3DA368B770FD0FB4D9295F2314C38B38784D(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_7 = V_0;
		HashSet_1_CopyFrom_mFF26F13F600E70EE63A7BB6D11D2DF0DFE90CDF1(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}

IL_0030:
	{
		RuntimeObject* L_8 = ___0_collection;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_10);
		G_B8_0 = L_11;
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 0;
	}

IL_0043:
	{
		V_2 = G_B8_0;
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = HashSet_1_Initialize_mE3FA0817AFC7D623138A8F6634D2F9003F369580(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		RuntimeObject* L_14 = ___0_collection;
		HashSet_1_UnionWith_m132500A60EC477412D12F7AE95D9C0E9840EA70B(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_15 = __this->____count;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_16 = __this->____slots;
		NullCheck(L_16);
		int32_t L_17 = __this->____count;
		if ((((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_16)->max_length))/L_17))) <= ((int32_t)3)))
		{
			goto IL_0074;
		}
	}
	{
		HashSet_1_TrimExcess_mCE655D3A846C3F4249E315B02CD75C3398F1CDE3(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
	}

IL_0074:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mB2B288E7EF1508D4F520F7CBB5B051E98DB5744A_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		__this->____siInfo = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_mFF26F13F600E70EE63A7BB6D11D2DF0DFE90CDF1_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_0 = ___0_source;
		NullCheck(L_0);
		int32_t L_1 = L_0->____count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_3 = ___0_source;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->____buckets;
		NullCheck(L_4);
		V_1 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		int32_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(((int32_t)il2cpp_codegen_add(L_5, 1)), NULL);
		int32_t L_7 = V_1;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_8 = ___0_source;
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->____buckets;
		NullCheck((RuntimeArray*)L_9);
		RuntimeObject* L_10;
		L_10 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_9, NULL);
		__this->____buckets = ((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_10, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_10, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var)));
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_11 = ___0_source;
		NullCheck(L_11);
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_12 = L_11->____slots;
		NullCheck((RuntimeArray*)L_12);
		RuntimeObject* L_13;
		L_13 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_12, NULL);
		__this->____slots = ((SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017*)Castclass((RuntimeObject*)L_13, il2cpp_rgctx_data(method->klass->rgctx_data, 16)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)((SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017*)Castclass((RuntimeObject*)L_13, il2cpp_rgctx_data(method->klass->rgctx_data, 16))));
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_14 = ___0_source;
		NullCheck(L_14);
		int32_t L_15 = L_14->____lastIndex;
		__this->____lastIndex = L_15;
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_16 = ___0_source;
		NullCheck(L_16);
		int32_t L_17 = L_16->____freeList;
		__this->____freeList = L_17;
		goto IL_00c7;
	}

IL_0065:
	{
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_18 = ___0_source;
		NullCheck(L_18);
		int32_t L_19 = L_18->____lastIndex;
		V_2 = L_19;
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_20 = ___0_source;
		NullCheck(L_20);
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_21 = L_20->____slots;
		V_3 = L_21;
		int32_t L_22 = V_0;
		int32_t L_23;
		L_23 = HashSet_1_Initialize_mE3FA0817AFC7D623138A8F6634D2F9003F369580(__this, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_4 = 0;
		V_5 = 0;
		goto IL_00ba;
	}

IL_0083:
	{
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_24 = V_3;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode;
		V_6 = L_26;
		int32_t L_27 = V_6;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_28 = V_4;
		int32_t L_29 = V_6;
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_30 = V_3;
		int32_t L_31 = V_5;
		NullCheck(L_30);
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		HashSet_1_AddValue_m96A0A64CA666C113BC119202615514C8F745DAB1(__this, L_28, L_29, L_32, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00b4:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00ba:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = V_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_37 = V_4;
		__this->____lastIndex = L_37;
	}

IL_00c7:
	{
		int32_t L_38 = V_0;
		__this->____count = L_38;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m68B4C8486DEF4ADF77AE1EAE5520D671D990FADD_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_mA84331C832D0E79D91D87364D68D10C1E4FE6AF7(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0016:
	{
		int32_t L_3 = ___0_capacity;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___0_capacity;
		int32_t L_5;
		L_5 = HashSet_1_Initialize_mE3FA0817AFC7D623138A8F6634D2F9003F369580(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0022:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_mF0E27EF89D47C9411DF7604CC6800C97AD4BC6EA_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___0_item, const RuntimeMethod* method) 
{
	{
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_m8B0536551F4711335C12E1681CE3BD5B54FDF66A(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m11932525C3BF62A509C2B1791260C61850AFBAFF_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____lastIndex;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_1 = __this->____slots;
		int32_t L_2 = __this->____lastIndex;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, L_2, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
	}

IL_0044:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m93591D4087832CAB4ED735F3803B8EDDCC39246B_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0080;
		}
	}
	{
		V_0 = 0;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_mF732F65D490EE103994E0F586A91ED1F0468DBF2(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_1 = L_2;
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_3 = __this->____slots;
		V_2 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		int32_t L_5 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		NullCheck(L_6);
		NullCheck(L_4);
		int32_t L_7 = ((int32_t)(L_5%((int32_t)(((RuntimeArray*)L_6)->max_length))));
		int32_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		goto IL_007c;
	}

IL_002f:
	{
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_9 = V_2;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___hashCode;
		int32_t L_12 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_13 = __this->____comparer;
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___value;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_17 = ___0_item;
		NullCheck(L_13);
		bool L_18;
		L_18 = InterfaceFuncInvoker2< bool, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_13, L_16, L_17);
		if (!L_18)
		{
			goto IL_005a;
		}
	}
	{
		return (bool)1;
	}

IL_005a:
	{
		int32_t L_19 = V_0;
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_20 = V_2;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_006b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_21 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_006b:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_23 = V_2;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___next;
		V_3 = L_25;
	}

IL_007c:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}

IL_0080:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mE48476A4A9575A56C96B7158CEFC510DEC92080A_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, int3U5BU5D_t229A503AFCA400BB5E6C562712AD389098E2FF26* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		int3U5BU5D_t229A503AFCA400BB5E6C562712AD389098E2FF26* L_0 = ___0_array;
		int32_t L_1 = ___1_arrayIndex;
		int32_t L_2 = __this->____count;
		HashSet_1_CopyTo_m47B5E068904A3A9B5F90DA9A34770AA3AD2EB88C(__this, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mECC76AFB2377CA54428F1076B18526913E9568DF_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* V_4 = NULL;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0154;
		}
	}
	{
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_mF732F65D490EE103994E0F586A91ED1F0468DBF2(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_2;
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		V_1 = ((int32_t)(L_3%((int32_t)(((RuntimeArray*)L_4)->max_length))));
		V_2 = (-1);
		V_3 = 0;
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_5 = __this->____slots;
		V_4 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_014c;
	}

IL_003b:
	{
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_10 = V_4;
		int32_t L_11 = V_5;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0123;
		}
	}
	{
		RuntimeObject* L_14 = __this->____comparer;
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_15 = V_4;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___value;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_18 = ___0_item;
		NullCheck(L_14);
		bool L_19;
		L_19 = InterfaceFuncInvoker2< bool, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_14, L_17, L_18);
		if (!L_19)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->____buckets;
		int32_t L_22 = V_1;
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_23 = V_4;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___next;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (int32_t)((int32_t)il2cpp_codegen_add(L_25, 1)));
		goto IL_00a7;
	}

IL_008c:
	{
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_26 = V_4;
		int32_t L_27 = V_2;
		NullCheck(L_26);
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_28 = V_4;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		int32_t L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___next;
		((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___next = L_30;
	}

IL_00a7:
	{
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_31 = V_4;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___hashCode = (-1);
		goto IL_00d1;
	}

IL_00d1:
	{
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_33 = V_4;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		int32_t L_35 = __this->____freeList;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___next = L_35;
		int32_t L_36 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		int32_t L_38 = __this->____count;
		if (L_38)
		{
			goto IL_0119;
		}
	}
	{
		__this->____lastIndex = 0;
		__this->____freeList = (-1);
		goto IL_0121;
	}

IL_0119:
	{
		int32_t L_39 = V_5;
		__this->____freeList = L_39;
	}

IL_0121:
	{
		return (bool)1;
	}

IL_0123:
	{
		int32_t L_40 = V_3;
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_41 = V_4;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_0135;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_42 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_42, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, method);
	}

IL_0135:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		int32_t L_44 = V_5;
		V_2 = L_44;
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_45 = V_4;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = ((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___next;
		V_5 = L_47;
	}

IL_014c:
	{
		int32_t L_48 = V_5;
		if ((((int32_t)L_48) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}

IL_0154:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_mA102A68A3C7550BA9E888E08C4495D88C23E4685_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_mD79E26C589464FE819110134D7A47899EF11D752_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t3A3D0CB1E039CA2A4D21932E46575AA117FA0F9A HashSet_1_GetEnumerator_m49847C49F34A02169D4E1C6E2546E73A96AEA1C7_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3A3D0CB1E039CA2A4D21932E46575AA117FA0F9A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m9633D23E13B67B1AAC008BB0F7E9DFE8DCB8DD62((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m56881932C6BBF57779E28D24AD296677F99CC14B_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3A3D0CB1E039CA2A4D21932E46575AA117FA0F9A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m9633D23E13B67B1AAC008BB0F7E9DFE8DCB8DD62((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_t3A3D0CB1E039CA2A4D21932E46575AA117FA0F9A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_IEnumerable_GetEnumerator_mADAD5330E8AE2E4FA3956F42C5FE034197029F7F_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3A3D0CB1E039CA2A4D21932E46575AA117FA0F9A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m9633D23E13B67B1AAC008BB0F7E9DFE8DCB8DD62((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_t3A3D0CB1E039CA2A4D21932E46575AA117FA0F9A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_GetObjectData_m1639ADD8B1DF84C691CF21A456895AB3FBDC9AFB_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	int3U5BU5D_t229A503AFCA400BB5E6C562712AD389098E2FF26* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		int32_t L_3 = __this->____version;
		NullCheck(L_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_2, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeObject* L_5 = __this->____comparer;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 30)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_4, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, (RuntimeObject*)L_5, L_7, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		if (!L_9)
		{
			G_B4_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
			G_B4_1 = L_8;
			goto IL_0052;
		}
		G_B3_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
		G_B3_1 = L_8;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		NullCheck(L_10);
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_10)->max_length));
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0053;
	}

IL_0052:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0053:
	{
		NullCheck(G_B5_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B5_2, G_B5_1, G_B5_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		if (!L_11)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_12 = __this->____count;
		int3U5BU5D_t229A503AFCA400BB5E6C562712AD389098E2FF26* L_13 = (int3U5BU5D_t229A503AFCA400BB5E6C562712AD389098E2FF26*)(int3U5BU5D_t229A503AFCA400BB5E6C562712AD389098E2FF26*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 31), (uint32_t)L_12);
		V_0 = L_13;
		int3U5BU5D_t229A503AFCA400BB5E6C562712AD389098E2FF26* L_14 = V_0;
		HashSet_1_CopyTo_mAABBA9B15620D48EE8CF6F17CE7746391D7B91E5(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_15 = ___0_info;
		int3U5BU5D_t229A503AFCA400BB5E6C562712AD389098E2FF26* L_16 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		NullCheck(L_15);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_15, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, (RuntimeObject*)L_16, L_18, NULL);
	}

IL_0089:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_OnDeserialization_m29F40415AC06E696E259367AC5C8525766915FCA_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int3U5BU5D_t229A503AFCA400BB5E6C562712AD389098E2FF26* V_1 = NULL;
	int32_t V_2 = 0;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = __this->____siInfo;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = __this->____siInfo;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_1, _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865, NULL);
		V_0 = L_2;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		NullCheck(L_3);
		RuntimeObject* L_6;
		L_6 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_3, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4))));
		__this->____freeList = (-1);
		int32_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->____buckets = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_9);
		int32_t L_10 = V_0;
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_11 = (SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017*)(SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_10);
		__this->____slots = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_11);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_12 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		NullCheck(L_12);
		RuntimeObject* L_15;
		L_15 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_12, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, L_14, NULL);
		V_1 = ((int3U5BU5D_t229A503AFCA400BB5E6C562712AD389098E2FF26*)Castclass((RuntimeObject*)L_15, il2cpp_rgctx_data(method->klass->rgctx_data, 24)));
		int3U5BU5D_t229A503AFCA400BB5E6C562712AD389098E2FF26* L_16 = V_1;
		if (L_16)
		{
			goto IL_008f;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_17 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_008f:
	{
		V_2 = 0;
		goto IL_00a5;
	}

IL_0093:
	{
		int3U5BU5D_t229A503AFCA400BB5E6C562712AD389098E2FF26* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		bool L_22;
		L_22 = HashSet_1_AddIfNotPresent_m8B0536551F4711335C12E1681CE3BD5B54FDF66A(__this, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00a5:
	{
		int32_t L_24 = V_2;
		int3U5BU5D_t229A503AFCA400BB5E6C562712AD389098E2FF26* L_25 = V_1;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0093;
		}
	}
	{
		goto IL_00b4;
	}

IL_00ad:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00b4:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_26 = __this->____siInfo;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_26, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		__this->____version = L_27;
		__this->____siInfo = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m0A1AF0309FEEF99695EAAE02B768E38EC5828A28_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___0_item, const RuntimeMethod* method) 
{
	{
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_m8B0536551F4711335C12E1681CE3BD5B54FDF66A(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_TryGetValue_m6F9BDB23C84F25C93B531FD5C08A60CDF4598F4E_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___0_equalValue, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF* ___1_actualValue, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_1 = ___0_equalValue;
		int32_t L_2;
		L_2 = HashSet_1_InternalIndexOf_mCEA12CBE772BDE247D7095341B6B7DB821798268(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF* L_4 = ___1_actualValue;
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_5 = __this->____slots;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		*(int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF*)L_4 = L_7;
		return (bool)1;
	}

IL_002d:
	{
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF* L_8 = ___1_actualValue;
		il2cpp_codegen_initobj(L_8, sizeof(int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_m132500A60EC477412D12F7AE95D9C0E9840EA70B_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck((RuntimeObject*)L_5);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
				}

IL_0039:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0026_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_7;
				L_7 = InterfaceFuncInvoker0< int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_6);
				V_1 = L_7;
				int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_8 = V_1;
				bool L_9;
				L_9 = HashSet_1_AddIfNotPresent_m8B0536551F4711335C12E1681CE3BD5B54FDF66A(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
			}

IL_0026_1:
			{
				RuntimeObject* L_10 = V_0;
				NullCheck((RuntimeObject*)L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
				if (L_11)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_003a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWith_m3BBCF13662BE198B30443F2E4F180FD264BE6430_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*)__this))))
		{
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_6);
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		HashSet_1_Clear_m11932525C3BF62A509C2B1791260C61850AFBAFF(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		return;
	}

IL_0035:
	{
		RuntimeObject* L_8 = ___0_other;
		V_1 = ((HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*)IsInstClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_10 = V_1;
		bool L_11;
		L_11 = HashSet_1_AreEqualityComparersEqual_mF86C3DA368B770FD0FB4D9295F2314C38B38784D(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_11)
		{
			goto IL_0050;
		}
	}
	{
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_12 = V_1;
		HashSet_1_IntersectWithHashSetWithSameEC_m3C3C456EA0CC853F8181FE7E1E88D39046DA84D2(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}

IL_0050:
	{
		RuntimeObject* L_13 = ___0_other;
		HashSet_1_IntersectWithEnumerable_mAEA29924CC49946DCB5601E9279EEFD770860041(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_ExceptWith_m41D4C54870E29A91389FB35A3BEE317426A56164_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*)__this))))
		{
			goto IL_0022;
		}
	}
	{
		HashSet_1_Clear_m11932525C3BF62A509C2B1791260C61850AFBAFF(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		return;
	}

IL_0022:
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				}

IL_004d:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003a_1;
			}

IL_002b_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_9;
				L_9 = InterfaceFuncInvoker0< int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_8);
				V_1 = L_9;
				int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_10 = V_1;
				bool L_11;
				L_11 = HashSet_1_Remove_mECC76AFB2377CA54428F1076B18526913E9568DF(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
			}

IL_003a_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck((RuntimeObject*)L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
				if (L_13)
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_004e;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWith_mC760DBFF2CE08750A39F7BDA9E4A83118DECA1C2_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_3 = ___0_other;
		HashSet_1_UnionWith_m132500A60EC477412D12F7AE95D9C0E9840EA70B(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*)__this))))
		{
			goto IL_0029;
		}
	}
	{
		HashSet_1_Clear_m11932525C3BF62A509C2B1791260C61850AFBAFF(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		return;
	}

IL_0029:
	{
		RuntimeObject* L_5 = ___0_other;
		V_0 = ((HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*)IsInstClass((RuntimeObject*)L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_6 = V_0;
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_7 = V_0;
		bool L_8;
		L_8 = HashSet_1_AreEqualityComparersEqual_mF86C3DA368B770FD0FB4D9295F2314C38B38784D(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_9 = V_0;
		HashSet_1_SymmetricExceptWithUniqueHashSet_mE6C6FF13E1AD272A09DCFFB5D8D9D77E0C09EEA6(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}

IL_0044:
	{
		RuntimeObject* L_10 = ___0_other;
		HashSet_1_SymmetricExceptWithEnumerable_m71DEC7F85AFE40C6DEE77707F98A1DC32CF6FA0C(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOf_mD8A09B7AF578A4C009ACA74EF6B30CC44FAA5A96_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* V_0 = NULL;
	ElementCount_tC619A6BA4F7B87ECD3DFC8B1500C28F177C6B5CA V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)1;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*)IsInstClass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_6 = V_0;
		bool L_7;
		L_7 = HashSet_1_AreEqualityComparersEqual_mF86C3DA368B770FD0FB4D9295F2314C38B38784D(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_8 = __this->____count;
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = HashSet_1_get_Count_mA102A68A3C7550BA9E888E08C4495D88C23E4685_inline(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		if ((((int32_t)L_8) <= ((int32_t)L_10)))
		{
			goto IL_0041;
		}
	}
	{
		return (bool)0;
	}

IL_0041:
	{
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_11 = V_0;
		bool L_12;
		L_12 = HashSet_1_IsSubsetOfHashSetWithSameEC_m546FAC26FF7973B82997C1EE004C8957DDF417F9(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return L_12;
	}

IL_0049:
	{
		RuntimeObject* L_13 = ___0_other;
		ElementCount_tC619A6BA4F7B87ECD3DFC8B1500C28F177C6B5CA L_14;
		L_14 = HashSet_1_CheckUniqueAndUnfoundElements_m10283339477DFFB8F2A17B32F1634ADC41E2A66A(__this, L_13, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		V_1 = L_14;
		ElementCount_tC619A6BA4F7B87ECD3DFC8B1500C28F177C6B5CA L_15 = V_1;
		int32_t L_16 = L_15.___uniqueCount;
		int32_t L_17 = __this->____count;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_006d;
		}
	}
	{
		ElementCount_tC619A6BA4F7B87ECD3DFC8B1500C28F177C6B5CA L_18 = V_1;
		int32_t L_19 = L_18.___unfoundCount;
		return (bool)((((int32_t)((((int32_t)L_19) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_006d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsProperSubsetOf_m7E6831A663FBF8D343A97A413ECBA5EFCAECA41A_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	ElementCount_tC619A6BA4F7B87ECD3DFC8B1500C28F177C6B5CA V_1;
	memset((&V_1), 0, sizeof(V_1));
	HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0065;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)0;
	}

IL_0028:
	{
		int32_t L_7 = __this->____count;
		if (L_7)
		{
			goto IL_003a;
		}
	}
	{
		RuntimeObject* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_8);
		return (bool)((((int32_t)L_9) > ((int32_t)0))? 1 : 0);
	}

IL_003a:
	{
		RuntimeObject* L_10 = ___0_other;
		V_2 = ((HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*)IsInstClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_12 = V_2;
		bool L_13;
		L_13 = HashSet_1_AreEqualityComparersEqual_mF86C3DA368B770FD0FB4D9295F2314C38B38784D(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_13)
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_14 = __this->____count;
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = HashSet_1_get_Count_mA102A68A3C7550BA9E888E08C4495D88C23E4685_inline(L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_005d;
		}
	}
	{
		return (bool)0;
	}

IL_005d:
	{
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_17 = V_2;
		bool L_18;
		L_18 = HashSet_1_IsSubsetOfHashSetWithSameEC_m546FAC26FF7973B82997C1EE004C8957DDF417F9(__this, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return L_18;
	}

IL_0065:
	{
		RuntimeObject* L_19 = ___0_other;
		ElementCount_tC619A6BA4F7B87ECD3DFC8B1500C28F177C6B5CA L_20;
		L_20 = HashSet_1_CheckUniqueAndUnfoundElements_m10283339477DFFB8F2A17B32F1634ADC41E2A66A(__this, L_19, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		V_1 = L_20;
		ElementCount_tC619A6BA4F7B87ECD3DFC8B1500C28F177C6B5CA L_21 = V_1;
		int32_t L_22 = L_21.___uniqueCount;
		int32_t L_23 = __this->____count;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_0086;
		}
	}
	{
		ElementCount_tC619A6BA4F7B87ECD3DFC8B1500C28F177C6B5CA L_24 = V_1;
		int32_t L_25 = L_24.___unfoundCount;
		return (bool)((((int32_t)L_25) > ((int32_t)0))? 1 : 0);
	}

IL_0086:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSupersetOf_m7EAAC0DB10E5CA88B17C1ABF14CF7AC09C3FDF86_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		RuntimeObject* L_7 = ___0_other;
		V_1 = ((HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*)IsInstClass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_8 = V_1;
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_9 = V_1;
		bool L_10;
		L_10 = HashSet_1_AreEqualityComparersEqual_mF86C3DA368B770FD0FB4D9295F2314C38B38784D(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = HashSet_1_get_Count_mA102A68A3C7550BA9E888E08C4495D88C23E4685_inline(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		int32_t L_13 = __this->____count;
		if ((((int32_t)L_12) <= ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		return (bool)0;
	}

IL_004b:
	{
		RuntimeObject* L_14 = ___0_other;
		bool L_15;
		L_15 = HashSet_1_ContainsAllElements_mD92047BCA431E17F5B6668030BEC2566295EFAC3(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsProperSupersetOf_m271D369D17B16E97A6B7E008F2828840DB2B225B_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	ElementCount_tC619A6BA4F7B87ECD3DFC8B1500C28F177C6B5CA V_1;
	memset((&V_1), 0, sizeof(V_1));
	HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)0;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_5 = V_0;
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		RuntimeObject* L_8 = ___0_other;
		V_2 = ((HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*)IsInstClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_9 = V_2;
		if (!L_9)
		{
			goto IL_005d;
		}
	}
	{
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_10 = V_2;
		bool L_11;
		L_11 = HashSet_1_AreEqualityComparersEqual_mF86C3DA368B770FD0FB4D9295F2314C38B38784D(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = HashSet_1_get_Count_mA102A68A3C7550BA9E888E08C4495D88C23E4685_inline(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0055;
		}
	}
	{
		return (bool)0;
	}

IL_0055:
	{
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_15 = V_2;
		bool L_16;
		L_16 = HashSet_1_ContainsAllElements_mD92047BCA431E17F5B6668030BEC2566295EFAC3(__this, (RuntimeObject*)L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		return L_16;
	}

IL_005d:
	{
		RuntimeObject* L_17 = ___0_other;
		ElementCount_tC619A6BA4F7B87ECD3DFC8B1500C28F177C6B5CA L_18;
		L_18 = HashSet_1_CheckUniqueAndUnfoundElements_m10283339477DFFB8F2A17B32F1634ADC41E2A66A(__this, L_17, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		V_1 = L_18;
		ElementCount_tC619A6BA4F7B87ECD3DFC8B1500C28F177C6B5CA L_19 = V_1;
		int32_t L_20 = L_19.___uniqueCount;
		int32_t L_21 = __this->____count;
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_007e;
		}
	}
	{
		ElementCount_tC619A6BA4F7B87ECD3DFC8B1500C28F177C6B5CA L_22 = V_1;
		int32_t L_23 = L_22.___unfoundCount;
		return (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_007e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Overlaps_m5C6F933A0B1979A346B3B872268712BF2F4E3217_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004e;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				}

IL_004e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003b_1;
			}

IL_0027_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_9;
				L_9 = InterfaceFuncInvoker0< int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_8);
				V_1 = L_9;
				int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_10 = V_1;
				bool L_11;
				L_11 = HashSet_1_Contains_m93591D4087832CAB4ED735F3803B8EDDCC39246B(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
				if (!L_11)
				{
					goto IL_003b_1;
				}
			}
			{
				V_2 = (bool)1;
				goto IL_0051;
			}

IL_003b_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck((RuntimeObject*)L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
				if (L_13)
				{
					goto IL_0027_1;
				}
			}
			{
				goto IL_004f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		return (bool)0;
	}

IL_0051:
	{
		bool L_14 = V_2;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_SetEquals_mF0BB87E776BA64CA24F7B878058C12EC0A399AD2_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	ElementCount_tC619A6BA4F7B87ECD3DFC8B1500C28F177C6B5CA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_4 = V_0;
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_mF86C3DA368B770FD0FB4D9295F2314C38B38784D(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_7 = __this->____count;
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = HashSet_1_get_Count_mA102A68A3C7550BA9E888E08C4495D88C23E4685_inline(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		if ((((int32_t)L_7) == ((int32_t)L_9)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0037:
	{
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_10 = V_0;
		bool L_11;
		L_11 = HashSet_1_ContainsAllElements_mD92047BCA431E17F5B6668030BEC2566295EFAC3(__this, (RuntimeObject*)L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		return L_11;
	}

IL_003f:
	{
		RuntimeObject* L_12 = ___0_other;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_13 = V_1;
		if (!L_13)
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_14 = __this->____count;
		if (L_14)
		{
			goto IL_005c;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_15);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		return (bool)0;
	}

IL_005c:
	{
		RuntimeObject* L_17 = ___0_other;
		ElementCount_tC619A6BA4F7B87ECD3DFC8B1500C28F177C6B5CA L_18;
		L_18 = HashSet_1_CheckUniqueAndUnfoundElements_m10283339477DFFB8F2A17B32F1634ADC41E2A66A(__this, L_17, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		V_2 = L_18;
		ElementCount_tC619A6BA4F7B87ECD3DFC8B1500C28F177C6B5CA L_19 = V_2;
		int32_t L_20 = L_19.___uniqueCount;
		int32_t L_21 = __this->____count;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_007d;
		}
	}
	{
		ElementCount_tC619A6BA4F7B87ECD3DFC8B1500C28F177C6B5CA L_22 = V_2;
		int32_t L_23 = L_22.___unfoundCount;
		return (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_007d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mAABBA9B15620D48EE8CF6F17CE7746391D7B91E5_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, int3U5BU5D_t229A503AFCA400BB5E6C562712AD389098E2FF26* ___0_array, const RuntimeMethod* method) 
{
	{
		int3U5BU5D_t229A503AFCA400BB5E6C562712AD389098E2FF26* L_0 = ___0_array;
		int32_t L_1 = __this->____count;
		HashSet_1_CopyTo_m47B5E068904A3A9B5F90DA9A34770AA3AD2EB88C(__this, L_0, 0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m47B5E068904A3A9B5F90DA9A34770AA3AD2EB88C_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, int3U5BU5D_t229A503AFCA400BB5E6C562712AD389098E2FF26* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int3U5BU5D_t229A503AFCA400BB5E6C562712AD389098E2FF26* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0028:
	{
		int32_t L_7 = ___2_count;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = ___2_count;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_9);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0042:
	{
		int32_t L_12 = ___1_arrayIndex;
		int3U5BU5D_t229A503AFCA400BB5E6C562712AD389098E2FF26* L_13 = ___0_array;
		NullCheck(L_13);
		if ((((int32_t)L_12) > ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_14 = ___2_count;
		int3U5BU5D_t229A503AFCA400BB5E6C562712AD389098E2FF26* L_15 = ___0_array;
		NullCheck(L_15);
		int32_t L_16 = ___1_arrayIndex;
		if ((((int32_t)L_14) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)))))
		{
			goto IL_005b;
		}
	}

IL_0050:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_17 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_005b:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0097;
	}

IL_0061:
	{
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_18 = __this->____slots;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___hashCode;
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		int3U5BU5D_t229A503AFCA400BB5E6C562712AD389098E2FF26* L_21 = ___0_array;
		int32_t L_22 = ___1_arrayIndex;
		int32_t L_23 = V_0;
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_24 = __this->____slots;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___value;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, L_23))), (int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF)L_26);
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0093:
	{
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0097:
	{
		int32_t L_29 = V_1;
		int32_t L_30 = __this->____lastIndex;
		if ((((int32_t)L_29) >= ((int32_t)L_30)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_31 = V_0;
		int32_t L_32 = ___2_count;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0061;
		}
	}

IL_00a4:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_RemoveWhere_m0E0211D5F1BC97563C4AB0D35B6A40979A17E59F_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, Predicate_1_t7F3BBF48975AA1093F31885E875DDACD41E9AAF3* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Predicate_1_t7F3BBF48975AA1093F31885E875DDACD41E9AAF3* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0054;
	}

IL_0014:
	{
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_2 = __this->____slots;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_5 = __this->____slots;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		V_2 = L_7;
		Predicate_1_t7F3BBF48975AA1093F31885E875DDACD41E9AAF3* L_8 = ___0_match;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_9 = V_2;
		NullCheck(L_8);
		bool L_10;
		L_10 = Predicate_1_Invoke_mDF73A0B6D0DF1E104D3A8E1AABE0A355D00ECEE2_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_11 = V_2;
		bool L_12;
		L_12 = HashSet_1_Remove_mECC76AFB2377CA54428F1076B18526913E9568DF(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0050:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____lastIndex;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_mCAEE62B8999A728702AFE3940A3EA6082FB39546_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____comparer;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_EnsureCapacity_mB0EBF64E59F2C4FA025BC92CD20917F4662786A5_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000f:
	{
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_3 = __this->____slots;
		NullCheck(L_3);
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
		goto IL_0022;
	}

IL_0021:
	{
		G_B5_0 = 0;
	}

IL_0022:
	{
		V_0 = G_B5_0;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_capacity;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		if (L_7)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_8 = ___0_capacity;
		int32_t L_9;
		L_9 = HashSet_1_Initialize_mE3FA0817AFC7D623138A8F6634D2F9003F369580(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return L_9;
	}

IL_0039:
	{
		int32_t L_10 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_10, NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		HashSet_1_SetCapacity_mC9D37AF68CEEF6AC91CB1195ADF93D58C12421AD(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		int32_t L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_mCE655D3A846C3F4249E315B02CD75C3398F1CDE3_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->____slots = (SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)(SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017*)NULL);
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}

IL_0025:
	{
		int32_t L_2 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_5 = (SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017*)(SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_4);
		V_1 = L_5;
		int32_t L_6 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_2 = L_7;
		V_3 = 0;
		V_4 = 0;
		goto IL_00a2;
	}

IL_0046:
	{
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_8 = __this->____slots;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_11 = V_1;
		int32_t L_12 = V_3;
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_13 = __this->____slots;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Slot_tB63CD2518F6D7144210EB8A285CA4C855672E937 L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (Slot_tB63CD2518F6D7144210EB8A285CA4C855672E937)L_16);
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_17 = V_1;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_0;
		V_5 = ((int32_t)(L_19%L_20));
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_21 = V_1;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_2;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___next = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = V_3;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)((int32_t)il2cpp_codegen_add(L_29, 1)));
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_009c:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00a2:
	{
		int32_t L_32 = V_4;
		int32_t L_33 = __this->____lastIndex;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_34 = V_3;
		__this->____lastIndex = L_34;
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_35 = V_1;
		__this->____slots = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_35);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_2;
		__this->____buckets = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_36);
		__this->____freeList = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_CreateSetComparer_m063DCA3D425E7073C4F058D6AE50902DAB6842B1_gshared (const RuntimeMethod* method) 
{
	{
		HashSetEqualityComparer_1_tDFACFD224D2EB4F75EA99B04686F77CCB360CFFB* L_0 = (HashSetEqualityComparer_1_tDFACFD224D2EB4F75EA99B04686F77CCB360CFFB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 55));
		HashSetEqualityComparer_1__ctor_m9AE008FBBDB462B7003EF456764FACCB0D012B80(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 56));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_mE3FA0817AFC7D623138A8F6634D2F9003F369580_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_5 = (SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017*)(SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_4);
		__this->____slots = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m2DE98E1E8C23CB414B7FC96311B6C332B13FE8DB_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____count;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91930CCAB5CB8F6F327407F9A14CF42F57A0F27B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = V_0;
		HashSet_1_SetCapacity_mC9D37AF68CEEF6AC91CB1195ADF93D58C12421AD(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_mC9D37AF68CEEF6AC91CB1195ADF93D58C12421AD_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___0_newSize;
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_1 = (SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017*)(SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_0);
		V_0 = L_1;
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_3 = __this->____slots;
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_4 = V_0;
		int32_t L_5 = __this->____lastIndex;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0023:
	{
		int32_t L_6 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0058;
	}

IL_002e:
	{
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = ___0_newSize;
		V_3 = ((int32_t)(L_10%L_11));
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___next = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_3;
		int32_t L_20 = V_2;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1)));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0058:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = __this->____lastIndex;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002e;
		}
	}
	{
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_24 = V_0;
		__this->____slots = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_1;
		__this->____buckets = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_25);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_m8B0536551F4711335C12E1681CE3BD5B54FDF66A_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1;
		L_1 = HashSet_1_Initialize_mE3FA0817AFC7D623138A8F6634D2F9003F369580(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0010:
	{
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_2 = ___0_value;
		int32_t L_3;
		L_3 = HashSet_1_InternalGetHashCode_mF732F65D490EE103994E0F586A91ED1F0468DBF2(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_3;
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		V_1 = ((int32_t)(L_4%((int32_t)(((RuntimeArray*)L_5)->max_length))));
		V_2 = 0;
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_6 = __this->____slots;
		V_3 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		goto IL_008b;
	}

IL_003a:
	{
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_11 = V_3;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		int32_t L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___hashCode;
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_15 = __this->____comparer;
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_16 = V_3;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		int32_t L_21 = V_2;
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_22 = V_3;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0078;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_0078:
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_25 = V_3;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_5 = L_27;
	}

IL_008b:
	{
		int32_t L_28 = V_5;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_29 = __this->____freeList;
		if ((((int32_t)L_29) < ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_30 = __this->____freeList;
		V_4 = L_30;
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_31 = V_3;
		int32_t L_32 = V_4;
		NullCheck(L_31);
		int32_t L_33 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next;
		__this->____freeList = L_33;
		goto IL_00ef;
	}

IL_00b6:
	{
		int32_t L_34 = __this->____lastIndex;
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_35 = V_3;
		NullCheck(L_35);
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))))
		{
			goto IL_00d9;
		}
	}
	{
		HashSet_1_IncreaseCapacity_m2DE98E1E8C23CB414B7FC96311B6C332B13FE8DB(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_36 = __this->____slots;
		V_3 = L_36;
		int32_t L_37 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->____buckets;
		NullCheck(L_38);
		V_1 = ((int32_t)(L_37%((int32_t)(((RuntimeArray*)L_38)->max_length))));
	}

IL_00d9:
	{
		int32_t L_39 = __this->____lastIndex;
		V_4 = L_39;
		int32_t L_40 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ef:
	{
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_41 = V_3;
		int32_t L_42 = V_4;
		NullCheck(L_41);
		int32_t L_43 = V_0;
		((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode = L_43;
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_44 = V_3;
		int32_t L_45 = V_4;
		NullCheck(L_44);
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_46 = ___0_value;
		((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___value = L_46;
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_47 = V_3;
		int32_t L_48 = V_4;
		NullCheck(L_47);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = __this->____buckets;
		int32_t L_50 = V_1;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___next = ((int32_t)il2cpp_codegen_subtract(L_52, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		int32_t L_55 = V_4;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(L_54), (int32_t)((int32_t)il2cpp_codegen_add(L_55, 1)));
		int32_t L_56 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_56, 1));
		int32_t L_57 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_57, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m96A0A64CA666C113BC119202615514C8F745DAB1_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, int32_t ___0_index, int32_t ___1_hashCode, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___2_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		NullCheck(L_1);
		V_0 = ((int32_t)(L_0%((int32_t)(((RuntimeArray*)L_1)->max_length))));
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_2 = __this->____slots;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		int32_t L_4 = ___1_hashCode;
		((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode = L_4;
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_5 = __this->____slots;
		int32_t L_6 = ___0_index;
		NullCheck(L_5);
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_7 = ___2_value;
		((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value = L_7;
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_8 = __this->____slots;
		int32_t L_9 = ___0_index;
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___next = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____buckets;
		int32_t L_15 = V_0;
		int32_t L_16 = ___0_index;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (int32_t)((int32_t)il2cpp_codegen_add(L_16, 1)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_ContainsAllElements_mD92047BCA431E17F5B6668030BEC2566295EFAC3_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0030;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_0030:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_001d_1;
			}

IL_0009_1:
			{
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_5;
				L_5 = InterfaceFuncInvoker0< int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_4);
				V_1 = L_5;
				int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_6 = V_1;
				bool L_7;
				L_7 = HashSet_1_Contains_m93591D4087832CAB4ED735F3803B8EDDCC39246B(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
				if (L_7)
				{
					goto IL_001d_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0033;
			}

IL_001d_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck((RuntimeObject*)L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				if (L_9)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0031;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		return (bool)1;
	}

IL_0033:
	{
		bool L_10 = V_2;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOfHashSetWithSameEC_m546FAC26FF7973B82997C1EE004C8957DDF417F9_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* ___0_other, const RuntimeMethod* method) 
{
	Enumerator_t3A3D0CB1E039CA2A4D21932E46575AA117FA0F9A V_0;
	memset((&V_0), 0, sizeof(V_0));
	int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		Enumerator_t3A3D0CB1E039CA2A4D21932E46575AA117FA0F9A L_0;
		L_0 = HashSet_1_GetEnumerator_m49847C49F34A02169D4E1C6E2546E73A96AEA1C7(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{
				Enumerator_Dispose_m131B1D6B6B3B83539DD9608E0F98C2642BEDE8AB((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 63));
				return;
			}
		});
		try
		{
			{
				goto IL_001e_1;
			}

IL_0009_1:
			{
				int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_1;
				L_1 = Enumerator_get_Current_m210CE4A2BAA9537A817DBE89106EC3F0876B369A_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 60));
				V_1 = L_1;
				HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_2 = ___0_other;
				int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_3 = V_1;
				NullCheck(L_2);
				bool L_4;
				L_4 = HashSet_1_Contains_m93591D4087832CAB4ED735F3803B8EDDCC39246B(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
				if (L_4)
				{
					goto IL_001e_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0039;
			}

IL_001e_1:
			{
				bool L_5;
				L_5 = Enumerator_MoveNext_mBC1EFDA8FA71B5BB546AE0B519FBBB6C66CBD553((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
				if (L_5)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0037;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		return (bool)1;
	}

IL_0039:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithHashSetWithSameEC_m3C3C456EA0CC853F8181FE7E1E88D39046DA84D2_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* ___0_other, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = 0;
		goto IL_003f;
	}

IL_0004:
	{
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_0 = __this->____slots;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->___hashCode;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_3 = __this->____slots;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		V_1 = L_5;
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_6 = ___0_other;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_7 = V_1;
		NullCheck(L_6);
		bool L_8;
		L_8 = HashSet_1_Contains_m93591D4087832CAB4ED735F3803B8EDDCC39246B(L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		if (L_8)
		{
			goto IL_003b;
		}
	}
	{
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_9 = V_1;
		bool L_10;
		L_10 = HashSet_1_Remove_mECC76AFB2377CA54428F1076B18526913E9568DF(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
	}

IL_003b:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_003f:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____lastIndex;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithEnumerable_mAEA29924CC49946DCB5601E9279EEFD770860041_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = __this->____lastIndex;
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_1, NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)100))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = V_1;
		if ((uintptr_t)((uintptr_t)L_4) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_5 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_4), 4));
		int8_t* L_6 = (int8_t*) (L_5 ? alloca(L_5) : NULL);
		memset(L_6, 0, L_5);
		int32_t L_7 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_8 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_8, (int32_t*)(L_6), L_7, NULL);
		V_2 = L_8;
		goto IL_002f;
	}

IL_0022:
	{
		int32_t L_9 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_9);
		int32_t L_11 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_12 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_12, L_10, L_11, NULL);
		V_2 = L_12;
	}

IL_002f:
	{
		RuntimeObject* L_13 = ___0_other;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_13);
		V_3 = L_14;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0061:
			{
				{
					RuntimeObject* L_15 = V_3;
					if (!L_15)
					{
						goto IL_006a;
					}
				}
				{
					RuntimeObject* L_16 = V_3;
					NullCheck((RuntimeObject*)L_16);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
				}

IL_006a:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0057_1;
			}

IL_0038_1:
			{
				RuntimeObject* L_17 = V_3;
				NullCheck(L_17);
				int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_18;
				L_18 = InterfaceFuncInvoker0< int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_17);
				V_4 = L_18;
				int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_19 = V_4;
				int32_t L_20;
				L_20 = HashSet_1_InternalIndexOf_mCEA12CBE772BDE247D7095341B6B7DB821798268(__this, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
				V_5 = L_20;
				int32_t L_21 = V_5;
				if ((((int32_t)L_21) < ((int32_t)0)))
				{
					goto IL_0057_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_22 = V_2;
				int32_t L_23 = V_5;
				NullCheck(L_22);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_22, L_23, NULL);
			}

IL_0057_1:
			{
				RuntimeObject* L_24 = V_3;
				NullCheck((RuntimeObject*)L_24);
				bool L_25;
				L_25 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_24);
				if (L_25)
				{
					goto IL_0038_1;
				}
			}
			{
				goto IL_006b;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006b:
	{
		V_6 = 0;
		goto IL_00ae;
	}

IL_0070:
	{
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_26 = __this->____slots;
		int32_t L_27 = V_6;
		NullCheck(L_26);
		int32_t L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___hashCode;
		if ((((int32_t)L_28) < ((int32_t)0)))
		{
			goto IL_00a8;
		}
	}
	{
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_29 = V_2;
		int32_t L_30 = V_6;
		NullCheck(L_29);
		bool L_31;
		L_31 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00a8;
		}
	}
	{
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_32 = __this->____slots;
		int32_t L_33 = V_6;
		NullCheck(L_32);
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_34 = ((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->___value;
		bool L_35;
		L_35 = HashSet_1_Remove_mECC76AFB2377CA54428F1076B18526913E9568DF(__this, L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
	}

IL_00a8:
	{
		int32_t L_36 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00ae:
	{
		int32_t L_37 = V_6;
		int32_t L_38 = V_0;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0070;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalIndexOf_mCEA12CBE772BDE247D7095341B6B7DB821798268_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_0 = ___0_item;
		int32_t L_1;
		L_1 = HashSet_1_InternalGetHashCode_mF732F65D490EE103994E0F586A91ED1F0468DBF2(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_1 = L_1;
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_2 = __this->____slots;
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		int32_t L_4 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)(L_4%((int32_t)(((RuntimeArray*)L_5)->max_length))));
		int32_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		goto IL_0074;
	}

IL_0027:
	{
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_8 = V_2;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = V_1;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_12 = __this->____comparer;
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_13 = V_2;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_15 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___value;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_16 = ___0_item;
		NullCheck(L_12);
		bool L_17;
		L_17 = InterfaceFuncInvoker2< bool, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_12, L_15, L_16);
		if (!L_17)
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_18 = V_3;
		return L_18;
	}

IL_0052:
	{
		int32_t L_19 = V_0;
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_20 = V_2;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0063;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_21 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_0063:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_23 = V_2;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___next;
		V_3 = L_25;
	}

IL_0074:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithUniqueHashSet_mE6C6FF13E1AD272A09DCFFB5D8D9D77E0C09EEA6_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* ___0_other, const RuntimeMethod* method) 
{
	Enumerator_t3A3D0CB1E039CA2A4D21932E46575AA117FA0F9A V_0;
	memset((&V_0), 0, sizeof(V_0));
	int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_0 = ___0_other;
		NullCheck(L_0);
		Enumerator_t3A3D0CB1E039CA2A4D21932E46575AA117FA0F9A L_1;
		L_1 = HashSet_1_GetEnumerator_m49847C49F34A02169D4E1C6E2546E73A96AEA1C7(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{
				Enumerator_Dispose_m131B1D6B6B3B83539DD9608E0F98C2642BEDE8AB((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 63));
				return;
			}
		});
		try
		{
			{
				goto IL_0022_1;
			}

IL_0009_1:
			{
				int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_2;
				L_2 = Enumerator_get_Current_m210CE4A2BAA9537A817DBE89106EC3F0876B369A_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 60));
				V_1 = L_2;
				int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_3 = V_1;
				bool L_4;
				L_4 = HashSet_1_Remove_mECC76AFB2377CA54428F1076B18526913E9568DF(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
				if (L_4)
				{
					goto IL_0022_1;
				}
			}
			{
				int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_5 = V_1;
				bool L_6;
				L_6 = HashSet_1_AddIfNotPresent_m8B0536551F4711335C12E1681CE3BD5B54FDF66A(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
			}

IL_0022_1:
			{
				bool L_7;
				L_7 = Enumerator_MoveNext_mBC1EFDA8FA71B5BB546AE0B519FBBB6C66CBD553((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
				if (L_7)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_003b;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithEnumerable_m71DEC7F85AFE40C6DEE77707F98A1DC32CF6FA0C_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		int32_t L_0 = __this->____lastIndex;
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_1, NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)50))))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_4 = V_1;
		if ((uintptr_t)((uintptr_t)L_4) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_5 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_4), 4));
		int8_t* L_6 = (int8_t*) (L_5 ? alloca(L_5) : NULL);
		memset(L_6, 0, L_5);
		int32_t L_7 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_8 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_8, (int32_t*)(L_6), L_7, NULL);
		V_2 = L_8;
		int32_t L_9 = V_1;
		if ((uintptr_t)((uintptr_t)L_9) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_10 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_9), 4));
		int8_t* L_11 = (int8_t*) (L_10 ? alloca(L_10) : NULL);
		memset(L_11, 0, L_10);
		int32_t L_12 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_13 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_13, (int32_t*)(L_11), L_12, NULL);
		V_3 = L_13;
		goto IL_0049;
	}

IL_002f:
	{
		int32_t L_14 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_14);
		int32_t L_16 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_17 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_17, L_15, L_16, NULL);
		V_2 = L_17;
		int32_t L_18 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_18);
		int32_t L_20 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_21 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_21, L_19, L_20, NULL);
		V_3 = L_21;
	}

IL_0049:
	{
		RuntimeObject* L_22 = ___0_other;
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_22);
		V_4 = L_23;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0097:
			{
				{
					RuntimeObject* L_24 = V_4;
					if (!L_24)
					{
						goto IL_00a2;
					}
				}
				{
					RuntimeObject* L_25 = V_4;
					NullCheck((RuntimeObject*)L_25);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_25);
				}

IL_00a2:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_008c_1;
			}

IL_0053_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_27;
				L_27 = InterfaceFuncInvoker0< int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_26);
				V_5 = L_27;
				V_6 = 0;
				int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_28 = V_5;
				bool L_29;
				L_29 = HashSet_1_AddOrGetLocation_m2A4CD21A41A634889CDE75A447AA8B41FD5EF6C7(__this, L_28, (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 64));
				if (!L_29)
				{
					goto IL_0075_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_30 = V_3;
				int32_t L_31 = V_6;
				NullCheck(L_30);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_30, L_31, NULL);
				goto IL_008c_1;
			}

IL_0075_1:
			{
				int32_t L_32 = V_6;
				int32_t L_33 = V_0;
				if ((((int32_t)L_32) >= ((int32_t)L_33)))
				{
					goto IL_008c_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_34 = V_3;
				int32_t L_35 = V_6;
				NullCheck(L_34);
				bool L_36;
				L_36 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_34, L_35, NULL);
				if (L_36)
				{
					goto IL_008c_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_37 = V_2;
				int32_t L_38 = V_6;
				NullCheck(L_37);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_37, L_38, NULL);
			}

IL_008c_1:
			{
				RuntimeObject* L_39 = V_4;
				NullCheck((RuntimeObject*)L_39);
				bool L_40;
				L_40 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_39);
				if (L_40)
				{
					goto IL_0053_1;
				}
			}
			{
				goto IL_00a3;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a3:
	{
		V_7 = 0;
		goto IL_00d1;
	}

IL_00a8:
	{
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_41 = V_2;
		int32_t L_42 = V_7;
		NullCheck(L_41);
		bool L_43;
		L_43 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_41, L_42, NULL);
		if (!L_43)
		{
			goto IL_00cb;
		}
	}
	{
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_44 = __this->____slots;
		int32_t L_45 = V_7;
		NullCheck(L_44);
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_46 = ((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___value;
		bool L_47;
		L_47 = HashSet_1_Remove_mECC76AFB2377CA54428F1076B18526913E9568DF(__this, L_46, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
	}

IL_00cb:
	{
		int32_t L_48 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_00d1:
	{
		int32_t L_49 = V_7;
		int32_t L_50 = V_0;
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			goto IL_00a8;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddOrGetLocation_m2A4CD21A41A634889CDE75A447AA8B41FD5EF6C7_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___0_value, int32_t* ___1_location, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_0 = ___0_value;
		int32_t L_1;
		L_1 = HashSet_1_InternalGetHashCode_mF732F65D490EE103994E0F586A91ED1F0468DBF2(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		V_1 = ((int32_t)(L_2%((int32_t)(((RuntimeArray*)L_3)->max_length))));
		V_2 = 0;
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_4 = __this->____slots;
		V_3 = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		goto IL_007f;
	}

IL_002a:
	{
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_9 = V_3;
		int32_t L_10 = V_5;
		NullCheck(L_9);
		int32_t L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___hashCode;
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_005b;
		}
	}
	{
		RuntimeObject* L_13 = __this->____comparer;
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_14 = V_3;
		int32_t L_15 = V_5;
		NullCheck(L_14);
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___value;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_17 = ___0_value;
		NullCheck(L_13);
		bool L_18;
		L_18 = InterfaceFuncInvoker2< bool, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_13, L_16, L_17);
		if (!L_18)
		{
			goto IL_005b;
		}
	}
	{
		int32_t* L_19 = ___1_location;
		int32_t L_20 = V_5;
		*((int32_t*)L_19) = (int32_t)L_20;
		return (bool)0;
	}

IL_005b:
	{
		int32_t L_21 = V_2;
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_22 = V_3;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_006c;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_006c:
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_25 = V_3;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_5 = L_27;
	}

IL_007f:
	{
		int32_t L_28 = V_5;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_29 = __this->____freeList;
		if ((((int32_t)L_29) < ((int32_t)0)))
		{
			goto IL_00aa;
		}
	}
	{
		int32_t L_30 = __this->____freeList;
		V_4 = L_30;
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_31 = V_3;
		int32_t L_32 = V_4;
		NullCheck(L_31);
		int32_t L_33 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next;
		__this->____freeList = L_33;
		goto IL_00e3;
	}

IL_00aa:
	{
		int32_t L_34 = __this->____lastIndex;
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_35 = V_3;
		NullCheck(L_35);
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))))
		{
			goto IL_00cd;
		}
	}
	{
		HashSet_1_IncreaseCapacity_m2DE98E1E8C23CB414B7FC96311B6C332B13FE8DB(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_36 = __this->____slots;
		V_3 = L_36;
		int32_t L_37 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->____buckets;
		NullCheck(L_38);
		V_1 = ((int32_t)(L_37%((int32_t)(((RuntimeArray*)L_38)->max_length))));
	}

IL_00cd:
	{
		int32_t L_39 = __this->____lastIndex;
		V_4 = L_39;
		int32_t L_40 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00e3:
	{
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_41 = V_3;
		int32_t L_42 = V_4;
		NullCheck(L_41);
		int32_t L_43 = V_0;
		((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode = L_43;
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_44 = V_3;
		int32_t L_45 = V_4;
		NullCheck(L_44);
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_46 = ___0_value;
		((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___value = L_46;
		SlotU5BU5D_t151077B42C51B8B8BECF77CF15496BDBBB4D0017* L_47 = V_3;
		int32_t L_48 = V_4;
		NullCheck(L_47);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = __this->____buckets;
		int32_t L_50 = V_1;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___next = ((int32_t)il2cpp_codegen_subtract(L_52, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		int32_t L_55 = V_4;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(L_54), (int32_t)((int32_t)il2cpp_codegen_add(L_55, 1)));
		int32_t L_56 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_56, 1));
		int32_t L_57 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_57, 1));
		int32_t* L_58 = ___1_location;
		int32_t L_59 = V_4;
		*((int32_t*)L_58) = (int32_t)L_59;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementCount_tC619A6BA4F7B87ECD3DFC8B1500C28F177C6B5CA HashSet_1_CheckUniqueAndUnfoundElements_m10283339477DFFB8F2A17B32F1634ADC41E2A66A_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ElementCount_tC619A6BA4F7B87ECD3DFC8B1500C28F177C6B5CA V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_004f;
		}
	}
	{
		V_5 = 0;
		RuntimeObject* L_1 = ___0_other;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_1);
		V_6 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_3 = V_6;
					if (!L_3)
					{
						goto IL_003b;
					}
				}
				{
					RuntimeObject* L_4 = V_6;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_003b:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0025_1;
			}

IL_0015_1:
			{
				RuntimeObject* L_5 = V_6;
				NullCheck(L_5);
				int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_6;
				L_6 = InterfaceFuncInvoker0< int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_5);
				int32_t L_7 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_7, 1));
				goto IL_003c;
			}

IL_0025_1:
			{
				RuntimeObject* L_8 = V_6;
				NullCheck((RuntimeObject*)L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				if (L_9)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_003c;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		(&V_0)->___uniqueCount = 0;
		int32_t L_10 = V_5;
		(&V_0)->___unfoundCount = L_10;
		ElementCount_tC619A6BA4F7B87ECD3DFC8B1500C28F177C6B5CA L_11 = V_0;
		return L_11;
	}

IL_004f:
	{
		int32_t L_12 = __this->____lastIndex;
		int32_t L_13;
		L_13 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_12, NULL);
		V_1 = L_13;
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)100))))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_15 = V_1;
		if ((uintptr_t)((uintptr_t)L_15) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_16 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_15), 4));
		int8_t* L_17 = (int8_t*) (L_16 ? alloca(L_16) : NULL);
		memset(L_17, 0, L_16);
		int32_t L_18 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_19 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_19, (int32_t*)(L_17), L_18, NULL);
		V_2 = L_19;
		goto IL_007c;
	}

IL_006f:
	{
		int32_t L_20 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_20);
		int32_t L_22 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_23 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_23, L_21, L_22, NULL);
		V_2 = L_23;
	}

IL_007c:
	{
		V_3 = 0;
		V_4 = 0;
		RuntimeObject* L_24 = ___0_other;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_24);
		V_6 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d1:
			{
				{
					RuntimeObject* L_26 = V_6;
					if (!L_26)
					{
						goto IL_00dc;
					}
				}
				{
					RuntimeObject* L_27 = V_6;
					NullCheck((RuntimeObject*)L_27);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00dc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00c6_1;
			}

IL_008b_1:
			{
				RuntimeObject* L_28 = V_6;
				NullCheck(L_28);
				int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_29;
				L_29 = InterfaceFuncInvoker0< int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_28);
				V_7 = L_29;
				int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_30 = V_7;
				int32_t L_31;
				L_31 = HashSet_1_InternalIndexOf_mCEA12CBE772BDE247D7095341B6B7DB821798268(__this, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
				V_8 = L_31;
				int32_t L_32 = V_8;
				if ((((int32_t)L_32) < ((int32_t)0)))
				{
					goto IL_00bd_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_33 = V_2;
				int32_t L_34 = V_8;
				NullCheck(L_33);
				bool L_35;
				L_35 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_33, L_34, NULL);
				if (L_35)
				{
					goto IL_00c6_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_36 = V_2;
				int32_t L_37 = V_8;
				NullCheck(L_36);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_36, L_37, NULL);
				int32_t L_38 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
				goto IL_00c6_1;
			}

IL_00bd_1:
			{
				int32_t L_39 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_39, 1));
				bool L_40 = ___1_returnIfUnfound;
				if (!L_40)
				{
					goto IL_00c6_1;
				}
			}
			{
				goto IL_00dd;
			}

IL_00c6_1:
			{
				RuntimeObject* L_41 = V_6;
				NullCheck((RuntimeObject*)L_41);
				bool L_42;
				L_42 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				if (L_42)
				{
					goto IL_008b_1;
				}
			}
			{
				goto IL_00dd;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00dd:
	{
		int32_t L_43 = V_4;
		(&V_0)->___uniqueCount = L_43;
		int32_t L_44 = V_3;
		(&V_0)->___unfoundCount = L_44;
		ElementCount_tC619A6BA4F7B87ECD3DFC8B1500C28F177C6B5CA L_45 = V_0;
		return L_45;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_HashSetEquals_mE664F27A9503AA7EB1D389B1930E9C9E526EE798_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* ___0_set1, HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* ___1_set2, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	Enumerator_t3A3D0CB1E039CA2A4D21932E46575AA117FA0F9A V_0;
	memset((&V_0), 0, sizeof(V_0));
	int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	Enumerator_t3A3D0CB1E039CA2A4D21932E46575AA117FA0F9A V_5;
	memset((&V_5), 0, sizeof(V_5));
	int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_0 = ___0_set1;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_1 = ___1_set2;
		return (bool)((((RuntimeObject*)(HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}

IL_0008:
	{
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_2 = ___1_set2;
		if (L_2)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_3 = ___0_set1;
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_4 = ___1_set2;
		bool L_5;
		L_5 = HashSet_1_AreEqualityComparersEqual_mF86C3DA368B770FD0FB4D9295F2314C38B38784D(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (!L_5)
		{
			goto IL_0062;
		}
	}
	{
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_6 = ___0_set1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = HashSet_1_get_Count_mA102A68A3C7550BA9E888E08C4495D88C23E4685_inline(L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 46));
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_8 = ___1_set2;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = HashSet_1_get_Count_mA102A68A3C7550BA9E888E08C4495D88C23E4685_inline(L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 46));
		if ((((int32_t)L_7) == ((int32_t)L_9)))
		{
			goto IL_0026;
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_10 = ___1_set2;
		NullCheck(L_10);
		Enumerator_t3A3D0CB1E039CA2A4D21932E46575AA117FA0F9A L_11;
		L_11 = HashSet_1_GetEnumerator_m49847C49F34A02169D4E1C6E2546E73A96AEA1C7(L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 59));
		V_0 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0052:
			{
				Enumerator_Dispose_m131B1D6B6B3B83539DD9608E0F98C2642BEDE8AB((&V_0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 63));
				return;
			}
		});
		try
		{
			{
				goto IL_0047_1;
			}

IL_002f_1:
			{
				int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_12;
				L_12 = Enumerator_get_Current_m210CE4A2BAA9537A817DBE89106EC3F0876B369A_inline((&V_0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 60));
				V_1 = L_12;
				HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_13 = ___0_set1;
				int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_14 = V_1;
				NullCheck(L_13);
				bool L_15;
				L_15 = HashSet_1_Contains_m93591D4087832CAB4ED735F3803B8EDDCC39246B(L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 51));
				if (L_15)
				{
					goto IL_0047_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_00d5;
			}

IL_0047_1:
			{
				bool L_16;
				L_16 = Enumerator_MoveNext_mBC1EFDA8FA71B5BB546AE0B519FBBB6C66CBD553((&V_0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 62));
				if (L_16)
				{
					goto IL_002f_1;
				}
			}
			{
				goto IL_0060;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0060:
	{
		return (bool)1;
	}

IL_0062:
	{
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_17 = ___1_set2;
		NullCheck(L_17);
		Enumerator_t3A3D0CB1E039CA2A4D21932E46575AA117FA0F9A L_18;
		L_18 = HashSet_1_GetEnumerator_m49847C49F34A02169D4E1C6E2546E73A96AEA1C7(L_17, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 59));
		V_0 = L_18;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c5:
			{
				Enumerator_Dispose_m131B1D6B6B3B83539DD9608E0F98C2642BEDE8AB((&V_0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 63));
				return;
			}
		});
		try
		{
			{
				goto IL_00ba_1;
			}

IL_006b_1:
			{
				int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_19;
				L_19 = Enumerator_get_Current_m210CE4A2BAA9537A817DBE89106EC3F0876B369A_inline((&V_0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 60));
				V_3 = L_19;
				V_4 = (bool)0;
				HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_20 = ___0_set1;
				NullCheck(L_20);
				Enumerator_t3A3D0CB1E039CA2A4D21932E46575AA117FA0F9A L_21;
				L_21 = HashSet_1_GetEnumerator_m49847C49F34A02169D4E1C6E2546E73A96AEA1C7(L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 59));
				V_5 = L_21;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00a4_1:
					{
						Enumerator_Dispose_m131B1D6B6B3B83539DD9608E0F98C2642BEDE8AB((&V_5), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 63));
						return;
					}
				});
				try
				{
					{
						goto IL_0099_2;
					}

IL_0080_2:
					{
						int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_22;
						L_22 = Enumerator_get_Current_m210CE4A2BAA9537A817DBE89106EC3F0876B369A_inline((&V_5), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 60));
						V_6 = L_22;
						RuntimeObject* L_23 = ___2_comparer;
						int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_24 = V_3;
						int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_25 = V_6;
						NullCheck(L_23);
						bool L_26;
						L_26 = InterfaceFuncInvoker2< bool, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_23, L_24, L_25);
						if (!L_26)
						{
							goto IL_0099_2;
						}
					}
					{
						V_4 = (bool)1;
						goto IL_00b2_1;
					}

IL_0099_2:
					{
						bool L_27;
						L_27 = Enumerator_MoveNext_mBC1EFDA8FA71B5BB546AE0B519FBBB6C66CBD553((&V_5), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 62));
						if (L_27)
						{
							goto IL_0080_2;
						}
					}
					{
						goto IL_00b2_1;
					}
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00b2_1:
			{
				bool L_28 = V_4;
				if (L_28)
				{
					goto IL_00ba_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_00d5;
			}

IL_00ba_1:
			{
				bool L_29;
				L_29 = Enumerator_MoveNext_mBC1EFDA8FA71B5BB546AE0B519FBBB6C66CBD553((&V_0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 62));
				if (L_29)
				{
					goto IL_006b_1;
				}
			}
			{
				goto IL_00d3;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d3:
	{
		return (bool)1;
	}

IL_00d5:
	{
		bool L_30 = V_2;
		return L_30;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_mF86C3DA368B770FD0FB4D9295F2314C38B38784D_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* ___0_set1, HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* ___1_set2, const RuntimeMethod* method) 
{
	{
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_0 = ___0_set1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = HashSet_1_get_Comparer_mCAEE62B8999A728702AFE3940A3EA6082FB39546_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 65));
		HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* L_2 = ___1_set2;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = HashSet_1_get_Comparer_mCAEE62B8999A728702AFE3940A3EA6082FB39546_inline(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 65));
		NullCheck((RuntimeObject*)L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, (RuntimeObject*)L_1, (RuntimeObject*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_mF732F65D490EE103994E0F586A91ED1F0468DBF2_gshared (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___0_item, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->____comparer;
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_2 = ___0_item;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1, L_2);
		return ((int32_t)(L_3&((int32_t)2147483647LL)));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m1967D52B4766821F5ECE4067BCAFED6ED9F23FA2_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1_t1A2724DE19E33ECECEDA97FE55A35054C6A07B89* L_0;
		L_0 = EqualityComparer_1_get_Default_m4464B0DA95E648A79240409742917C9853AD8686_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_m87017D5FBAACA0F2959A7105E35C84829A3F696F(__this, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m87017D5FBAACA0F2959A7105E35C84829A3F696F_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_t1A2724DE19E33ECECEDA97FE55A35054C6A07B89* L_1;
		L_1 = EqualityComparer_1_get_Default_m4464B0DA95E648A79240409742917C9853AD8686_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		___0_comparer = (RuntimeObject*)L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->____comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_2);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____version = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m8A71D0EE97B86C7E891B4A46933DF30B2AB87B5C_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		EqualityComparer_1_t1A2724DE19E33ECECEDA97FE55A35054C6A07B89* L_1;
		L_1 = EqualityComparer_1_get_Default_m4464B0DA95E648A79240409742917C9853AD8686_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_m2DC7B2CA8877B5DAB7DFD56707447B54EBF9BE25(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mE9598489781A2B261D6DD9C3AD7DFDB009CAE837_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_collection;
		EqualityComparer_1_t1A2724DE19E33ECECEDA97FE55A35054C6A07B89* L_1;
		L_1 = EqualityComparer_1_get_Default_m4464B0DA95E648A79240409742917C9853AD8686_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_m42A57BB8AAADC0ECE9108C0E3906DB23E101CDE1(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m42A57BB8AAADC0ECE9108C0E3906DB23E101CDE1_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B8_0 = 0;
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_m87017D5FBAACA0F2959A7105E35C84829A3F696F(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RuntimeObject* L_1 = ___0_collection;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_collection;
		V_0 = ((HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_mDB32BC9986BCAE9DD3B862B75797CC8DE54CF1EF(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_7 = V_0;
		HashSet_1_CopyFrom_mE8F695FBCEE3C3DD199042AF7CA690D2C2FB3B72(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}

IL_0030:
	{
		RuntimeObject* L_8 = ___0_collection;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_10);
		G_B8_0 = L_11;
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 0;
	}

IL_0043:
	{
		V_2 = G_B8_0;
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = HashSet_1_Initialize_m93E4BAB3F76B559B526334D597B9A247C5DA7F82(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		RuntimeObject* L_14 = ___0_collection;
		HashSet_1_UnionWith_mE9FA254FE713A95E1AEFF108B4DF42648DAB6ECD(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_15 = __this->____count;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_16 = __this->____slots;
		NullCheck(L_16);
		int32_t L_17 = __this->____count;
		if ((((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_16)->max_length))/L_17))) <= ((int32_t)3)))
		{
			goto IL_0074;
		}
	}
	{
		HashSet_1_TrimExcess_m636C60E6A48CEB953D190593B0D744D0C0ED0E26(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
	}

IL_0074:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mE7875C2578346ABBEB113E278598847D8D3859B9_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		__this->____siInfo = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_mE8F695FBCEE3C3DD199042AF7CA690D2C2FB3B72_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_0 = ___0_source;
		NullCheck(L_0);
		int32_t L_1 = L_0->____count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_3 = ___0_source;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->____buckets;
		NullCheck(L_4);
		V_1 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		int32_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(((int32_t)il2cpp_codegen_add(L_5, 1)), NULL);
		int32_t L_7 = V_1;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_8 = ___0_source;
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->____buckets;
		NullCheck((RuntimeArray*)L_9);
		RuntimeObject* L_10;
		L_10 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_9, NULL);
		__this->____buckets = ((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_10, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_10, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var)));
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_11 = ___0_source;
		NullCheck(L_11);
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_12 = L_11->____slots;
		NullCheck((RuntimeArray*)L_12);
		RuntimeObject* L_13;
		L_13 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_12, NULL);
		__this->____slots = ((SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0*)Castclass((RuntimeObject*)L_13, il2cpp_rgctx_data(method->klass->rgctx_data, 16)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)((SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0*)Castclass((RuntimeObject*)L_13, il2cpp_rgctx_data(method->klass->rgctx_data, 16))));
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_14 = ___0_source;
		NullCheck(L_14);
		int32_t L_15 = L_14->____lastIndex;
		__this->____lastIndex = L_15;
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_16 = ___0_source;
		NullCheck(L_16);
		int32_t L_17 = L_16->____freeList;
		__this->____freeList = L_17;
		goto IL_00c7;
	}

IL_0065:
	{
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_18 = ___0_source;
		NullCheck(L_18);
		int32_t L_19 = L_18->____lastIndex;
		V_2 = L_19;
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_20 = ___0_source;
		NullCheck(L_20);
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_21 = L_20->____slots;
		V_3 = L_21;
		int32_t L_22 = V_0;
		int32_t L_23;
		L_23 = HashSet_1_Initialize_m93E4BAB3F76B559B526334D597B9A247C5DA7F82(__this, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_4 = 0;
		V_5 = 0;
		goto IL_00ba;
	}

IL_0083:
	{
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_24 = V_3;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode;
		V_6 = L_26;
		int32_t L_27 = V_6;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_28 = V_4;
		int32_t L_29 = V_6;
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_30 = V_3;
		int32_t L_31 = V_5;
		NullCheck(L_30);
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		HashSet_1_AddValue_m498B2C6998F0A2045E852E03F7D531083F144821(__this, L_28, L_29, L_32, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00b4:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00ba:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = V_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_37 = V_4;
		__this->____lastIndex = L_37;
	}

IL_00c7:
	{
		int32_t L_38 = V_0;
		__this->____count = L_38;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m2DC7B2CA8877B5DAB7DFD56707447B54EBF9BE25_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_m87017D5FBAACA0F2959A7105E35C84829A3F696F(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0016:
	{
		int32_t L_3 = ___0_capacity;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___0_capacity;
		int32_t L_5;
		L_5 = HashSet_1_Initialize_m93E4BAB3F76B559B526334D597B9A247C5DA7F82(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0022:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m09399F6F06E9FFAEAF6F6BD16C6069BDC5EF41D1_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___0_item, const RuntimeMethod* method) 
{
	{
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_m720A82B4E4CEC46E250E958F5C29E47575861C1E(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m7E40D2F26769BDD5C83DF753D1D3929DE9BB2C61_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____lastIndex;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_1 = __this->____slots;
		int32_t L_2 = __this->____lastIndex;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, L_2, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
	}

IL_0044:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_mF55E9A6954362E9691131BB12F96479E031EB061_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0080;
		}
	}
	{
		V_0 = 0;
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m4185811C4A6DE37CAC8E8D38ED33AC0E52452F2B(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_1 = L_2;
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_3 = __this->____slots;
		V_2 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		int32_t L_5 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		NullCheck(L_6);
		NullCheck(L_4);
		int32_t L_7 = ((int32_t)(L_5%((int32_t)(((RuntimeArray*)L_6)->max_length))));
		int32_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		goto IL_007c;
	}

IL_002f:
	{
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_9 = V_2;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___hashCode;
		int32_t L_12 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_13 = __this->____comparer;
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___value;
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_17 = ___0_item;
		NullCheck(L_13);
		bool L_18;
		L_18 = InterfaceFuncInvoker2< bool, int4_tBA77D4945786DE82C3A487B33955EA1004996052, int4_tBA77D4945786DE82C3A487B33955EA1004996052 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_13, L_16, L_17);
		if (!L_18)
		{
			goto IL_005a;
		}
	}
	{
		return (bool)1;
	}

IL_005a:
	{
		int32_t L_19 = V_0;
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_20 = V_2;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_006b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_21 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_006b:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_23 = V_2;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___next;
		V_3 = L_25;
	}

IL_007c:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}

IL_0080:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m87136B549CD359862CCD73932F0742067D6FFB0B_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, int4U5BU5D_t036E74070BB2037017010DB7F1DCF33D92281795* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		int4U5BU5D_t036E74070BB2037017010DB7F1DCF33D92281795* L_0 = ___0_array;
		int32_t L_1 = ___1_arrayIndex;
		int32_t L_2 = __this->____count;
		HashSet_1_CopyTo_m1297F5B119EE4CBF8D4AF477B738E28048E3C9E8(__this, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m00D151BA0CCF666DC4F75800661B5711CD1198ED_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* V_4 = NULL;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0154;
		}
	}
	{
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m4185811C4A6DE37CAC8E8D38ED33AC0E52452F2B(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_2;
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		V_1 = ((int32_t)(L_3%((int32_t)(((RuntimeArray*)L_4)->max_length))));
		V_2 = (-1);
		V_3 = 0;
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_5 = __this->____slots;
		V_4 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_014c;
	}

IL_003b:
	{
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_10 = V_4;
		int32_t L_11 = V_5;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0123;
		}
	}
	{
		RuntimeObject* L_14 = __this->____comparer;
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_15 = V_4;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___value;
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_18 = ___0_item;
		NullCheck(L_14);
		bool L_19;
		L_19 = InterfaceFuncInvoker2< bool, int4_tBA77D4945786DE82C3A487B33955EA1004996052, int4_tBA77D4945786DE82C3A487B33955EA1004996052 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_14, L_17, L_18);
		if (!L_19)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->____buckets;
		int32_t L_22 = V_1;
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_23 = V_4;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___next;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (int32_t)((int32_t)il2cpp_codegen_add(L_25, 1)));
		goto IL_00a7;
	}

IL_008c:
	{
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_26 = V_4;
		int32_t L_27 = V_2;
		NullCheck(L_26);
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_28 = V_4;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		int32_t L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___next;
		((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___next = L_30;
	}

IL_00a7:
	{
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_31 = V_4;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___hashCode = (-1);
		goto IL_00d1;
	}

IL_00d1:
	{
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_33 = V_4;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		int32_t L_35 = __this->____freeList;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___next = L_35;
		int32_t L_36 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		int32_t L_38 = __this->____count;
		if (L_38)
		{
			goto IL_0119;
		}
	}
	{
		__this->____lastIndex = 0;
		__this->____freeList = (-1);
		goto IL_0121;
	}

IL_0119:
	{
		int32_t L_39 = V_5;
		__this->____freeList = L_39;
	}

IL_0121:
	{
		return (bool)1;
	}

IL_0123:
	{
		int32_t L_40 = V_3;
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_41 = V_4;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_0135;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_42 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_42, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, method);
	}

IL_0135:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		int32_t L_44 = V_5;
		V_2 = L_44;
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_45 = V_4;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = ((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___next;
		V_5 = L_47;
	}

IL_014c:
	{
		int32_t L_48 = V_5;
		if ((((int32_t)L_48) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}

IL_0154:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_mA9A5AD31DE364B32358790213F952B7BAB7C1B3B_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m51AF35A5AB508C5719CC61DB211A7AFCEE12CD03_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t444D848AC8669A1715E471A02D6102B43CE95821 HashSet_1_GetEnumerator_mB0BDE1F92D08FFC64D8527B53EBF8EE2DAF34A46_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t444D848AC8669A1715E471A02D6102B43CE95821 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m94158CC8AD2465DDDB1B5413572A52080BDF67C6((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m999C29911584BE1EFC7EEA947373C491E3DDE54F_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t444D848AC8669A1715E471A02D6102B43CE95821 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m94158CC8AD2465DDDB1B5413572A52080BDF67C6((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_t444D848AC8669A1715E471A02D6102B43CE95821 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_IEnumerable_GetEnumerator_m442D3092DA56CC1D81C6AA0BCE46884FD376067E_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t444D848AC8669A1715E471A02D6102B43CE95821 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m94158CC8AD2465DDDB1B5413572A52080BDF67C6((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_t444D848AC8669A1715E471A02D6102B43CE95821 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_GetObjectData_m1F0590A17236BCF590A0A7E33AE670443AFBECB5_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	int4U5BU5D_t036E74070BB2037017010DB7F1DCF33D92281795* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		int32_t L_3 = __this->____version;
		NullCheck(L_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_2, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeObject* L_5 = __this->____comparer;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 30)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_4, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, (RuntimeObject*)L_5, L_7, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		if (!L_9)
		{
			G_B4_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
			G_B4_1 = L_8;
			goto IL_0052;
		}
		G_B3_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
		G_B3_1 = L_8;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		NullCheck(L_10);
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_10)->max_length));
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0053;
	}

IL_0052:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0053:
	{
		NullCheck(G_B5_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B5_2, G_B5_1, G_B5_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		if (!L_11)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_12 = __this->____count;
		int4U5BU5D_t036E74070BB2037017010DB7F1DCF33D92281795* L_13 = (int4U5BU5D_t036E74070BB2037017010DB7F1DCF33D92281795*)(int4U5BU5D_t036E74070BB2037017010DB7F1DCF33D92281795*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 31), (uint32_t)L_12);
		V_0 = L_13;
		int4U5BU5D_t036E74070BB2037017010DB7F1DCF33D92281795* L_14 = V_0;
		HashSet_1_CopyTo_mE70DD2CA43FA234B1E455628992A9F2438579FE9(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_15 = ___0_info;
		int4U5BU5D_t036E74070BB2037017010DB7F1DCF33D92281795* L_16 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		NullCheck(L_15);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_15, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, (RuntimeObject*)L_16, L_18, NULL);
	}

IL_0089:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_OnDeserialization_mC3B496F578590C5533256DA60AE4CEFD3383262E_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int4U5BU5D_t036E74070BB2037017010DB7F1DCF33D92281795* V_1 = NULL;
	int32_t V_2 = 0;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = __this->____siInfo;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = __this->____siInfo;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_1, _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865, NULL);
		V_0 = L_2;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		NullCheck(L_3);
		RuntimeObject* L_6;
		L_6 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_3, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4))));
		__this->____freeList = (-1);
		int32_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->____buckets = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_9);
		int32_t L_10 = V_0;
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_11 = (SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0*)(SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_10);
		__this->____slots = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_11);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_12 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		NullCheck(L_12);
		RuntimeObject* L_15;
		L_15 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_12, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, L_14, NULL);
		V_1 = ((int4U5BU5D_t036E74070BB2037017010DB7F1DCF33D92281795*)Castclass((RuntimeObject*)L_15, il2cpp_rgctx_data(method->klass->rgctx_data, 24)));
		int4U5BU5D_t036E74070BB2037017010DB7F1DCF33D92281795* L_16 = V_1;
		if (L_16)
		{
			goto IL_008f;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_17 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_008f:
	{
		V_2 = 0;
		goto IL_00a5;
	}

IL_0093:
	{
		int4U5BU5D_t036E74070BB2037017010DB7F1DCF33D92281795* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		bool L_22;
		L_22 = HashSet_1_AddIfNotPresent_m720A82B4E4CEC46E250E958F5C29E47575861C1E(__this, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00a5:
	{
		int32_t L_24 = V_2;
		int4U5BU5D_t036E74070BB2037017010DB7F1DCF33D92281795* L_25 = V_1;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0093;
		}
	}
	{
		goto IL_00b4;
	}

IL_00ad:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00b4:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_26 = __this->____siInfo;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_26, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		__this->____version = L_27;
		__this->____siInfo = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mA6BBA2018A4605373E6FE12B0667E694BE9DC10D_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___0_item, const RuntimeMethod* method) 
{
	{
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_m720A82B4E4CEC46E250E958F5C29E47575861C1E(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_TryGetValue_m1566112402663644CA8048E853B8EBA3139B1288_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___0_equalValue, int4_tBA77D4945786DE82C3A487B33955EA1004996052* ___1_actualValue, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_1 = ___0_equalValue;
		int32_t L_2;
		L_2 = HashSet_1_InternalIndexOf_m8D27BFD88C06FDB763E5D0F5B7957A0EA2F3A22A(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		int4_tBA77D4945786DE82C3A487B33955EA1004996052* L_4 = ___1_actualValue;
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_5 = __this->____slots;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		*(int4_tBA77D4945786DE82C3A487B33955EA1004996052*)L_4 = L_7;
		return (bool)1;
	}

IL_002d:
	{
		int4_tBA77D4945786DE82C3A487B33955EA1004996052* L_8 = ___1_actualValue;
		il2cpp_codegen_initobj(L_8, sizeof(int4_tBA77D4945786DE82C3A487B33955EA1004996052));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_mE9FA254FE713A95E1AEFF108B4DF42648DAB6ECD_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int4_tBA77D4945786DE82C3A487B33955EA1004996052 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck((RuntimeObject*)L_5);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
				}

IL_0039:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0026_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_7;
				L_7 = InterfaceFuncInvoker0< int4_tBA77D4945786DE82C3A487B33955EA1004996052 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_6);
				V_1 = L_7;
				int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_8 = V_1;
				bool L_9;
				L_9 = HashSet_1_AddIfNotPresent_m720A82B4E4CEC46E250E958F5C29E47575861C1E(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
			}

IL_0026_1:
			{
				RuntimeObject* L_10 = V_0;
				NullCheck((RuntimeObject*)L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
				if (L_11)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_003a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWith_m21FC3039A240B28E1E6E204DEF32A67A48BE403F_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*)__this))))
		{
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_6);
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		HashSet_1_Clear_m7E40D2F26769BDD5C83DF753D1D3929DE9BB2C61(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		return;
	}

IL_0035:
	{
		RuntimeObject* L_8 = ___0_other;
		V_1 = ((HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*)IsInstClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_10 = V_1;
		bool L_11;
		L_11 = HashSet_1_AreEqualityComparersEqual_mDB32BC9986BCAE9DD3B862B75797CC8DE54CF1EF(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_11)
		{
			goto IL_0050;
		}
	}
	{
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_12 = V_1;
		HashSet_1_IntersectWithHashSetWithSameEC_mD8F571BCFF2415FFEB2E5CD0C2FDB7A68CDBE7CD(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}

IL_0050:
	{
		RuntimeObject* L_13 = ___0_other;
		HashSet_1_IntersectWithEnumerable_m0ED18A9504BAC458143A7DEE7C405ADB151E435B(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_ExceptWith_m3DC0DCC3817DE483FCEA93B86205F64C537A488B_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int4_tBA77D4945786DE82C3A487B33955EA1004996052 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*)__this))))
		{
			goto IL_0022;
		}
	}
	{
		HashSet_1_Clear_m7E40D2F26769BDD5C83DF753D1D3929DE9BB2C61(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		return;
	}

IL_0022:
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				}

IL_004d:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003a_1;
			}

IL_002b_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_9;
				L_9 = InterfaceFuncInvoker0< int4_tBA77D4945786DE82C3A487B33955EA1004996052 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_8);
				V_1 = L_9;
				int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_10 = V_1;
				bool L_11;
				L_11 = HashSet_1_Remove_m00D151BA0CCF666DC4F75800661B5711CD1198ED(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
			}

IL_003a_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck((RuntimeObject*)L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
				if (L_13)
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_004e;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWith_mC8FB3C71AC3E6CF0A4B7A9716393F8B3F5688EC1_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_3 = ___0_other;
		HashSet_1_UnionWith_mE9FA254FE713A95E1AEFF108B4DF42648DAB6ECD(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*)__this))))
		{
			goto IL_0029;
		}
	}
	{
		HashSet_1_Clear_m7E40D2F26769BDD5C83DF753D1D3929DE9BB2C61(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		return;
	}

IL_0029:
	{
		RuntimeObject* L_5 = ___0_other;
		V_0 = ((HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*)IsInstClass((RuntimeObject*)L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_6 = V_0;
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_7 = V_0;
		bool L_8;
		L_8 = HashSet_1_AreEqualityComparersEqual_mDB32BC9986BCAE9DD3B862B75797CC8DE54CF1EF(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_9 = V_0;
		HashSet_1_SymmetricExceptWithUniqueHashSet_m69617C0D5D309C4A5C9600C62CC79BE09415983F(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}

IL_0044:
	{
		RuntimeObject* L_10 = ___0_other;
		HashSet_1_SymmetricExceptWithEnumerable_mE66EBBD1F3A7672987D902273D2DF7FACD82045F(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOf_mF533159D1DF764AC241E39FF8D2B13289F8CB257_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* V_0 = NULL;
	ElementCount_t09BC3D71FBA88FF07695C2BE3838AB49E877F0D5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)1;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*)IsInstClass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_6 = V_0;
		bool L_7;
		L_7 = HashSet_1_AreEqualityComparersEqual_mDB32BC9986BCAE9DD3B862B75797CC8DE54CF1EF(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_8 = __this->____count;
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = HashSet_1_get_Count_mA9A5AD31DE364B32358790213F952B7BAB7C1B3B_inline(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		if ((((int32_t)L_8) <= ((int32_t)L_10)))
		{
			goto IL_0041;
		}
	}
	{
		return (bool)0;
	}

IL_0041:
	{
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_11 = V_0;
		bool L_12;
		L_12 = HashSet_1_IsSubsetOfHashSetWithSameEC_mF0C37EFF334D02075C7A24662DC934AF68E71BEE(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return L_12;
	}

IL_0049:
	{
		RuntimeObject* L_13 = ___0_other;
		ElementCount_t09BC3D71FBA88FF07695C2BE3838AB49E877F0D5 L_14;
		L_14 = HashSet_1_CheckUniqueAndUnfoundElements_m0BB03E56F8D597ABE6DE3D80124C326BC5B23895(__this, L_13, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		V_1 = L_14;
		ElementCount_t09BC3D71FBA88FF07695C2BE3838AB49E877F0D5 L_15 = V_1;
		int32_t L_16 = L_15.___uniqueCount;
		int32_t L_17 = __this->____count;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_006d;
		}
	}
	{
		ElementCount_t09BC3D71FBA88FF07695C2BE3838AB49E877F0D5 L_18 = V_1;
		int32_t L_19 = L_18.___unfoundCount;
		return (bool)((((int32_t)((((int32_t)L_19) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_006d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsProperSubsetOf_m020FE13A20225818A86CB1A290F981E8BCF6CE28_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	ElementCount_t09BC3D71FBA88FF07695C2BE3838AB49E877F0D5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0065;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)0;
	}

IL_0028:
	{
		int32_t L_7 = __this->____count;
		if (L_7)
		{
			goto IL_003a;
		}
	}
	{
		RuntimeObject* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_8);
		return (bool)((((int32_t)L_9) > ((int32_t)0))? 1 : 0);
	}

IL_003a:
	{
		RuntimeObject* L_10 = ___0_other;
		V_2 = ((HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*)IsInstClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_12 = V_2;
		bool L_13;
		L_13 = HashSet_1_AreEqualityComparersEqual_mDB32BC9986BCAE9DD3B862B75797CC8DE54CF1EF(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_13)
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_14 = __this->____count;
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = HashSet_1_get_Count_mA9A5AD31DE364B32358790213F952B7BAB7C1B3B_inline(L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_005d;
		}
	}
	{
		return (bool)0;
	}

IL_005d:
	{
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_17 = V_2;
		bool L_18;
		L_18 = HashSet_1_IsSubsetOfHashSetWithSameEC_mF0C37EFF334D02075C7A24662DC934AF68E71BEE(__this, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return L_18;
	}

IL_0065:
	{
		RuntimeObject* L_19 = ___0_other;
		ElementCount_t09BC3D71FBA88FF07695C2BE3838AB49E877F0D5 L_20;
		L_20 = HashSet_1_CheckUniqueAndUnfoundElements_m0BB03E56F8D597ABE6DE3D80124C326BC5B23895(__this, L_19, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		V_1 = L_20;
		ElementCount_t09BC3D71FBA88FF07695C2BE3838AB49E877F0D5 L_21 = V_1;
		int32_t L_22 = L_21.___uniqueCount;
		int32_t L_23 = __this->____count;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_0086;
		}
	}
	{
		ElementCount_t09BC3D71FBA88FF07695C2BE3838AB49E877F0D5 L_24 = V_1;
		int32_t L_25 = L_24.___unfoundCount;
		return (bool)((((int32_t)L_25) > ((int32_t)0))? 1 : 0);
	}

IL_0086:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSupersetOf_m7AAA3344352DFB70792F3CAC311FB90102ECC522_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		RuntimeObject* L_7 = ___0_other;
		V_1 = ((HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*)IsInstClass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_8 = V_1;
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_9 = V_1;
		bool L_10;
		L_10 = HashSet_1_AreEqualityComparersEqual_mDB32BC9986BCAE9DD3B862B75797CC8DE54CF1EF(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = HashSet_1_get_Count_mA9A5AD31DE364B32358790213F952B7BAB7C1B3B_inline(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		int32_t L_13 = __this->____count;
		if ((((int32_t)L_12) <= ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		return (bool)0;
	}

IL_004b:
	{
		RuntimeObject* L_14 = ___0_other;
		bool L_15;
		L_15 = HashSet_1_ContainsAllElements_mE987AB3D9305882B219B0DFE15E6705E8FE205AD(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsProperSupersetOf_mB95AA5686BEF294A5217E871B1C7E1FAAB09691F_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	ElementCount_t09BC3D71FBA88FF07695C2BE3838AB49E877F0D5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)0;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_5 = V_0;
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		RuntimeObject* L_8 = ___0_other;
		V_2 = ((HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*)IsInstClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_9 = V_2;
		if (!L_9)
		{
			goto IL_005d;
		}
	}
	{
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_10 = V_2;
		bool L_11;
		L_11 = HashSet_1_AreEqualityComparersEqual_mDB32BC9986BCAE9DD3B862B75797CC8DE54CF1EF(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = HashSet_1_get_Count_mA9A5AD31DE364B32358790213F952B7BAB7C1B3B_inline(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0055;
		}
	}
	{
		return (bool)0;
	}

IL_0055:
	{
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_15 = V_2;
		bool L_16;
		L_16 = HashSet_1_ContainsAllElements_mE987AB3D9305882B219B0DFE15E6705E8FE205AD(__this, (RuntimeObject*)L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		return L_16;
	}

IL_005d:
	{
		RuntimeObject* L_17 = ___0_other;
		ElementCount_t09BC3D71FBA88FF07695C2BE3838AB49E877F0D5 L_18;
		L_18 = HashSet_1_CheckUniqueAndUnfoundElements_m0BB03E56F8D597ABE6DE3D80124C326BC5B23895(__this, L_17, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		V_1 = L_18;
		ElementCount_t09BC3D71FBA88FF07695C2BE3838AB49E877F0D5 L_19 = V_1;
		int32_t L_20 = L_19.___uniqueCount;
		int32_t L_21 = __this->____count;
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_007e;
		}
	}
	{
		ElementCount_t09BC3D71FBA88FF07695C2BE3838AB49E877F0D5 L_22 = V_1;
		int32_t L_23 = L_22.___unfoundCount;
		return (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_007e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Overlaps_m906120791291E33D2B8F9417B9772B9033468B16_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int4_tBA77D4945786DE82C3A487B33955EA1004996052 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004e;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				}

IL_004e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003b_1;
			}

IL_0027_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_9;
				L_9 = InterfaceFuncInvoker0< int4_tBA77D4945786DE82C3A487B33955EA1004996052 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_8);
				V_1 = L_9;
				int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_10 = V_1;
				bool L_11;
				L_11 = HashSet_1_Contains_mF55E9A6954362E9691131BB12F96479E031EB061(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
				if (!L_11)
				{
					goto IL_003b_1;
				}
			}
			{
				V_2 = (bool)1;
				goto IL_0051;
			}

IL_003b_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck((RuntimeObject*)L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
				if (L_13)
				{
					goto IL_0027_1;
				}
			}
			{
				goto IL_004f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		return (bool)0;
	}

IL_0051:
	{
		bool L_14 = V_2;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_SetEquals_m5C02E86C954EBC41273A30ECAE96B6A096292543_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	ElementCount_t09BC3D71FBA88FF07695C2BE3838AB49E877F0D5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_4 = V_0;
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_mDB32BC9986BCAE9DD3B862B75797CC8DE54CF1EF(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_7 = __this->____count;
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = HashSet_1_get_Count_mA9A5AD31DE364B32358790213F952B7BAB7C1B3B_inline(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		if ((((int32_t)L_7) == ((int32_t)L_9)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0037:
	{
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_10 = V_0;
		bool L_11;
		L_11 = HashSet_1_ContainsAllElements_mE987AB3D9305882B219B0DFE15E6705E8FE205AD(__this, (RuntimeObject*)L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		return L_11;
	}

IL_003f:
	{
		RuntimeObject* L_12 = ___0_other;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_13 = V_1;
		if (!L_13)
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_14 = __this->____count;
		if (L_14)
		{
			goto IL_005c;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_15);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		return (bool)0;
	}

IL_005c:
	{
		RuntimeObject* L_17 = ___0_other;
		ElementCount_t09BC3D71FBA88FF07695C2BE3838AB49E877F0D5 L_18;
		L_18 = HashSet_1_CheckUniqueAndUnfoundElements_m0BB03E56F8D597ABE6DE3D80124C326BC5B23895(__this, L_17, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		V_2 = L_18;
		ElementCount_t09BC3D71FBA88FF07695C2BE3838AB49E877F0D5 L_19 = V_2;
		int32_t L_20 = L_19.___uniqueCount;
		int32_t L_21 = __this->____count;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_007d;
		}
	}
	{
		ElementCount_t09BC3D71FBA88FF07695C2BE3838AB49E877F0D5 L_22 = V_2;
		int32_t L_23 = L_22.___unfoundCount;
		return (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_007d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mE70DD2CA43FA234B1E455628992A9F2438579FE9_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, int4U5BU5D_t036E74070BB2037017010DB7F1DCF33D92281795* ___0_array, const RuntimeMethod* method) 
{
	{
		int4U5BU5D_t036E74070BB2037017010DB7F1DCF33D92281795* L_0 = ___0_array;
		int32_t L_1 = __this->____count;
		HashSet_1_CopyTo_m1297F5B119EE4CBF8D4AF477B738E28048E3C9E8(__this, L_0, 0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m1297F5B119EE4CBF8D4AF477B738E28048E3C9E8_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, int4U5BU5D_t036E74070BB2037017010DB7F1DCF33D92281795* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int4U5BU5D_t036E74070BB2037017010DB7F1DCF33D92281795* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0028:
	{
		int32_t L_7 = ___2_count;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = ___2_count;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_9);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0042:
	{
		int32_t L_12 = ___1_arrayIndex;
		int4U5BU5D_t036E74070BB2037017010DB7F1DCF33D92281795* L_13 = ___0_array;
		NullCheck(L_13);
		if ((((int32_t)L_12) > ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_14 = ___2_count;
		int4U5BU5D_t036E74070BB2037017010DB7F1DCF33D92281795* L_15 = ___0_array;
		NullCheck(L_15);
		int32_t L_16 = ___1_arrayIndex;
		if ((((int32_t)L_14) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)))))
		{
			goto IL_005b;
		}
	}

IL_0050:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_17 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_005b:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0097;
	}

IL_0061:
	{
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_18 = __this->____slots;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___hashCode;
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		int4U5BU5D_t036E74070BB2037017010DB7F1DCF33D92281795* L_21 = ___0_array;
		int32_t L_22 = ___1_arrayIndex;
		int32_t L_23 = V_0;
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_24 = __this->____slots;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___value;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, L_23))), (int4_tBA77D4945786DE82C3A487B33955EA1004996052)L_26);
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0093:
	{
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0097:
	{
		int32_t L_29 = V_1;
		int32_t L_30 = __this->____lastIndex;
		if ((((int32_t)L_29) >= ((int32_t)L_30)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_31 = V_0;
		int32_t L_32 = ___2_count;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0061;
		}
	}

IL_00a4:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_RemoveWhere_m52C015CF2EF87E1B9592449E45E6756E2C111738_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, Predicate_1_t6CD543AD1D01723C56EE7C9824DA046DB9B9F266* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int4_tBA77D4945786DE82C3A487B33955EA1004996052 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Predicate_1_t6CD543AD1D01723C56EE7C9824DA046DB9B9F266* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0054;
	}

IL_0014:
	{
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_2 = __this->____slots;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_5 = __this->____slots;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		V_2 = L_7;
		Predicate_1_t6CD543AD1D01723C56EE7C9824DA046DB9B9F266* L_8 = ___0_match;
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_9 = V_2;
		NullCheck(L_8);
		bool L_10;
		L_10 = Predicate_1_Invoke_mD102C7E848768B7C3A4CD761EED5C561287427F2_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_11 = V_2;
		bool L_12;
		L_12 = HashSet_1_Remove_m00D151BA0CCF666DC4F75800661B5711CD1198ED(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0050:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____lastIndex;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_m4EC62D967B860311534D68F4F275C0FC87CAA8C3_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____comparer;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_EnsureCapacity_mC82708E434EDD9AD0FFFF99002AFF78DA1D35037_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000f:
	{
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_3 = __this->____slots;
		NullCheck(L_3);
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
		goto IL_0022;
	}

IL_0021:
	{
		G_B5_0 = 0;
	}

IL_0022:
	{
		V_0 = G_B5_0;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_capacity;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0029:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		if (L_7)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_8 = ___0_capacity;
		int32_t L_9;
		L_9 = HashSet_1_Initialize_m93E4BAB3F76B559B526334D597B9A247C5DA7F82(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return L_9;
	}

IL_0039:
	{
		int32_t L_10 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_10, NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		HashSet_1_SetCapacity_mA25253B10ED11045C0B6DA3AF27D7EAFB967010D(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		int32_t L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_m636C60E6A48CEB953D190593B0D744D0C0ED0E26_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->____slots = (SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)(SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0*)NULL);
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}

IL_0025:
	{
		int32_t L_2 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_5 = (SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0*)(SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_4);
		V_1 = L_5;
		int32_t L_6 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_2 = L_7;
		V_3 = 0;
		V_4 = 0;
		goto IL_00a2;
	}

IL_0046:
	{
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_8 = __this->____slots;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_11 = V_1;
		int32_t L_12 = V_3;
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_13 = __this->____slots;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Slot_t3A2DF3D20576140ECA68FC0F9CA5D090F24F7D60 L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (Slot_t3A2DF3D20576140ECA68FC0F9CA5D090F24F7D60)L_16);
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_17 = V_1;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_0;
		V_5 = ((int32_t)(L_19%L_20));
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_21 = V_1;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_2;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___next = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = V_3;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)((int32_t)il2cpp_codegen_add(L_29, 1)));
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_009c:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00a2:
	{
		int32_t L_32 = V_4;
		int32_t L_33 = __this->____lastIndex;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_34 = V_3;
		__this->____lastIndex = L_34;
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_35 = V_1;
		__this->____slots = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_35);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_2;
		__this->____buckets = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_36);
		__this->____freeList = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_CreateSetComparer_m9CA2C4ED7FFF634D9BE04228366010DF6FADE88D_gshared (const RuntimeMethod* method) 
{
	{
		HashSetEqualityComparer_1_t689F5D78B6E49CAF0CEC9DBE5A5A6DD821AF2F8D* L_0 = (HashSetEqualityComparer_1_t689F5D78B6E49CAF0CEC9DBE5A5A6DD821AF2F8D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 55));
		HashSetEqualityComparer_1__ctor_m8186197B39D01C29BA631B44A1E6E454FF4CF33C(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 56));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m93E4BAB3F76B559B526334D597B9A247C5DA7F82_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_5 = (SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0*)(SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_4);
		__this->____slots = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m6BEC5B8F9D1ADF68469563CD4E9508187BB5E3C4_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____count;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91930CCAB5CB8F6F327407F9A14CF42F57A0F27B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = V_0;
		HashSet_1_SetCapacity_mA25253B10ED11045C0B6DA3AF27D7EAFB967010D(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_mA25253B10ED11045C0B6DA3AF27D7EAFB967010D_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___0_newSize;
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_1 = (SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0*)(SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_0);
		V_0 = L_1;
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_3 = __this->____slots;
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_4 = V_0;
		int32_t L_5 = __this->____lastIndex;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0023:
	{
		int32_t L_6 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0058;
	}

IL_002e:
	{
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = ___0_newSize;
		V_3 = ((int32_t)(L_10%L_11));
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___next = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_3;
		int32_t L_20 = V_2;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1)));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0058:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = __this->____lastIndex;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002e;
		}
	}
	{
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_24 = V_0;
		__this->____slots = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_1;
		__this->____buckets = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_25);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_m720A82B4E4CEC46E250E958F5C29E47575861C1E_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1;
		L_1 = HashSet_1_Initialize_m93E4BAB3F76B559B526334D597B9A247C5DA7F82(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0010:
	{
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_2 = ___0_value;
		int32_t L_3;
		L_3 = HashSet_1_InternalGetHashCode_m4185811C4A6DE37CAC8E8D38ED33AC0E52452F2B(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_3;
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		V_1 = ((int32_t)(L_4%((int32_t)(((RuntimeArray*)L_5)->max_length))));
		V_2 = 0;
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_6 = __this->____slots;
		V_3 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		goto IL_008b;
	}

IL_003a:
	{
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_11 = V_3;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		int32_t L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___hashCode;
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_15 = __this->____comparer;
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_16 = V_3;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, int4_tBA77D4945786DE82C3A487B33955EA1004996052, int4_tBA77D4945786DE82C3A487B33955EA1004996052 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		int32_t L_21 = V_2;
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_22 = V_3;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0078;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_0078:
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_25 = V_3;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_5 = L_27;
	}

IL_008b:
	{
		int32_t L_28 = V_5;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_29 = __this->____freeList;
		if ((((int32_t)L_29) < ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_30 = __this->____freeList;
		V_4 = L_30;
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_31 = V_3;
		int32_t L_32 = V_4;
		NullCheck(L_31);
		int32_t L_33 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next;
		__this->____freeList = L_33;
		goto IL_00ef;
	}

IL_00b6:
	{
		int32_t L_34 = __this->____lastIndex;
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_35 = V_3;
		NullCheck(L_35);
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))))
		{
			goto IL_00d9;
		}
	}
	{
		HashSet_1_IncreaseCapacity_m6BEC5B8F9D1ADF68469563CD4E9508187BB5E3C4(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_36 = __this->____slots;
		V_3 = L_36;
		int32_t L_37 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->____buckets;
		NullCheck(L_38);
		V_1 = ((int32_t)(L_37%((int32_t)(((RuntimeArray*)L_38)->max_length))));
	}

IL_00d9:
	{
		int32_t L_39 = __this->____lastIndex;
		V_4 = L_39;
		int32_t L_40 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ef:
	{
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_41 = V_3;
		int32_t L_42 = V_4;
		NullCheck(L_41);
		int32_t L_43 = V_0;
		((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode = L_43;
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_44 = V_3;
		int32_t L_45 = V_4;
		NullCheck(L_44);
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_46 = ___0_value;
		((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___value = L_46;
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_47 = V_3;
		int32_t L_48 = V_4;
		NullCheck(L_47);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = __this->____buckets;
		int32_t L_50 = V_1;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___next = ((int32_t)il2cpp_codegen_subtract(L_52, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		int32_t L_55 = V_4;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(L_54), (int32_t)((int32_t)il2cpp_codegen_add(L_55, 1)));
		int32_t L_56 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_56, 1));
		int32_t L_57 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_57, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m498B2C6998F0A2045E852E03F7D531083F144821_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, int32_t ___0_index, int32_t ___1_hashCode, int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___2_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		NullCheck(L_1);
		V_0 = ((int32_t)(L_0%((int32_t)(((RuntimeArray*)L_1)->max_length))));
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_2 = __this->____slots;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		int32_t L_4 = ___1_hashCode;
		((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode = L_4;
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_5 = __this->____slots;
		int32_t L_6 = ___0_index;
		NullCheck(L_5);
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_7 = ___2_value;
		((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value = L_7;
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_8 = __this->____slots;
		int32_t L_9 = ___0_index;
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___next = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____buckets;
		int32_t L_15 = V_0;
		int32_t L_16 = ___0_index;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (int32_t)((int32_t)il2cpp_codegen_add(L_16, 1)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_ContainsAllElements_mE987AB3D9305882B219B0DFE15E6705E8FE205AD_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int4_tBA77D4945786DE82C3A487B33955EA1004996052 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0030;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_0030:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_001d_1;
			}

IL_0009_1:
			{
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_5;
				L_5 = InterfaceFuncInvoker0< int4_tBA77D4945786DE82C3A487B33955EA1004996052 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_4);
				V_1 = L_5;
				int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_6 = V_1;
				bool L_7;
				L_7 = HashSet_1_Contains_mF55E9A6954362E9691131BB12F96479E031EB061(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
				if (L_7)
				{
					goto IL_001d_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0033;
			}

IL_001d_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck((RuntimeObject*)L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				if (L_9)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0031;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		return (bool)1;
	}

IL_0033:
	{
		bool L_10 = V_2;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOfHashSetWithSameEC_mF0C37EFF334D02075C7A24662DC934AF68E71BEE_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* ___0_other, const RuntimeMethod* method) 
{
	Enumerator_t444D848AC8669A1715E471A02D6102B43CE95821 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int4_tBA77D4945786DE82C3A487B33955EA1004996052 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		Enumerator_t444D848AC8669A1715E471A02D6102B43CE95821 L_0;
		L_0 = HashSet_1_GetEnumerator_mB0BDE1F92D08FFC64D8527B53EBF8EE2DAF34A46(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{
				Enumerator_Dispose_m4D3B873ECB9FC40CCDD6C7390399DF25D5D74E7D((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 63));
				return;
			}
		});
		try
		{
			{
				goto IL_001e_1;
			}

IL_0009_1:
			{
				int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_1;
				L_1 = Enumerator_get_Current_m1F35A2595ECCDBDD016ACA8F0EC5FACF40B713EF_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 60));
				V_1 = L_1;
				HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_2 = ___0_other;
				int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_3 = V_1;
				NullCheck(L_2);
				bool L_4;
				L_4 = HashSet_1_Contains_mF55E9A6954362E9691131BB12F96479E031EB061(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
				if (L_4)
				{
					goto IL_001e_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0039;
			}

IL_001e_1:
			{
				bool L_5;
				L_5 = Enumerator_MoveNext_mF0E956533D364C01DE5779814BA73D46C127FE3F((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
				if (L_5)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0037;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		return (bool)1;
	}

IL_0039:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithHashSetWithSameEC_mD8F571BCFF2415FFEB2E5CD0C2FDB7A68CDBE7CD_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* ___0_other, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int4_tBA77D4945786DE82C3A487B33955EA1004996052 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = 0;
		goto IL_003f;
	}

IL_0004:
	{
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_0 = __this->____slots;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->___hashCode;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_3 = __this->____slots;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		V_1 = L_5;
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_6 = ___0_other;
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_7 = V_1;
		NullCheck(L_6);
		bool L_8;
		L_8 = HashSet_1_Contains_mF55E9A6954362E9691131BB12F96479E031EB061(L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		if (L_8)
		{
			goto IL_003b;
		}
	}
	{
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_9 = V_1;
		bool L_10;
		L_10 = HashSet_1_Remove_m00D151BA0CCF666DC4F75800661B5711CD1198ED(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
	}

IL_003b:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_003f:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____lastIndex;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithEnumerable_m0ED18A9504BAC458143A7DEE7C405ADB151E435B_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	int4_tBA77D4945786DE82C3A487B33955EA1004996052 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = __this->____lastIndex;
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_1, NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)100))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = V_1;
		if ((uintptr_t)((uintptr_t)L_4) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_5 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_4), 4));
		int8_t* L_6 = (int8_t*) (L_5 ? alloca(L_5) : NULL);
		memset(L_6, 0, L_5);
		int32_t L_7 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_8 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_8, (int32_t*)(L_6), L_7, NULL);
		V_2 = L_8;
		goto IL_002f;
	}

IL_0022:
	{
		int32_t L_9 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_9);
		int32_t L_11 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_12 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_12, L_10, L_11, NULL);
		V_2 = L_12;
	}

IL_002f:
	{
		RuntimeObject* L_13 = ___0_other;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_13);
		V_3 = L_14;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0061:
			{
				{
					RuntimeObject* L_15 = V_3;
					if (!L_15)
					{
						goto IL_006a;
					}
				}
				{
					RuntimeObject* L_16 = V_3;
					NullCheck((RuntimeObject*)L_16);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
				}

IL_006a:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0057_1;
			}

IL_0038_1:
			{
				RuntimeObject* L_17 = V_3;
				NullCheck(L_17);
				int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_18;
				L_18 = InterfaceFuncInvoker0< int4_tBA77D4945786DE82C3A487B33955EA1004996052 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_17);
				V_4 = L_18;
				int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_19 = V_4;
				int32_t L_20;
				L_20 = HashSet_1_InternalIndexOf_m8D27BFD88C06FDB763E5D0F5B7957A0EA2F3A22A(__this, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
				V_5 = L_20;
				int32_t L_21 = V_5;
				if ((((int32_t)L_21) < ((int32_t)0)))
				{
					goto IL_0057_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_22 = V_2;
				int32_t L_23 = V_5;
				NullCheck(L_22);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_22, L_23, NULL);
			}

IL_0057_1:
			{
				RuntimeObject* L_24 = V_3;
				NullCheck((RuntimeObject*)L_24);
				bool L_25;
				L_25 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_24);
				if (L_25)
				{
					goto IL_0038_1;
				}
			}
			{
				goto IL_006b;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006b:
	{
		V_6 = 0;
		goto IL_00ae;
	}

IL_0070:
	{
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_26 = __this->____slots;
		int32_t L_27 = V_6;
		NullCheck(L_26);
		int32_t L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___hashCode;
		if ((((int32_t)L_28) < ((int32_t)0)))
		{
			goto IL_00a8;
		}
	}
	{
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_29 = V_2;
		int32_t L_30 = V_6;
		NullCheck(L_29);
		bool L_31;
		L_31 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00a8;
		}
	}
	{
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_32 = __this->____slots;
		int32_t L_33 = V_6;
		NullCheck(L_32);
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_34 = ((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->___value;
		bool L_35;
		L_35 = HashSet_1_Remove_m00D151BA0CCF666DC4F75800661B5711CD1198ED(__this, L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
	}

IL_00a8:
	{
		int32_t L_36 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00ae:
	{
		int32_t L_37 = V_6;
		int32_t L_38 = V_0;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0070;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalIndexOf_m8D27BFD88C06FDB763E5D0F5B7957A0EA2F3A22A_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_0 = ___0_item;
		int32_t L_1;
		L_1 = HashSet_1_InternalGetHashCode_m4185811C4A6DE37CAC8E8D38ED33AC0E52452F2B(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_1 = L_1;
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_2 = __this->____slots;
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		int32_t L_4 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)(L_4%((int32_t)(((RuntimeArray*)L_5)->max_length))));
		int32_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		goto IL_0074;
	}

IL_0027:
	{
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_8 = V_2;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = V_1;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_12 = __this->____comparer;
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_13 = V_2;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_15 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___value;
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_16 = ___0_item;
		NullCheck(L_12);
		bool L_17;
		L_17 = InterfaceFuncInvoker2< bool, int4_tBA77D4945786DE82C3A487B33955EA1004996052, int4_tBA77D4945786DE82C3A487B33955EA1004996052 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_12, L_15, L_16);
		if (!L_17)
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_18 = V_3;
		return L_18;
	}

IL_0052:
	{
		int32_t L_19 = V_0;
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_20 = V_2;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0063;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_21 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_0063:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_23 = V_2;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___next;
		V_3 = L_25;
	}

IL_0074:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithUniqueHashSet_m69617C0D5D309C4A5C9600C62CC79BE09415983F_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* ___0_other, const RuntimeMethod* method) 
{
	Enumerator_t444D848AC8669A1715E471A02D6102B43CE95821 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int4_tBA77D4945786DE82C3A487B33955EA1004996052 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_0 = ___0_other;
		NullCheck(L_0);
		Enumerator_t444D848AC8669A1715E471A02D6102B43CE95821 L_1;
		L_1 = HashSet_1_GetEnumerator_mB0BDE1F92D08FFC64D8527B53EBF8EE2DAF34A46(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{
				Enumerator_Dispose_m4D3B873ECB9FC40CCDD6C7390399DF25D5D74E7D((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 63));
				return;
			}
		});
		try
		{
			{
				goto IL_0022_1;
			}

IL_0009_1:
			{
				int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_2;
				L_2 = Enumerator_get_Current_m1F35A2595ECCDBDD016ACA8F0EC5FACF40B713EF_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 60));
				V_1 = L_2;
				int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_3 = V_1;
				bool L_4;
				L_4 = HashSet_1_Remove_m00D151BA0CCF666DC4F75800661B5711CD1198ED(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
				if (L_4)
				{
					goto IL_0022_1;
				}
			}
			{
				int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_5 = V_1;
				bool L_6;
				L_6 = HashSet_1_AddIfNotPresent_m720A82B4E4CEC46E250E958F5C29E47575861C1E(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
			}

IL_0022_1:
			{
				bool L_7;
				L_7 = Enumerator_MoveNext_mF0E956533D364C01DE5779814BA73D46C127FE3F((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
				if (L_7)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_003b;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithEnumerable_mE66EBBD1F3A7672987D902273D2DF7FACD82045F_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	int4_tBA77D4945786DE82C3A487B33955EA1004996052 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		int32_t L_0 = __this->____lastIndex;
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_1, NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)50))))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_4 = V_1;
		if ((uintptr_t)((uintptr_t)L_4) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_5 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_4), 4));
		int8_t* L_6 = (int8_t*) (L_5 ? alloca(L_5) : NULL);
		memset(L_6, 0, L_5);
		int32_t L_7 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_8 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_8, (int32_t*)(L_6), L_7, NULL);
		V_2 = L_8;
		int32_t L_9 = V_1;
		if ((uintptr_t)((uintptr_t)L_9) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_10 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_9), 4));
		int8_t* L_11 = (int8_t*) (L_10 ? alloca(L_10) : NULL);
		memset(L_11, 0, L_10);
		int32_t L_12 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_13 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_13, (int32_t*)(L_11), L_12, NULL);
		V_3 = L_13;
		goto IL_0049;
	}

IL_002f:
	{
		int32_t L_14 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_14);
		int32_t L_16 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_17 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_17, L_15, L_16, NULL);
		V_2 = L_17;
		int32_t L_18 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_18);
		int32_t L_20 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_21 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_21, L_19, L_20, NULL);
		V_3 = L_21;
	}

IL_0049:
	{
		RuntimeObject* L_22 = ___0_other;
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_22);
		V_4 = L_23;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0097:
			{
				{
					RuntimeObject* L_24 = V_4;
					if (!L_24)
					{
						goto IL_00a2;
					}
				}
				{
					RuntimeObject* L_25 = V_4;
					NullCheck((RuntimeObject*)L_25);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_25);
				}

IL_00a2:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_008c_1;
			}

IL_0053_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_27;
				L_27 = InterfaceFuncInvoker0< int4_tBA77D4945786DE82C3A487B33955EA1004996052 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_26);
				V_5 = L_27;
				V_6 = 0;
				int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_28 = V_5;
				bool L_29;
				L_29 = HashSet_1_AddOrGetLocation_m8FC0F19FE59AC90029E3555F43A092B337170428(__this, L_28, (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 64));
				if (!L_29)
				{
					goto IL_0075_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_30 = V_3;
				int32_t L_31 = V_6;
				NullCheck(L_30);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_30, L_31, NULL);
				goto IL_008c_1;
			}

IL_0075_1:
			{
				int32_t L_32 = V_6;
				int32_t L_33 = V_0;
				if ((((int32_t)L_32) >= ((int32_t)L_33)))
				{
					goto IL_008c_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_34 = V_3;
				int32_t L_35 = V_6;
				NullCheck(L_34);
				bool L_36;
				L_36 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_34, L_35, NULL);
				if (L_36)
				{
					goto IL_008c_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_37 = V_2;
				int32_t L_38 = V_6;
				NullCheck(L_37);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_37, L_38, NULL);
			}

IL_008c_1:
			{
				RuntimeObject* L_39 = V_4;
				NullCheck((RuntimeObject*)L_39);
				bool L_40;
				L_40 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_39);
				if (L_40)
				{
					goto IL_0053_1;
				}
			}
			{
				goto IL_00a3;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a3:
	{
		V_7 = 0;
		goto IL_00d1;
	}

IL_00a8:
	{
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_41 = V_2;
		int32_t L_42 = V_7;
		NullCheck(L_41);
		bool L_43;
		L_43 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_41, L_42, NULL);
		if (!L_43)
		{
			goto IL_00cb;
		}
	}
	{
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_44 = __this->____slots;
		int32_t L_45 = V_7;
		NullCheck(L_44);
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_46 = ((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___value;
		bool L_47;
		L_47 = HashSet_1_Remove_m00D151BA0CCF666DC4F75800661B5711CD1198ED(__this, L_46, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
	}

IL_00cb:
	{
		int32_t L_48 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_00d1:
	{
		int32_t L_49 = V_7;
		int32_t L_50 = V_0;
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			goto IL_00a8;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddOrGetLocation_m8FC0F19FE59AC90029E3555F43A092B337170428_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___0_value, int32_t* ___1_location, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_0 = ___0_value;
		int32_t L_1;
		L_1 = HashSet_1_InternalGetHashCode_m4185811C4A6DE37CAC8E8D38ED33AC0E52452F2B(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		V_1 = ((int32_t)(L_2%((int32_t)(((RuntimeArray*)L_3)->max_length))));
		V_2 = 0;
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_4 = __this->____slots;
		V_3 = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		goto IL_007f;
	}

IL_002a:
	{
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_9 = V_3;
		int32_t L_10 = V_5;
		NullCheck(L_9);
		int32_t L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___hashCode;
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_005b;
		}
	}
	{
		RuntimeObject* L_13 = __this->____comparer;
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_14 = V_3;
		int32_t L_15 = V_5;
		NullCheck(L_14);
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___value;
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_17 = ___0_value;
		NullCheck(L_13);
		bool L_18;
		L_18 = InterfaceFuncInvoker2< bool, int4_tBA77D4945786DE82C3A487B33955EA1004996052, int4_tBA77D4945786DE82C3A487B33955EA1004996052 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_13, L_16, L_17);
		if (!L_18)
		{
			goto IL_005b;
		}
	}
	{
		int32_t* L_19 = ___1_location;
		int32_t L_20 = V_5;
		*((int32_t*)L_19) = (int32_t)L_20;
		return (bool)0;
	}

IL_005b:
	{
		int32_t L_21 = V_2;
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_22 = V_3;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_006c;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_006c:
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_25 = V_3;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_5 = L_27;
	}

IL_007f:
	{
		int32_t L_28 = V_5;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_29 = __this->____freeList;
		if ((((int32_t)L_29) < ((int32_t)0)))
		{
			goto IL_00aa;
		}
	}
	{
		int32_t L_30 = __this->____freeList;
		V_4 = L_30;
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_31 = V_3;
		int32_t L_32 = V_4;
		NullCheck(L_31);
		int32_t L_33 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next;
		__this->____freeList = L_33;
		goto IL_00e3;
	}

IL_00aa:
	{
		int32_t L_34 = __this->____lastIndex;
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_35 = V_3;
		NullCheck(L_35);
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))))
		{
			goto IL_00cd;
		}
	}
	{
		HashSet_1_IncreaseCapacity_m6BEC5B8F9D1ADF68469563CD4E9508187BB5E3C4(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_36 = __this->____slots;
		V_3 = L_36;
		int32_t L_37 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->____buckets;
		NullCheck(L_38);
		V_1 = ((int32_t)(L_37%((int32_t)(((RuntimeArray*)L_38)->max_length))));
	}

IL_00cd:
	{
		int32_t L_39 = __this->____lastIndex;
		V_4 = L_39;
		int32_t L_40 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00e3:
	{
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_41 = V_3;
		int32_t L_42 = V_4;
		NullCheck(L_41);
		int32_t L_43 = V_0;
		((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode = L_43;
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_44 = V_3;
		int32_t L_45 = V_4;
		NullCheck(L_44);
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_46 = ___0_value;
		((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___value = L_46;
		SlotU5BU5D_tC56B21B991936398751D57B6B24A2364C51F2AD0* L_47 = V_3;
		int32_t L_48 = V_4;
		NullCheck(L_47);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = __this->____buckets;
		int32_t L_50 = V_1;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___next = ((int32_t)il2cpp_codegen_subtract(L_52, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		int32_t L_55 = V_4;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(L_54), (int32_t)((int32_t)il2cpp_codegen_add(L_55, 1)));
		int32_t L_56 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_56, 1));
		int32_t L_57 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_57, 1));
		int32_t* L_58 = ___1_location;
		int32_t L_59 = V_4;
		*((int32_t*)L_58) = (int32_t)L_59;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementCount_t09BC3D71FBA88FF07695C2BE3838AB49E877F0D5 HashSet_1_CheckUniqueAndUnfoundElements_m0BB03E56F8D597ABE6DE3D80124C326BC5B23895_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ElementCount_t09BC3D71FBA88FF07695C2BE3838AB49E877F0D5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	int4_tBA77D4945786DE82C3A487B33955EA1004996052 V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_004f;
		}
	}
	{
		V_5 = 0;
		RuntimeObject* L_1 = ___0_other;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_1);
		V_6 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_3 = V_6;
					if (!L_3)
					{
						goto IL_003b;
					}
				}
				{
					RuntimeObject* L_4 = V_6;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_003b:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0025_1;
			}

IL_0015_1:
			{
				RuntimeObject* L_5 = V_6;
				NullCheck(L_5);
				int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_6;
				L_6 = InterfaceFuncInvoker0< int4_tBA77D4945786DE82C3A487B33955EA1004996052 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_5);
				int32_t L_7 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_7, 1));
				goto IL_003c;
			}

IL_0025_1:
			{
				RuntimeObject* L_8 = V_6;
				NullCheck((RuntimeObject*)L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				if (L_9)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_003c;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		(&V_0)->___uniqueCount = 0;
		int32_t L_10 = V_5;
		(&V_0)->___unfoundCount = L_10;
		ElementCount_t09BC3D71FBA88FF07695C2BE3838AB49E877F0D5 L_11 = V_0;
		return L_11;
	}

IL_004f:
	{
		int32_t L_12 = __this->____lastIndex;
		int32_t L_13;
		L_13 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_12, NULL);
		V_1 = L_13;
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)100))))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_15 = V_1;
		if ((uintptr_t)((uintptr_t)L_15) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_16 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_15), 4));
		int8_t* L_17 = (int8_t*) (L_16 ? alloca(L_16) : NULL);
		memset(L_17, 0, L_16);
		int32_t L_18 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_19 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_19, (int32_t*)(L_17), L_18, NULL);
		V_2 = L_19;
		goto IL_007c;
	}

IL_006f:
	{
		int32_t L_20 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_20);
		int32_t L_22 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_23 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_23, L_21, L_22, NULL);
		V_2 = L_23;
	}

IL_007c:
	{
		V_3 = 0;
		V_4 = 0;
		RuntimeObject* L_24 = ___0_other;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_24);
		V_6 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d1:
			{
				{
					RuntimeObject* L_26 = V_6;
					if (!L_26)
					{
						goto IL_00dc;
					}
				}
				{
					RuntimeObject* L_27 = V_6;
					NullCheck((RuntimeObject*)L_27);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00dc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00c6_1;
			}

IL_008b_1:
			{
				RuntimeObject* L_28 = V_6;
				NullCheck(L_28);
				int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_29;
				L_29 = InterfaceFuncInvoker0< int4_tBA77D4945786DE82C3A487B33955EA1004996052 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_28);
				V_7 = L_29;
				int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_30 = V_7;
				int32_t L_31;
				L_31 = HashSet_1_InternalIndexOf_m8D27BFD88C06FDB763E5D0F5B7957A0EA2F3A22A(__this, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
				V_8 = L_31;
				int32_t L_32 = V_8;
				if ((((int32_t)L_32) < ((int32_t)0)))
				{
					goto IL_00bd_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_33 = V_2;
				int32_t L_34 = V_8;
				NullCheck(L_33);
				bool L_35;
				L_35 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_33, L_34, NULL);
				if (L_35)
				{
					goto IL_00c6_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_36 = V_2;
				int32_t L_37 = V_8;
				NullCheck(L_36);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_36, L_37, NULL);
				int32_t L_38 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
				goto IL_00c6_1;
			}

IL_00bd_1:
			{
				int32_t L_39 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_39, 1));
				bool L_40 = ___1_returnIfUnfound;
				if (!L_40)
				{
					goto IL_00c6_1;
				}
			}
			{
				goto IL_00dd;
			}

IL_00c6_1:
			{
				RuntimeObject* L_41 = V_6;
				NullCheck((RuntimeObject*)L_41);
				bool L_42;
				L_42 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				if (L_42)
				{
					goto IL_008b_1;
				}
			}
			{
				goto IL_00dd;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00dd:
	{
		int32_t L_43 = V_4;
		(&V_0)->___uniqueCount = L_43;
		int32_t L_44 = V_3;
		(&V_0)->___unfoundCount = L_44;
		ElementCount_t09BC3D71FBA88FF07695C2BE3838AB49E877F0D5 L_45 = V_0;
		return L_45;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_HashSetEquals_m30ECB2702E885E179DE714E240E7FC732BDD85A1_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* ___0_set1, HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* ___1_set2, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	Enumerator_t444D848AC8669A1715E471A02D6102B43CE95821 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int4_tBA77D4945786DE82C3A487B33955EA1004996052 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int4_tBA77D4945786DE82C3A487B33955EA1004996052 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	Enumerator_t444D848AC8669A1715E471A02D6102B43CE95821 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int4_tBA77D4945786DE82C3A487B33955EA1004996052 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_0 = ___0_set1;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_1 = ___1_set2;
		return (bool)((((RuntimeObject*)(HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}

IL_0008:
	{
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_2 = ___1_set2;
		if (L_2)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_3 = ___0_set1;
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_4 = ___1_set2;
		bool L_5;
		L_5 = HashSet_1_AreEqualityComparersEqual_mDB32BC9986BCAE9DD3B862B75797CC8DE54CF1EF(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (!L_5)
		{
			goto IL_0062;
		}
	}
	{
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_6 = ___0_set1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = HashSet_1_get_Count_mA9A5AD31DE364B32358790213F952B7BAB7C1B3B_inline(L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 46));
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_8 = ___1_set2;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = HashSet_1_get_Count_mA9A5AD31DE364B32358790213F952B7BAB7C1B3B_inline(L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 46));
		if ((((int32_t)L_7) == ((int32_t)L_9)))
		{
			goto IL_0026;
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_10 = ___1_set2;
		NullCheck(L_10);
		Enumerator_t444D848AC8669A1715E471A02D6102B43CE95821 L_11;
		L_11 = HashSet_1_GetEnumerator_mB0BDE1F92D08FFC64D8527B53EBF8EE2DAF34A46(L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 59));
		V_0 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0052:
			{
				Enumerator_Dispose_m4D3B873ECB9FC40CCDD6C7390399DF25D5D74E7D((&V_0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 63));
				return;
			}
		});
		try
		{
			{
				goto IL_0047_1;
			}

IL_002f_1:
			{
				int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_12;
				L_12 = Enumerator_get_Current_m1F35A2595ECCDBDD016ACA8F0EC5FACF40B713EF_inline((&V_0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 60));
				V_1 = L_12;
				HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_13 = ___0_set1;
				int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_14 = V_1;
				NullCheck(L_13);
				bool L_15;
				L_15 = HashSet_1_Contains_mF55E9A6954362E9691131BB12F96479E031EB061(L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 51));
				if (L_15)
				{
					goto IL_0047_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_00d5;
			}

IL_0047_1:
			{
				bool L_16;
				L_16 = Enumerator_MoveNext_mF0E956533D364C01DE5779814BA73D46C127FE3F((&V_0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 62));
				if (L_16)
				{
					goto IL_002f_1;
				}
			}
			{
				goto IL_0060;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0060:
	{
		return (bool)1;
	}

IL_0062:
	{
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_17 = ___1_set2;
		NullCheck(L_17);
		Enumerator_t444D848AC8669A1715E471A02D6102B43CE95821 L_18;
		L_18 = HashSet_1_GetEnumerator_mB0BDE1F92D08FFC64D8527B53EBF8EE2DAF34A46(L_17, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 59));
		V_0 = L_18;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c5:
			{
				Enumerator_Dispose_m4D3B873ECB9FC40CCDD6C7390399DF25D5D74E7D((&V_0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 63));
				return;
			}
		});
		try
		{
			{
				goto IL_00ba_1;
			}

IL_006b_1:
			{
				int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_19;
				L_19 = Enumerator_get_Current_m1F35A2595ECCDBDD016ACA8F0EC5FACF40B713EF_inline((&V_0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 60));
				V_3 = L_19;
				V_4 = (bool)0;
				HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_20 = ___0_set1;
				NullCheck(L_20);
				Enumerator_t444D848AC8669A1715E471A02D6102B43CE95821 L_21;
				L_21 = HashSet_1_GetEnumerator_mB0BDE1F92D08FFC64D8527B53EBF8EE2DAF34A46(L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 59));
				V_5 = L_21;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00a4_1:
					{
						Enumerator_Dispose_m4D3B873ECB9FC40CCDD6C7390399DF25D5D74E7D((&V_5), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 63));
						return;
					}
				});
				try
				{
					{
						goto IL_0099_2;
					}

IL_0080_2:
					{
						int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_22;
						L_22 = Enumerator_get_Current_m1F35A2595ECCDBDD016ACA8F0EC5FACF40B713EF_inline((&V_5), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 60));
						V_6 = L_22;
						RuntimeObject* L_23 = ___2_comparer;
						int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_24 = V_3;
						int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_25 = V_6;
						NullCheck(L_23);
						bool L_26;
						L_26 = InterfaceFuncInvoker2< bool, int4_tBA77D4945786DE82C3A487B33955EA1004996052, int4_tBA77D4945786DE82C3A487B33955EA1004996052 >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_23, L_24, L_25);
						if (!L_26)
						{
							goto IL_0099_2;
						}
					}
					{
						V_4 = (bool)1;
						goto IL_00b2_1;
					}

IL_0099_2:
					{
						bool L_27;
						L_27 = Enumerator_MoveNext_mF0E956533D364C01DE5779814BA73D46C127FE3F((&V_5), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 62));
						if (L_27)
						{
							goto IL_0080_2;
						}
					}
					{
						goto IL_00b2_1;
					}
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00b2_1:
			{
				bool L_28 = V_4;
				if (L_28)
				{
					goto IL_00ba_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_00d5;
			}

IL_00ba_1:
			{
				bool L_29;
				L_29 = Enumerator_MoveNext_mF0E956533D364C01DE5779814BA73D46C127FE3F((&V_0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 62));
				if (L_29)
				{
					goto IL_006b_1;
				}
			}
			{
				goto IL_00d3;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d3:
	{
		return (bool)1;
	}

IL_00d5:
	{
		bool L_30 = V_2;
		return L_30;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_mDB32BC9986BCAE9DD3B862B75797CC8DE54CF1EF_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* ___0_set1, HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* ___1_set2, const RuntimeMethod* method) 
{
	{
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_0 = ___0_set1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = HashSet_1_get_Comparer_m4EC62D967B860311534D68F4F275C0FC87CAA8C3_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 65));
		HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* L_2 = ___1_set2;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = HashSet_1_get_Comparer_m4EC62D967B860311534D68F4F275C0FC87CAA8C3_inline(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 65));
		NullCheck((RuntimeObject*)L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, (RuntimeObject*)L_1, (RuntimeObject*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m4185811C4A6DE37CAC8E8D38ED33AC0E52452F2B_gshared (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___0_item, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->____comparer;
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_2 = ___0_item;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int4_tBA77D4945786DE82C3A487B33955EA1004996052 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1, L_2);
		return ((int32_t)(L_3&((int32_t)2147483647LL)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* EqualityComparer_1_get_Default_m165DD3094175955D08A5F82EE68A51CB660ECB35_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* V_0 = NULL;
	{
		EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* L_0 = ((EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mEAA90163C77E0AFC6E891B34A7FDBFEEF699502A(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_mFB71560159D8163320DA0651E1F05936B175803C_gshared_inline (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mB0F7DE9471912D4DA1C88986F3A1E6D4A1631F00_gshared_inline (Predicate_1_t9ADD2AEC8229E068388E35FC4B0E7C4F2AE588D6* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 Enumerator_get_Current_m3159B7369EC62631C4C10AD1055F55B6B15218E9_gshared_inline (Enumerator_t0C7989F0F45B4D7A9C7BD464806B72BDA3020B8C* __this, const RuntimeMethod* method) 
{
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_m302A4EEC161C86619F472AD3FC4A634D53CB1FA0_gshared_inline (HashSet_1_t03A441EC1493E313B17FAEAEFD9B0BEBFA3F6206* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____comparer;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t3623A572B0FA54A1BF249FA9AB30236498C32423* EqualityComparer_1_get_Default_mE1A8E1F0A77A6C7B6F2EAFF3246AEDF7E22F7E69_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t3623A572B0FA54A1BF249FA9AB30236498C32423* V_0 = NULL;
	{
		EqualityComparer_1_t3623A572B0FA54A1BF249FA9AB30236498C32423* L_0 = ((EqualityComparer_1_t3623A572B0FA54A1BF249FA9AB30236498C32423_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t3623A572B0FA54A1BF249FA9AB30236498C32423* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t3623A572B0FA54A1BF249FA9AB30236498C32423* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m62E7E9C26460FD3A0A63B7926D62F87D61AB68EE(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t3623A572B0FA54A1BF249FA9AB30236498C32423* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t3623A572B0FA54A1BF249FA9AB30236498C32423_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t3623A572B0FA54A1BF249FA9AB30236498C32423_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t3623A572B0FA54A1BF249FA9AB30236498C32423* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m24CFCD730AE8EB3AE4D250B05692718E272F8940_gshared_inline (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m2947F3CB956C7AE73995537B4046EC17478AEF7D_gshared_inline (Predicate_1_tF41DB32AAF3F0B3D100E7030BD9909B760A73F5A* __this, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A Enumerator_get_Current_m402B297175A3F69505C145B0FA96EF769001C61E_gshared_inline (Enumerator_t9CF79F755FC8DD7C2EA5EE61D7046718C0F8E77A* __this, const RuntimeMethod* method) 
{
	{
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_m9E0C308E111E5BB1B52F8FD1F03688AADB791982_gshared_inline (HashSet_1_tFE3275BF38A83131F7EB4A400BAA033F2D8C7AC1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____comparer;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tA3B1D933733F9FCD47DA56535ED7886D3422CB50* EqualityComparer_1_get_Default_mFB695EAD762B1CFF4DB8B7A33C6C8327EF377731_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tA3B1D933733F9FCD47DA56535ED7886D3422CB50* V_0 = NULL;
	{
		EqualityComparer_1_tA3B1D933733F9FCD47DA56535ED7886D3422CB50* L_0 = ((EqualityComparer_1_tA3B1D933733F9FCD47DA56535ED7886D3422CB50_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tA3B1D933733F9FCD47DA56535ED7886D3422CB50* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tA3B1D933733F9FCD47DA56535ED7886D3422CB50* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mDC22DC332352F08EB8CFAE121408311D10BCA57C(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tA3B1D933733F9FCD47DA56535ED7886D3422CB50* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tA3B1D933733F9FCD47DA56535ED7886D3422CB50_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tA3B1D933733F9FCD47DA56535ED7886D3422CB50_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tA3B1D933733F9FCD47DA56535ED7886D3422CB50* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_mA102A68A3C7550BA9E888E08C4495D88C23E4685_gshared_inline (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mDF73A0B6D0DF1E104D3A8E1AABE0A355D00ECEE2_gshared_inline (Predicate_1_t7F3BBF48975AA1093F31885E875DDACD41E9AAF3* __this, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF Enumerator_get_Current_m210CE4A2BAA9537A817DBE89106EC3F0876B369A_gshared_inline (Enumerator_t3A3D0CB1E039CA2A4D21932E46575AA117FA0F9A* __this, const RuntimeMethod* method) 
{
	{
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_mCAEE62B8999A728702AFE3940A3EA6082FB39546_gshared_inline (HashSet_1_t5311B99B2C9BEBCDB01117E488AA8BAAF583AB85* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____comparer;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t1A2724DE19E33ECECEDA97FE55A35054C6A07B89* EqualityComparer_1_get_Default_m4464B0DA95E648A79240409742917C9853AD8686_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t1A2724DE19E33ECECEDA97FE55A35054C6A07B89* V_0 = NULL;
	{
		EqualityComparer_1_t1A2724DE19E33ECECEDA97FE55A35054C6A07B89* L_0 = ((EqualityComparer_1_t1A2724DE19E33ECECEDA97FE55A35054C6A07B89_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t1A2724DE19E33ECECEDA97FE55A35054C6A07B89* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t1A2724DE19E33ECECEDA97FE55A35054C6A07B89* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD915EE72AF73F448B7A5D31E16512557BA5BB6C8(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t1A2724DE19E33ECECEDA97FE55A35054C6A07B89* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t1A2724DE19E33ECECEDA97FE55A35054C6A07B89_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t1A2724DE19E33ECECEDA97FE55A35054C6A07B89_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t1A2724DE19E33ECECEDA97FE55A35054C6A07B89* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_mA9A5AD31DE364B32358790213F952B7BAB7C1B3B_gshared_inline (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mD102C7E848768B7C3A4CD761EED5C561287427F2_gshared_inline (Predicate_1_t6CD543AD1D01723C56EE7C9824DA046DB9B9F266* __this, int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, int4_tBA77D4945786DE82C3A487B33955EA1004996052, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int4_tBA77D4945786DE82C3A487B33955EA1004996052 Enumerator_get_Current_m1F35A2595ECCDBDD016ACA8F0EC5FACF40B713EF_gshared_inline (Enumerator_t444D848AC8669A1715E471A02D6102B43CE95821* __this, const RuntimeMethod* method) 
{
	{
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_m4EC62D967B860311534D68F4F275C0FC87CAA8C3_gshared_inline (HashSet_1_tF03B15FC117D9FD4CCFA6F002FFC814542591A51* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____comparer;
		return L_0;
	}
}
