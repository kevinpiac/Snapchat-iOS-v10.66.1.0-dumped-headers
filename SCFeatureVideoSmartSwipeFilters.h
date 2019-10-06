//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCFeatureSmartSwipeFilters.h"

@class SCSmartVideoSwipeFilterView;
@protocol SCPreviewLogging;

@interface SCFeatureVideoSmartSwipeFilters : SCFeatureSmartSwipeFilters
{
    id <SCPreviewLogging> _previewLogger;
    SCSmartVideoSwipeFilterView *_smartVideoSwipeFilterView;
    struct CGSize _multiSnapImagePixelSize;
}

- (void).cxx_destruct;
- (void)addMotionFilters;
- (void)configureWithView:(id)arg1;
- (long long)currentFilterSpeedForType:(long long)arg1;
- (id)initWithConfiguration:(id)arg1 applicationLifecycleEvents:(id)arg2 filterArranger:(id)arg3 commonLoggingParameters:(id)arg4 geofilterLogger:(id)arg5 userSession:(id)arg6 imageProcessCommandProvider:(id)arg7 cropBackgroundAnimationImages:(id)arg8 cropBackgroundAnimationColors:(id)arg9 focusLocationDelegate:(id)arg10 venueFilterTooltipProvider:(id)arg11 snapCrop:(id)arg12 drawingFeature:(id)arg13 stickerContainerFeature:(id)arg14 maxMediaAreaFrame:(struct CGRect)arg15 unlockableGeoFilterTracker:(id)arg16 swipeFilterHelpProvider:(id)arg17 previewLogger:(id)arg18 multiSnapImagePixelSize:(struct CGSize)arg19 lensLogger:(id)arg20;
- (_Bool)isReverseMotionFilterSelected;
@property(nonatomic) struct CGSize multiSnapImagePixelSize; // @synthesize multiSnapImagePixelSize=_multiSnapImagePixelSize;
@property(retain, nonatomic) id <SCPreviewLogging> previewLogger; // @synthesize previewLogger=_previewLogger;
- (void)replaceFiltersWithState:(id)arg1 lastState:(id)arg2;
- (id)reversedAudioData;
- (void)setAudioProcessorFilterStyleId:(id)arg1;
- (void)setReversedAudioData:(id)arg1;
@property(retain, nonatomic) SCSmartVideoSwipeFilterView *smartVideoSwipeFilterView; // @synthesize smartVideoSwipeFilterView=_smartVideoSwipeFilterView;
- (id)smartVideoSwipeFilters;
- (id)videoPlayback;
- (id)videoTracker;

@end

