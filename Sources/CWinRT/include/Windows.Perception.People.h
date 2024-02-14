// WARNING: Please don't edit this file. It was generated by Swift/WinRT v0.0.1

#pragma once
// Header files for imported files
#include <inspectable.h>
#include <EventToken.h>
#include <windowscontracts.h>
#include "Windows.Foundation.h"
#include "Windows.Foundation.Numerics.h"
#include "Windows.Perception.h"
#include "Windows.Perception.Spatial.h"
#include "Windows.UI.Input.h"
#include "Windows.UI.Input.Spatial.h"

/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CPerception_CPeople_CIEyesPose_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CPeople_CIEyesPose_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CPerception_CPeople_CIEyesPose __x_ABI_CWindows_CPerception_CPeople_CIEyesPose;

#endif // ____x_ABI_CWindows_CPerception_CPeople_CIEyesPose_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CPeople_CIEyesPoseStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CPeople_CIEyesPoseStatics_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CPerception_CPeople_CIEyesPoseStatics __x_ABI_CWindows_CPerception_CPeople_CIEyesPoseStatics;

#endif // ____x_ABI_CWindows_CPerception_CPeople_CIEyesPoseStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver __x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver;

#endif // ____x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CPeople_CIHandMeshVertexState_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CPeople_CIHandMeshVertexState_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CPerception_CPeople_CIHandMeshVertexState __x_ABI_CWindows_CPerception_CPeople_CIHandMeshVertexState;

#endif // ____x_ABI_CWindows_CPerception_CPeople_CIHandMeshVertexState_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CPeople_CIHandPose_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CPeople_CIHandPose_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CPerception_CPeople_CIHandPose __x_ABI_CWindows_CPerception_CPeople_CIHandPose;

#endif // ____x_ABI_CWindows_CPerception_CPeople_CIHandPose_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CPeople_CIHeadPose_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CPeople_CIHeadPose_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CPerception_CPeople_CIHeadPose __x_ABI_CWindows_CPerception_CPeople_CIHeadPose;

#endif // ____x_ABI_CWindows_CPerception_CPeople_CIHeadPose_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

typedef enum __x_ABI_CWindows_CUI_CInput_CGazeInputAccessStatus __x_ABI_CWindows_CUI_CInput_CGazeInputAccessStatus;

typedef interface __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CUI__CInput__CGazeInputAccessStatus __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CUI__CInput__CGazeInputAccessStatus;

