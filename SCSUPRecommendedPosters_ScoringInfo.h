//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface SCSUPRecommendedPosters_ScoringInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) float score; // @dynamic score;
@property(nonatomic) int source; // @dynamic source;
@property(retain, nonatomic) NSMutableArray *sourceScoresArray; // @dynamic sourceScoresArray;
@property(readonly, nonatomic) unsigned long long sourceScoresArray_Count; // @dynamic sourceScoresArray_Count;

@end
