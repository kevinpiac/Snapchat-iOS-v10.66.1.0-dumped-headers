//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAFideliusNotReady : SCAUserTrackedEvent
{
    NSNumber *withUserSession;
    NSNumber *withIdentity;
    NSNumber *withDatabaseManager;
    long long eventType;
    NSString *action;
    NSString *fideliusManagerStatus;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getAction;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getEventType;
- (id)getFideliusManagerStatus;
- (double)getPerUserSamplingRate;
- (_Bool)getWithDatabaseManager;
- (_Bool)getWithIdentity;
- (_Bool)getWithUserSession;
- (id)init;
- (void)setAction:(id)arg1;
- (void)setEventType:(long long)arg1;
- (void)setFideliusManagerStatus:(id)arg1;
- (void)setWithDatabaseManager:(_Bool)arg1;
- (void)setWithIdentity:(_Bool)arg1;
- (void)setWithUserSession:(_Bool)arg1;

@end
