//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCUpdateAnnouncing-Protocol.h"

@class NSArray, NSString, SCNetworkImage, SCUnifiedProfileMyStoriesDataModel;

@protocol SCUnifiedProfileStoriesDataSource <SCUpdateAnnouncing>
- (NSArray *)storyCollectionDataModels;
- (NSString *)storyDisplayName;
- (SCUnifiedProfileMyStoriesDataModel *)storyHeaderDataModel;
- (SCNetworkImage *)storyHeaderLargeThumbnail;
- (SCNetworkImage *)storyHeaderThumbnail;
- (NSString *)storySectionIdentifier;
- (void)tearDown;
@end

