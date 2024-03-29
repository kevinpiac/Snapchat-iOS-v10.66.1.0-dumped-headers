//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCCameraViewBaseConfiguration.h"

#import "SCLensEffectActivatorListener-Protocol.h"
#import "SCSnappablesLoadingViewDelegate-Protocol.h"

@class NSString, SCCameraViewController, SCSnappablesLoadingView;
@protocol SCCaptureWorkflow;

@interface SCCameraSnappablesLoadingConfigurationController : SCCameraViewBaseConfiguration <SCLensEffectActivatorListener, SCSnappablesLoadingViewDelegate>
{
    id <SCCaptureWorkflow> _captureWorkflow;
    SCSnappablesLoadingView *_loadingView;
    SCCameraViewController *_cameraViewController;
}

- (void).cxx_destruct;
- (void)_hideLoadingView;
- (void)_showCameraAndHideLoadingView;
- (void)applyConfigurationWithCameraViewController:(id)arg1;
- (id)initWithApplyOption:(long long)arg1 captureWorkflow:(id)arg2;
- (void)lensEffectActivator:(id)arg1 didFailToApplyLensAtTime:(double)arg2;
- (void)lensEffectActivator:(id)arg1 didStartApplyingLens:(id)arg2 atTime:(double)arg3;
- (void)lensEffectActivator:(id)arg1 didSuccessfullyApplyLensAtTime:(double)arg2;
- (void)snappablesLoadingViewTappedCancel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

