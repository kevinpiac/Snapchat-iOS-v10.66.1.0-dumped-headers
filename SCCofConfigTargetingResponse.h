//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class BenchmarkRequest, NSMutableArray, NSString;

@interface SCCofConfigTargetingResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) BenchmarkRequest *benchmarkRequest; // @dynamic benchmarkRequest;
@property(retain, nonatomic) NSMutableArray *configResultsArray; // @dynamic configResultsArray;
@property(readonly, nonatomic) unsigned long long configResultsArray_Count; // @dynamic configResultsArray_Count;
@property(copy, nonatomic) NSString *configResultsEtag; // @dynamic configResultsEtag;
@property(nonatomic) _Bool fullResults; // @dynamic fullResults;
@property(nonatomic) _Bool hasBenchmarkRequest; // @dynamic hasBenchmarkRequest;

@end

