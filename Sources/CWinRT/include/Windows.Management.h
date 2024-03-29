// WARNING: Please don't edit this file. It was generated by Swift/WinRT v0.0.1

#pragma once
// Header files for imported files
#include <inspectable.h>
#include <EventToken.h>
#include <windowscontracts.h>
#include "Windows.Foundation.h"
// Importing Collections header
#include "Windows.Foundation.Collections.h"

/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CManagement_CIMdmAlert_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CIMdmAlert_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CManagement_CIMdmAlert __x_ABI_CWindows_CManagement_CIMdmAlert;

#endif // ____x_ABI_CWindows_CManagement_CIMdmAlert_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CManagement_CIMdmSession_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CIMdmSession_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CManagement_CIMdmSession __x_ABI_CWindows_CManagement_CIMdmSession;

#endif // ____x_ABI_CWindows_CManagement_CIMdmSession_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics;

#endif // ____x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if !defined(____x_ABI_C__FIIterator_1_HSTRING_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIIterator_1_HSTRING_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIIterator_1_HSTRING __x_ABI_C__FIIterator_1_HSTRING;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIIterator_1_HSTRING;

    typedef struct __x_ABI_C__FIIterator_1_HSTRINGVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIIterator_1_HSTRING* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIIterator_1_HSTRING* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIIterator_1_HSTRING* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIIterator_1_HSTRING* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIIterator_1_HSTRING* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIIterator_1_HSTRING* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_Current)(__x_ABI_C__FIIterator_1_HSTRING* This,
        HSTRING* result);
    HRESULT (STDMETHODCALLTYPE* get_HasCurrent)(__x_ABI_C__FIIterator_1_HSTRING* This,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* MoveNext)(__x_ABI_C__FIIterator_1_HSTRING* This,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* GetMany)(__x_ABI_C__FIIterator_1_HSTRING* This,
        UINT32 itemsLength,
        HSTRING* items,
        UINT32* result);

        END_INTERFACE
    } __x_ABI_C__FIIterator_1_HSTRINGVtbl;

    interface __x_ABI_C__FIIterator_1_HSTRING
    {
        CONST_VTBL struct __x_ABI_C__FIIterator_1_HSTRINGVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIIterator_1_HSTRING_INTERFACE_DEFINED__
    
#if !defined(____x_ABI_C__FIIterable_1_HSTRING_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIIterable_1_HSTRING_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIIterable_1_HSTRING __x_ABI_C__FIIterable_1_HSTRING;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIIterable_1_HSTRING;

    typedef struct __x_ABI_C__FIIterable_1_HSTRINGVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIIterable_1_HSTRING* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIIterable_1_HSTRING* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIIterable_1_HSTRING* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIIterable_1_HSTRING* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIIterable_1_HSTRING* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIIterable_1_HSTRING* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* First)(__x_ABI_C__FIIterable_1_HSTRING* This,
        __x_ABI_C__FIIterator_1_HSTRING** result);

        END_INTERFACE
    } __x_ABI_C__FIIterable_1_HSTRINGVtbl;

    interface __x_ABI_C__FIIterable_1_HSTRING
    {
        CONST_VTBL struct __x_ABI_C__FIIterable_1_HSTRINGVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIIterable_1_HSTRING_INTERFACE_DEFINED__
    
#if !defined(____x_ABI_C__FIIterator_1___x_ABI_CWindows__CManagement__CMdmAlert_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIIterator_1___x_ABI_CWindows__CManagement__CMdmAlert_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIIterator_1___x_ABI_CWindows__CManagement__CMdmAlert __x_ABI_C__FIIterator_1___x_ABI_CWindows__CManagement__CMdmAlert;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIIterator_1___x_ABI_CWindows__CManagement__CMdmAlert;

    typedef struct __x_ABI_C__FIIterator_1___x_ABI_CWindows__CManagement__CMdmAlertVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIIterator_1___x_ABI_CWindows__CManagement__CMdmAlert* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIIterator_1___x_ABI_CWindows__CManagement__CMdmAlert* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIIterator_1___x_ABI_CWindows__CManagement__CMdmAlert* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIIterator_1___x_ABI_CWindows__CManagement__CMdmAlert* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIIterator_1___x_ABI_CWindows__CManagement__CMdmAlert* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIIterator_1___x_ABI_CWindows__CManagement__CMdmAlert* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_Current)(__x_ABI_C__FIIterator_1___x_ABI_CWindows__CManagement__CMdmAlert* This,
        __x_ABI_CWindows_CManagement_CIMdmAlert** result);
    HRESULT (STDMETHODCALLTYPE* get_HasCurrent)(__x_ABI_C__FIIterator_1___x_ABI_CWindows__CManagement__CMdmAlert* This,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* MoveNext)(__x_ABI_C__FIIterator_1___x_ABI_CWindows__CManagement__CMdmAlert* This,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* GetMany)(__x_ABI_C__FIIterator_1___x_ABI_CWindows__CManagement__CMdmAlert* This,
        UINT32 itemsLength,
        __x_ABI_CWindows_CManagement_CIMdmAlert** items,
        UINT32* result);

        END_INTERFACE
    } __x_ABI_C__FIIterator_1___x_ABI_CWindows__CManagement__CMdmAlertVtbl;

    interface __x_ABI_C__FIIterator_1___x_ABI_CWindows__CManagement__CMdmAlert
    {
        CONST_VTBL struct __x_ABI_C__FIIterator_1___x_ABI_CWindows__CManagement__CMdmAlertVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIIterator_1___x_ABI_CWindows__CManagement__CMdmAlert_INTERFACE_DEFINED__
    
#if !defined(____x_ABI_C__FIIterable_1___x_ABI_CWindows__CManagement__CMdmAlert_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIIterable_1___x_ABI_CWindows__CManagement__CMdmAlert_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIIterable_1___x_ABI_CWindows__CManagement__CMdmAlert __x_ABI_C__FIIterable_1___x_ABI_CWindows__CManagement__CMdmAlert;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIIterable_1___x_ABI_CWindows__CManagement__CMdmAlert;

    typedef struct __x_ABI_C__FIIterable_1___x_ABI_CWindows__CManagement__CMdmAlertVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIIterable_1___x_ABI_CWindows__CManagement__CMdmAlert* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIIterable_1___x_ABI_CWindows__CManagement__CMdmAlert* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIIterable_1___x_ABI_CWindows__CManagement__CMdmAlert* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIIterable_1___x_ABI_CWindows__CManagement__CMdmAlert* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIIterable_1___x_ABI_CWindows__CManagement__CMdmAlert* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIIterable_1___x_ABI_CWindows__CManagement__CMdmAlert* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* First)(__x_ABI_C__FIIterable_1___x_ABI_CWindows__CManagement__CMdmAlert* This,
        __x_ABI_C__FIIterator_1___x_ABI_CWindows__CManagement__CMdmAlert** result);

        END_INTERFACE
    } __x_ABI_C__FIIterable_1___x_ABI_CWindows__CManagement__CMdmAlertVtbl;

    interface __x_ABI_C__FIIterable_1___x_ABI_CWindows__CManagement__CMdmAlert
    {
        CONST_VTBL struct __x_ABI_C__FIIterable_1___x_ABI_CWindows__CManagement__CMdmAlertVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIIterable_1___x_ABI_CWindows__CManagement__CMdmAlert_INTERFACE_DEFINED__
    
#if !defined(____x_ABI_C__FIVectorView_1_HSTRING_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIVectorView_1_HSTRING_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIVectorView_1_HSTRING __x_ABI_C__FIVectorView_1_HSTRING;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIVectorView_1_HSTRING;

    typedef struct __x_ABI_C__FIVectorView_1_HSTRINGVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIVectorView_1_HSTRING* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIVectorView_1_HSTRING* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIVectorView_1_HSTRING* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIVectorView_1_HSTRING* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIVectorView_1_HSTRING* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIVectorView_1_HSTRING* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* GetAt)(__x_ABI_C__FIVectorView_1_HSTRING* This,
        UINT32 index,
        HSTRING* result);
    HRESULT (STDMETHODCALLTYPE* get_Size)(__x_ABI_C__FIVectorView_1_HSTRING* This,
        UINT32* result);
    HRESULT (STDMETHODCALLTYPE* IndexOf)(__x_ABI_C__FIVectorView_1_HSTRING* This,
        HSTRING value,
        UINT32* index,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* GetMany)(__x_ABI_C__FIVectorView_1_HSTRING* This,
        UINT32 startIndex,
        UINT32 itemsLength,
        HSTRING* items,
        UINT32* result);

        END_INTERFACE
    } __x_ABI_C__FIVectorView_1_HSTRINGVtbl;

    interface __x_ABI_C__FIVectorView_1_HSTRING
    {
        CONST_VTBL struct __x_ABI_C__FIVectorView_1_HSTRINGVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIVectorView_1_HSTRING_INTERFACE_DEFINED__
    
#if !defined(____x_ABI_C__FIVectorView_1___x_ABI_CWindows__CManagement__CMdmAlert_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIVectorView_1___x_ABI_CWindows__CManagement__CMdmAlert_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIVectorView_1___x_ABI_CWindows__CManagement__CMdmAlert __x_ABI_C__FIVectorView_1___x_ABI_CWindows__CManagement__CMdmAlert;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIVectorView_1___x_ABI_CWindows__CManagement__CMdmAlert;

    typedef struct __x_ABI_C__FIVectorView_1___x_ABI_CWindows__CManagement__CMdmAlertVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIVectorView_1___x_ABI_CWindows__CManagement__CMdmAlert* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIVectorView_1___x_ABI_CWindows__CManagement__CMdmAlert* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIVectorView_1___x_ABI_CWindows__CManagement__CMdmAlert* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIVectorView_1___x_ABI_CWindows__CManagement__CMdmAlert* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIVectorView_1___x_ABI_CWindows__CManagement__CMdmAlert* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIVectorView_1___x_ABI_CWindows__CManagement__CMdmAlert* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* GetAt)(__x_ABI_C__FIVectorView_1___x_ABI_CWindows__CManagement__CMdmAlert* This,
        UINT32 index,
        __x_ABI_CWindows_CManagement_CIMdmAlert** result);
    HRESULT (STDMETHODCALLTYPE* get_Size)(__x_ABI_C__FIVectorView_1___x_ABI_CWindows__CManagement__CMdmAlert* This,
        UINT32* result);
    HRESULT (STDMETHODCALLTYPE* IndexOf)(__x_ABI_C__FIVectorView_1___x_ABI_CWindows__CManagement__CMdmAlert* This,
        __x_ABI_CWindows_CManagement_CIMdmAlert* value,
        UINT32* index,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* GetMany)(__x_ABI_C__FIVectorView_1___x_ABI_CWindows__CManagement__CMdmAlert* This,
        UINT32 startIndex,
        UINT32 itemsLength,
        __x_ABI_CWindows_CManagement_CIMdmAlert** items,
        UINT32* result);

        END_INTERFACE
    } __x_ABI_C__FIVectorView_1___x_ABI_CWindows__CManagement__CMdmAlertVtbl;

    interface __x_ABI_C__FIVectorView_1___x_ABI_CWindows__CManagement__CMdmAlert
    {
        CONST_VTBL struct __x_ABI_C__FIVectorView_1___x_ABI_CWindows__CManagement__CMdmAlertVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIVectorView_1___x_ABI_CWindows__CManagement__CMdmAlert_INTERFACE_DEFINED__
    
#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__

typedef enum __x_ABI_CWindows_CManagement_CMdmAlertDataType __x_ABI_CWindows_CManagement_CMdmAlertDataType;

typedef enum __x_ABI_CWindows_CManagement_CMdmAlertMark __x_ABI_CWindows_CManagement_CMdmAlertMark;

typedef enum __x_ABI_CWindows_CManagement_CMdmSessionState __x_ABI_CWindows_CManagement_CMdmSessionState;

enum __x_ABI_CWindows_CManagement_CMdmAlertDataType
    {
        __x_ABI_CWindows_CManagement_CMdmAlertDataType_String = 0,
    __x_ABI_CWindows_CManagement_CMdmAlertDataType_Base64 = 1,
    __x_ABI_CWindows_CManagement_CMdmAlertDataType_Boolean = 2,
    __x_ABI_CWindows_CManagement_CMdmAlertDataType_Integer = 3,
};

enum __x_ABI_CWindows_CManagement_CMdmAlertMark
    {
        __x_ABI_CWindows_CManagement_CMdmAlertMark_None = 0,
    __x_ABI_CWindows_CManagement_CMdmAlertMark_Fatal = 1,
    __x_ABI_CWindows_CManagement_CMdmAlertMark_Critical = 2,
    __x_ABI_CWindows_CManagement_CMdmAlertMark_Warning = 3,
    __x_ABI_CWindows_CManagement_CMdmAlertMark_Informational = 4,
};

enum __x_ABI_CWindows_CManagement_CMdmSessionState
    {
        __x_ABI_CWindows_CManagement_CMdmSessionState_NotStarted = 0,
    __x_ABI_CWindows_CManagement_CMdmSessionState_Starting = 1,
    __x_ABI_CWindows_CManagement_CMdmSessionState_Connecting = 2,
    __x_ABI_CWindows_CManagement_CMdmSessionState_Communicating = 3,
    __x_ABI_CWindows_CManagement_CMdmSessionState_AlertStatusAvailable = 4,
    __x_ABI_CWindows_CManagement_CMdmSessionState_Retrying = 5,
    __x_ABI_CWindows_CManagement_CMdmSessionState_Completed = 6,
};

#if !defined(____x_ABI_CWindows_CManagement_CIMdmAlert_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CManagement_CIMdmAlert_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CManagement_CIMdmAlertVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CManagement_CIMdmAlert* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CManagement_CIMdmAlert* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CManagement_CIMdmAlert* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CManagement_CIMdmAlert* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CManagement_CIMdmAlert* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CManagement_CIMdmAlert* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_Data)(__x_ABI_CWindows_CManagement_CIMdmAlert* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* put_Data)(__x_ABI_CWindows_CManagement_CIMdmAlert* This,
        HSTRING value);
    HRESULT (STDMETHODCALLTYPE* get_Format)(__x_ABI_CWindows_CManagement_CIMdmAlert* This,
        enum __x_ABI_CWindows_CManagement_CMdmAlertDataType* value);
    HRESULT (STDMETHODCALLTYPE* put_Format)(__x_ABI_CWindows_CManagement_CIMdmAlert* This,
        enum __x_ABI_CWindows_CManagement_CMdmAlertDataType value);
    HRESULT (STDMETHODCALLTYPE* get_Mark)(__x_ABI_CWindows_CManagement_CIMdmAlert* This,
        enum __x_ABI_CWindows_CManagement_CMdmAlertMark* value);
    HRESULT (STDMETHODCALLTYPE* put_Mark)(__x_ABI_CWindows_CManagement_CIMdmAlert* This,
        enum __x_ABI_CWindows_CManagement_CMdmAlertMark value);
    HRESULT (STDMETHODCALLTYPE* get_Source)(__x_ABI_CWindows_CManagement_CIMdmAlert* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* put_Source)(__x_ABI_CWindows_CManagement_CIMdmAlert* This,
        HSTRING value);
    HRESULT (STDMETHODCALLTYPE* get_Status)(__x_ABI_CWindows_CManagement_CIMdmAlert* This,
        UINT32* value);
    HRESULT (STDMETHODCALLTYPE* get_Target)(__x_ABI_CWindows_CManagement_CIMdmAlert* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* put_Target)(__x_ABI_CWindows_CManagement_CIMdmAlert* This,
        HSTRING value);
    HRESULT (STDMETHODCALLTYPE* get_Type)(__x_ABI_CWindows_CManagement_CIMdmAlert* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* put_Type)(__x_ABI_CWindows_CManagement_CIMdmAlert* This,
        HSTRING value);

        END_INTERFACE
    } __x_ABI_CWindows_CManagement_CIMdmAlertVtbl;

    interface __x_ABI_CWindows_CManagement_CIMdmAlert
    {
        CONST_VTBL struct __x_ABI_CWindows_CManagement_CIMdmAlertVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CIMdmAlert;
#endif /* !defined(____x_ABI_CWindows_CManagement_CIMdmAlert_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CManagement_CIMdmSession_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CManagement_CIMdmSession_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CManagement_CIMdmSessionVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CManagement_CIMdmSession* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CManagement_CIMdmSession* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CManagement_CIMdmSession* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CManagement_CIMdmSession* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CManagement_CIMdmSession* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CManagement_CIMdmSession* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_Alerts)(__x_ABI_CWindows_CManagement_CIMdmSession* This,
        __x_ABI_C__FIVectorView_1___x_ABI_CWindows__CManagement__CMdmAlert** value);
    HRESULT (STDMETHODCALLTYPE* get_ExtendedError)(__x_ABI_CWindows_CManagement_CIMdmSession* This,
        HRESULT* value);
    HRESULT (STDMETHODCALLTYPE* get_Id)(__x_ABI_CWindows_CManagement_CIMdmSession* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* get_State)(__x_ABI_CWindows_CManagement_CIMdmSession* This,
        enum __x_ABI_CWindows_CManagement_CMdmSessionState* value);
    HRESULT (STDMETHODCALLTYPE* AttachAsync)(__x_ABI_CWindows_CManagement_CIMdmSession* This,
        __x_ABI_CWindows_CFoundation_CIAsyncAction** action);
    HRESULT (STDMETHODCALLTYPE* Delete)(__x_ABI_CWindows_CManagement_CIMdmSession* This);
    HRESULT (STDMETHODCALLTYPE* StartAsync)(__x_ABI_CWindows_CManagement_CIMdmSession* This,
        __x_ABI_CWindows_CFoundation_CIAsyncAction** action);
    HRESULT (STDMETHODCALLTYPE* StartWithAlertsAsync)(__x_ABI_CWindows_CManagement_CIMdmSession* This,
        __x_ABI_C__FIIterable_1___x_ABI_CWindows__CManagement__CMdmAlert* alerts,
        __x_ABI_CWindows_CFoundation_CIAsyncAction** action);

        END_INTERFACE
    } __x_ABI_CWindows_CManagement_CIMdmSessionVtbl;

    interface __x_ABI_CWindows_CManagement_CIMdmSession
    {
        CONST_VTBL struct __x_ABI_CWindows_CManagement_CIMdmSessionVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CIMdmSession;
#endif /* !defined(____x_ABI_CWindows_CManagement_CIMdmSession_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CManagement_CIMdmSessionManagerStaticsVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_SessionIds)(__x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics* This,
        __x_ABI_C__FIVectorView_1_HSTRING** value);
    HRESULT (STDMETHODCALLTYPE* TryCreateSession)(__x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics* This,
        __x_ABI_CWindows_CManagement_CIMdmSession** result);
    HRESULT (STDMETHODCALLTYPE* DeleteSessionById)(__x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics* This,
        HSTRING sessionId);
    HRESULT (STDMETHODCALLTYPE* GetSessionById)(__x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics* This,
        HSTRING sessionId,
        __x_ABI_CWindows_CManagement_CIMdmSession** result);

        END_INTERFACE
    } __x_ABI_CWindows_CManagement_CIMdmSessionManagerStaticsVtbl;

    interface __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CManagement_CIMdmSessionManagerStaticsVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_INTERFACE_DEFINED__) */
    
