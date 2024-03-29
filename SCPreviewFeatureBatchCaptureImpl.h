//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCFeature.h"

#import "SCBatchCaptureCollectionViewControllerDelegate-Protocol.h"
#import "SCPreviewFeatureBatchCapture-Protocol.h"
#import "SCPreviewGestureResponder-Protocol.h"

@class NSString, SCBatchCaptureCollectionViewController, SCBatchCaptureSavingConfiguration, SCBatchCaptureStateHandler, SCPreviewConfiguration, SCPreviewEphemeralMediaList, SCPreviewView, SCUserSession;
@protocol SCBatchCapturePlayerHandler, SCPreviewFeatureBatchCaptureDelegate><SCPreviewFeatureParentViewControllerAccessing, SCPreviewResources;

@interface SCPreviewFeatureBatchCaptureImpl : SCFeature <SCBatchCaptureCollectionViewControllerDelegate, SCPreviewFeatureBatchCapture, SCPreviewGestureResponder>
{
    SCPreviewConfiguration *_previewConfiguration;
    SCUserSession *_userSession;
    id <SCPreviewResources> _resourceProvider;
    SCPreviewView *_previewView;
    id <SCBatchCapturePlayerHandler> _playerHandler;
    SCPreviewEphemeralMediaList *_ephemeralMediaList;
    id <SCPreviewFeatureBatchCaptureDelegate><SCPreviewFeatureParentViewControllerAccessing> _delegate;
    SCBatchCaptureCollectionViewController *_batchCaptureViewController;
    SCBatchCaptureStateHandler *_batchCaptureStateHandler;
    SCBatchCaptureSavingConfiguration *_savingConfiguration;
}

- (void).cxx_destruct;
- (void)_batchCaptureEditedThumbnailsAtSegmentIndex:(long long)arg1 snapIndex:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_deleteAllSegmentsWithDiscardMethod:(long long)arg1;
- (void)_didDeleteSegmentAtIndexPath:(id)arg1;
- (id)_getCurrentEditingState;
- (void)_onDeleteSegmentAtIndex:(long long)arg1;
- (struct CGSize)_outputOverlaySize;
- (void)_realSetupBatchCaptureWithController:(id)arg1;
- (void)_toggleAttachmentToolButton:(_Bool)arg1;
- (void)_toggleFilterStackingToolButton:(_Bool)arg1;
- (void)_toggleTimerToolButton:(_Bool)arg1 duration:(double)arg2;
- (void)_toolbarButtonTapped:(id)arg1;
- (void)_updateCurrentSegmentThumbnails;
- (void)_updateFilterStackingToolButtonWithSnapState:(id)arg1;
- (void)_updateSaveButtonState;
- (void)_updateThumbnailsForSegmentAtIndex:(long long)arg1 snapIndex:(long long)arg2;
- (void)batchCaptureCollectionViewController:(id)arg1 didPressDeleteForSegmentAtIndexPath:(id)arg2 deleteBlock:(CDUnknownBlockType)arg3;
- (void)batchCaptureCollectionViewController:(id)arg1 didSplitTrimOrDeleteSegmentAtIndexPath:(id)arg2 shouldUpdateThumbnails:(_Bool)arg3;
- (void)batchCaptureCollectionViewController:(id)arg1 didUpdateSegmentStatesAtIndexPath:(id)arg2;
- (void)batchCaptureDidPlayFromSourceAtIndex:(long long)arg1 multiSnapIndex:(long long)arg2 toSourceAtIndex:(long long)arg3 multiSnapIndex:(long long)arg4;
- (void)batchCaptureFinishRewindingView:(id)arg1;
- (void)batchCaptureFinishTouchControl:(id)arg1;
- (void)batchCaptureFirstFrameRenderedForFrameSourceAtIndex:(long long)arg1;
- (void)batchCaptureSaveCurrentOverlayItemsToSourceAtIndex:(long long)arg1 multiSnapIndex:(long long)arg2 shouldUpdateThumbnails:(_Bool)arg3;
- (id)batchCaptureSegmentAtIndex:(long long)arg1;
- (void)batchCaptureSegmentStateChangeShouldUpdateThumbnails:(_Bool)arg1;
@property(readonly, nonatomic) SCBatchCaptureStateHandler *batchCaptureStateHandler; // @synthesize batchCaptureStateHandler=_batchCaptureStateHandler;
- (void)batchCaptureUpdateImageSegmentDuration:(long long)arg1;
@property(readonly, nonatomic) SCBatchCaptureCollectionViewController *batchCaptureViewController; // @synthesize batchCaptureViewController=_batchCaptureViewController;
- (struct CGRect)batchCaptureViewFrame;
- (void)configureWithView:(id)arg1;
@property(nonatomic) __weak id <SCPreviewFeatureBatchCaptureDelegate><SCPreviewFeatureParentViewControllerAccessing> delegate; // @synthesize delegate=_delegate;
- (void)deleteAllSegments;
- (unsigned long long)didTapPreviewContainerView:(id)arg1;
- (void)exportBatchCaptureSegmentsWithCompletion:(CDUnknownBlockType)arg1;
- (void)finalizeSavingConfiguration;
- (id)initWithUserSession:(id)arg1 previewConfiguration:(id)arg2 resourceProvider:(id)arg3;
- (_Bool)isEditingVideoSegment;
- (void)prepareBatchCaptureEphemeralMediaList:(id)arg1;
- (void)prepareBatchCaptureEphemeralMediaList:(id)arg1 withUserSendStartTimestamp:(double)arg2;
- (void)saveBatchCaptureSegmentsToCameraRollWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) SCBatchCaptureSavingConfiguration *savingConfiguration; // @synthesize savingConfiguration=_savingConfiguration;
- (void)setupBatchCaptureWithPlayerHandler:(id)arg1;
- (_Bool)shouldShowDiscardWarning;
- (void)showDiscardWarningWithPreviewExitType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

