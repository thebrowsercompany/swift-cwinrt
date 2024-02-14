// WARNING: Please don't edit this file. It was generated by Swift/WinRT v0.0.1

#pragma once
// Header files for imported files
#include <inspectable.h>
#include <EventToken.h>
#include <windowscontracts.h>
#include "Windows.Foundation.h"

/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CGraphics_CIGeometrySource2D_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CIGeometrySource2D_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CGraphics_CIGeometrySource2D __x_ABI_CWindows_CGraphics_CIGeometrySource2D;

#endif // ____x_ABI_CWindows_CGraphics_CIGeometrySource2D_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

struct __x_ABI_CWindows_CGraphics_CDisplayAdapterId
    {
        UINT32 LowPart;
    INT32 HighPart;
};

struct __x_ABI_CWindows_CGraphics_CPointInt32
    {
        INT32 X;
    INT32 Y;
};

struct __x_ABI_CWindows_CGraphics_CRectInt32
    {
        INT32 X;
    INT32 Y;
    INT32 Width;
    INT32 Height;
};

struct __x_ABI_CWindows_CGraphics_CSizeInt32
    {
        INT32 Width;
    INT32 Height;
};

#if !defined(____x_ABI_CWindows_CGraphics_CIGeometrySource2D_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CGraphics_CIGeometrySource2D_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CGraphics_CIGeometrySource2DVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CGraphics_CIGeometrySource2D* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CGraphics_CIGeometrySource2D* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CGraphics_CIGeometrySource2D* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CGraphics_CIGeometrySource2D* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CGraphics_CIGeometrySource2D* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CGraphics_CIGeometrySource2D* This,
            TrustLevel* trustLevel);
    
        END_INTERFACE
    } __x_ABI_CWindows_CGraphics_CIGeometrySource2DVtbl;

    interface __x_ABI_CWindows_CGraphics_CIGeometrySource2D
    {
        CONST_VTBL struct __x_ABI_CWindows_CGraphics_CIGeometrySource2DVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CIGeometrySource2D;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CIGeometrySource2D_INTERFACE_DEFINED__) */
    