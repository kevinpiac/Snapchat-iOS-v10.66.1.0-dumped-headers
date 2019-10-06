//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class SCSUPEngagementStats;

@interface SCSCKContentEngagementScores : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasNonOfficialPublicStats; // @dynamic hasNonOfficialPublicStats;
@property(nonatomic) _Bool hasOfficialPublicStats; // @dynamic hasOfficialPublicStats;
@property(nonatomic) _Bool hasOriginalShowStats; // @dynamic hasOriginalShowStats;
@property(nonatomic) _Bool hasOurStoryStats; // @dynamic hasOurStoryStats;
@property(nonatomic) _Bool hasPublisherStats; // @dynamic hasPublisherStats;
@property(nonatomic) _Bool hasShowStats; // @dynamic hasShowStats;
@property(nonatomic) float maxPublicUserCtr; // @dynamic maxPublicUserCtr;
@property(nonatomic) float minPublicUserCtr; // @dynamic minPublicUserCtr;
@property(retain, nonatomic) SCSUPEngagementStats *nonOfficialPublicStats; // @dynamic nonOfficialPublicStats;
@property(retain, nonatomic) SCSUPEngagementStats *officialPublicStats; // @dynamic officialPublicStats;
@property(retain, nonatomic) SCSUPEngagementStats *originalShowStats; // @dynamic originalShowStats;
@property(retain, nonatomic) SCSUPEngagementStats *ourStoryStats; // @dynamic ourStoryStats;
@property(nonatomic) float publicUserRecommendedCtr; // @dynamic publicUserRecommendedCtr;
@property(nonatomic) float publicUserSubscriptionCtr; // @dynamic publicUserSubscriptionCtr;
@property(retain, nonatomic) SCSUPEngagementStats *publisherStats; // @dynamic publisherStats;
@property(nonatomic) float showEngagementScore; // @dynamic showEngagementScore;
@property(nonatomic) float showFanScore; // @dynamic showFanScore;
@property(retain, nonatomic) SCSUPEngagementStats *showStats; // @dynamic showStats;
@property(nonatomic) long long totalLongWatches; // @dynamic totalLongWatches;

@end

