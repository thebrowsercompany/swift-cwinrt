// WARNING: Please don't edit this file. It was generated by Swift/WinRT v0.0.1

#pragma once
// Header files for imported files
#include <inspectable.h>
#include <EventToken.h>
#include <windowscontracts.h>
#include "Windows.Foundation.h"

/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics;

#endif // ____x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics;

#endif // ____x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if !defined(____x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStaticsVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_DeviceSpecificConversionFactor)(__x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics* This,
        DOUBLE* value);
    HRESULT (STDMETHODCALLTYPE* ComputeTotalEnergyUsage)(__x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics* This,
        UINT64* value);
    HRESULT (STDMETHODCALLTYPE* ResetTotalEnergyUsage)(__x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics* This);

        END_INTERFACE
    } __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStaticsVtbl;

    interface __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStaticsVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStaticsVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_DeviceSpecificConversionFactor)(__x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics* This,
        DOUBLE* value);
    HRESULT (STDMETHODCALLTYPE* ComputeTotalEnergyUsage)(__x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics* This,
        UINT64* value);
    HRESULT (STDMETHODCALLTYPE* ResetTotalEnergyUsage)(__x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics* This);

        END_INTERFACE
    } __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStaticsVtbl;

    interface __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStaticsVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics_INTERFACE_DEFINED__) */
    
