//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCSpectaclesTask.h"

@interface SCSpectaclesTaskDeleteAnalyticsLogs : SCSpectaclesTask
{
    _Bool _finished;
}

- (_Bool)handleResponse:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
- (id)nextRequest:(long long)arg1;
- (double)requiredDelay;
- (unsigned long long)type;

@end

