/*** Autogenerated by WIDL 1.7.40 from ocmm.idl - Do not edit ***/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __ocmm_h__
#define __ocmm_h__

/* Forward declarations */

#ifndef __ITimerSink_FWD_DEFINED__
#define __ITimerSink_FWD_DEFINED__
typedef interface ITimerSink ITimerSink;
#endif

#ifndef __ITimer_FWD_DEFINED__
#define __ITimer_FWD_DEFINED__
typedef interface ITimer ITimer;
#endif

#ifndef __ITimerService_FWD_DEFINED__
#define __ITimerService_FWD_DEFINED__
typedef interface ITimerService ITimerService;
#endif

/* Headers for imported files */

#include <oaidl.h>
#include <oleidl.h>

#ifdef __cplusplus
extern "C" {
#endif

EXTERN_C const GUID NAMEDTIMER_DRAW;
/*****************************************************************************
 * ITimerSink interface
 */
#ifndef __ITimerSink_INTERFACE_DEFINED__
#define __ITimerSink_INTERFACE_DEFINED__

DEFINE_GUID(IID_ITimerSink, 0x3050f361, 0x98b5, 0x11cf, 0xbb,0x82, 0x00,0xaa,0x00,0xbd,0xce,0x0b);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("3050f361-98b5-11cf-bb82-00aa00bdce0b")
ITimerSink : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE OnTimer(
        VARIANT vtimeAdvise) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ITimerSink, 0x3050f361, 0x98b5, 0x11cf, 0xbb,0x82, 0x00,0xaa,0x00,0xbd,0xce,0x0b)
#endif
#else
typedef struct ITimerSinkVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITimerSink *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITimerSink *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITimerSink *This);

    /*** ITimerSink methods ***/
    HRESULT (STDMETHODCALLTYPE *OnTimer)(
        ITimerSink *This,
        VARIANT vtimeAdvise);

    END_INTERFACE
} ITimerSinkVtbl;
interface ITimerSink {
    CONST_VTBL ITimerSinkVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ITimerSink_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ITimerSink_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ITimerSink_Release(This) (This)->lpVtbl->Release(This)
/*** ITimerSink methods ***/
#define ITimerSink_OnTimer(This,vtimeAdvise) (This)->lpVtbl->OnTimer(This,vtimeAdvise)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT ITimerSink_QueryInterface(ITimerSink* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG ITimerSink_AddRef(ITimerSink* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG ITimerSink_Release(ITimerSink* This) {
    return This->lpVtbl->Release(This);
}
/*** ITimerSink methods ***/
static FORCEINLINE HRESULT ITimerSink_OnTimer(ITimerSink* This,VARIANT vtimeAdvise) {
    return This->lpVtbl->OnTimer(This,vtimeAdvise);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE ITimerSink_OnTimer_Proxy(
    ITimerSink* This,
    VARIANT vtimeAdvise);
void __RPC_STUB ITimerSink_OnTimer_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __ITimerSink_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ITimer interface
 */
#ifndef __ITimer_INTERFACE_DEFINED__
#define __ITimer_INTERFACE_DEFINED__

DEFINE_GUID(IID_ITimer, 0x3050f360, 0x98b5, 0x11cf, 0xbb,0x82, 0x00,0xaa,0x00,0xbd,0xce,0x0b);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("3050f360-98b5-11cf-bb82-00aa00bdce0b")
ITimer : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Advise(
        VARIANT vtimeMin,
        VARIANT vtimeMax,
        VARIANT vtimeInterval,
        DWORD dwFlags,
        ITimerSink *pTimerSink,
        DWORD *pdwCookie) = 0;

    virtual HRESULT STDMETHODCALLTYPE Unadvise(
        DWORD dwCookie) = 0;

    virtual HRESULT STDMETHODCALLTYPE Freeze(
        BOOL fFreeze) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetTime(
        VARIANT *pvtime) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ITimer, 0x3050f360, 0x98b5, 0x11cf, 0xbb,0x82, 0x00,0xaa,0x00,0xbd,0xce,0x0b)
