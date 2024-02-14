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
#ifndef ____x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStatics_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStatics __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStatics;

#endif // ____x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics;

#endif // ____x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics2_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics2 __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics2;

#endif // ____x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics2_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

typedef interface __x_ABI_C__FIAsyncOperationCompletedHandler_1_boolean __x_ABI_C__FIAsyncOperationCompletedHandler_1_boolean;

#if !defined(____x_ABI_C__FIAsyncOperation_1_boolean_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIAsyncOperation_1_boolean_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIAsyncOperation_1_boolean __x_ABI_C__FIAsyncOperation_1_boolean;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIAsyncOperation_1_boolean;

    typedef struct __x_ABI_C__FIAsyncOperation_1_booleanVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIAsyncOperation_1_boolean* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIAsyncOperation_1_boolean* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIAsyncOperation_1_boolean* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIAsyncOperation_1_boolean* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIAsyncOperation_1_boolean* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIAsyncOperation_1_boolean* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* put_Completed)(__x_ABI_C__FIAsyncOperation_1_boolean* This,
        __x_ABI_C__FIAsyncOperationCompletedHandler_1_boolean* handler);
    HRESULT (STDMETHODCALLTYPE* get_Completed)(__x_ABI_C__FIAsyncOperation_1_boolean* This,
        __x_ABI_C__FIAsyncOperationCompletedHandler_1_boolean** result);
    HRESULT (STDMETHODCALLTYPE* GetResults)(__x_ABI_C__FIAsyncOperation_1_boolean* This,
        boolean* result);

        END_INTERFACE
    } __x_ABI_C__FIAsyncOperation_1_booleanVtbl;

    interface __x_ABI_C__FIAsyncOperation_1_boolean
    {
        CONST_VTBL struct __x_ABI_C__FIAsyncOperation_1_booleanVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIAsyncOperation_1_boolean_INTERFACE_DEFINED__
    
#if !defined(____x_ABI_C__FIAsyncOperationCompletedHandler_1_boolean_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIAsyncOperationCompletedHandler_1_boolean_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIAsyncOperationCompletedHandler_1_boolean __x_ABI_C__FIAsyncOperationCompletedHandler_1_boolean;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIAsyncOperationCompletedHandler_1_boolean;

    typedef struct __x_ABI_C__FIAsyncOperationCompletedHandler_1_booleanVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIAsyncOperationCompletedHandler_1_boolean* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIAsyncOperationCompletedHandler_1_boolean* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIAsyncOperationCompletedHandler_1_boolean* This);
        HRESULT (STDMETHODCALLTYPE* Invoke)(__x_ABI_C__FIAsyncOperationCompletedHandler_1_boolean* This,
        __x_ABI_C__FIAsyncOperation_1_boolean* asyncInfo,
        enum __x_ABI_CWindows_CFoundation_CAsyncStatus asyncStatus);

        END_INTERFACE
    } __x_ABI_C__FIAsyncOperationCompletedHandler_1_booleanVtbl;

    interface __x_ABI_C__FIAsyncOperationCompletedHandler_1_boolean
    {
        CONST_VTBL struct __x_ABI_C__FIAsyncOperationCompletedHandler_1_booleanVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIAsyncOperationCompletedHandler_1_boolean_INTERFACE_DEFINED__
    
#if !defined(____x_ABI_C__FIIterator_1_HSTRING_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIIterator_1_HSTRING_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIIterator_1_HSTRING __x_ABI_C__FIIterator_1_HSTRING;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIIterator_1_HSTRING;

    typedef struct __x_ABI_C__FIIterator_1_HSTRINGVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIIterator_1_HSTRING* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIIterator_1_HSTRING* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIIterator_1_HSTRING* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIIterator_1_HSTRING* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIIterator_1_HSTRING* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIIterator_1_HSTRING* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_Current)(__x_ABI_C__FIIterator_1_HSTRING* This,
        HSTRING* result);
    HRESULT (STDMETHODCALLTYPE* get_HasCurrent)(__x_ABI_C__FIIterator_1_HSTRING* This,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* MoveNext)(__x_ABI_C__FIIterator_1_HSTRING* This,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* GetMany)(__x_ABI_C__FIIterator_1_HSTRING* This,
        UINT32 itemsLength,
        HSTRING* items,
        UINT32* result);

        END_INTERFACE
    } __x_ABI_C__FIIterator_1_HSTRINGVtbl;

    interface __x_ABI_C__FIIterator_1_HSTRING
    {
        CONST_VTBL struct __x_ABI_C__FIIterator_1_HSTRINGVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIIterator_1_HSTRING_INTERFACE_DEFINED__
    
#if !defined(____x_ABI_C__FIIterable_1_HSTRING_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIIterable_1_HSTRING_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIIterable_1_HSTRING __x_ABI_C__FIIterable_1_HSTRING;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIIterable_1_HSTRING;

    typedef struct __x_ABI_C__FIIterable_1_HSTRINGVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIIterable_1_HSTRING* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIIterable_1_HSTRING* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIIterable_1_HSTRING* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIIterable_1_HSTRING* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIIterable_1_HSTRING* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIIterable_1_HSTRING* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* First)(__x_ABI_C__FIIterable_1_HSTRING* This,
        __x_ABI_C__FIIterator_1_HSTRING** result);

        END_INTERFACE
    } __x_ABI_C__FIIterable_1_HSTRINGVtbl;

    interface __x_ABI_C__FIIterable_1_HSTRING
    {
        CONST_VTBL struct __x_ABI_C__FIIterable_1_HSTRINGVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIIterable_1_HSTRING_INTERFACE_DEFINED__
    
typedef enum __x_ABI_CWindows_CFoundation_CAsyncStatus __x_ABI_CWindows_CFoundation_CAsyncStatus;

#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncInfo_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CFoundation_CIAsyncInfo __x_ABI_CWindows_CFoundation_CIAsyncInfo;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncInfo_FWD_DEFINED__

#if !defined(____x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStatics_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStatics_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStaticsVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStatics* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStatics* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStatics* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStatics* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStatics* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStatics* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_IsBlockingActive)(__x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStatics* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* IsBlockedNumberAsync)(__x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStatics* This,
        HSTRING number,
        __x_ABI_C__FIAsyncOperation_1_boolean** result);
    HRESULT (STDMETHODCALLTYPE* ShowBlockNumbersUI)(__x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStatics* This,
        __x_ABI_C__FIIterable_1_HSTRING* phoneNumbers,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* ShowUnblockNumbersUI)(__x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStatics* This,
        __x_ABI_C__FIIterable_1_HSTRING* phoneNumbers,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* ShowBlockedCallsUI)(__x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStatics* This);
    HRESULT (STDMETHODCALLTYPE* ShowBlockedMessagesUI)(__x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStatics* This);

        END_INTERFACE
    } __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStaticsVtbl;

    interface __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStaticsVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAccessManagerStatics_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStaticsVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_IsCurrentAppActiveBlockingApp)(__x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* ShowCommunicationBlockingSettingsUI)(__x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics* This);

        END_INTERFACE
    } __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStaticsVtbl;

    interface __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStaticsVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics2_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics2_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics2Vtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics2* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics2* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics2* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics2* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics2* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics2* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* RequestSetAsActiveBlockingAppAsync)(__x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics2* This,
        __x_ABI_C__FIAsyncOperation_1_boolean** result);

        END_INTERFACE
    } __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics2Vtbl;

    interface __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics2
    {
        CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics2Vtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CCommunicationBlocking_CICommunicationBlockingAppManagerStatics2_INTERFACE_DEFINED__) */
    