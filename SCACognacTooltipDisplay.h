//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCACognacActionEventBase.h"

@interface SCACognacTooltipDisplay : SCACognacActionEventBase
{
    long long tooltipType;
}

- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (long long)getTooltipType;
- (id)init;
- (void)setTooltipType:(long long)arg1;

@end

