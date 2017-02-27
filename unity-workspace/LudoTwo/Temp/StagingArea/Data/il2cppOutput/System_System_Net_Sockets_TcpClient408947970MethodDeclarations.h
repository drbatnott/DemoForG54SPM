#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Net.Sockets.TcpClient
struct TcpClient_t408947970;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.String
struct String_t;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// System.Object
struct Il2CppObject;
// System.Net.Sockets.NetworkStream
struct NetworkStream_t581172200;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_AddressFamily303362630.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_AsyncCallback163412349.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Net.Sockets.TcpClient::.ctor()
extern "C"  void TcpClient__ctor_m1345314116 (TcpClient_t408947970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::System.IDisposable.Dispose()
extern "C"  void TcpClient_System_IDisposable_Dispose_m129910969 (TcpClient_t408947970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Init(System.Net.Sockets.AddressFamily)
extern "C"  void TcpClient_Init_m2339200298 (TcpClient_t408947970 * __this, int32_t ___family0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Close()
extern "C"  void TcpClient_Close_m4260227760 (TcpClient_t408947970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::EndConnect(System.IAsyncResult)
extern "C"  void TcpClient_EndConnect_m40011364 (TcpClient_t408947970 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.TcpClient::BeginConnect(System.String,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * TcpClient_BeginConnect_m2214827936 (TcpClient_t408947970 * __this, String_t* ___host0, int32_t ___port1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___state3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Dispose(System.Boolean)
extern "C"  void TcpClient_Dispose_m2105752024 (TcpClient_t408947970 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Finalize()
extern "C"  void TcpClient_Finalize_m3794615336 (TcpClient_t408947970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::GetStream()
extern "C"  NetworkStream_t581172200 * TcpClient_GetStream_m872175179 (TcpClient_t408947970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::CheckDisposed()
extern "C"  void TcpClient_CheckDisposed_m3605359959 (TcpClient_t408947970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
