//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSNumber, NSString;

@protocol SOJUFriendFeedFriendRankingSignals <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *friendUserId;
@property(readonly, copy, nonatomic) NSNumber *lastInteractionTimestampInSecs;
@property(readonly, copy, nonatomic) NSNumber *numGroupchats;
@property(readonly, copy, nonatomic) NSNumber *numPrivateStories;
@property(readonly, copy, nonatomic) NSNumber *smallestGroupchatSize;
@property(readonly, copy, nonatomic) NSNumber *smallestPrivateStorySize;
@end
