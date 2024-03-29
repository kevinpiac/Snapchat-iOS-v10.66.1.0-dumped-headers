//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, SCBaseAutoMeasureEvent;

@interface SCBaseAutoTimer : NSObject
{
    double _startTime;
    SCBaseAutoMeasureEvent *_measure;
    NSDictionary *_params;
}

+ (void)fireWithMeasure:(id)arg1 durationSec:(double)arg2;
+ (void)fireWithMeasure:(id)arg1 durationSec:(double)arg2 params:(id)arg3;
- (void).cxx_destruct;
- (void)_fireWithEndTime:(double)arg1;
- (id)initWithMeasure:(id)arg1;
- (id)initWithMeasure:(id)arg1 params:(id)arg2;
- (id)initWithMeasure:(id)arg1 startTime:(double)arg2;
- (id)initWithMeasure:(id)arg1 startTime:(double)arg2 params:(id)arg3;
- (void)stop;

@end

