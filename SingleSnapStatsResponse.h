//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SnapViewStats;

@interface SingleSnapStatsResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SnapViewStats *globalStats; // @dynamic globalStats;
@property(nonatomic) _Bool hasGlobalStats; // @dynamic hasGlobalStats;
@property(retain, nonatomic) NSMutableArray *sectionStatsArray; // @dynamic sectionStatsArray;
@property(readonly, nonatomic) unsigned long long sectionStatsArray_Count; // @dynamic sectionStatsArray_Count;
@property(copy, nonatomic) NSString *snapId; // @dynamic snapId;

@end

