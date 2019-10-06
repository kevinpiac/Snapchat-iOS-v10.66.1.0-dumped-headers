//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "SOJUAuthPayload-Protocol.h"

@class NSArray, NSNumber, NSString;

@protocol SOJUIdentitySuggestedFriendActionRequest <NSObject, NSCoding, NSCopying, SOJUAuthPayload>
@property(readonly, copy, nonatomic) NSString *action;
@property(readonly, copy, nonatomic) NSArray *addedSuggestedFriendCellInfoList;
@property(readonly, copy, nonatomic) NSString *friend;
@property(readonly, copy, nonatomic) NSString *friendId;
@property(readonly, copy, nonatomic) NSNumber *hide;
@property(readonly, copy, nonatomic) NSNumber *identityCellIndex;
@property(readonly, copy, nonatomic) NSNumber *impressionId;
@property(readonly, copy, nonatomic) NSNumber *impressionTimeMs;
@property(readonly, copy, nonatomic) NSNumber *notificationPrefetch;
@property(readonly, copy, nonatomic) NSString *placement;
@property(readonly, copy, nonatomic) NSString *reqToken;
@property(readonly, copy, nonatomic) NSNumber *seen;
@property(readonly, copy, nonatomic) NSArray *seenFriendRequestCellInfoList;
@property(readonly, copy, nonatomic) NSArray *seenSuggestedFriendList;
@property(readonly, copy, nonatomic) NSArray *suggestedFriendCellInfoList;
@property(readonly, copy, nonatomic) NSNumber *suggestedFriendRankingTweak;
@property(readonly, copy, nonatomic) NSString *timestamp;
@property(readonly, copy, nonatomic) NSString *username;
@end

