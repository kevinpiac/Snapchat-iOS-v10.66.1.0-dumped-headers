//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@protocol SOJUFriendSearchResultItem <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSString *displayUsername;
@property(readonly, copy, nonatomic) NSArray *friendmojiCategories;
@property(readonly, copy, nonatomic) NSDictionary *friendmojiDictionary;
@property(readonly, copy, nonatomic) NSArray *keywords;
@property(readonly, copy, nonatomic) NSString *latestStoryMediaKey;
@property(readonly, copy, nonatomic) NSString *latestStoryThumbnailIv;
@property(readonly, copy, nonatomic) NSString *latestStoryThumbnailUrl;
@property(readonly, copy, nonatomic) NSNumber *position;
@property(readonly, copy, nonatomic) NSString *storyPrivacy;
@property(readonly, copy, nonatomic) NSString *userId;
@property(readonly, copy, nonatomic) NSString *username;
@end
