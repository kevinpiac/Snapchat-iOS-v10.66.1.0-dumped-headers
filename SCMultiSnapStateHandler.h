//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCaptionMultiSnapDelegate-Protocol.h"
#import "SCDrawingViewMultiSnapDelegate-Protocol.h"
#import "SCMultiSnapStateHandlerDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, SCQueuePerformer, SCUserSession;
@protocol SCMultiSnapIndexProvider, SCPreviewFeatureUserTagging;

@interface SCMultiSnapStateHandler : NSObject <SCDrawingViewMultiSnapDelegate, SCCaptionMultiSnapDelegate, SCMultiSnapStateHandlerDelegate>
{
    id <SCMultiSnapIndexProvider> _indexProvider;
    NSMutableArray *_states;
    struct CGSize _overlaySize;
    SCUserSession *_userSession;
    id <SCPreviewFeatureUserTagging> _userTaggingFeature;
    SCQueuePerformer *_galleryPerformer;
}

+ (id)_videoTrackedImageCaptionScreenshotFromCaptions:(id)arg1 croppingState:(id)arg2 outputSize:(struct CGSize)arg3 userSession:(id)arg4;
+ (id)_videoTrackedImageFor3dCaption:(id)arg1 outputSize:(struct CGSize)arg2 userSession:(id)arg3;
+ (id)_videoTrackedImageStreakFilter:(id)arg1 outputSize:(struct CGSize)arg2 userSession:(id)arg3;
+ (id)_videoTrackedImageVenueFilter:(id)arg1 outputSize:(struct CGSize)arg2 userSession:(id)arg3 venueFilterTooltipProvider:(id)arg4;
+ (id)_videoTrackedImagefromSticker:(id)arg1 galleryInfoFilters:(id)arg2 userSession:(id)arg3;
+ (id)_videoTrackedImagesGeoFilter:(id)arg1 outputSize:(struct CGSize)arg2 userSession:(id)arg3;
+ (void)overlayAndVideoTrackedImagesForOverlayState:(id)arg1 overlaySize:(struct CGSize)arg2 outputSize:(struct CGSize)arg3 useOutputSizeForStaticOverlay:(_Bool)arg4 userSession:(id)arg5 multiSnapDrawingCache:(id)arg6 croppingState:(id)arg7 videoPlaybackSpeed:(double)arg8 venueFilterTooltipProvider:(id)arg9 completion:(CDUnknownBlockType)arg10;
- (void).cxx_destruct;
- (void)_configureSnapVideoFilter:(id)arg1 forState:(id)arg2 multiSnapDrawingCache:(id)arg3;
- (_Bool)_hasIdenticalCreativeToolsInState:(id)arg1 toState:(id)arg2;
- (void)_iterateStatesWithTimeRanges:(id)arg1 dataProcessBlock:(CDUnknownBlockType)arg2;
- (void)_updateAllSegmentsWithBlock:(CDUnknownBlockType)arg1;
- (void)_updateIndividualEditingLoggingParameters:(id)arg1 from:(id)arg2;
- (void)_updateSelectedSegmentsWithBlock:(CDUnknownBlockType)arg1;
- (void)configureEphemeralMedias:(id)arg1 configuration:(id)arg2 timeRanges:(id)arg3 multiSnapDrawingCache:(id)arg4;
- (void)didChangeAttachmentURL:(id)arg1;
- (void)didChangeAudioFilter:(id)arg1 audioEnabled:(_Bool)arg2;
- (void)didChangeCroppingState:(id)arg1 isInitialState:(_Bool)arg2;
- (void)didChangeFiltersState:(id)arg1;
- (void)didChangeStaticCaption:(id)arg1;
- (void)didChangeStaticStickerView:(id)arg1;
- (void)didChangeTrackingCaption:(id)arg1 atIndex:(long long)arg2;
- (void)didChangeVenueFilterView:(id)arg1;
- (void)didDeleteSegmentAtIndex:(long long)arg1;
- (void)didSplitSegmentAtIndex:(long long)arg1 splitTime:(CDStruct_1b6d18a9)arg2;
- (void)didUpdateMetadataOfStickerView:(id)arg1 atIndex:(long long)arg2;
- (void)drawingView:(id)arg1 addedStroke:(id)arg2;
- (void)drawingView:(id)arg1 removedStroke:(id)arg2;
- (id)gallerySnapOverlaysWithTimeRanges:(id)arg1;
- (_Bool)hasIndividualCreativeTools;
- (id)initWithMultiSnapIndexProvider:(id)arg1 timeRanges:(id)arg2 overlaySize:(struct CGSize)arg3 userSession:(id)arg4 userTaggingFeature:(id)arg5;
- (void)overlayAndVideoTrackedImagesForIndex:(long long)arg1 outputSize:(struct CGSize)arg2 useOutputSizeForStaticOverlay:(_Bool)arg3 multiSnapDrawingCache:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)overlaysForGalleryWithTimeRanges:(id)arg1 multiSnapDrawingCache:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSArray *states; // @synthesize states=_states;
- (_Bool)statesContainAudioVisualEdits;
- (void)updateAvailableFiltersWithState:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

