//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCExperimentContext.h"

@class NSString;

@interface SCPreviewStickerRecommendationExperimentContext : SCExperimentContext
{
    _Bool _previewStickerRecommendationEnabled;
    _Bool _previewStickerRecommendationFrontFacingCameraEnabled;
    NSString *_previewStickerRecommendationResourceEndpoint;
}

- (void).cxx_destruct;
- (id)experimentName;
@property(readonly, nonatomic) _Bool previewStickerRecommendationEnabled; // @synthesize previewStickerRecommendationEnabled=_previewStickerRecommendationEnabled;
@property(readonly, nonatomic) _Bool previewStickerRecommendationFrontFacingCameraEnabled; // @synthesize previewStickerRecommendationFrontFacingCameraEnabled=_previewStickerRecommendationFrontFacingCameraEnabled;
@property(readonly, nonatomic) NSString *previewStickerRecommendationResourceEndpoint; // @synthesize previewStickerRecommendationResourceEndpoint=_previewStickerRecommendationResourceEndpoint;
- (void)setupParameters;

@end
