//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCameraViewControllerDelegate-Protocol.h"
#import "SCCaptureWorkflow-Protocol.h"
#import "SendSnapNavigationControllerDelegate-Protocol.h"

@class NSArray, NSString, SCBehaviorSubject, SCDisposableObserverLifecycle, SCObservable;
@protocol SCCameraViewConfiguration, SCCaptureWorkflowDelegate, SCCaptureWorkflowPageRouter, SCCaptureWorkflowResultDelegate;

@interface SCCaptureWorkflowImpl : NSObject <SCCameraViewControllerDelegate, SendSnapNavigationControllerDelegate, SCCaptureWorkflow>
{
    id <SCCaptureWorkflowDelegate> _workflowDelegate;
    id <SCCaptureWorkflowResultDelegate> _captureWorkflowResultDelegate;
    id <SCCaptureWorkflowPageRouter> _captureWorkflowPageRouter;
    id <SCCameraViewConfiguration> _cameraViewConfigurationController;
    SCDisposableObserverLifecycle *_applicationLifecycle;
    SCDisposableObserverLifecycle *_cameraViewControllerLifecycle;
    SCObservable *_applicationLifecycleEvents;
    SCBehaviorSubject *_cameraViewControllerLifecycleEvents;
    _Bool _didEndWorkflow;
    _Bool _isViewAppeared;
    NSArray *_configurations;
}

- (void).cxx_destruct;
- (void)_endWorkflowWithDidSendSnap:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_excludeConfigurationsWithOption:(long long)arg1;
- (id)_getConfigurationsForPerformWithOption:(long long)arg1;
- (void)_observeApplicationLifecycleEvents;
- (void)_observeViewControllerLifecycleEvents;
- (void)_performAndRemoveConfigurationsWithOption:(long long)arg1;
- (void)_performConfigurations:(id)arg1;
- (void)_performConfigurationsWithOption:(long long)arg1;
- (void)beginWorkflow;
- (void)didCancelFromPreview:(id)arg1;
- (void)didPostStory;
- (void)didSaveSnapWithParameters:(id)arg1;
- (void)didSendChatMessage;
- (void)didSendSnaps:(id)arg1 postToStory:(_Bool)arg2;
- (void)didSendToGallery;
- (void)endWorkflowWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithDelegate:(id)arg1 captureWorkflowResultDelegate:(id)arg2 captureWorkflowPageRouter:(id)arg3 cameraViewConfigurationController:(id)arg4 cameraViewControllerLifecycleEvents:(id)arg5 applicationLifecycleEvents:(id)arg6;
- (void)leftCameraBackButtonPressed;
- (void)performCameraViewConfiguration:(id)arg1;
- (void)performCameraViewConfigurations:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

