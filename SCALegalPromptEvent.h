//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCALegalPromptEvent : SCAUserTrackedEvent
{
    long long legalPromptType;
    long long legalPromptAction;
}

- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getLegalPromptAction;
- (long long)getLegalPromptType;
- (double)getPerUserSamplingRate;
- (id)init;
- (void)setLegalPromptAction:(long long)arg1;
- (void)setLegalPromptType:(long long)arg1;

@end