#if !defined(____x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CUI__CInput__CGazeInputAccessStatus_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CUI__CInput__CGazeInputAccessStatus_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CUI__CInput__CGazeInputAccessStatus __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CUI__CInput__CGazeInputAccessStatus;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CUI__CInput__CGazeInputAccessStatus;

    typedef struct __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CUI__CInput__CGazeInputAccessStatusVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CUI__CInput__CGazeInputAccessStatus* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CUI__CInput__CGazeInputAccessStatus* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CUI__CInput__CGazeInputAccessStatus* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CUI__CInput__CGazeInputAccessStatus* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CUI__CInput__CGazeInputAccessStatus* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CUI__CInput__CGazeInputAccessStatus* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* put_Completed)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CUI__CInput__CGazeInputAccessStatus* This,
        __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CUI__CInput__CGazeInputAccessStatus* handler);
    HRESULT (STDMETHODCALLTYPE* get_Completed)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CUI__CInput__CGazeInputAccessStatus* This,
        __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CUI__CInput__CGazeInputAccessStatus** result);
    HRESULT (STDMETHODCALLTYPE* GetResults)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CUI__CInput__CGazeInputAccessStatus* This,
        enum __x_ABI_CWindows_CUI_CInput_CGazeInputAccessStatus* result);

        END_INTERFACE
    } __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CUI__CInput__CGazeInputAccessStatusVtbl;

    interface __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CUI__CInput__CGazeInputAccessStatus
    {
        CONST_VTBL struct __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CUI__CInput__CGazeInputAccessStatusVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CUI__CInput__CGazeInputAccessStatus_INTERFACE_DEFINED__
    
#if !defined(____x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CUI__CInput__CGazeInputAccessStatus_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CUI__CInput__CGazeInputAccessStatus_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CUI__CInput__CGazeInputAccessStatus __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CUI__CInput__CGazeInputAccessStatus;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CUI__CInput__CGazeInputAccessStatus;

    typedef struct __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CUI__CInput__CGazeInputAccessStatusVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CUI__CInput__CGazeInputAccessStatus* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CUI__CInput__CGazeInputAccessStatus* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CUI__CInput__CGazeInputAccessStatus* This);
        HRESULT (STDMETHODCALLTYPE* Invoke)(__x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CUI__CInput__CGazeInputAccessStatus* This,
        __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CUI__CInput__CGazeInputAccessStatus* asyncInfo,
        enum __x_ABI_CWindows_CFoundation_CAsyncStatus asyncStatus);

        END_INTERFACE
    } __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CUI__CInput__CGazeInputAccessStatusVtbl;

    interface __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CUI__CInput__CGazeInputAccessStatus
    {
        CONST_VTBL struct __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CUI__CInput__CGazeInputAccessStatusVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CUI__CInput__CGazeInputAccessStatus_INTERFACE_DEFINED__
    
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialRay __x_ABI_CWindows_CPerception_CSpatial_CSpatialRay;

#if !defined(____x_ABI_C__FIReference_1___x_ABI_CWindows__CPerception__CSpatial__CSpatialRay_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIReference_1___x_ABI_CWindows__CPerception__CSpatial__CSpatialRay_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIReference_1___x_ABI_CWindows__CPerception__CSpatial__CSpatialRay __x_ABI_C__FIReference_1___x_ABI_CWindows__CPerception__CSpatial__CSpatialRay;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIReference_1___x_ABI_CWindows__CPerception__CSpatial__CSpatialRay;

    typedef struct __x_ABI_C__FIReference_1___x_ABI_CWindows__CPerception__CSpatial__CSpatialRayVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIReference_1___x_ABI_CWindows__CPerception__CSpatial__CSpatialRay* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIReference_1___x_ABI_CWindows__CPerception__CSpatial__CSpatialRay* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIReference_1___x_ABI_CWindows__CPerception__CSpatial__CSpatialRay* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIReference_1___x_ABI_CWindows__CPerception__CSpatial__CSpatialRay* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIReference_1___x_ABI_CWindows__CPerception__CSpatial__CSpatialRay* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIReference_1___x_ABI_CWindows__CPerception__CSpatial__CSpatialRay* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_Value)(__x_ABI_C__FIReference_1___x_ABI_CWindows__CPerception__CSpatial__CSpatialRay* This,
        struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialRay* result);

        END_INTERFACE
    } __x_ABI_C__FIReference_1___x_ABI_CWindows__CPerception__CSpatial__CSpatialRayVtbl;

    interface __x_ABI_C__FIReference_1___x_ABI_CWindows__CPerception__CSpatial__CSpatialRay
    {
        CONST_VTBL struct __x_ABI_C__FIReference_1___x_ABI_CWindows__CPerception__CSpatial__CSpatialRayVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIReference_1___x_ABI_CWindows__CPerception__CSpatial__CSpatialRay_INTERFACE_DEFINED__
    
typedef enum __x_ABI_CWindows_CFoundation_CAsyncStatus __x_ABI_CWindows_CFoundation_CAsyncStatus;

#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncInfo_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CFoundation_CIAsyncInfo __x_ABI_CWindows_CFoundation_CIAsyncInfo;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CIPropertyValue_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIPropertyValue_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CFoundation_CIPropertyValue __x_ABI_CWindows_CFoundation_CIPropertyValue;

#endif // ____x_ABI_CWindows_CFoundation_CIPropertyValue_FWD_DEFINED__

typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion;

typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 __x_ABI_CWindows_CFoundation_CNumerics_CVector3;

#ifndef ____x_ABI_CWindows_CPerception_CIPerceptionTimestamp_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CIPerceptionTimestamp_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CPerception_CIPerceptionTimestamp __x_ABI_CWindows_CPerception_CIPerceptionTimestamp;

#endif // ____x_ABI_CWindows_CPerception_CIPerceptionTimestamp_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource;

#endif // ____x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource_FWD_DEFINED__

typedef enum __x_ABI_CWindows_CPerception_CPeople_CHandJointKind __x_ABI_CWindows_CPerception_CPeople_CHandJointKind;

typedef enum __x_ABI_CWindows_CPerception_CPeople_CJointPoseAccuracy __x_ABI_CWindows_CPerception_CPeople_CJointPoseAccuracy;

typedef struct __x_ABI_CWindows_CPerception_CPeople_CHandMeshVertex __x_ABI_CWindows_CPerception_CPeople_CHandMeshVertex;

typedef struct __x_ABI_CWindows_CPerception_CPeople_CJointPose __x_ABI_CWindows_CPerception_CPeople_CJointPose;

enum __x_ABI_CWindows_CPerception_CPeople_CHandJointKind
    {
        __x_ABI_CWindows_CPerception_CPeople_CHandJointKind_Palm = 0,
    __x_ABI_CWindows_CPerception_CPeople_CHandJointKind_Wrist = 1,
    __x_ABI_CWindows_CPerception_CPeople_CHandJointKind_ThumbMetacarpal = 2,
    __x_ABI_CWindows_CPerception_CPeople_CHandJointKind_ThumbProximal = 3,
    __x_ABI_CWindows_CPerception_CPeople_CHandJointKind_ThumbDistal = 4,
    __x_ABI_CWindows_CPerception_CPeople_CHandJointKind_ThumbTip = 5,
    __x_ABI_CWindows_CPerception_CPeople_CHandJointKind_IndexMetacarpal = 6,
    __x_ABI_CWindows_CPerception_CPeople_CHandJointKind_IndexProximal = 7,
    __x_ABI_CWindows_CPerception_CPeople_CHandJointKind_IndexIntermediate = 8,
    __x_ABI_CWindows_CPerception_CPeople_CHandJointKind_IndexDistal = 9,
    __x_ABI_CWindows_CPerception_CPeople_CHandJointKind_IndexTip = 10,
    __x_ABI_CWindows_CPerception_CPeople_CHandJointKind_MiddleMetacarpal = 11,
    __x_ABI_CWindows_CPerception_CPeople_CHandJointKind_MiddleProximal = 12,
    __x_ABI_CWindows_CPerception_CPeople_CHandJointKind_MiddleIntermediate = 13,
    __x_ABI_CWindows_CPerception_CPeople_CHandJointKind_MiddleDistal = 14,
    __x_ABI_CWindows_CPerception_CPeople_CHandJointKind_MiddleTip = 15,
    __x_ABI_CWindows_CPerception_CPeople_CHandJointKind_RingMetacarpal = 16,
    __x_ABI_CWindows_CPerception_CPeople_CHandJointKind_RingProximal = 17,
    __x_ABI_CWindows_CPerception_CPeople_CHandJointKind_RingIntermediate = 18,
    __x_ABI_CWindows_CPerception_CPeople_CHandJointKind_RingDistal = 19,
    __x_ABI_CWindows_CPerception_CPeople_CHandJointKind_RingTip = 20,
    __x_ABI_CWindows_CPerception_CPeople_CHandJointKind_LittleMetacarpal = 21,
    __x_ABI_CWindows_CPerception_CPeople_CHandJointKind_LittleProximal = 22,
    __x_ABI_CWindows_CPerception_CPeople_CHandJointKind_LittleIntermediate = 23,
    __x_ABI_CWindows_CPerception_CPeople_CHandJointKind_LittleDistal = 24,
    __x_ABI_CWindows_CPerception_CPeople_CHandJointKind_LittleTip = 25,
};

enum __x_ABI_CWindows_CPerception_CPeople_CJointPoseAccuracy
    {
        __x_ABI_CWindows_CPerception_CPeople_CJointPoseAccuracy_High = 0,
    __x_ABI_CWindows_CPerception_CPeople_CJointPoseAccuracy_Approximate = 1,
};

struct __x_ABI_CWindows_CPerception_CPeople_CHandMeshVertex
    {
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 Position;
    struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 Normal;
};

struct __x_ABI_CWindows_CPerception_CPeople_CJointPose
    {
        struct __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion Orientation;
    struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 Position;
    FLOAT Radius;
    enum __x_ABI_CWindows_CPerception_CPeople_CJointPoseAccuracy Accuracy;
};

#if !defined(____x_ABI_CWindows_CPerception_CPeople_CIEyesPose_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CPerception_CPeople_CIEyesPose_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CPerception_CPeople_CIEyesPoseVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CPerception_CPeople_CIEyesPose* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CPerception_CPeople_CIEyesPose* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CPerception_CPeople_CIEyesPose* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CPerception_CPeople_CIEyesPose* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CPerception_CPeople_CIEyesPose* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CPerception_CPeople_CIEyesPose* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_IsCalibrationValid)(__x_ABI_CWindows_CPerception_CPeople_CIEyesPose* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* get_Gaze)(__x_ABI_CWindows_CPerception_CPeople_CIEyesPose* This,
        __x_ABI_C__FIReference_1___x_ABI_CWindows__CPerception__CSpatial__CSpatialRay** value);
    HRESULT (STDMETHODCALLTYPE* get_UpdateTimestamp)(__x_ABI_CWindows_CPerception_CPeople_CIEyesPose* This,
        __x_ABI_CWindows_CPerception_CIPerceptionTimestamp** value);

        END_INTERFACE
    } __x_ABI_CWindows_CPerception_CPeople_CIEyesPoseVtbl;

    interface __x_ABI_CWindows_CPerception_CPeople_CIEyesPose
    {
        CONST_VTBL struct __x_ABI_CWindows_CPerception_CPeople_CIEyesPoseVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CPeople_CIEyesPose;
#endif /* !defined(____x_ABI_CWindows_CPerception_CPeople_CIEyesPose_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CPerception_CPeople_CIEyesPoseStatics_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CPerception_CPeople_CIEyesPoseStatics_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CPerception_CPeople_CIEyesPoseStaticsVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CPerception_CPeople_CIEyesPoseStatics* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CPerception_CPeople_CIEyesPoseStatics* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CPerception_CPeople_CIEyesPoseStatics* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CPerception_CPeople_CIEyesPoseStatics* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CPerception_CPeople_CIEyesPoseStatics* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CPerception_CPeople_CIEyesPoseStatics* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* IsSupported)(__x_ABI_CWindows_CPerception_CPeople_CIEyesPoseStatics* This,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* RequestAccessAsync)(__x_ABI_CWindows_CPerception_CPeople_CIEyesPoseStatics* This,
        __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CUI__CInput__CGazeInputAccessStatus** operation);

        END_INTERFACE
    } __x_ABI_CWindows_CPerception_CPeople_CIEyesPoseStaticsVtbl;

    interface __x_ABI_CWindows_CPerception_CPeople_CIEyesPoseStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CPerception_CPeople_CIEyesPoseStaticsVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CPeople_CIEyesPoseStatics;
