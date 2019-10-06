//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber;

@interface SCAFeedPromptView : SCAUserTrackedEvent
{
    NSNumber *promptMaxCap;
    NSNumber *promptCooldownInDays;
    NSNumber *displayDurationInDays;
    long long promptType;
    long long promptAction;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getDisplayDurationInDays;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (long long)getPromptAction;
- (long long)getPromptCooldownInDays;
- (long long)getPromptMaxCap;
- (long long)getPromptType;
- (id)init;
- (void)setDisplayDurationInDays:(long long)arg1;
- (void)setPromptAction:(long long)arg1;
- (void)setPromptCooldownInDays:(long long)arg1;
- (void)setPromptMaxCap:(long long)arg1;
- (void)setPromptType:(long long)arg1;

@end

