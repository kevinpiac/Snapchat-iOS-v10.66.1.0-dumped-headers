//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SCAdsClientRankingStudy : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) float avgTimeViewedWeight; // @dynamic avgTimeViewedWeight;
@property(nonatomic) float constant; // @dynamic constant;
@property(copy, nonatomic) NSString *modelId; // @dynamic modelId;
@property(nonatomic) int numSnaps; // @dynamic numSnaps;
@property(nonatomic) float stdWeight; // @dynamic stdWeight;
@property(nonatomic) float threshold; // @dynamic threshold;

@end

