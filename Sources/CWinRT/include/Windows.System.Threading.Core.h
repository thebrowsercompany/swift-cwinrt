// WARNING: Please don't edit this file. It was generated by Swift/WinRT v0.0.1

#pragma once
// Header files for imported files
#include <inspectable.h>
#include <EventToken.h>
#include <windowscontracts.h>
#include "Windows.Foundation.h"
#include "Windows.System.Threading.h"

/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler;

#endif // ____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler_FWD_DEFINED__

    #ifndef ____x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem;

#endif // ____x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory;

#endif // ____x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier;

#endif // ____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics;

#endif // ____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__

typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;

#ifndef ____x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler;

#endif // ____x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler_FWD_DEFINED__

    typedef enum __x_ABI_CWindows_CSystem_CThreading_CWorkItemOptions __x_ABI_CWindows_CSystem_CThreading_CWorkItemOptions;

typedef enum __x_ABI_CWindows_CSystem_CThreading_CWorkItemPriority __x_ABI_CWindows_CSystem_CThreading_CWorkItemPriority;

#if !defined(____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandlerVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler* This);
        HRESULT (STDMETHODCALLTYPE* Invoke)(__x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler* This,
        __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier* signalNotifier,
        boolean timedOut);

        END_INTERFACE
    } __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandlerVtbl;

    interface __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler
    {
        CONST_VTBL struct __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandlerVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler;
    #endif /* !defined(____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* RunAsync)(__x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem* This,
        __x_ABI_CWindows_CFoundation_CIAsyncAction** operation);

        END_INTERFACE
    } __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemVtbl;

    interface __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem
    {
        CONST_VTBL struct __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem;
#endif /* !defined(____x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactoryVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* CreateWorkItem)(__x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory* This,
        __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler* handler,
        __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem** workItem);
    HRESULT (STDMETHODCALLTYPE* CreateWorkItemWithPriority)(__x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory* This,
        __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler* handler,
        enum __x_ABI_CWindows_CSystem_CThreading_CWorkItemPriority priority,
        __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem** WorkItem);
    HRESULT (STDMETHODCALLTYPE* CreateWorkItemWithPriorityAndOptions)(__x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory* This,
        __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler* handler,
        enum __x_ABI_CWindows_CSystem_CThreading_CWorkItemPriority priority,
        enum __x_ABI_CWindows_CSystem_CThreading_CWorkItemOptions options,
        __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem** WorkItem);

        END_INTERFACE
    } __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactoryVtbl;

    interface __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory
    {
        CONST_VTBL struct __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactoryVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory;
#endif /* !defined(____x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* Enable)(__x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier* This);
    HRESULT (STDMETHODCALLTYPE* Terminate)(__x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier* This);

        END_INTERFACE
    } __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierVtbl;

    interface __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier
    {
        CONST_VTBL struct __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier;
#endif /* !defined(____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStaticsVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* AttachToEvent)(__x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics* This,
        HSTRING name,
        __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler* handler,
        __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier** signalNotifier);
    HRESULT (STDMETHODCALLTYPE* AttachToEventWithTimeout)(__x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics* This,
        HSTRING name,
        __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler* handler,
        struct __x_ABI_CWindows_CFoundation_CTimeSpan timeout,
        __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier** signalNotifier);
    HRESULT (STDMETHODCALLTYPE* AttachToSemaphore)(__x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics* This,
        HSTRING name,
        __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler* handler,
        __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier** signalNotifier);
    HRESULT (STDMETHODCALLTYPE* AttachToSemaphoreWithTimeout)(__x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics* This,
        HSTRING name,
        __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler* handler,
        struct __x_ABI_CWindows_CFoundation_CTimeSpan timeout,
        __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier** signalNotifier);

        END_INTERFACE
    } __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStaticsVtbl;

    interface __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStaticsVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics_INTERFACE_DEFINED__) */
    