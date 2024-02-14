// WARNING: Please don't edit this file. It was generated by Swift/WinRT v0.0.1

#pragma once
// Header files for imported files
#include <inspectable.h>
#include <EventToken.h>
#include <windowscontracts.h>
#include "Windows.Foundation.h"

/* Forward Declarations */
#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs_FWD_DEFINED__
    typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory_FWD_DEFINED__
    typedef interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory;

#endif // ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__

typedef enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CCanvasCreateResourcesReason __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CCanvasCreateResourcesReason;

enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CCanvasCreateResourcesReason
    {
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CCanvasCreateResourcesReason_FirstTime = 0,
    __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CCanvasCreateResourcesReason_NewDevice = 1,
    __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CCanvasCreateResourcesReason_DpiChanged = 2,
};

#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs_INTERFACE_DEFINED__)
    #define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs_INTERFACE_DEFINED__
    typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_Reason)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CCanvasCreateResourcesReason* value);
    HRESULT (STDMETHODCALLTYPE* TrackAsyncAction)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs* This,
        __x_ABI_CWindows_CFoundation_CIAsyncAction* action);
    HRESULT (STDMETHODCALLTYPE* GetTrackedAction)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs* This,
        __x_ABI_CWindows_CFoundation_CIAsyncAction** action);

        END_INTERFACE
    } __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsVtbl;

    interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs
    {
        CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory_INTERFACE_DEFINED__)
    #define ____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory_INTERFACE_DEFINED__
    typedef struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactoryVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* Create)(__x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory* This,
        enum __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CCanvasCreateResourcesReason createResourcesReason,
        __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgs** CreateResourcesEventArgs);

        END_INTERFACE
    } __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactoryVtbl;

    interface __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory
    {
        CONST_VTBL struct __x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactoryVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CGraphics_CCanvas_CUI_CICanvasCreateResourcesEventArgsFactory_INTERFACE_DEFINED__) */
    