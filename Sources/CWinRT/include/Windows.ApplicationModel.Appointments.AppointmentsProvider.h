// WARNING: Please don't edit this file. It was generated by Swift/WinRT v0.0.1

#pragma once
// Header files for imported files
#include <inspectable.h>
#include <EventToken.h>
#include <windowscontracts.h>
#include "Windows.Foundation.h"
#include "Windows.ApplicationModel.Appointments.h"

/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2 __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;

#if !defined(____x_ABI_C__FIReference_1___x_ABI_CWindows__CFoundation__CDateTime_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIReference_1___x_ABI_CWindows__CFoundation__CDateTime_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIReference_1___x_ABI_CWindows__CFoundation__CDateTime __x_ABI_C__FIReference_1___x_ABI_CWindows__CFoundation__CDateTime;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIReference_1___x_ABI_CWindows__CFoundation__CDateTime;

    typedef struct __x_ABI_C__FIReference_1___x_ABI_CWindows__CFoundation__CDateTimeVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIReference_1___x_ABI_CWindows__CFoundation__CDateTime* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIReference_1___x_ABI_CWindows__CFoundation__CDateTime* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIReference_1___x_ABI_CWindows__CFoundation__CDateTime* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIReference_1___x_ABI_CWindows__CFoundation__CDateTime* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIReference_1___x_ABI_CWindows__CFoundation__CDateTime* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIReference_1___x_ABI_CWindows__CFoundation__CDateTime* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_Value)(__x_ABI_C__FIReference_1___x_ABI_CWindows__CFoundation__CDateTime* This,
        struct __x_ABI_CWindows_CFoundation_CDateTime* result);

        END_INTERFACE
    } __x_ABI_C__FIReference_1___x_ABI_CWindows__CFoundation__CDateTimeVtbl;

    interface __x_ABI_C__FIReference_1___x_ABI_CWindows__CFoundation__CDateTime
    {
        CONST_VTBL struct __x_ABI_C__FIReference_1___x_ABI_CWindows__CFoundation__CDateTimeVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIReference_1___x_ABI_CWindows__CFoundation__CDateTime_INTERFACE_DEFINED__
    
#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CIPropertyValue_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIPropertyValue_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CFoundation_CIPropertyValue __x_ABI_CWindows_CFoundation_CIPropertyValue;

#endif // ____x_ABI_CWindows_CFoundation_CIPropertyValue_FWD_DEFINED__

#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperationVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_AppointmentInformation)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation* This,
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment** value);
    HRESULT (STDMETHODCALLTYPE* get_SourcePackageFamilyName)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* ReportCompleted)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation* This,
        HSTRING itemId);
    HRESULT (STDMETHODCALLTYPE* ReportCanceled)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation* This);
    HRESULT (STDMETHODCALLTYPE* ReportError)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation* This,
        HSTRING value);
    HRESULT (STDMETHODCALLTYPE* DismissUI)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation* This);

        END_INTERFACE
    } __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperationVtbl;

    interface __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation
    {
        CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperationVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAddAppointmentOperation_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStaticsVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_AddAppointment)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* get_ReplaceAppointment)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* get_RemoveAppointment)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* get_ShowTimeFrame)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics* This,
        HSTRING* value);

        END_INTERFACE
    } __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStaticsVtbl;

    interface __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStaticsVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2Vtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_ShowAppointmentDetails)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2* This,
        HSTRING* value);

        END_INTERFACE
    } __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2Vtbl;

    interface __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2
    {
        CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2Vtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIAppointmentsProviderLaunchActionVerbsStatics2_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperationVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_AppointmentId)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* get_InstanceStartDate)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation* This,
        __x_ABI_C__FIReference_1___x_ABI_CWindows__CFoundation__CDateTime** value);
    HRESULT (STDMETHODCALLTYPE* get_SourcePackageFamilyName)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* ReportCompleted)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation* This);
    HRESULT (STDMETHODCALLTYPE* ReportCanceled)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation* This);
    HRESULT (STDMETHODCALLTYPE* ReportError)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation* This,
        HSTRING value);
    HRESULT (STDMETHODCALLTYPE* DismissUI)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation* This);

        END_INTERFACE
    } __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperationVtbl;

    interface __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation
    {
        CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperationVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIRemoveAppointmentOperation_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperationVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_AppointmentId)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* get_AppointmentInformation)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation* This,
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment** value);
    HRESULT (STDMETHODCALLTYPE* get_InstanceStartDate)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation* This,
        __x_ABI_C__FIReference_1___x_ABI_CWindows__CFoundation__CDateTime** value);
    HRESULT (STDMETHODCALLTYPE* get_SourcePackageFamilyName)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* ReportCompleted)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation* This,
        HSTRING itemId);
    HRESULT (STDMETHODCALLTYPE* ReportCanceled)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation* This);
    HRESULT (STDMETHODCALLTYPE* ReportError)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation* This,
        HSTRING value);
    HRESULT (STDMETHODCALLTYPE* DismissUI)(__x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation* This);

        END_INTERFACE
    } __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperationVtbl;

    interface __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation
    {
        CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperationVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentsProvider_CIReplaceAppointmentOperation_INTERFACE_DEFINED__) */
    
