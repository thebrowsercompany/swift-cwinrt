// WARNING: Please don't edit this file. It was generated by Swift/WinRT v0.0.1

#pragma once
// Header files for imported files
#include <inspectable.h>
#include <EventToken.h>
#include <windowscontracts.h>
#include "Windows.Foundation.h"
#include "Windows.Storage.Streams.h"

/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService __x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService;

#endif // ____x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService2_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService2_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService2 __x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService2;

#endif // ____x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameServicePropertyCollection_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameServicePropertyCollection_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameServicePropertyCollection __x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameServicePropertyCollection;

#endif // ____x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameServicePropertyCollection_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

typedef interface __x_ABI_C__FIAsyncOperationCompletedHandler_1_IInspectable __x_ABI_C__FIAsyncOperationCompletedHandler_1_IInspectable;

#if !defined(____x_ABI_C__FIAsyncOperation_1_IInspectable_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIAsyncOperation_1_IInspectable_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIAsyncOperation_1_IInspectable __x_ABI_C__FIAsyncOperation_1_IInspectable;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIAsyncOperation_1_IInspectable;

    typedef struct __x_ABI_C__FIAsyncOperation_1_IInspectableVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIAsyncOperation_1_IInspectable* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIAsyncOperation_1_IInspectable* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIAsyncOperation_1_IInspectable* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIAsyncOperation_1_IInspectable* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIAsyncOperation_1_IInspectable* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIAsyncOperation_1_IInspectable* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* put_Completed)(__x_ABI_C__FIAsyncOperation_1_IInspectable* This,
        __x_ABI_C__FIAsyncOperationCompletedHandler_1_IInspectable* handler);
    HRESULT (STDMETHODCALLTYPE* get_Completed)(__x_ABI_C__FIAsyncOperation_1_IInspectable* This,
        __x_ABI_C__FIAsyncOperationCompletedHandler_1_IInspectable** result);
    HRESULT (STDMETHODCALLTYPE* GetResults)(__x_ABI_C__FIAsyncOperation_1_IInspectable* This,
        IInspectable** result);

        END_INTERFACE
    } __x_ABI_C__FIAsyncOperation_1_IInspectableVtbl;

    interface __x_ABI_C__FIAsyncOperation_1_IInspectable
    {
        CONST_VTBL struct __x_ABI_C__FIAsyncOperation_1_IInspectableVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIAsyncOperation_1_IInspectable_INTERFACE_DEFINED__
    
#if !defined(____x_ABI_C__FIAsyncOperationCompletedHandler_1_IInspectable_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIAsyncOperationCompletedHandler_1_IInspectable_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIAsyncOperationCompletedHandler_1_IInspectable __x_ABI_C__FIAsyncOperationCompletedHandler_1_IInspectable;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIAsyncOperationCompletedHandler_1_IInspectable;

    typedef struct __x_ABI_C__FIAsyncOperationCompletedHandler_1_IInspectableVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIAsyncOperationCompletedHandler_1_IInspectable* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIAsyncOperationCompletedHandler_1_IInspectable* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIAsyncOperationCompletedHandler_1_IInspectable* This);
        HRESULT (STDMETHODCALLTYPE* Invoke)(__x_ABI_C__FIAsyncOperationCompletedHandler_1_IInspectable* This,
        __x_ABI_C__FIAsyncOperation_1_IInspectable* asyncInfo,
        enum __x_ABI_CWindows_CFoundation_CAsyncStatus asyncStatus);

        END_INTERFACE
    } __x_ABI_C__FIAsyncOperationCompletedHandler_1_IInspectableVtbl;

    interface __x_ABI_C__FIAsyncOperationCompletedHandler_1_IInspectable
    {
        CONST_VTBL struct __x_ABI_C__FIAsyncOperationCompletedHandler_1_IInspectableVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIAsyncOperationCompletedHandler_1_IInspectable_INTERFACE_DEFINED__
    
typedef interface __x_ABI_C__FIAsyncOperationCompletedHandler_1_HSTRING __x_ABI_C__FIAsyncOperationCompletedHandler_1_HSTRING;

#if !defined(____x_ABI_C__FIAsyncOperation_1_HSTRING_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIAsyncOperation_1_HSTRING_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIAsyncOperation_1_HSTRING __x_ABI_C__FIAsyncOperation_1_HSTRING;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIAsyncOperation_1_HSTRING;

    typedef struct __x_ABI_C__FIAsyncOperation_1_HSTRINGVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIAsyncOperation_1_HSTRING* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIAsyncOperation_1_HSTRING* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIAsyncOperation_1_HSTRING* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIAsyncOperation_1_HSTRING* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIAsyncOperation_1_HSTRING* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIAsyncOperation_1_HSTRING* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* put_Completed)(__x_ABI_C__FIAsyncOperation_1_HSTRING* This,
        __x_ABI_C__FIAsyncOperationCompletedHandler_1_HSTRING* handler);
    HRESULT (STDMETHODCALLTYPE* get_Completed)(__x_ABI_C__FIAsyncOperation_1_HSTRING* This,
        __x_ABI_C__FIAsyncOperationCompletedHandler_1_HSTRING** result);
    HRESULT (STDMETHODCALLTYPE* GetResults)(__x_ABI_C__FIAsyncOperation_1_HSTRING* This,
        HSTRING* result);

        END_INTERFACE
    } __x_ABI_C__FIAsyncOperation_1_HSTRINGVtbl;

    interface __x_ABI_C__FIAsyncOperation_1_HSTRING
    {
        CONST_VTBL struct __x_ABI_C__FIAsyncOperation_1_HSTRINGVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIAsyncOperation_1_HSTRING_INTERFACE_DEFINED__
    
#if !defined(____x_ABI_C__FIAsyncOperationCompletedHandler_1_HSTRING_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIAsyncOperationCompletedHandler_1_HSTRING_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIAsyncOperationCompletedHandler_1_HSTRING __x_ABI_C__FIAsyncOperationCompletedHandler_1_HSTRING;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIAsyncOperationCompletedHandler_1_HSTRING;

    typedef struct __x_ABI_C__FIAsyncOperationCompletedHandler_1_HSTRINGVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIAsyncOperationCompletedHandler_1_HSTRING* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIAsyncOperationCompletedHandler_1_HSTRING* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIAsyncOperationCompletedHandler_1_HSTRING* This);
        HRESULT (STDMETHODCALLTYPE* Invoke)(__x_ABI_C__FIAsyncOperationCompletedHandler_1_HSTRING* This,
        __x_ABI_C__FIAsyncOperation_1_HSTRING* asyncInfo,
        enum __x_ABI_CWindows_CFoundation_CAsyncStatus asyncStatus);

        END_INTERFACE
    } __x_ABI_C__FIAsyncOperationCompletedHandler_1_HSTRINGVtbl;

    interface __x_ABI_C__FIAsyncOperationCompletedHandler_1_HSTRING
    {
        CONST_VTBL struct __x_ABI_C__FIAsyncOperationCompletedHandler_1_HSTRINGVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIAsyncOperationCompletedHandler_1_HSTRING_INTERFACE_DEFINED__
    
typedef interface __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CPhone__CSystem__CUserProfile__CGameServices__CCore__CGameServicePropertyCollection __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CPhone__CSystem__CUserProfile__CGameServices__CCore__CGameServicePropertyCollection;

#if !defined(____x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CPhone__CSystem__CUserProfile__CGameServices__CCore__CGameServicePropertyCollection_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CPhone__CSystem__CUserProfile__CGameServices__CCore__CGameServicePropertyCollection_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CPhone__CSystem__CUserProfile__CGameServices__CCore__CGameServicePropertyCollection __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CPhone__CSystem__CUserProfile__CGameServices__CCore__CGameServicePropertyCollection;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CPhone__CSystem__CUserProfile__CGameServices__CCore__CGameServicePropertyCollection;

    typedef struct __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CPhone__CSystem__CUserProfile__CGameServices__CCore__CGameServicePropertyCollectionVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CPhone__CSystem__CUserProfile__CGameServices__CCore__CGameServicePropertyCollection* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CPhone__CSystem__CUserProfile__CGameServices__CCore__CGameServicePropertyCollection* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CPhone__CSystem__CUserProfile__CGameServices__CCore__CGameServicePropertyCollection* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CPhone__CSystem__CUserProfile__CGameServices__CCore__CGameServicePropertyCollection* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CPhone__CSystem__CUserProfile__CGameServices__CCore__CGameServicePropertyCollection* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CPhone__CSystem__CUserProfile__CGameServices__CCore__CGameServicePropertyCollection* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* put_Completed)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CPhone__CSystem__CUserProfile__CGameServices__CCore__CGameServicePropertyCollection* This,
        __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CPhone__CSystem__CUserProfile__CGameServices__CCore__CGameServicePropertyCollection* handler);
    HRESULT (STDMETHODCALLTYPE* get_Completed)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CPhone__CSystem__CUserProfile__CGameServices__CCore__CGameServicePropertyCollection* This,
        __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CPhone__CSystem__CUserProfile__CGameServices__CCore__CGameServicePropertyCollection** result);
    HRESULT (STDMETHODCALLTYPE* GetResults)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CPhone__CSystem__CUserProfile__CGameServices__CCore__CGameServicePropertyCollection* This,
        __x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameServicePropertyCollection** result);

        END_INTERFACE
    } __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CPhone__CSystem__CUserProfile__CGameServices__CCore__CGameServicePropertyCollectionVtbl;

    interface __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CPhone__CSystem__CUserProfile__CGameServices__CCore__CGameServicePropertyCollection
    {
        CONST_VTBL struct __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CPhone__CSystem__CUserProfile__CGameServices__CCore__CGameServicePropertyCollectionVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CPhone__CSystem__CUserProfile__CGameServices__CCore__CGameServicePropertyCollection_INTERFACE_DEFINED__
    
#if !defined(____x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CPhone__CSystem__CUserProfile__CGameServices__CCore__CGameServicePropertyCollection_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CPhone__CSystem__CUserProfile__CGameServices__CCore__CGameServicePropertyCollection_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CPhone__CSystem__CUserProfile__CGameServices__CCore__CGameServicePropertyCollection __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CPhone__CSystem__CUserProfile__CGameServices__CCore__CGameServicePropertyCollection;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CPhone__CSystem__CUserProfile__CGameServices__CCore__CGameServicePropertyCollection;

    typedef struct __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CPhone__CSystem__CUserProfile__CGameServices__CCore__CGameServicePropertyCollectionVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CPhone__CSystem__CUserProfile__CGameServices__CCore__CGameServicePropertyCollection* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CPhone__CSystem__CUserProfile__CGameServices__CCore__CGameServicePropertyCollection* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CPhone__CSystem__CUserProfile__CGameServices__CCore__CGameServicePropertyCollection* This);
        HRESULT (STDMETHODCALLTYPE* Invoke)(__x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CPhone__CSystem__CUserProfile__CGameServices__CCore__CGameServicePropertyCollection* This,
        __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CPhone__CSystem__CUserProfile__CGameServices__CCore__CGameServicePropertyCollection* asyncInfo,
        enum __x_ABI_CWindows_CFoundation_CAsyncStatus asyncStatus);

        END_INTERFACE
    } __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CPhone__CSystem__CUserProfile__CGameServices__CCore__CGameServicePropertyCollectionVtbl;

    interface __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CPhone__CSystem__CUserProfile__CGameServices__CCore__CGameServicePropertyCollection
    {
        CONST_VTBL struct __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CPhone__CSystem__CUserProfile__CGameServices__CCore__CGameServicePropertyCollectionVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CPhone__CSystem__CUserProfile__CGameServices__CCore__CGameServicePropertyCollection_INTERFACE_DEFINED__
    
typedef enum __x_ABI_CWindows_CFoundation_CAsyncStatus __x_ABI_CWindows_CFoundation_CAsyncStatus;

#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncInfo_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CFoundation_CIAsyncInfo __x_ABI_CWindows_CFoundation_CIAsyncInfo;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__

typedef enum __x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CGameServiceGameOutcome __x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CGameServiceGameOutcome;

typedef enum __x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CGameServiceScoreKind __x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CGameServiceScoreKind;

enum __x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CGameServiceGameOutcome
    {
        __x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CGameServiceGameOutcome_None = 0,
    __x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CGameServiceGameOutcome_Win = 1,
    __x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CGameServiceGameOutcome_Loss = 2,
    __x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CGameServiceGameOutcome_Tie = 3,
};

enum __x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CGameServiceScoreKind
    {
        __x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CGameServiceScoreKind_Number = 0,
    __x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CGameServiceScoreKind_Time = 1,
};

#if !defined(____x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameServiceVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_ServiceUri)(__x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService* This,
        __x_ABI_CWindows_CFoundation_CIUriRuntimeClass** value);
    HRESULT (STDMETHODCALLTYPE* GetGamerProfileAsync)(__x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService* This,
        __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CPhone__CSystem__CUserProfile__CGameServices__CCore__CGameServicePropertyCollection** operation);
    HRESULT (STDMETHODCALLTYPE* GetInstalledGameItemsAsync)(__x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService* This,
        __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CPhone__CSystem__CUserProfile__CGameServices__CCore__CGameServicePropertyCollection** operation);
    HRESULT (STDMETHODCALLTYPE* GetPartnerTokenAsync)(__x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService* This,
        __x_ABI_CWindows_CFoundation_CIUriRuntimeClass* audienceUri,
        __x_ABI_C__FIAsyncOperation_1_HSTRING** operation);
    HRESULT (STDMETHODCALLTYPE* GetPrivilegesAsync)(__x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService* This,
        __x_ABI_C__FIAsyncOperation_1_HSTRING** operation);
    HRESULT (STDMETHODCALLTYPE* GrantAchievement)(__x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService* This,
        UINT32 achievementId);
    HRESULT (STDMETHODCALLTYPE* GrantAvatarAward)(__x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService* This,
        UINT32 avatarAwardId);
    HRESULT (STDMETHODCALLTYPE* PostResult)(__x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService* This,
        UINT32 gameVariant,
        enum __x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CGameServiceScoreKind scoreKind,
        INT64 scoreValue,
        enum __x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CGameServiceGameOutcome gameOutcome,
        __x_ABI_CWindows_CStorage_CStreams_CIBuffer* buffer);

        END_INTERFACE
    } __x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameServiceVtbl;

    interface __x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService
    {
        CONST_VTBL struct __x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameServiceVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService;
#endif /* !defined(____x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService2_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService2_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService2Vtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService2* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService2* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService2* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService2* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService2* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService2* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* NotifyPartnerTokenExpired)(__x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService2* This,
        __x_ABI_CWindows_CFoundation_CIUriRuntimeClass* audienceUri);
    HRESULT (STDMETHODCALLTYPE* GetAuthenticationStatus)(__x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService2* This,
        UINT32* status);

        END_INTERFACE
    } __x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService2Vtbl;

    interface __x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService2
    {
        CONST_VTBL struct __x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService2Vtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService2;
#endif /* !defined(____x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameService2_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameServicePropertyCollection_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameServicePropertyCollection_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameServicePropertyCollectionVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameServicePropertyCollection* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameServicePropertyCollection* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameServicePropertyCollection* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameServicePropertyCollection* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameServicePropertyCollection* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameServicePropertyCollection* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* GetPropertyAsync)(__x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameServicePropertyCollection* This,
        HSTRING propertyName,
        __x_ABI_C__FIAsyncOperation_1_IInspectable** operation);

        END_INTERFACE
    } __x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameServicePropertyCollectionVtbl;

    interface __x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameServicePropertyCollection
    {
        CONST_VTBL struct __x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameServicePropertyCollectionVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameServicePropertyCollection;
#endif /* !defined(____x_ABI_CWindows_CPhone_CSystem_CUserProfile_CGameServices_CCore_CIGameServicePropertyCollection_INTERFACE_DEFINED__) */
    