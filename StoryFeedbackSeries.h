//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class FeedbackDimensions, NSMutableArray;

@interface StoryFeedbackSeries : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) FeedbackDimensions *aggregationDimensions; // @dynamic aggregationDimensions;
@property(nonatomic) _Bool hasAggregationDimensions; // @dynamic hasAggregationDimensions;
@property(retain, nonatomic) NSMutableArray *seriesArray; // @dynamic seriesArray;
@property(readonly, nonatomic) unsigned long long seriesArray_Count; // @dynamic seriesArray_Count;

@end

