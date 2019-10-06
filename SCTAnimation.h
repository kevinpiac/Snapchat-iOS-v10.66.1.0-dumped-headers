//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCTAnimationTimingFunction;

@interface SCTAnimation : NSObject
{
    SCTAnimationTimingFunction *_timingFunction;
    double _fromInterval;
    double _toInterval;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (double)deltaAtInterval:(double)arg1;
@property(readonly, nonatomic) double fromInterval; // @synthesize fromInterval=_fromInterval;
- (id)initWithCurve:(unsigned long long)arg1 fromInterval:(double)arg2 toInterval:(double)arg3 completion:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) double toInterval; // @synthesize toInterval=_toInterval;
- (void)updateForInterval:(double)arg1;

@end
