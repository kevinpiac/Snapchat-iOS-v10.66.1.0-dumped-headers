//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCTranscodingMetricBase.h"

@interface SCTranscodingMetricVideoExport : SCTranscodingMetricBase
{
    long long _numSegments;
    long long _segmentIndex;
    double _segmentStartTime;
    double _segmentDuration;
}

- (id)metricType;
@property(nonatomic) long long numSegments; // @synthesize numSegments=_numSegments;
@property(nonatomic) double segmentDuration; // @synthesize segmentDuration=_segmentDuration;
@property(nonatomic) long long segmentIndex; // @synthesize segmentIndex=_segmentIndex;
@property(nonatomic) double segmentStartTime; // @synthesize segmentStartTime=_segmentStartTime;

@end
