//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "SCCaptureWorkflowResultDelegate-Protocol.h"

@class NSDate, NSMutableDictionary, NSString, SCAdsCameraLensDataProvider, SCScannableLensProcessor, SCUserSession;
@protocol SCCaptureWorkflow;

@interface SCOperaCameraLayerViewController : SCOperaLayerViewController <SCCaptureWorkflowResultDelegate>
{
    SCAdsCameraLensDataProvider *_lensDataProvider;
    SCScannableLensProcessor *_scannableLensProcessor;
    long long _viewLocation;
    _Bool _lensesAreLoadedOnEntry;
    _Bool _lensesAreLoadedOnExit;
    NSDate *_loadStartTime;
    NSDate *_loadCompleteTime;
    double _startCameraTime;
    unsigned long long _scannedLensCounter;
    NSMutableDictionary *_scanCodeIdToLensMap;
    id <SCCaptureWorkflow> _captureWorkflow;
    _Bool _shouldPushCamera;
    SCUserSession *_userSession;
}

+ (id)unavailableLensWithNonNilLensId;
- (void).cxx_destruct;
- (void)captureWorkflowDidDismissWithDidSendSnap:(_Bool)arg1;
- (id)currentViewParameters;
- (void)didReceiveUpdateProperties:(id)arg1;
- (id)getLensesToPresent;
- (id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3 userSession:(id)arg4 viewLocation:(long long)arg5;
- (void)loadView;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (void)pushCameraVC;
- (void)resetMetrics;
- (void)scanLensIfNecessaryWithLensItem:(id)arg1;
- (void)setAdIdAdRequestClientIdForLogging;
- (void)setLoadedOnEntryIfPossible;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
- (long long)snapSourceForCurrentViewLocation;
- (void)teardown;
- (void)turnOnLenses:(id)arg1;
- (void)viewDidFullyAppear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

