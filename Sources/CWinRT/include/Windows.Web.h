// WARNING: Please don't edit this file. It was generated by Swift/WinRT v0.0.1

#pragma once
// Header files for imported files
#include <inspectable.h>
#include <EventToken.h>
#include <windowscontracts.h>
#include "Windows.Foundation.h"
#include "Windows.Storage.Streams.h"

/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CWeb_CIUriToStreamResolver_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CIUriToStreamResolver_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CWeb_CIUriToStreamResolver __x_ABI_CWindows_CWeb_CIUriToStreamResolver;

#endif // ____x_ABI_CWindows_CWeb_CIUriToStreamResolver_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CIWebErrorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CIWebErrorStatics_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CWeb_CIWebErrorStatics __x_ABI_CWindows_CWeb_CIWebErrorStatics;

#endif // ____x_ABI_CWindows_CWeb_CIWebErrorStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__

typedef interface __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIInputStream __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIInputStream;

#if !defined(____x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIInputStream_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIInputStream_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIInputStream __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIInputStream;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIInputStream;

    typedef struct __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIInputStreamVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIInputStream* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIInputStream* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIInputStream* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIInputStream* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIInputStream* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIInputStream* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* put_Completed)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIInputStream* This,
        __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIInputStream* handler);
    HRESULT (STDMETHODCALLTYPE* get_Completed)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIInputStream* This,
        __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIInputStream** result);
    HRESULT (STDMETHODCALLTYPE* GetResults)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIInputStream* This,
        __x_ABI_CWindows_CStorage_CStreams_CIInputStream** result);

        END_INTERFACE
    } __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIInputStreamVtbl;

    interface __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIInputStream
    {
        CONST_VTBL struct __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIInputStreamVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIInputStream_INTERFACE_DEFINED__
    
#if !defined(____x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIInputStream_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIInputStream_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIInputStream __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIInputStream;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIInputStream;

    typedef struct __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIInputStreamVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIInputStream* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIInputStream* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIInputStream* This);
        HRESULT (STDMETHODCALLTYPE* Invoke)(__x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIInputStream* This,
        __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIInputStream* asyncInfo,
        enum __x_ABI_CWindows_CFoundation_CAsyncStatus asyncStatus);

        END_INTERFACE
    } __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIInputStreamVtbl;

    interface __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIInputStream
    {
        CONST_VTBL struct __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIInputStreamVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStreams__CIInputStream_INTERFACE_DEFINED__
    
typedef enum __x_ABI_CWindows_CFoundation_CAsyncStatus __x_ABI_CWindows_CFoundation_CAsyncStatus;

#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncInfo_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CFoundation_CIAsyncInfo __x_ABI_CWindows_CFoundation_CIAsyncInfo;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__

typedef enum __x_ABI_CWindows_CWeb_CWebErrorStatus __x_ABI_CWindows_CWeb_CWebErrorStatus;

enum __x_ABI_CWindows_CWeb_CWebErrorStatus
    {
        __x_ABI_CWindows_CWeb_CWebErrorStatus_Unknown = 0,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_CertificateCommonNameIsIncorrect = 1,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_CertificateExpired = 2,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_CertificateContainsErrors = 3,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_CertificateRevoked = 4,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_CertificateIsInvalid = 5,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_ServerUnreachable = 6,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_Timeout = 7,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_ErrorHttpInvalidServerResponse = 8,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_ConnectionAborted = 9,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_ConnectionReset = 10,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_Disconnected = 11,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_HttpToHttpsOnRedirection = 12,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_HttpsToHttpOnRedirection = 13,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_CannotConnect = 14,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_HostNameNotResolved = 15,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_OperationCanceled = 16,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_RedirectFailed = 17,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_UnexpectedStatusCode = 18,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_UnexpectedRedirection = 19,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_UnexpectedClientError = 20,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_UnexpectedServerError = 21,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_InsufficientRangeSupport = 22,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_MissingContentLengthSupport = 23,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_MultipleChoices = 300,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_MovedPermanently = 301,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_Found = 302,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_SeeOther = 303,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_NotModified = 304,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_UseProxy = 305,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_TemporaryRedirect = 307,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_BadRequest = 400,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_Unauthorized = 401,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_PaymentRequired = 402,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_Forbidden = 403,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_NotFound = 404,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_MethodNotAllowed = 405,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_NotAcceptable = 406,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_ProxyAuthenticationRequired = 407,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_RequestTimeout = 408,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_Conflict = 409,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_Gone = 410,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_LengthRequired = 411,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_PreconditionFailed = 412,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_RequestEntityTooLarge = 413,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_RequestUriTooLong = 414,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_UnsupportedMediaType = 415,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_RequestedRangeNotSatisfiable = 416,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_ExpectationFailed = 417,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_InternalServerError = 500,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_NotImplemented = 501,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_BadGateway = 502,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_ServiceUnavailable = 503,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_GatewayTimeout = 504,
    __x_ABI_CWindows_CWeb_CWebErrorStatus_HttpVersionNotSupported = 505,
};

#if !defined(____x_ABI_CWindows_CWeb_CIUriToStreamResolver_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CWeb_CIUriToStreamResolver_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CWeb_CIUriToStreamResolverVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CWeb_CIUriToStreamResolver* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CWeb_CIUriToStreamResolver* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CWeb_CIUriToStreamResolver* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CWeb_CIUriToStreamResolver* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CWeb_CIUriToStreamResolver* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CWeb_CIUriToStreamResolver* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* UriToStreamAsync)(__x_ABI_CWindows_CWeb_CIUriToStreamResolver* This,
        __x_ABI_CWindows_CFoundation_CIUriRuntimeClass* uri,
        __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStreams__CIInputStream** operation);

        END_INTERFACE
    } __x_ABI_CWindows_CWeb_CIUriToStreamResolverVtbl;

    interface __x_ABI_CWindows_CWeb_CIUriToStreamResolver
    {
        CONST_VTBL struct __x_ABI_CWindows_CWeb_CIUriToStreamResolverVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CIUriToStreamResolver;
#endif /* !defined(____x_ABI_CWindows_CWeb_CIUriToStreamResolver_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CWeb_CIWebErrorStatics_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CWeb_CIWebErrorStatics_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CWeb_CIWebErrorStaticsVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CWeb_CIWebErrorStatics* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CWeb_CIWebErrorStatics* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CWeb_CIWebErrorStatics* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CWeb_CIWebErrorStatics* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CWeb_CIWebErrorStatics* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CWeb_CIWebErrorStatics* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* GetStatus)(__x_ABI_CWindows_CWeb_CIWebErrorStatics* This,
        INT32 hresult,
        enum __x_ABI_CWindows_CWeb_CWebErrorStatus* status);

        END_INTERFACE
    } __x_ABI_CWindows_CWeb_CIWebErrorStaticsVtbl;

    interface __x_ABI_CWindows_CWeb_CIWebErrorStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CWeb_CIWebErrorStaticsVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CIWebErrorStatics;
#endif /* !defined(____x_ABI_CWindows_CWeb_CIWebErrorStatics_INTERFACE_DEFINED__) */
    
