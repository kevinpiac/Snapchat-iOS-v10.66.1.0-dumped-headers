//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class SCCroppingState, SCGeoFilter, SCMultiSnapIndividualEditingState, SCPreviewEphemeralMediaList, SCPreviewFilterStackingUIHelper, SCPreviewToolBarButtonItem, UIView;
@protocol SCTouchControllable;

@protocol SCPreviewFeatureMultiSnapDelegate
- (_Bool)featureMultiSnapAudioEnabled;
- (double)featureMultiSnapContentTargetAspectRatio;
- (id <SCTouchControllable>)featureMultiSnapCurrentTouchTarget;
- (void)featureMultiSnapDidSplitSegment;
- (void)featureMultiSnapDidTapToolbarItem:(SCPreviewToolBarButtonItem *)arg1;
- (SCPreviewFilterStackingUIHelper *)featureMultiSnapFilterStackingUIHelper;
- (SCCroppingState *)featureMultiSnapIdentityCroppingState;
- (SCPreviewEphemeralMediaList *)featureMultiSnapInitializeEphemeralMediaList;
- (void)featureMultiSnapPrepareEphemeralMediaList:(SCPreviewEphemeralMediaList *)arg1;
- (SCGeoFilter *)featureMultiSnapSelectedGeofilter;
- (void)featureMultiSnapSetAudioToolsStateForEphemeralMediaListState:(SCPreviewEphemeralMediaList *)arg1;
- (void)featureMultiSnapSetAudioToolsStateFromMultiSnapEditingState:(SCMultiSnapIndividualEditingState *)arg1;
- (UIView *)featureMultiSnapTrackingObjectContainerView;
- (void)featureMultiSnapUpdateCommonLoggingParameters;
- (void)featureMultiSnapUpdateXButtonAndSnapEditingState;
@end

