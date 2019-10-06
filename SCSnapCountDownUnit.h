//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface SCSnapCountDownUnit : NSObject
{
    NSDate *_lastCountDownTime;
    double _leftTimeInterval;
    double _duration;
    _Bool _isInfinite;
    _Bool _paused;
}

- (void).cxx_destruct;
- (id)initWithStartCountDownTime:(id)arg1 duration:(double)arg2 isInfinite:(_Bool)arg3;
- (unsigned long long)leftTime;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
- (double)secondsPlayed;

@end

