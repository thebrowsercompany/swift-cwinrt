// WARNING: Please don't edit this file. It was generated by Swift/WinRT v0.0.1

#pragma once
// Header files for imported files
#include <inspectable.h>
#include <EventToken.h>
#include <windowscontracts.h>
#include "Windows.Foundation.h"

/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CPhone_CSystem_CPower_CIPowerManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CSystem_CPower_CIPowerManagerStatics_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CPhone_CSystem_CPower_CIPowerManagerStatics __x_ABI_CWindows_CPhone_CSystem_CPower_CIPowerManagerStatics;

#endif // ____x_ABI_CWindows_CPhone_CSystem_CPower_CIPowerManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CSystem_CPower_CIPowerManagerStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CSystem_CPower_CIPowerManagerStatics2_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CPhone_CSystem_CPower_CIPowerManagerStatics2 __x_ABI_CWindows_CPhone_CSystem_CPower_CIPowerManagerStatics2;

#endif // ____x_ABI_CWindows_CPhone_CSystem_CPower_CIPowerManagerStatics2_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if !defined(____x_ABI_C__FIEventHandler_1_IInspectable_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIEventHandler_1_IInspectable_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIEventHandler_1_IInspectable __x_ABI_C__FIEventHandler_1_IInspectable;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIEventHandler_1_IInspectable;

    typedef struct __x_ABI_C__FIEventHandler_1_IInspectableVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIEventHandler_1_IInspectable* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIEventHandler_1_IInspectable* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIEventHandler_1_IInspectable* This);
        HRESULT (STDMETHODCALLTYPE* Invoke)(__x_ABI_C__FIEventHandler_1_IInspectable* This,
        IInspectable* sender,
        IInspectable* args);

        END_INTERFACE
    } __x_ABI_C__FIEventHandler_1_IInspectableVtbl;

    interface __x_ABI_C__FIEventHandler_1_IInspectable
    {
        CONST_VTBL struct __x_ABI_C__FIEventHandler_1_IInspectableVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIEventHandler_1_IInspectable_INTERFACE_DEFINED__
    
typedef enum __x_ABI_CWindows_CPhone_CSystem_CPower_CPowerSavingMode __x_ABI_CWindows_CPhone_CSystem_CPower_CPowerSavingMode;

enum __x_ABI_CWindows_CPhone_CSystem_CPower_CPowerSavingMode
    {
        __x_ABI_CWindows_CPhone_CSystem_CPower_CPowerSavingMode_Off = 0,
    __x_ABI_CWindows_CPhone_CSystem_CPower_CPowerSavingMode_On = 1,
};

#if !defined(____x_ABI_CWindows_CPhone_CSystem_CPower_CIPowerManagerStatics_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CPhone_CSystem_CPower_CIPowerManagerStatics_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CPhone_CSystem_CPower_CIPowerManagerStaticsVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CPhone_CSystem_CPower_CIPowerManagerStatics* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CPhone_CSystem_CPower_CIPowerManagerStatics* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CPhone_CSystem_CPower_CIPowerManagerStatics* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CPhone_CSystem_CPower_CIPowerManagerStatics* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CPhone_CSystem_CPower_CIPowerManagerStatics* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CPhone_CSystem_CPower_CIPowerManagerStatics* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_PowerSavingMode)(__x_ABI_CWindows_CPhone_CSystem_CPower_CIPowerManagerStatics* This,
        enum __x_ABI_CWindows_CPhone_CSystem_CPower_CPowerSavingMode* value);
    HRESULT (STDMETHODCALLTYPE* add_PowerSavingModeChanged)(__x_ABI_CWindows_CPhone_CSystem_CPower_CIPowerManagerStatics* This,
        __x_ABI_C__FIEventHandler_1_IInspectable* changeHandler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_PowerSavingModeChanged)(__x_ABI_CWindows_CPhone_CSystem_CPower_CIPowerManagerStatics* This,
        EventRegistrationToken token);

        END_INTERFACE
    } __x_ABI_CWindows_CPhone_CSystem_CPower_CIPowerManagerStaticsVtbl;

    interface __x_ABI_CWindows_CPhone_CSystem_CPower_CIPowerManagerStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CPhone_CSystem_CPower_CIPowerManagerStaticsVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CSystem_CPower_CIPowerManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CPhone_CSystem_CPower_CIPowerManagerStatics_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CPhone_CSystem_CPower_CIPowerManagerStatics2_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CPhone_CSystem_CPower_CIPowerManagerStatics2_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CPhone_CSystem_CPower_CIPowerManagerStatics2Vtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CPhone_CSystem_CPower_CIPowerManagerStatics2* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CPhone_CSystem_CPower_CIPowerManagerStatics2* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CPhone_CSystem_CPower_CIPowerManagerStatics2* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CPhone_CSystem_CPower_CIPowerManagerStatics2* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CPhone_CSystem_CPower_CIPowerManagerStatics2* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CPhone_CSystem_CPower_CIPowerManagerStatics2* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_PowerSavingModeEnabled)(__x_ABI_CWindows_CPhone_CSystem_CPower_CIPowerManagerStatics2* This,
        boolean* value);

        END_INTERFACE
    } __x_ABI_CWindows_CPhone_CSystem_CPower_CIPowerManagerStatics2Vtbl;

    interface __x_ABI_CWindows_CPhone_CSystem_CPower_CIPowerManagerStatics2
    {
        CONST_VTBL struct __x_ABI_CWindows_CPhone_CSystem_CPower_CIPowerManagerStatics2Vtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CSystem_CPower_CIPowerManagerStatics2;
#endif /* !defined(____x_ABI_CWindows_CPhone_CSystem_CPower_CIPowerManagerStatics2_INTERFACE_DEFINED__) */
    
