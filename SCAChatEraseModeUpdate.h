//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAChatEraseModeUpdate : SCAUserTrackedEvent
{
    long long updatedChatEraseMode;
    long long updateSource;
}

- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (long long)getUpdateSource;
- (long long)getUpdatedChatEraseMode;
- (id)init;
- (void)setUpdateSource:(long long)arg1;
- (void)setUpdatedChatEraseMode:(long long)arg1;

@end

