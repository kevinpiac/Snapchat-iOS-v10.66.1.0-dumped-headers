//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SCSUPScoredInterest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int id_p; // @dynamic id_p;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) float normalizedScore; // @dynamic normalizedScore;
@property(nonatomic) float normalizedScorePercentile; // @dynamic normalizedScorePercentile;
@property(nonatomic) int scc; // @dynamic scc;
@property(nonatomic) float score; // @dynamic score;

@end

