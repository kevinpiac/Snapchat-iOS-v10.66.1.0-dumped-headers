//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class SCSUPLensEngagementStats_ActionCounts;

@interface SCSUPLensEngagementStats : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasOlderActions; // @dynamic hasOlderActions;
@property(nonatomic) _Bool hasRecentActions; // @dynamic hasRecentActions;
@property(retain, nonatomic) SCSUPLensEngagementStats_ActionCounts *olderActions; // @dynamic olderActions;
@property(retain, nonatomic) SCSUPLensEngagementStats_ActionCounts *recentActions; // @dynamic recentActions;

@end
