//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class SCSUPEngagementStats;

@interface SCSUPContentTypeScore : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int corpus; // @dynamic corpus;
@property(nonatomic) _Bool hasStats; // @dynamic hasStats;
@property(nonatomic) float score; // @dynamic score;
@property(retain, nonatomic) SCSUPEngagementStats *stats; // @dynamic stats;

@end

