//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCTrackedAsyncMetric : NSObject
{
    double _start;
    NSString *_eventName;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (id)initWithEventName:(id)arg1 andStartTime:(double)arg2;
@property(readonly, nonatomic) double start; // @synthesize start=_start;

@end