#endif
#else
typedef struct ITimerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITimer *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITimer *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITimer *This);

    /*** ITimer methods ***/
    HRESULT (STDMETHODCALLTYPE *Advise)(
        ITimer *This,
        VARIANT vtimeMin,
        VARIANT vtimeMax,
        VARIANT vtimeInterval,
        DWORD dwFlags,
        ITimerSink *pTimerSink,
        DWORD *pdwCookie);

    HRESULT (STDMETHODCALLTYPE *Unadvise)(
        ITimer *This,
        DWORD dwCookie);

    HRESULT (STDMETHODCALLTYPE *Freeze)(
        ITimer *This,
        BOOL fFreeze);

    HRESULT (STDMETHODCALLTYPE *GetTime)(
        ITimer *This,
        VARIANT *pvtime);

    END_INTERFACE
} ITimerVtbl;
interface ITimer {
    CONST_VTBL ITimerVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ITimer_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ITimer_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ITimer_Release(This) (This)->lpVtbl->Release(This)
/*** ITimer methods ***/
#define ITimer_Advise(This,vtimeMin,vtimeMax,vtimeInterval,dwFlags,pTimerSink,pdwCookie) (This)->lpVtbl->Advise(This,vtimeMin,vtimeMax,vtimeInterval,dwFlags,pTimerSink,pdwCookie)
#define ITimer_Unadvise(This,dwCookie) (This)->lpVtbl->Unadvise(This,dwCookie)
#define ITimer_Freeze(This,fFreeze) (This)->lpVtbl->Freeze(This,fFreeze)
#define ITimer_GetTime(This,pvtime) (This)->lpVtbl->GetTime(This,pvtime)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT ITimer_QueryInterface(ITimer* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG ITimer_AddRef(ITimer* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG ITimer_Release(ITimer* This) {
    return This->lpVtbl->Release(This);
}
/*** ITimer methods ***/
static FORCEINLINE HRESULT ITimer_Advise(ITimer* This,VARIANT vtimeMin,VARIANT vtimeMax,VARIANT vtimeInterval,DWORD dwFlags,ITimerSink *pTimerSink,DWORD *pdwCookie) {
    return This->lpVtbl->Advise(This,vtimeMin,vtimeMax,vtimeInterval,dwFlags,pTimerSink,pdwCookie);
}
static FORCEINLINE HRESULT ITimer_Unadvise(ITimer* This,DWORD dwCookie) {
    return This->lpVtbl->Unadvise(This,dwCookie);
}
static FORCEINLINE HRESULT ITimer_Freeze(ITimer* This,BOOL fFreeze) {
    return This->lpVtbl->Freeze(This,fFreeze);
}
static FORCEINLINE HRESULT ITimer_GetTime(ITimer* This,VARIANT *pvtime) {
    return This->lpVtbl->GetTime(This,pvtime);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE ITimer_Advise_Proxy(
    ITimer* This,
    VARIANT vtimeMin,
    VARIANT vtimeMax,
    VARIANT vtimeInterval,
    DWORD dwFlags,
    ITimerSink *pTimerSink,
    DWORD *pdwCookie);
void __RPC_STUB ITimer_Advise_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITimer_Unadvise_Proxy(
    ITimer* This,
    DWORD dwCookie);
void __RPC_STUB ITimer_Unadvise_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITimer_Freeze_Proxy(
    ITimer* This,
    BOOL fFreeze);
void __RPC_STUB ITimer_Freeze_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITimer_GetTime_Proxy(
    ITimer* This,
    VARIANT *pvtime);
void __RPC_STUB ITimer_GetTime_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __ITimer_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ITimerService interface
 */
#ifndef __ITimerService_INTERFACE_DEFINED__
#define __ITimerService_INTERFACE_DEFINED__

DEFINE_GUID(IID_ITimerService, 0x3050f35f, 0x98b5, 0x11cf, 0xbb,0x82, 0x00,0xaa,0x00,0xbd,0xce,0x0b);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("3050f35f-98b5-11cf-bb82-00aa00bdce0b")
ITimerService : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE CreateTimer(
        ITimer *pReferenceTimer,
        ITimer **ppNewTimer) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetNamedTimer(
        REFGUID rguidName,
        ITimer **ppTimer) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetNamedTimerReference(
        REFGUID rguidName,
        ITimer *pReferenceTimer) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ITimerService, 0x3050f35f, 0x98b5, 0x11cf, 0xbb,0x82, 0x00,0xaa,0x00,0xbd,0xce,0x0b)
