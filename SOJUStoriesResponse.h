//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUStoriesResponse-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUBroadcastStoriesOrderingOrderingResponse, SOJUBroadcastUserStoryPrecachingUserStoriesPrecacheConfig, SOJUServerInfoResponse;

@interface SOJUStoriesResponse : NSObject <SOJUStoriesResponse>
{
    NSArray *_myStories;
    NSArray *_myStoriesWithCollabs;
    NSArray *_friendStories;
    NSArray *_myGroupStories;
    NSArray *_myVerifiedStories;
    NSDictionary *_matureContentText;
    NSNumber *_friendStoriesDelta;
    SOJUBroadcastStoriesOrderingOrderingResponse *_orderingResponse;
    SOJUServerInfoResponse *_serverInfo;
    SOJUBroadcastUserStoryPrecachingUserStoriesPrecacheConfig *_userStoriesPrecacheConfig;
    NSArray *_myMobStories;
    NSString *_syncMetadata;
    NSNumber *_unsignedReceipt;
    NSString *_responseType;
    NSDictionary *_deletedFriendStories;
    NSNumber *_paginate;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *deletedFriendStories; // @synthesize deletedFriendStories=_deletedFriendStories;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *friendStories; // @synthesize friendStories=_friendStories;
@property(readonly, copy, nonatomic) NSNumber *friendStoriesDelta; // @synthesize friendStoriesDelta=_friendStoriesDelta;
- (_Bool)friendStoriesDeltaValue;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithMyStories:(id)arg1 myStoriesWithCollabs:(id)arg2 friendStories:(id)arg3 myGroupStories:(id)arg4 myVerifiedStories:(id)arg5 matureContentText:(id)arg6 friendStoriesDelta:(id)arg7 orderingResponse:(id)arg8 serverInfo:(id)arg9 userStoriesPrecacheConfig:(id)arg10 myMobStories:(id)arg11 syncMetadata:(id)arg12 unsignedReceipt:(id)arg13 responseType:(id)arg14 deletedFriendStories:(id)arg15 paginate:(id)arg16;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *matureContentText; // @synthesize matureContentText=_matureContentText;
@property(readonly, copy, nonatomic) NSArray *myGroupStories; // @synthesize myGroupStories=_myGroupStories;
@property(readonly, copy, nonatomic) NSArray *myMobStories; // @synthesize myMobStories=_myMobStories;
@property(readonly, copy, nonatomic) NSArray *myStories; // @synthesize myStories=_myStories;
@property(readonly, copy, nonatomic) NSArray *myStoriesWithCollabs; // @synthesize myStoriesWithCollabs=_myStoriesWithCollabs;
@property(readonly, copy, nonatomic) NSArray *myVerifiedStories; // @synthesize myVerifiedStories=_myVerifiedStories;
@property(readonly, copy, nonatomic) SOJUBroadcastStoriesOrderingOrderingResponse *orderingResponse; // @synthesize orderingResponse=_orderingResponse;
@property(readonly, copy, nonatomic) NSNumber *paginate; // @synthesize paginate=_paginate;
- (_Bool)paginateValue;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSString *responseType; // @synthesize responseType=_responseType;
- (long long)responseTypeEnum;
@property(readonly, copy, nonatomic) SOJUServerInfoResponse *serverInfo; // @synthesize serverInfo=_serverInfo;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *syncMetadata; // @synthesize syncMetadata=_syncMetadata;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSNumber *unsignedReceipt; // @synthesize unsignedReceipt=_unsignedReceipt;
- (_Bool)unsignedReceiptValue;
@property(readonly, copy, nonatomic) SOJUBroadcastUserStoryPrecachingUserStoriesPrecacheConfig *userStoriesPrecacheConfig; // @synthesize userStoriesPrecacheConfig=_userStoriesPrecacheConfig;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
