//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SCBadFrameRateStatsTracker : NSObject
{
    double _totalBadFrameDurationMs;
    NSMutableArray *_frameDurationBuckets;
    double _lastFrameTime;
    long long _frameCount;
    _Bool _started;
    _Bool _paused;
}

- (void).cxx_destruct;
- (void)_setBadFrameBucket:(double)arg1;
- (id)frameDurationBuckets;
- (id)init;
- (void)pauseDisplay;
- (void)processFrameTime:(double)arg1;
- (void)reset;
- (double)totalBadFrameDurationMs;
- (long long)totalFrameCount;

@end
