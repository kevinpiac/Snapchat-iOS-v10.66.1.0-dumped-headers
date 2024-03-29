//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCFeature.h"

#import "SCFeatureSwipeFilters-Protocol.h"
#import "SCPreviewGestureResponder-Protocol.h"

@class NSData, NSString, SCFeatureImageSmartSwipeFilters, SCFeatureVideoSmartSwipeFilters, SCPreviewConfiguration, SCPreviewView, SCSmartSwipeFilterView, UIView;
@protocol SCFeatureImagePlayback, SCFeatureSwipeFilters, SCFeatureSwipeFiltersDelegate, SCFeatureVideoPlayback;

@interface SCFeatureDualSmartSwipeFilters : SCFeature <SCFeatureSwipeFilters, SCPreviewGestureResponder>
{
    SCFeatureImageSmartSwipeFilters *_imageFilters;
    SCFeatureVideoSmartSwipeFilters *_videoFilters;
    SCPreviewConfiguration *_configuration;
}

- (void).cxx_destruct;
- (void)activate;
- (void)addDebugView:(id)arg1;
@property(retain, nonatomic) SCPreviewConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)configureWithView:(id)arg1;
- (long long)currentFilterSpeedForType:(long long)arg1;
@property(nonatomic) __weak id <SCFeatureSwipeFiltersDelegate> delegate;
- (void)didProcessTapInPreviewContainerView:(id)arg1;
- (unsigned long long)didTapPreviewContainerView:(id)arg1;
- (void)filteredImageWithCroppingAspectRatio:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)filtersTurnedOn;
@property(retain, nonatomic) SCFeatureImageSmartSwipeFilters *imageFilters; // @synthesize imageFilters=_imageFilters;
@property(readonly, nonatomic) id <SCFeatureImagePlayback> imagePlayback;
- (id)initWithImageFilters:(id)arg1 videoFilters:(id)arg2;
- (_Bool)isReverseMotionFilterSelected;
- (void)lensAppliedImageWithLensCommand:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) SCPreviewView *previewView;
- (void)replaceFiltersWithState:(id)arg1 lastState:(id)arg2;
@property(retain, nonatomic) NSData *reversedAudioData;
- (void)setAudioProcessorFilterStyleId:(id)arg1;
@property(retain, nonatomic) SCSmartSwipeFilterView *smartSwipeFilterView;
@property(retain, nonatomic) UIView *trackingObjectContainerView;
@property(retain, nonatomic) SCFeatureVideoSmartSwipeFilters *videoFilters; // @synthesize videoFilters=_videoFilters;
@property(readonly, nonatomic) SCFeature<SCFeatureSwipeFilters> *smartImageSwipeFilters;
@property(readonly, nonatomic) SCFeature<SCFeatureSwipeFilters> *smartVideoSwipeFilters;
- (void)updateSnapCommonLoggingParameters:(id)arg1;
@property(readonly, nonatomic) id <SCFeatureVideoPlayback> videoPlayback;
- (id)videoTracker;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

