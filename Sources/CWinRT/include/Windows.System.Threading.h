// WARNING: Please don't edit this file. It was generated by Swift/WinRT v0.0.1

#pragma once
// Header files for imported files
#include <inspectable.h>
#include <EventToken.h>
#include <windowscontracts.h>
#include "Windows.Foundation.h"

/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler __x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler;

#endif // ____x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler_FWD_DEFINED__

    #ifndef ____x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler;

#endif // ____x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler_FWD_DEFINED__

    #ifndef ____x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler;

#endif // ____x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler_FWD_DEFINED__

    #ifndef ____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics;

#endif // ____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer;

#endif // ____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics;

#endif // ____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__

typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;

typedef enum __x_ABI_CWindows_CSystem_CThreading_CWorkItemOptions __x_ABI_CWindows_CSystem_CThreading_CWorkItemOptions;

typedef enum __x_ABI_CWindows_CSystem_CThreading_CWorkItemPriority __x_ABI_CWindows_CSystem_CThreading_CWorkItemPriority;

enum __x_ABI_CWindows_CSystem_CThreading_CWorkItemOptions
    {
        __x_ABI_CWindows_CSystem_CThreading_CWorkItemOptions_None = 0,
    __x_ABI_CWindows_CSystem_CThreading_CWorkItemOptions_TimeSliced = 0x1,
};

enum __x_ABI_CWindows_CSystem_CThreading_CWorkItemPriority
    {
        __x_ABI_CWindows_CSystem_CThreading_CWorkItemPriority_Low = -1,
    __x_ABI_CWindows_CSystem_CThreading_CWorkItemPriority_Normal = 0,
    __x_ABI_CWindows_CSystem_CThreading_CWorkItemPriority_High = 1,
};

#if !defined(____x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandlerVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler* This);
        HRESULT (STDMETHODCALLTYPE* Invoke)(__x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler* This,
        __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer* timer);

        END_INTERFACE
    } __x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandlerVtbl;

    interface __x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler
    {
        CONST_VTBL struct __x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandlerVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler;
    #endif /* !defined(____x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandlerVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler* This);
        HRESULT (STDMETHODCALLTYPE* Invoke)(__x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler* This,
        __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer* timer);

        END_INTERFACE
    } __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandlerVtbl;

    interface __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler
    {
        CONST_VTBL struct __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandlerVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler;
    #endif /* !defined(____x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandlerVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler* This);
        HRESULT (STDMETHODCALLTYPE* Invoke)(__x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler* This,
        __x_ABI_CWindows_CFoundation_CIAsyncAction* operation);

        END_INTERFACE
    } __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandlerVtbl;

    interface __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler
    {
        CONST_VTBL struct __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandlerVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler;
    #endif /* !defined(____x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStaticsVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* RunAsync)(__x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics* This,
        __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler* handler,
        __x_ABI_CWindows_CFoundation_CIAsyncAction** operation);
    HRESULT (STDMETHODCALLTYPE* RunWithPriorityAsync)(__x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics* This,
        __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler* handler,
        enum __x_ABI_CWindows_CSystem_CThreading_CWorkItemPriority priority,
        __x_ABI_CWindows_CFoundation_CIAsyncAction** operation);
    HRESULT (STDMETHODCALLTYPE* RunWithPriorityAndOptionsAsync)(__x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics* This,
        __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler* handler,
        enum __x_ABI_CWindows_CSystem_CThreading_CWorkItemPriority priority,
        enum __x_ABI_CWindows_CSystem_CThreading_CWorkItemOptions options,
        __x_ABI_CWindows_CFoundation_CIAsyncAction** operation);

        END_INTERFACE
    } __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStaticsVtbl;

    interface __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStaticsVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_Period)(__x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer* This,
        struct __x_ABI_CWindows_CFoundation_CTimeSpan* value);
    HRESULT (STDMETHODCALLTYPE* get_Delay)(__x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer* This,
        struct __x_ABI_CWindows_CFoundation_CTimeSpan* value);
    HRESULT (STDMETHODCALLTYPE* Cancel)(__x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer* This);

        END_INTERFACE
    } __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerVtbl;

    interface __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer
    {
        CONST_VTBL struct __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer;
#endif /* !defined(____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStaticsVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* CreatePeriodicTimer)(__x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics* This,
        __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler* handler,
        struct __x_ABI_CWindows_CFoundation_CTimeSpan period,
        __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer** timer);
    HRESULT (STDMETHODCALLTYPE* CreateTimer)(__x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics* This,
        __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler* handler,
        struct __x_ABI_CWindows_CFoundation_CTimeSpan delay,
        __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer** timer);
    HRESULT (STDMETHODCALLTYPE* CreatePeriodicTimerWithCompletion)(__x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics* This,
        __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler* handler,
        struct __x_ABI_CWindows_CFoundation_CTimeSpan period,
        __x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler* destroyed,
        __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer** timer);
    HRESULT (STDMETHODCALLTYPE* CreateTimerWithCompletion)(__x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics* This,
        __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler* handler,
        struct __x_ABI_CWindows_CFoundation_CTimeSpan delay,
        __x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler* destroyed,
        __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer** timer);

        END_INTERFACE
    } __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStaticsVtbl;

    interface __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStaticsVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics_INTERFACE_DEFINED__) */
    
