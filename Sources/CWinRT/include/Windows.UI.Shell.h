// WARNING: Please don't edit this file. It was generated by Swift/WinRT v0.0.1

#pragma once
// Header files for imported files
#include <inspectable.h>
#include <EventToken.h>
#include <windowscontracts.h>
#include "Windows.Foundation.h"
#include "Windows.ApplicationModel.Core.h"
#include "Windows.UI.StartScreen.h"

/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CShell_CIAdaptiveCard_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CShell_CIAdaptiveCard_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CUI_CShell_CIAdaptiveCard __x_ABI_CWindows_CUI_CShell_CIAdaptiveCard;

#endif // ____x_ABI_CWindows_CUI_CShell_CIAdaptiveCard_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CShell_CIAdaptiveCardBuilderStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CShell_CIAdaptiveCardBuilderStatics_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CUI_CShell_CIAdaptiveCardBuilderStatics __x_ABI_CWindows_CUI_CShell_CIAdaptiveCardBuilderStatics;

#endif // ____x_ABI_CWindows_CUI_CShell_CIAdaptiveCardBuilderStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CShell_CISecurityAppManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CShell_CISecurityAppManager_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CUI_CShell_CISecurityAppManager __x_ABI_CWindows_CUI_CShell_CISecurityAppManager;

#endif // ____x_ABI_CWindows_CUI_CShell_CISecurityAppManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CShell_CITaskbarManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CShell_CITaskbarManager_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CUI_CShell_CITaskbarManager __x_ABI_CWindows_CUI_CShell_CITaskbarManager;

#endif // ____x_ABI_CWindows_CUI_CShell_CITaskbarManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CShell_CITaskbarManager2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CShell_CITaskbarManager2_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CUI_CShell_CITaskbarManager2 __x_ABI_CWindows_CUI_CShell_CITaskbarManager2;

#endif // ____x_ABI_CWindows_CUI_CShell_CITaskbarManager2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CShell_CITaskbarManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CShell_CITaskbarManagerStatics_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CUI_CShell_CITaskbarManagerStatics __x_ABI_CWindows_CUI_CShell_CITaskbarManagerStatics;

#endif // ____x_ABI_CWindows_CUI_CShell_CITaskbarManagerStatics_FWD_DEFINED__

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
    
#ifndef ____x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry;

#endif // ____x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_FWD_DEFINED__

typedef enum __x_ABI_CWindows_CFoundation_CAsyncStatus __x_ABI_CWindows_CFoundation_CAsyncStatus;

#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncInfo_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CFoundation_CIAsyncInfo __x_ABI_CWindows_CFoundation_CIAsyncInfo;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile;

#endif // ____x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile_FWD_DEFINED__

typedef enum __x_ABI_CWindows_CUI_CShell_CSecurityAppKind __x_ABI_CWindows_CUI_CShell_CSecurityAppKind;

typedef enum __x_ABI_CWindows_CUI_CShell_CSecurityAppState __x_ABI_CWindows_CUI_CShell_CSecurityAppState;

typedef enum __x_ABI_CWindows_CUI_CShell_CSecurityAppSubstatus __x_ABI_CWindows_CUI_CShell_CSecurityAppSubstatus;

enum __x_ABI_CWindows_CUI_CShell_CSecurityAppKind
    {
        __x_ABI_CWindows_CUI_CShell_CSecurityAppKind_WebProtection = 0,
};

enum __x_ABI_CWindows_CUI_CShell_CSecurityAppState
    {
        __x_ABI_CWindows_CUI_CShell_CSecurityAppState_Disabled = 0,
    __x_ABI_CWindows_CUI_CShell_CSecurityAppState_Enabled = 1,
};

enum __x_ABI_CWindows_CUI_CShell_CSecurityAppSubstatus
    {
        __x_ABI_CWindows_CUI_CShell_CSecurityAppSubstatus_Undetermined = 0,
    __x_ABI_CWindows_CUI_CShell_CSecurityAppSubstatus_NoActionNeeded = 1,
    __x_ABI_CWindows_CUI_CShell_CSecurityAppSubstatus_ActionRecommended = 2,
    __x_ABI_CWindows_CUI_CShell_CSecurityAppSubstatus_ActionNeeded = 3,
};

