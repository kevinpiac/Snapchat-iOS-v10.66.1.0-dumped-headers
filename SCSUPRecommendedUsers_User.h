//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableDictionary, NSString;

@interface SCSUPRecommendedUsers_User : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool isOfficial; // @dynamic isOfficial;
@property(nonatomic) int recReason; // @dynamic recReason;
@property(nonatomic) int recommendationReason; // @dynamic recommendationReason;
@property(nonatomic) float score; // @dynamic score;
@property(retain, nonatomic) NSMutableDictionary *scoringInfo; // @dynamic scoringInfo;
@property(readonly, nonatomic) unsigned long long scoringInfo_Count; // @dynamic scoringInfo_Count;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end

