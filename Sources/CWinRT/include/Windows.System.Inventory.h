// WARNING: Please don't edit this file. It was generated by Swift/WinRT v0.0.1

#pragma once
// Header files for imported files
#include <inspectable.h>
#include <EventToken.h>
#include <windowscontracts.h>
#include "Windows.Foundation.h"
// Importing Collections header
#include "Windows.Foundation.Collections.h"

/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp;

#endif // ____x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopAppStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopAppStatics_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopAppStatics __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopAppStatics;

#endif // ____x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopAppStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if !defined(____x_ABI_C__FIIterator_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIIterator_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIIterator_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp __x_ABI_C__FIIterator_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIIterator_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp;

    typedef struct __x_ABI_C__FIIterator_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopAppVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIIterator_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIIterator_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIIterator_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIIterator_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIIterator_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIIterator_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_Current)(__x_ABI_C__FIIterator_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp* This,
        __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp** result);
    HRESULT (STDMETHODCALLTYPE* get_HasCurrent)(__x_ABI_C__FIIterator_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp* This,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* MoveNext)(__x_ABI_C__FIIterator_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp* This,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* GetMany)(__x_ABI_C__FIIterator_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp* This,
        UINT32 itemsLength,
        __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp** items,
        UINT32* result);

        END_INTERFACE
    } __x_ABI_C__FIIterator_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopAppVtbl;

    interface __x_ABI_C__FIIterator_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp
    {
        CONST_VTBL struct __x_ABI_C__FIIterator_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopAppVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIIterator_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp_INTERFACE_DEFINED__
    
#if !defined(____x_ABI_C__FIIterable_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIIterable_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIIterable_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp __x_ABI_C__FIIterable_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIIterable_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp;

    typedef struct __x_ABI_C__FIIterable_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopAppVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIIterable_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIIterable_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIIterable_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIIterable_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIIterable_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIIterable_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* First)(__x_ABI_C__FIIterable_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp* This,
        __x_ABI_C__FIIterator_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp** result);

        END_INTERFACE
    } __x_ABI_C__FIIterable_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopAppVtbl;

    interface __x_ABI_C__FIIterable_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp
    {
        CONST_VTBL struct __x_ABI_C__FIIterable_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopAppVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIIterable_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp_INTERFACE_DEFINED__
    
#if !defined(____x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp __x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp;

    typedef struct __x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopAppVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* GetAt)(__x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp* This,
        UINT32 index,
        __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp** result);
    HRESULT (STDMETHODCALLTYPE* get_Size)(__x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp* This,
        UINT32* result);
    HRESULT (STDMETHODCALLTYPE* IndexOf)(__x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp* This,
        __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp* value,
        UINT32* index,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* GetMany)(__x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp* This,
        UINT32 startIndex,
        UINT32 itemsLength,
        __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp** items,
        UINT32* result);

        END_INTERFACE
    } __x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopAppVtbl;

    interface __x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp
    {
        CONST_VTBL struct __x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopAppVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp_INTERFACE_DEFINED__
    
typedef interface __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp;

#if !defined(____x_ABI_C__FIAsyncOperation_1___x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIAsyncOperation_1___x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIAsyncOperation_1___x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp __x_ABI_C__FIAsyncOperation_1___x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIAsyncOperation_1___x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp;

    typedef struct __x_ABI_C__FIAsyncOperation_1___x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopAppVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIAsyncOperation_1___x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIAsyncOperation_1___x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIAsyncOperation_1___x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIAsyncOperation_1___x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIAsyncOperation_1___x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIAsyncOperation_1___x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* put_Completed)(__x_ABI_C__FIAsyncOperation_1___x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp* This,
        __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp* handler);
    HRESULT (STDMETHODCALLTYPE* get_Completed)(__x_ABI_C__FIAsyncOperation_1___x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp* This,
        __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp** result);
    HRESULT (STDMETHODCALLTYPE* GetResults)(__x_ABI_C__FIAsyncOperation_1___x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp* This,
        __x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp** result);

        END_INTERFACE
    } __x_ABI_C__FIAsyncOperation_1___x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopAppVtbl;

    interface __x_ABI_C__FIAsyncOperation_1___x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp
    {
        CONST_VTBL struct __x_ABI_C__FIAsyncOperation_1___x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopAppVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIAsyncOperation_1___x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp_INTERFACE_DEFINED__
    
#if !defined(____x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp;

    typedef struct __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopAppVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp* This);
        HRESULT (STDMETHODCALLTYPE* Invoke)(__x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp* This,
        __x_ABI_C__FIAsyncOperation_1___x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp* asyncInfo,
        enum __x_ABI_CWindows_CFoundation_CAsyncStatus asyncStatus);

        END_INTERFACE
    } __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopAppVtbl;

    interface __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp
    {
        CONST_VTBL struct __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopAppVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp_INTERFACE_DEFINED__
    
typedef enum __x_ABI_CWindows_CFoundation_CAsyncStatus __x_ABI_CWindows_CFoundation_CAsyncStatus;

#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncInfo_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CFoundation_CIAsyncInfo __x_ABI_CWindows_CFoundation_CIAsyncInfo;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CIStringable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIStringable_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CFoundation_CIStringable __x_ABI_CWindows_CFoundation_CIStringable;

#endif // ____x_ABI_CWindows_CFoundation_CIStringable_FWD_DEFINED__

#if !defined(____x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopAppVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_Id)(__x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* get_DisplayName)(__x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* get_Publisher)(__x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* get_DisplayVersion)(__x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp* This,
        HSTRING* value);

        END_INTERFACE
    } __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopAppVtbl;

    interface __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp
    {
        CONST_VTBL struct __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopAppVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp;
#endif /* !defined(____x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopApp_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopAppStatics_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopAppStatics_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopAppStaticsVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopAppStatics* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopAppStatics* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopAppStatics* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopAppStatics* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopAppStatics* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopAppStatics* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* GetInventoryAsync)(__x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopAppStatics* This,
        __x_ABI_C__FIAsyncOperation_1___x_ABI_C__FIVectorView_1___x_ABI_CWindows__CSystem__CInventory__CInstalledDesktopApp** operation);

        END_INTERFACE
    } __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopAppStaticsVtbl;

    interface __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopAppStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopAppStaticsVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopAppStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CInventory_CIInstalledDesktopAppStatics_INTERFACE_DEFINED__) */
    
