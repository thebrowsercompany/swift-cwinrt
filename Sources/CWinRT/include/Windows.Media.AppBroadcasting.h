// WARNING: Please don't edit this file. It was generated by Swift/WinRT v0.0.1

#pragma once
// Header files for imported files
#include <inspectable.h>
#include <EventToken.h>
#include <windowscontracts.h>
#include "Windows.Foundation.h"
#include "Windows.System.h"

/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor;

#endif // ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus;

#endif // ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails;

#endif // ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI;

#endif // ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics;

#endif // ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if !defined(____x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable __x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable;

    typedef struct __x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectableVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable* This);
        HRESULT (STDMETHODCALLTYPE* Invoke)(__x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable* This,
        __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor* sender,
        IInspectable* args);

        END_INTERFACE
    } __x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectableVtbl;

    interface __x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable
    {
        CONST_VTBL struct __x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectableVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable_INTERFACE_DEFINED__
    
#ifndef ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;

#endif // ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__

#if !defined(____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitorVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_IsCurrentAppBroadcasting)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* add_IsCurrentAppBroadcastingChanged)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor* This,
        __x_ABI_C__FITypedEventHandler_2___x_ABI_CWindows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_IsCurrentAppBroadcastingChanged)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor* This,
        EventRegistrationToken token);

        END_INTERFACE
    } __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitorVtbl;

    interface __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor
    {
        CONST_VTBL struct __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitorVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_CanStartBroadcast)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* get_Details)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus* This,
        __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails** value);

        END_INTERFACE
    } __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusVtbl;

    interface __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus
    {
        CONST_VTBL struct __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetailsVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_IsAnyAppBroadcasting)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* get_IsCaptureResourceUnavailable)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* get_IsGameStreamInProgress)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* get_IsGpuConstrained)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* get_IsAppInactive)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* get_IsBlockedForApp)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* get_IsDisabledByUser)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* get_IsDisabledBySystem)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails* This,
        boolean* value);

        END_INTERFACE
    } __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetailsVtbl;

    interface __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails
    {
        CONST_VTBL struct __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetailsVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* GetStatus)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI* This,
        __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus** result);
    HRESULT (STDMETHODCALLTYPE* ShowBroadcastUI)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI* This);

        END_INTERFACE
    } __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIVtbl;

    interface __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI
    {
        CONST_VTBL struct __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStaticsVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* GetDefault)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics* This,
        __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI** result);
    HRESULT (STDMETHODCALLTYPE* GetForUser)(__x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics* This,
        __x_ABI_CWindows_CSystem_CIUser* user,
        __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI** result);

        END_INTERFACE
    } __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStaticsVtbl;

    interface __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStaticsVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics_INTERFACE_DEFINED__) */
    
