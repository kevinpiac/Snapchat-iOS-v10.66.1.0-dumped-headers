//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SCMTFriendGameScore : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool isScoreSharable; // @dynamic isScoreSharable;
@property(nonatomic) int lastAcquiredEggColor; // @dynamic lastAcquiredEggColor;
@property(copy, nonatomic) NSString *lastAcquiredEggPattern; // @dynamic lastAcquiredEggPattern;
@property(copy, nonatomic) NSString *lastAcquiredLocality; // @dynamic lastAcquiredLocality;
@property(nonatomic) long long lastAcquiredTimeMs; // @dynamic lastAcquiredTimeMs;
@property(nonatomic) int score; // @dynamic score;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end

