//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GPBStringInt32Dictionary;

@interface SCR2PopularUserInsights_AggregatedPopularUserStoryModerationStatistics : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) double averageRating; // @dynamic averageRating;
@property(retain, nonatomic) GPBStringInt32Dictionary *categoryCount; // @dynamic categoryCount;
@property(readonly, nonatomic) unsigned long long categoryCount_Count; // @dynamic categoryCount_Count;
@property(retain, nonatomic) GPBStringInt32Dictionary *languageCount; // @dynamic languageCount;
@property(readonly, nonatomic) unsigned long long languageCount_Count; // @dynamic languageCount_Count;
@property(nonatomic) int merchandisePromotionCount; // @dynamic merchandisePromotionCount;
@property(nonatomic) int nsfwCount; // @dynamic nsfwCount;
@property(nonatomic) int offensiveCount; // @dynamic offensiveCount;
@property(nonatomic) int storyModerationCount; // @dynamic storyModerationCount;

@end

