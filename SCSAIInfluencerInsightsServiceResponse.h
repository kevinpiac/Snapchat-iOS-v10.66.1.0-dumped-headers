//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class SCSAIInfluencerInsights;

@interface SCSAIInfluencerInsightsServiceResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasPopularUserInsights; // @dynamic hasPopularUserInsights;
@property(nonatomic) _Bool isWhitelisted; // @dynamic isWhitelisted;
@property(retain, nonatomic) SCSAIInfluencerInsights *popularUserInsights; // @dynamic popularUserInsights;

@end

