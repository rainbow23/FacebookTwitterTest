#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




#pragma once
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const MethodInfo*);

	static inline void Invoke (Il2CppMethodSlot slot, TypeInfo* declaringInterface, void* obj)
	{
		VirtualInvokeData data = il2cpp::vm::Runtime::GetInterfaceInvokeData (slot, declaringInterface, obj);
		((Action)data.methodInfo->method)(data.target, data.methodInfo);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const MethodInfo*);

	static inline R Invoke (Il2CppMethodSlot slot, TypeInfo* declaringInterface, void* obj)
	{
		VirtualInvokeData data = il2cpp::vm::Runtime::GetInterfaceInvokeData (slot, declaringInterface, obj);
		return ((Func)data.methodInfo->method)(data.target, data.methodInfo);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const MethodInfo*);

	static inline void Invoke (Il2CppMethodSlot slot, TypeInfo* declaringInterface, void* obj, T1 p1)
	{
		VirtualInvokeData data = il2cpp::vm::Runtime::GetInterfaceInvokeData (slot, declaringInterface, obj);
		((Action)data.methodInfo->method)(data.target, p1, data.methodInfo);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const MethodInfo*);

	static inline R Invoke (Il2CppMethodSlot slot, TypeInfo* declaringInterface, void* obj, T1 p1)
	{
		VirtualInvokeData data = il2cpp::vm::Runtime::GetInterfaceInvokeData (slot, declaringInterface, obj);
		return ((Func)data.methodInfo->method)(data.target, p1, data.methodInfo);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const MethodInfo*);

	static inline void Invoke (Il2CppMethodSlot slot, TypeInfo* declaringInterface, void* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData data = il2cpp::vm::Runtime::GetInterfaceInvokeData (slot, declaringInterface, obj);
		((Action)data.methodInfo->method)(data.target, p1, p2, data.methodInfo);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const MethodInfo*);

	static inline R Invoke (Il2CppMethodSlot slot, TypeInfo* declaringInterface, void* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData data = il2cpp::vm::Runtime::GetInterfaceInvokeData (slot, declaringInterface, obj);
		return ((Func)data.methodInfo->method)(data.target, p1, p2, data.methodInfo);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const MethodInfo*);

	static inline void Invoke (Il2CppMethodSlot slot, TypeInfo* declaringInterface, void* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData data = il2cpp::vm::Runtime::GetInterfaceInvokeData (slot, declaringInterface, obj);
		((Action)data.methodInfo->method)(data.target, p1, p2, p3, data.methodInfo);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const MethodInfo*);

	static inline R Invoke (Il2CppMethodSlot slot, TypeInfo* declaringInterface, void* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData data = il2cpp::vm::Runtime::GetInterfaceInvokeData (slot, declaringInterface, obj);
		return ((Func)data.methodInfo->method)(data.target, p1, p2, p3, data.methodInfo);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const MethodInfo*);

	static inline void Invoke (Il2CppMethodSlot slot, TypeInfo* declaringInterface, void* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData data = il2cpp::vm::Runtime::GetInterfaceInvokeData (slot, declaringInterface, obj);
		((Action)data.methodInfo->method)(data.target, p1, p2, p3, p4, data.methodInfo);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const MethodInfo*);

	static inline R Invoke (Il2CppMethodSlot slot, TypeInfo* declaringInterface, void* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData data = il2cpp::vm::Runtime::GetInterfaceInvokeData (slot, declaringInterface, obj);
		return ((Func)data.methodInfo->method)(data.target, p1, p2, p3, p4, data.methodInfo);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const MethodInfo*);

	static inline void Invoke (Il2CppMethodSlot slot, TypeInfo* declaringInterface, void* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData data = il2cpp::vm::Runtime::GetInterfaceInvokeData (slot, declaringInterface, obj);
		((Action)data.methodInfo->method)(data.target, p1, p2, p3, p4, p5, data.methodInfo);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const MethodInfo*);

	static inline R Invoke (Il2CppMethodSlot slot, TypeInfo* declaringInterface, void* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData data = il2cpp::vm::Runtime::GetInterfaceInvokeData (slot, declaringInterface, obj);
		return ((Func)data.methodInfo->method)(data.target, p1, p2, p3, p4, p5, data.methodInfo);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct InterfaceActionInvoker8
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, T8, const MethodInfo*);

	static inline void Invoke (Il2CppMethodSlot slot, TypeInfo* declaringInterface, void* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8)
	{
		VirtualInvokeData data = il2cpp::vm::Runtime::GetInterfaceInvokeData (slot, declaringInterface, obj);
		((Action)data.methodInfo->method)(data.target, p1, p2, p3, p4, p5, p6, p7, p8, data.methodInfo);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct InterfaceActionInvoker9
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, const MethodInfo*);

	static inline void Invoke (Il2CppMethodSlot slot, TypeInfo* declaringInterface, void* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9)
	{
		VirtualInvokeData data = il2cpp::vm::Runtime::GetInterfaceInvokeData (slot, declaringInterface, obj);
		((Action)data.methodInfo->method)(data.target, p1, p2, p3, p4, p5, p6, p7, p8, p9, data.methodInfo);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
struct InterfaceActionInvoker10
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, const MethodInfo*);

	static inline void Invoke (Il2CppMethodSlot slot, TypeInfo* declaringInterface, void* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10)
	{
		VirtualInvokeData data = il2cpp::vm::Runtime::GetInterfaceInvokeData (slot, declaringInterface, obj);
		((Action)data.methodInfo->method)(data.target, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, data.methodInfo);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
struct InterfaceActionInvoker12
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, const MethodInfo*);

	static inline void Invoke (Il2CppMethodSlot slot, TypeInfo* declaringInterface, void* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11, T12 p12)
	{
		VirtualInvokeData data = il2cpp::vm::Runtime::GetInterfaceInvokeData (slot, declaringInterface, obj);
		((Action)data.methodInfo->method)(data.target, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, data.methodInfo);
	}
};
