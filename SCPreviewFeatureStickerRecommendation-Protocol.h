//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SCPreviewFeatureStickerRecommendationDelegate, SCStickerRecommendationDataProviding;

@protocol SCPreviewFeatureStickerRecommendation <NSObject>
@property(nonatomic) __weak id <SCStickerRecommendationDataProviding> dataProvider;
@property(nonatomic) __weak id <SCPreviewFeatureStickerRecommendationDelegate> delegate;
@end

