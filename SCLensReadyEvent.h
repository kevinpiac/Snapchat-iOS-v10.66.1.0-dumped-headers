//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCLens;

@interface SCLensReadyEvent : NSObject
{
    NSString *_uniqueId;
    NSString *_lensSessionId;
    SCLens *_lens;
    double _startTime;
}

- (void).cxx_destruct;
- (void)_logGrapheneMetricWithResult:(_Bool)arg1 endTime:(double)arg2;
- (id)initWithLens:(id)arg1 lensSessionId:(id)arg2 startTime:(double)arg3;
@property(readonly, nonatomic) SCLens *lens; // @synthesize lens=_lens;
- (void)logFailureEventAtTime:(double)arg1;
- (void)logSuccessEventAtTime:(double)arg1;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;

@end

