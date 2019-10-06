//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCFeatureProvider;
@protocol SCCameraResources, SCCameraViewConfiguration, SCCameraViewContaining, SCCaptureWorkflow, SCCaptureWorkflowDelegate, SCCaptureWorkflowResultDelegate, SCLensCameraScreenDataProviderProtocol;

@interface SCCaptureScope : NSObject
{
    struct SCFeatureProvider *_cameraFeatureProvider;
    id <SCCameraViewConfiguration> _cameraViewConfigurationController;
    id <SCCameraViewContaining> _cameraViewContainer;
    id <SCCaptureWorkflowDelegate> _captureWorkflowDelegate;
    id <SCCaptureWorkflowResultDelegate> _captureWorkflowResultDelegate;
    id <SCLensCameraScreenDataProviderProtocol> _lensDataProvider;
    id <SCCaptureWorkflow> _captureWorkflow;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCFeatureProvider<SCCameraResources> *cameraFeatureProvider; // @synthesize cameraFeatureProvider=_cameraFeatureProvider;
@property(readonly, nonatomic) id <SCCameraViewConfiguration> cameraViewConfigurationController; // @synthesize cameraViewConfigurationController=_cameraViewConfigurationController;
@property(readonly, nonatomic) id <SCCameraViewContaining> cameraViewContainer; // @synthesize cameraViewContainer=_cameraViewContainer;
@property(nonatomic) __weak id <SCCaptureWorkflow> captureWorkflow; // @synthesize captureWorkflow=_captureWorkflow;
@property(readonly, nonatomic) __weak id <SCCaptureWorkflowDelegate> captureWorkflowDelegate; // @synthesize captureWorkflowDelegate=_captureWorkflowDelegate;
@property(readonly, nonatomic) __weak id <SCCaptureWorkflowResultDelegate> captureWorkflowResultDelegate; // @synthesize captureWorkflowResultDelegate=_captureWorkflowResultDelegate;
- (id)initWithCameraFeatureProvider:(struct SCFeatureProvider *)arg1 cameraViewConfigurationController:(id)arg2 cameraViewContainer:(id)arg3 captureWorkflowDelegate:(id)arg4 captureWorkflowResultDelegate:(id)arg5 lensDataProvider:(id)arg6;
@property(readonly, nonatomic) id <SCLensCameraScreenDataProviderProtocol> lensDataProvider; // @synthesize lensDataProvider=_lensDataProvider;

@end

