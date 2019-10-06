//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUBroadcastStoriesOrderingOrderingResponse, SOJUBroadcastUserStoryPrecachingUserStoriesPrecacheConfig, SOJUServerInfoResponse;

@protocol SOJUStoriesResponse <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSDictionary *deletedFriendStories;
@property(readonly, copy, nonatomic) NSArray *friendStories;
@property(readonly, copy, nonatomic) NSNumber *friendStoriesDelta;
@property(readonly, copy, nonatomic) NSDictionary *matureContentText;
@property(readonly, copy, nonatomic) NSArray *myGroupStories;
@property(readonly, copy, nonatomic) NSArray *myMobStories;
@property(readonly, copy, nonatomic) NSArray *myStories;
@property(readonly, copy, nonatomic) NSArray *myStoriesWithCollabs;
@property(readonly, copy, nonatomic) NSArray *myVerifiedStories;
@property(readonly, copy, nonatomic) SOJUBroadcastStoriesOrderingOrderingResponse *orderingResponse;
@property(readonly, copy, nonatomic) NSNumber *paginate;
@property(readonly, copy, nonatomic) NSString *responseType;
@property(readonly, copy, nonatomic) SOJUServerInfoResponse *serverInfo;
@property(readonly, copy, nonatomic) NSString *syncMetadata;
@property(readonly, copy, nonatomic) NSNumber *unsignedReceipt;
@property(readonly, copy, nonatomic) SOJUBroadcastUserStoryPrecachingUserStoriesPrecacheConfig *userStoriesPrecacheConfig;
@end

