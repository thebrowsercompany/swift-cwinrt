// WARNING: Please don't edit this file. It was generated by Swift/WinRT v0.0.1

#pragma once
// Header files for imported files
#include <inspectable.h>
#include <EventToken.h>
#include <windowscontracts.h>
#include "Windows.Foundation.h"

/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect;

#endif // ____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource;

#endif // ____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if !defined(____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_Name)(__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect* This,
        HSTRING* name);
    HRESULT (STDMETHODCALLTYPE* put_Name)(__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect* This,
        HSTRING name);

        END_INTERFACE
    } __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectVtbl;

    interface __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect
    {
        CONST_VTBL struct __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffect_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSourceVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource* This,
            TrustLevel* trustLevel);
    
        END_INTERFACE
    } __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSourceVtbl;

    interface __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource
    {
        CONST_VTBL struct __x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSourceVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CEffects_CIGraphicsEffectSource_INTERFACE_DEFINED__) */
    
