//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUnifiedProfileBaseEvent.h"

@class NSString;

@interface SCAUnifiedProfileActionMenuPageView : SCAUnifiedProfileBaseEvent
{
    NSString *sourcePageType;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (id)getSourcePageType;
- (void)setSourcePageType:(id)arg1;

@end
