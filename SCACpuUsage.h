//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NamedEvent-Protocol.h"

@class NSNumber;

@interface SCACpuUsage : NSObject <NamedEvent, NSCopying>
{
    NSNumber *maxCpuUsage;
    NSNumber *minCpuUsage;
    NSNumber *medianCpuUsage;
    NSNumber *avgCpuUsage;
    NSNumber *cpuSampleCount;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getAvgCpuUsage;
- (long long)getCpuSampleCount;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getMaxCpuUsage;
- (long long)getMedianCpuUsage;
- (long long)getMinCpuUsage;
- (double)getPerEventSamplingRate;
- (double)getPerUserSamplingRate;
- (void)setAvgCpuUsage:(long long)arg1;
- (void)setCpuSampleCount:(long long)arg1;
- (void)setMaxCpuUsage:(long long)arg1;
- (void)setMedianCpuUsage:(long long)arg1;
- (void)setMinCpuUsage:(long long)arg1;

@end