#endif /* !defined(____x_ABI_CWindows_CPerception_CPeople_CIEyesPoseStatics_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserverVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_Source)(__x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver* This,
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource** value);
    HRESULT (STDMETHODCALLTYPE* get_TriangleIndexCount)(__x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver* This,
        UINT32* value);
    HRESULT (STDMETHODCALLTYPE* get_VertexCount)(__x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver* This,
        UINT32* value);
    HRESULT (STDMETHODCALLTYPE* GetTriangleIndices)(__x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver* This,
        UINT32 indicesLength,
        UINT16* indices);
    HRESULT (STDMETHODCALLTYPE* GetVertexStateForPose)(__x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver* This,
        __x_ABI_CWindows_CPerception_CPeople_CIHandPose* handPose,
        __x_ABI_CWindows_CPerception_CPeople_CIHandMeshVertexState** result);
    HRESULT (STDMETHODCALLTYPE* get_NeutralPose)(__x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver* This,
        __x_ABI_CWindows_CPerception_CPeople_CIHandPose** value);
    HRESULT (STDMETHODCALLTYPE* get_NeutralPoseVersion)(__x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver* This,
        INT32* value);
    HRESULT (STDMETHODCALLTYPE* get_ModelId)(__x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver* This,
        INT32* value);

        END_INTERFACE
    } __x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserverVtbl;

    interface __x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver
    {
        CONST_VTBL struct __x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserverVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver;
#endif /* !defined(____x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CPerception_CPeople_CIHandMeshVertexState_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CPerception_CPeople_CIHandMeshVertexState_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CPerception_CPeople_CIHandMeshVertexStateVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CPerception_CPeople_CIHandMeshVertexState* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CPerception_CPeople_CIHandMeshVertexState* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CPerception_CPeople_CIHandMeshVertexState* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CPerception_CPeople_CIHandMeshVertexState* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CPerception_CPeople_CIHandMeshVertexState* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CPerception_CPeople_CIHandMeshVertexState* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_CoordinateSystem)(__x_ABI_CWindows_CPerception_CPeople_CIHandMeshVertexState* This,
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem** value);
    HRESULT (STDMETHODCALLTYPE* GetVertices)(__x_ABI_CWindows_CPerception_CPeople_CIHandMeshVertexState* This,
        UINT32 verticesLength,
        struct __x_ABI_CWindows_CPerception_CPeople_CHandMeshVertex* vertices);
    HRESULT (STDMETHODCALLTYPE* get_UpdateTimestamp)(__x_ABI_CWindows_CPerception_CPeople_CIHandMeshVertexState* This,
        __x_ABI_CWindows_CPerception_CIPerceptionTimestamp** value);

        END_INTERFACE
    } __x_ABI_CWindows_CPerception_CPeople_CIHandMeshVertexStateVtbl;

    interface __x_ABI_CWindows_CPerception_CPeople_CIHandMeshVertexState
    {
        CONST_VTBL struct __x_ABI_CWindows_CPerception_CPeople_CIHandMeshVertexStateVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CPeople_CIHandMeshVertexState;
#endif /* !defined(____x_ABI_CWindows_CPerception_CPeople_CIHandMeshVertexState_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CPerception_CPeople_CIHandPose_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CPerception_CPeople_CIHandPose_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CPerception_CPeople_CIHandPoseVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CPerception_CPeople_CIHandPose* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CPerception_CPeople_CIHandPose* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CPerception_CPeople_CIHandPose* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CPerception_CPeople_CIHandPose* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CPerception_CPeople_CIHandPose* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CPerception_CPeople_CIHandPose* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* TryGetJoint)(__x_ABI_CWindows_CPerception_CPeople_CIHandPose* This,
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem* coordinateSystem,
        enum __x_ABI_CWindows_CPerception_CPeople_CHandJointKind joint,
        struct __x_ABI_CWindows_CPerception_CPeople_CJointPose* jointPose,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* TryGetJoints)(__x_ABI_CWindows_CPerception_CPeople_CIHandPose* This,
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem* coordinateSystem,
        UINT32 jointsLength,
        enum __x_ABI_CWindows_CPerception_CPeople_CHandJointKind* joints,
        UINT32 jointPosesLength,
        struct __x_ABI_CWindows_CPerception_CPeople_CJointPose* jointPoses,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* GetRelativeJoint)(__x_ABI_CWindows_CPerception_CPeople_CIHandPose* This,
        enum __x_ABI_CWindows_CPerception_CPeople_CHandJointKind joint,
        enum __x_ABI_CWindows_CPerception_CPeople_CHandJointKind referenceJoint,
        struct __x_ABI_CWindows_CPerception_CPeople_CJointPose* result);
    HRESULT (STDMETHODCALLTYPE* GetRelativeJoints)(__x_ABI_CWindows_CPerception_CPeople_CIHandPose* This,
        UINT32 jointsLength,
        enum __x_ABI_CWindows_CPerception_CPeople_CHandJointKind* joints,
        UINT32 referenceJointsLength,
        enum __x_ABI_CWindows_CPerception_CPeople_CHandJointKind* referenceJoints,
        UINT32 jointPosesLength,
        struct __x_ABI_CWindows_CPerception_CPeople_CJointPose* jointPoses);

        END_INTERFACE
    } __x_ABI_CWindows_CPerception_CPeople_CIHandPoseVtbl;

    interface __x_ABI_CWindows_CPerception_CPeople_CIHandPose
    {
        CONST_VTBL struct __x_ABI_CWindows_CPerception_CPeople_CIHandPoseVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CPeople_CIHandPose;
#endif /* !defined(____x_ABI_CWindows_CPerception_CPeople_CIHandPose_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CPerception_CPeople_CIHeadPose_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CPerception_CPeople_CIHeadPose_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CPerception_CPeople_CIHeadPoseVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CPerception_CPeople_CIHeadPose* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CPerception_CPeople_CIHeadPose* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CPerception_CPeople_CIHeadPose* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CPerception_CPeople_CIHeadPose* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CPerception_CPeople_CIHeadPose* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CPerception_CPeople_CIHeadPose* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_Position)(__x_ABI_CWindows_CPerception_CPeople_CIHeadPose* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3* value);
    HRESULT (STDMETHODCALLTYPE* get_ForwardDirection)(__x_ABI_CWindows_CPerception_CPeople_CIHeadPose* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3* value);
    HRESULT (STDMETHODCALLTYPE* get_UpDirection)(__x_ABI_CWindows_CPerception_CPeople_CIHeadPose* This,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3* value);

        END_INTERFACE
    } __x_ABI_CWindows_CPerception_CPeople_CIHeadPoseVtbl;

    interface __x_ABI_CWindows_CPerception_CPeople_CIHeadPose
    {
        CONST_VTBL struct __x_ABI_CWindows_CPerception_CPeople_CIHeadPoseVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CPeople_CIHeadPose;
#endif /* !defined(____x_ABI_CWindows_CPerception_CPeople_CIHeadPose_INTERFACE_DEFINED__) */
    