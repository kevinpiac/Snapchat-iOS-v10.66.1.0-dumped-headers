//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCSQNUserContext;

@interface SCSQNDemographicStoryCooccurringStats : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCSQNUserContext *demographic; // @dynamic demographic;
@property(nonatomic) _Bool hasDemographic; // @dynamic hasDemographic;
@property(retain, nonatomic) NSMutableArray *storyCooccurringStatsArray; // @dynamic storyCooccurringStatsArray;
@property(readonly, nonatomic) unsigned long long storyCooccurringStatsArray_Count; // @dynamic storyCooccurringStatsArray_Count;

@end

