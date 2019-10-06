//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCFeature.h"

#import "SCCameraToolbarItemProvider-Protocol.h"
#import "SCFeatureDepthCaptureMode-Protocol.h"
#import "SCLensDataProviderListener-Protocol.h"
#import "SCManagedCapturerListener-Protocol.h"

@class NSArray, NSString, SCCameraToolbarItem, SCDepthCaptureLiveCameraCropModule, SCDisposableObserverLifecycle, SCExperimentManager, SCFeatureReference, UIView;
@protocol SCCameraViewControllerLensDelegate, SCCapturer, SCFeatureCameraToolbar, SCFeatureContainerView, SCLensCameraScreenDataProviderProtocol, SCLensDataFetcher><SCLensUIUpdateListener;

@interface SCFeatureDepthCaptureModeImpl : SCFeature <SCManagedCapturerListener, SCLensDataProviderListener, SCFeatureDepthCaptureMode, SCCameraToolbarItemProvider>
{
    id <SCCapturer> _capturer;
    UIView<SCFeatureContainerView> *_containerView;
    id <SCFeatureCameraToolbar> _cameraToolbar;
    SCDisposableObserverLifecycle *_appLifecycle;
    SCDisposableObserverLifecycle *_vcLifecycle;
    SCCameraToolbarItem *_toolbarItem;
    unsigned long long _lastDevicePosition;
    SCDepthCaptureLiveCameraCropModule *_liveCameraCropModule;
    SCFeatureReference *_lensDataProviderFactory;
    id <SCLensCameraScreenDataProviderProtocol> _lensDataProvider;
    NSString *_lensDataProviderToken;
    id <SCLensDataFetcher><SCLensUIUpdateListener> _lensDataFetcher;
    SCExperimentManager *_experimentManager;
    _Bool _lensPrefetchRequestDone;
    NSArray *_lensesToBePrefetched;
    SCFeatureReference *_cameraUserActionLogger;
    unsigned long long _buttonTapCount;
    _Bool _enabled;
    id <SCCameraViewControllerLensDelegate> _lensDelegate;
}

- (void).cxx_destruct;
- (id)_createToolbarItem;
- (_Bool)_depthCaptureSupported;
- (_Bool)_isDepthCaptureDevicePosition:(unsigned long long)arg1;
- (_Bool)_onFrontCamera:(unsigned long long)arg1;
- (void)_updateLensesThatNeedsToBePrefetched;
- (void)_updateToolbarItemVisibility;
- (void)activate;
- (void)configureWithCameraToolbar:(id)arg1;
- (void)configureWithView:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (id)initWithCapturer:(id)arg1 applicationLifecycleEvents:(id)arg2 lensDataProviderFactory:(id)arg3 lensDataFetcher:(id)arg4 experimentManager:(id)arg5 cameraUserActionLogger:(id)arg6;
- (void)lensDataProvider:(id)arg1 didUpdateAllLenses:(id)arg2 requiresAnimation:(_Bool)arg3;
- (void)lensDataProvider:(id)arg1 didUpdateLens:(id)arg2 contentUpdateType:(long long)arg3;
@property(nonatomic) __weak id <SCCameraViewControllerLensDelegate> lensDelegate; // @synthesize lensDelegate=_lensDelegate;
- (void)managedCapturer:(id)arg1 didChangeCaptureDevicePosition:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeDepthCaptureModeActive:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeLensesActive:(id)arg2;
- (void)resetMetrics;
- (void)setButtonHidden:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1 force:(_Bool)arg2;
- (void)startIfInactive;
- (void)stopIfActive;
- (id)usageMetrics;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
