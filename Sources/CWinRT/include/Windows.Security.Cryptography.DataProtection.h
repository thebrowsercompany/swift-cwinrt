// WARNING: Please don't edit this file. It was generated by Swift/WinRT v0.0.1

#pragma once
// Header files for imported files
#include <inspectable.h>
#include <EventToken.h>
#include <windowscontracts.h>
#include "Windows.Foundation.h"
#include "Windows.Storage.Streams.h"

/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__

typedef interface __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIBuffer __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIBuffer;

#if !defined(____x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIBuffer __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIBuffer;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIBuffer;

    typedef struct __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIBufferVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIBuffer* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIBuffer* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIBuffer* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIBuffer* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIBuffer* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIBuffer* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* put_Completed)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIBuffer* This,
        __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIBuffer* handler);
    HRESULT (STDMETHODCALLTYPE* get_Completed)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIBuffer* This,
        __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIBuffer** result);
    HRESULT (STDMETHODCALLTYPE* GetResults)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIBuffer* This,
        __x_ABI_CWindows_CStorage_CStreams_CIBuffer** result);

        END_INTERFACE
    } __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIBufferVtbl;

    interface __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIBuffer
    {
        CONST_VTBL struct __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIBufferVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__
    
#if !defined(____x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIBuffer __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIBuffer;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIBuffer;

    typedef struct __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIBufferVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIBuffer* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIBuffer* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIBuffer* This);
        HRESULT (STDMETHODCALLTYPE* Invoke)(__x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIBuffer* This,
        __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIBuffer* asyncInfo,
        enum __x_ABI_CWindows_CFoundation_CAsyncStatus asyncStatus);

        END_INTERFACE
    } __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIBufferVtbl;

    interface __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIBuffer
    {
        CONST_VTBL struct __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIBufferVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__
    
typedef enum __x_ABI_CWindows_CFoundation_CAsyncStatus __x_ABI_CWindows_CFoundation_CAsyncStatus;

#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncInfo_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CFoundation_CIAsyncInfo __x_ABI_CWindows_CFoundation_CIAsyncInfo;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CStorage_CStreams_CIOutputStream __x_ABI_CWindows_CStorage_CStreams_CIOutputStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__

#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* ProtectAsync)(__x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider* This,
        __x_ABI_CWindows_CStorage_CStreams_CIBuffer* data,
        __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIBuffer** value);
    HRESULT (STDMETHODCALLTYPE* UnprotectAsync)(__x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider* This,
        __x_ABI_CWindows_CStorage_CStreams_CIBuffer* data,
        __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIBuffer** value);
    HRESULT (STDMETHODCALLTYPE* ProtectStreamAsync)(__x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider* This,
        __x_ABI_CWindows_CStorage_CStreams_CIInputStream* src,
        __x_ABI_CWindows_CStorage_CStreams_CIOutputStream* dest,
        __x_ABI_CWindows_CFoundation_CIAsyncAction** value);
    HRESULT (STDMETHODCALLTYPE* UnprotectStreamAsync)(__x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider* This,
        __x_ABI_CWindows_CStorage_CStreams_CIInputStream* src,
        __x_ABI_CWindows_CStorage_CStreams_CIOutputStream* dest,
        __x_ABI_CWindows_CFoundation_CIAsyncAction** value);

        END_INTERFACE
    } __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderVtbl;

    interface __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider
    {
        CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactoryVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* CreateOverloadExplicit)(__x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory* This,
        HSTRING protectionDescriptor,
        __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider** value);

        END_INTERFACE
    } __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactoryVtbl;

    interface __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory
    {
        CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactoryVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory_INTERFACE_DEFINED__) */
    