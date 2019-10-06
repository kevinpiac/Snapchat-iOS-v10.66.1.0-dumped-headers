//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "SCOperaBlockingViewController-Protocol.h"
#import "SCOperaLoadingLayerViewDelegate-Protocol.h"

@class NSString, SCGCDBlockTimer, SCOperaLoadingLayerView;
@protocol SCOperaBlockingViewControllerDelegate;

@interface SCOperaLoadingLayerViewController : SCOperaLayerViewController <SCOperaLoadingLayerViewDelegate, SCOperaBlockingViewController>
{
    SCOperaLoadingLayerView *_layerView;
    _Bool _isDismissing;
    SCGCDBlockTimer *_delayTimer;
    _Bool _shouldConsiderShowingSpinner;
    _Bool _isMonitoringProgressUpdate;
    SCGCDBlockTimer *_progressRetryTimer;
    NSString *_monitoringProgressRequestId;
    id <SCOperaBlockingViewControllerDelegate> _blockingViewControllerDelegate;
}

- (void).cxx_destruct;
- (void)_hideLoadingLayerView;
- (void)_progressUpdateHandlerWithProgress:(float)arg1 error:(id)arg2;
- (void)_resetLoadingProgressMonitor;
- (void)_scheduleRetryForProgressMonitor;
- (void)_showLoadingIndicatorIfNecessary;
- (void)_startMonitoringProgressUpdateIfNeededWithRequestId:(id)arg1;
- (void)_updateLoadingProgressMonitingStateIfNeeded;
@property(nonatomic) __weak id <SCOperaBlockingViewControllerDelegate> blockingViewControllerDelegate; // @synthesize blockingViewControllerDelegate=_blockingViewControllerDelegate;
- (void)dealloc;
- (void)didTryPagingWhenPagingDisabled;
- (_Bool)isBeingDismissed;
- (_Bool)isBlocking;
- (void)loadView;
- (void)loadingLayerViewDidPressErrorButton:(id)arg1;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (_Bool)shouldBlockOtherLayersFromDisplayingWithCurrentPage:(id)arg1;
- (void)teardown;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
- (void)viewDidFullyAppear;
- (void)viewDidFullyDisappear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

