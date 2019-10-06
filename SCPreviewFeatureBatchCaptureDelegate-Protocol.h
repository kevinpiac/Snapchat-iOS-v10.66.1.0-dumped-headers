//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSIndexPath, SCCroppingState, SCGeoFilter, SCMultiSnapIndividualEditingState, SCPreviewEphemeralMediaList, SCPreviewFilterStackingUIHelper, SCPreviewToolBarButtonItem, UIView;
@protocol SCTouchControllable;

@protocol SCPreviewFeatureBatchCaptureDelegate
- (void)featureBatchCaptureAllSegmentsDeleted;
- (double)featureBatchCaptureContentTargetAspectRatio;
- (id <SCTouchControllable>)featureBatchCaptureCurrentTouchTarget;
- (void)featureBatchCaptureDidTapToolbarItem:(SCPreviewToolBarButtonItem *)arg1;
- (void)featureBatchCaptureDidUpdateSegmentStatesAtIndexPath:(NSIndexPath *)arg1;
- (SCPreviewFilterStackingUIHelper *)featureBatchCaptureFilterStackingUIHelper;
- (SCCroppingState *)featureBatchCaptureIdentityCroppingState;
- (SCPreviewEphemeralMediaList *)featureBatchCaptureInitializeEphemeralMediaList;
- (void)featureBatchCapturePrepareEphemeralMediaList:(SCPreviewEphemeralMediaList *)arg1;
- (void)featureBatchCaptureSegmentDeletedAtIndexPath:(NSIndexPath *)arg1;
- (SCGeoFilter *)featureBatchCaptureSelectedGeofilter;
- (void)featureBatchCaptureSetAudioToolsStateFromMultiSnapEditingState:(SCMultiSnapIndividualEditingState *)arg1;
- (UIView *)featureBatchCaptureTrackingObjectContainerView;
- (void)featureBatchCaptureUpdateCommonLoggingParameters;
@end
