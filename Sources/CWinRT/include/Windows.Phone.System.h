// WARNING: Please don't edit this file. It was generated by Swift/WinRT v0.0.1

#pragma once
// Header files for imported files
#include <inspectable.h>
#include <EventToken.h>
#include <windowscontracts.h>
#include "Windows.Foundation.h"

/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CPhone_CSystem_CISystemProtectionStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CSystem_CISystemProtectionStatics_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CPhone_CSystem_CISystemProtectionStatics __x_ABI_CWindows_CPhone_CSystem_CISystemProtectionStatics;

#endif // ____x_ABI_CWindows_CPhone_CSystem_CISystemProtectionStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CSystem_CISystemProtectionUnlockStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CSystem_CISystemProtectionUnlockStatics_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CPhone_CSystem_CISystemProtectionUnlockStatics __x_ABI_CWindows_CPhone_CSystem_CISystemProtectionUnlockStatics;

#endif // ____x_ABI_CWindows_CPhone_CSystem_CISystemProtectionUnlockStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if !defined(____x_ABI_CWindows_CPhone_CSystem_CISystemProtectionStatics_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CPhone_CSystem_CISystemProtectionStatics_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CPhone_CSystem_CISystemProtectionStaticsVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CPhone_CSystem_CISystemProtectionStatics* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CPhone_CSystem_CISystemProtectionStatics* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CPhone_CSystem_CISystemProtectionStatics* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CPhone_CSystem_CISystemProtectionStatics* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CPhone_CSystem_CISystemProtectionStatics* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CPhone_CSystem_CISystemProtectionStatics* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_ScreenLocked)(__x_ABI_CWindows_CPhone_CSystem_CISystemProtectionStatics* This,
        boolean* value);

        END_INTERFACE
    } __x_ABI_CWindows_CPhone_CSystem_CISystemProtectionStaticsVtbl;

    interface __x_ABI_CWindows_CPhone_CSystem_CISystemProtectionStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CPhone_CSystem_CISystemProtectionStaticsVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CSystem_CISystemProtectionStatics;
#endif /* !defined(____x_ABI_CWindows_CPhone_CSystem_CISystemProtectionStatics_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CPhone_CSystem_CISystemProtectionUnlockStatics_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CPhone_CSystem_CISystemProtectionUnlockStatics_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CPhone_CSystem_CISystemProtectionUnlockStaticsVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CPhone_CSystem_CISystemProtectionUnlockStatics* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CPhone_CSystem_CISystemProtectionUnlockStatics* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CPhone_CSystem_CISystemProtectionUnlockStatics* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CPhone_CSystem_CISystemProtectionUnlockStatics* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CPhone_CSystem_CISystemProtectionUnlockStatics* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CPhone_CSystem_CISystemProtectionUnlockStatics* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* RequestScreenUnlock)(__x_ABI_CWindows_CPhone_CSystem_CISystemProtectionUnlockStatics* This);

        END_INTERFACE
    } __x_ABI_CWindows_CPhone_CSystem_CISystemProtectionUnlockStaticsVtbl;

    interface __x_ABI_CWindows_CPhone_CSystem_CISystemProtectionUnlockStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CPhone_CSystem_CISystemProtectionUnlockStaticsVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CSystem_CISystemProtectionUnlockStatics;
#endif /* !defined(____x_ABI_CWindows_CPhone_CSystem_CISystemProtectionUnlockStatics_INTERFACE_DEFINED__) */
    
