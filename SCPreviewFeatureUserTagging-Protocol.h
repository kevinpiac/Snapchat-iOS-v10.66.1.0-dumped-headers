//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSDictionary, NSString;

@protocol SCPreviewFeatureUserTagging
- (NSArray *)allNotifiedUsernamesfromCaptionStates:(NSArray *)arg1 andStickerStates:(NSArray *)arg2;
- (long long)captionCarouselUserTagCountFromCaptions:(NSArray *)arg1;
- (_Bool)shouldEnableUserTagging;
- (_Bool)shouldEnableUserTaggingButton;
- (NSString *)staticCaptionWithUserTagPositionsFromCaptions:(NSArray *)arg1;
- (NSDictionary *)userTaggingInfoFromCaptionStates:(NSArray *)arg1;
- (NSDictionary *)userTaggingInfoFromCaptionStates:(NSArray *)arg1 andStickerStates:(NSArray *)arg2;
- (NSDictionary *)userTaggingInfoFromStickerStates:(NSArray *)arg1;
@end

