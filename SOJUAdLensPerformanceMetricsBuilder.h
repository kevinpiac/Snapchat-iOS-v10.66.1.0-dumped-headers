//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface SOJUAdLensPerformanceMetricsBuilder : NSObject
{
    NSNumber *_avgFps;
    NSNumber *_lensApplyDelayMillis;
    NSNumber *_frameProcessingTimeAvgMillis;
}

+ (id)withJUAdLensPerformanceMetrics:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setAvgFps:(id)arg1;
- (id)setAvgFpsValue:(float)arg1;
- (id)setFrameProcessingTimeAvgMillis:(id)arg1;
- (id)setFrameProcessingTimeAvgMillisValue:(long long)arg1;
- (id)setLensApplyDelayMillis:(id)arg1;
- (id)setLensApplyDelayMillisValue:(long long)arg1;

@end