#endif
#else
typedef struct ITimerServiceVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITimerService *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITimerService *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITimerService *This);

    /*** ITimerService methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateTimer)(
        ITimerService *This,
        ITimer *pReferenceTimer,
        ITimer **ppNewTimer);

    HRESULT (STDMETHODCALLTYPE *GetNamedTimer)(
        ITimerService *This,
        REFGUID rguidName,
        ITimer **ppTimer);

    HRESULT (STDMETHODCALLTYPE *SetNamedTimerReference)(
        ITimerService *This,
        REFGUID rguidName,
        ITimer *pReferenceTimer);

    END_INTERFACE
} ITimerServiceVtbl;
interface ITimerService {
    CONST_VTBL ITimerServiceVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ITimerService_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ITimerService_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ITimerService_Release(This) (This)->lpVtbl->Release(This)
/*** ITimerService methods ***/
#define ITimerService_CreateTimer(This,pReferenceTimer,ppNewTimer) (This)->lpVtbl->CreateTimer(This,pReferenceTimer,ppNewTimer)
#define ITimerService_GetNamedTimer(This,rguidName,ppTimer) (This)->lpVtbl->GetNamedTimer(This,rguidName,ppTimer)
#define ITimerService_SetNamedTimerReference(This,rguidName,pReferenceTimer) (This)->lpVtbl->SetNamedTimerReference(This,rguidName,pReferenceTimer)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT ITimerService_QueryInterface(ITimerService* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG ITimerService_AddRef(ITimerService* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG ITimerService_Release(ITimerService* This) {
    return This->lpVtbl->Release(This);
}
/*** ITimerService methods ***/
static FORCEINLINE HRESULT ITimerService_CreateTimer(ITimerService* This,ITimer *pReferenceTimer,ITimer **ppNewTimer) {
    return This->lpVtbl->CreateTimer(This,pReferenceTimer,ppNewTimer);
}
static FORCEINLINE HRESULT ITimerService_GetNamedTimer(ITimerService* This,REFGUID rguidName,ITimer **ppTimer) {
    return This->lpVtbl->GetNamedTimer(This,rguidName,ppTimer);
}
static FORCEINLINE HRESULT ITimerService_SetNamedTimerReference(ITimerService* This,REFGUID rguidName,ITimer *pReferenceTimer) {
    return This->lpVtbl->SetNamedTimerReference(This,rguidName,pReferenceTimer);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE ITimerService_CreateTimer_Proxy(
    ITimerService* This,
    ITimer *pReferenceTimer,
    ITimer **ppNewTimer);
void __RPC_STUB ITimerService_CreateTimer_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITimerService_GetNamedTimer_Proxy(
    ITimerService* This,
    REFGUID rguidName,
    ITimer **ppTimer);
void __RPC_STUB ITimerService_GetNamedTimer_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITimerService_SetNamedTimerReference_Proxy(
    ITimerService* This,
    REFGUID rguidName,
    ITimer *pReferenceTimer);
void __RPC_STUB ITimerService_SetNamedTimerReference_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __ITimerService_INTERFACE_DEFINED__ */

#define SID_STimerService IID_ITimerService
/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER VARIANT_UserSize     (ULONG *, ULONG, VARIANT *);
unsigned char * __RPC_USER VARIANT_UserMarshal  (ULONG *, unsigned char *, VARIANT *);
unsigned char * __RPC_USER VARIANT_UserUnmarshal(ULONG *, unsigned char *, VARIANT *);
void            __RPC_USER VARIANT_UserFree     (ULONG *, VARIANT *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __ocmm_h__ */
