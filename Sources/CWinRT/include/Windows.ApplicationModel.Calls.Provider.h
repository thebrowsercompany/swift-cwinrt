// WARNING: Please don't edit this file. It was generated by Swift/WinRT v0.0.1

#pragma once
// Header files for imported files
#include <inspectable.h>
#include <EventToken.h>
#include <windowscontracts.h>
#include "Windows.Foundation.h"
#include "Windows.ApplicationModel.Calls.h"
#include "Windows.Storage.h"

/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin;

#endif // ____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2 __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2;

#endif // ____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin3_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin3_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin3 __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin3;

#endif // ____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics;

#endif // ____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics2_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics2 __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics2;

#endif // ____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics3_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics3 __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics3;

#endif // ____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics3_FWD_DEFINED__

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
    
typedef enum __x_ABI_CWindows_CFoundation_CAsyncStatus __x_ABI_CWindows_CFoundation_CAsyncStatus;

#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncInfo_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CFoundation_CIAsyncInfo __x_ABI_CWindows_CFoundation_CIAsyncInfo;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;

#endif // ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__

#if !defined(____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_Category)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* put_Category)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin* This,
        HSTRING value);
    HRESULT (STDMETHODCALLTYPE* get_CategoryDescription)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* put_CategoryDescription)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin* This,
        HSTRING value);
    HRESULT (STDMETHODCALLTYPE* get_Location)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* put_Location)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin* This,
        HSTRING value);

        END_INTERFACE
    } __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginVtbl;

    interface __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin
    {
        CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2Vtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_DisplayName)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* put_DisplayName)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2* This,
        HSTRING value);

        END_INTERFACE
    } __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2Vtbl;

    interface __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2
    {
        CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2Vtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin2_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin3_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin3_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin3Vtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin3* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin3* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin3* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin3* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin3* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin3* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_DisplayPicture)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin3* This,
        __x_ABI_CWindows_CStorage_CIStorageFile** value);
    HRESULT (STDMETHODCALLTYPE* put_DisplayPicture)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin3* This,
        __x_ABI_CWindows_CStorage_CIStorageFile* value);

        END_INTERFACE
    } __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin3Vtbl;

    interface __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin3
    {
        CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin3Vtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin3;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin3_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStaticsVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_IsCurrentAppActiveCallOriginApp)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* ShowPhoneCallOriginSettingsUI)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics* This);
    HRESULT (STDMETHODCALLTYPE* SetCallOrigin)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics* This,
        GUID requestId,
        __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOrigin* callOrigin);

        END_INTERFACE
    } __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStaticsVtbl;

    interface __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStaticsVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics2_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics2_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics2Vtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics2* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics2* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics2* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics2* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics2* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics2* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* RequestSetAsActiveCallOriginAppAsync)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics2* This,
        __x_ABI_C__FIAsyncOperation_1_boolean** result);

        END_INTERFACE
    } __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics2Vtbl;

    interface __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics2
    {
        CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics2Vtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics2_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics3_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics3_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics3Vtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics3* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics3* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics3* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics3* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics3* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics3* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_IsSupported)(__x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics3* This,
        boolean* value);

        END_INTERFACE
    } __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics3Vtbl;

    interface __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics3
    {
        CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics3Vtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics3;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CCalls_CProvider_CIPhoneCallOriginManagerStatics3_INTERFACE_DEFINED__) */
    
