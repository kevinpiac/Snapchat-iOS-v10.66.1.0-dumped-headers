//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class SCSQNStoryStats;

@interface SCSQNStoryStatsAggregation : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned long long aggregationMinTimeMsecs; // @dynamic aggregationMinTimeMsecs;
@property(nonatomic) unsigned long long aggregationWindowMsecs; // @dynamic aggregationWindowMsecs;
@property(nonatomic) _Bool hasStats; // @dynamic hasStats;
@property(retain, nonatomic) SCSQNStoryStats *stats; // @dynamic stats;

@end