#if !defined(____x_ABI_CWindows_CUI_CShell_CIAdaptiveCard_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CUI_CShell_CIAdaptiveCard_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CUI_CShell_CIAdaptiveCardVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CUI_CShell_CIAdaptiveCard* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CUI_CShell_CIAdaptiveCard* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CUI_CShell_CIAdaptiveCard* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CUI_CShell_CIAdaptiveCard* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CUI_CShell_CIAdaptiveCard* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CUI_CShell_CIAdaptiveCard* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* ToJson)(__x_ABI_CWindows_CUI_CShell_CIAdaptiveCard* This,
        HSTRING* result);

        END_INTERFACE
    } __x_ABI_CWindows_CUI_CShell_CIAdaptiveCardVtbl;

    interface __x_ABI_CWindows_CUI_CShell_CIAdaptiveCard
    {
        CONST_VTBL struct __x_ABI_CWindows_CUI_CShell_CIAdaptiveCardVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CUI_CShell_CIAdaptiveCard;
#endif /* !defined(____x_ABI_CWindows_CUI_CShell_CIAdaptiveCard_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CUI_CShell_CIAdaptiveCardBuilderStatics_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CUI_CShell_CIAdaptiveCardBuilderStatics_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CUI_CShell_CIAdaptiveCardBuilderStaticsVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CUI_CShell_CIAdaptiveCardBuilderStatics* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CUI_CShell_CIAdaptiveCardBuilderStatics* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CUI_CShell_CIAdaptiveCardBuilderStatics* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CUI_CShell_CIAdaptiveCardBuilderStatics* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CUI_CShell_CIAdaptiveCardBuilderStatics* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CUI_CShell_CIAdaptiveCardBuilderStatics* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* CreateAdaptiveCardFromJson)(__x_ABI_CWindows_CUI_CShell_CIAdaptiveCardBuilderStatics* This,
        HSTRING value,
        __x_ABI_CWindows_CUI_CShell_CIAdaptiveCard** result);

        END_INTERFACE
    } __x_ABI_CWindows_CUI_CShell_CIAdaptiveCardBuilderStaticsVtbl;

    interface __x_ABI_CWindows_CUI_CShell_CIAdaptiveCardBuilderStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CUI_CShell_CIAdaptiveCardBuilderStaticsVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CUI_CShell_CIAdaptiveCardBuilderStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CShell_CIAdaptiveCardBuilderStatics_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CUI_CShell_CISecurityAppManager_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CUI_CShell_CISecurityAppManager_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CUI_CShell_CISecurityAppManagerVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CUI_CShell_CISecurityAppManager* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CUI_CShell_CISecurityAppManager* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CUI_CShell_CISecurityAppManager* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CUI_CShell_CISecurityAppManager* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CUI_CShell_CISecurityAppManager* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CUI_CShell_CISecurityAppManager* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* Register)(__x_ABI_CWindows_CUI_CShell_CISecurityAppManager* This,
        enum __x_ABI_CWindows_CUI_CShell_CSecurityAppKind kind,
        HSTRING displayName,
        __x_ABI_CWindows_CFoundation_CIUriRuntimeClass* detailsUri,
        boolean registerPerUser,
        GUID* result);
    HRESULT (STDMETHODCALLTYPE* Unregister)(__x_ABI_CWindows_CUI_CShell_CISecurityAppManager* This,
        enum __x_ABI_CWindows_CUI_CShell_CSecurityAppKind kind,
        GUID guidRegistration);
    HRESULT (STDMETHODCALLTYPE* UpdateState)(__x_ABI_CWindows_CUI_CShell_CISecurityAppManager* This,
        enum __x_ABI_CWindows_CUI_CShell_CSecurityAppKind kind,
        GUID guidRegistration,
        enum __x_ABI_CWindows_CUI_CShell_CSecurityAppState state,
        enum __x_ABI_CWindows_CUI_CShell_CSecurityAppSubstatus substatus,
        __x_ABI_CWindows_CFoundation_CIUriRuntimeClass* detailsUri);

        END_INTERFACE
    } __x_ABI_CWindows_CUI_CShell_CISecurityAppManagerVtbl;

    interface __x_ABI_CWindows_CUI_CShell_CISecurityAppManager
    {
        CONST_VTBL struct __x_ABI_CWindows_CUI_CShell_CISecurityAppManagerVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CUI_CShell_CISecurityAppManager;
#endif /* !defined(____x_ABI_CWindows_CUI_CShell_CISecurityAppManager_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CUI_CShell_CITaskbarManager_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CUI_CShell_CITaskbarManager_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CUI_CShell_CITaskbarManagerVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CUI_CShell_CITaskbarManager* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CUI_CShell_CITaskbarManager* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CUI_CShell_CITaskbarManager* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CUI_CShell_CITaskbarManager* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CUI_CShell_CITaskbarManager* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CUI_CShell_CITaskbarManager* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_IsSupported)(__x_ABI_CWindows_CUI_CShell_CITaskbarManager* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* get_IsPinningAllowed)(__x_ABI_CWindows_CUI_CShell_CITaskbarManager* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* IsCurrentAppPinnedAsync)(__x_ABI_CWindows_CUI_CShell_CITaskbarManager* This,
        __x_ABI_C__FIAsyncOperation_1_boolean** operation);
    HRESULT (STDMETHODCALLTYPE* IsAppListEntryPinnedAsync)(__x_ABI_CWindows_CUI_CShell_CITaskbarManager* This,
        __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry* appListEntry,
        __x_ABI_C__FIAsyncOperation_1_boolean** operation);
    HRESULT (STDMETHODCALLTYPE* RequestPinCurrentAppAsync)(__x_ABI_CWindows_CUI_CShell_CITaskbarManager* This,
        __x_ABI_C__FIAsyncOperation_1_boolean** operation);
    HRESULT (STDMETHODCALLTYPE* RequestPinAppListEntryAsync)(__x_ABI_CWindows_CUI_CShell_CITaskbarManager* This,
        __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry* appListEntry,
        __x_ABI_C__FIAsyncOperation_1_boolean** operation);

        END_INTERFACE
    } __x_ABI_CWindows_CUI_CShell_CITaskbarManagerVtbl;

    interface __x_ABI_CWindows_CUI_CShell_CITaskbarManager
    {
        CONST_VTBL struct __x_ABI_CWindows_CUI_CShell_CITaskbarManagerVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CUI_CShell_CITaskbarManager;
#endif /* !defined(____x_ABI_CWindows_CUI_CShell_CITaskbarManager_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CUI_CShell_CITaskbarManager2_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CUI_CShell_CITaskbarManager2_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CUI_CShell_CITaskbarManager2Vtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CUI_CShell_CITaskbarManager2* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CUI_CShell_CITaskbarManager2* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CUI_CShell_CITaskbarManager2* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CUI_CShell_CITaskbarManager2* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CUI_CShell_CITaskbarManager2* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CUI_CShell_CITaskbarManager2* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* IsSecondaryTilePinnedAsync)(__x_ABI_CWindows_CUI_CShell_CITaskbarManager2* This,
        HSTRING tileId,
        __x_ABI_C__FIAsyncOperation_1_boolean** operation);
    HRESULT (STDMETHODCALLTYPE* RequestPinSecondaryTileAsync)(__x_ABI_CWindows_CUI_CShell_CITaskbarManager2* This,
        __x_ABI_CWindows_CUI_CStartScreen_CISecondaryTile* secondaryTile,
        __x_ABI_C__FIAsyncOperation_1_boolean** operation);
    HRESULT (STDMETHODCALLTYPE* TryUnpinSecondaryTileAsync)(__x_ABI_CWindows_CUI_CShell_CITaskbarManager2* This,
        HSTRING tileId,
        __x_ABI_C__FIAsyncOperation_1_boolean** operation);

        END_INTERFACE
    } __x_ABI_CWindows_CUI_CShell_CITaskbarManager2Vtbl;

    interface __x_ABI_CWindows_CUI_CShell_CITaskbarManager2
    {
        CONST_VTBL struct __x_ABI_CWindows_CUI_CShell_CITaskbarManager2Vtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CUI_CShell_CITaskbarManager2;
#endif /* !defined(____x_ABI_CWindows_CUI_CShell_CITaskbarManager2_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CUI_CShell_CITaskbarManagerStatics_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CUI_CShell_CITaskbarManagerStatics_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CUI_CShell_CITaskbarManagerStaticsVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CUI_CShell_CITaskbarManagerStatics* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CUI_CShell_CITaskbarManagerStatics* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CUI_CShell_CITaskbarManagerStatics* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CUI_CShell_CITaskbarManagerStatics* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CUI_CShell_CITaskbarManagerStatics* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CUI_CShell_CITaskbarManagerStatics* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* GetDefault)(__x_ABI_CWindows_CUI_CShell_CITaskbarManagerStatics* This,
        __x_ABI_CWindows_CUI_CShell_CITaskbarManager** result);

        END_INTERFACE
    } __x_ABI_CWindows_CUI_CShell_CITaskbarManagerStaticsVtbl;

    interface __x_ABI_CWindows_CUI_CShell_CITaskbarManagerStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CUI_CShell_CITaskbarManagerStaticsVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CUI_CShell_CITaskbarManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CShell_CITaskbarManagerStatics_INTERFACE_DEFINED__) */
    