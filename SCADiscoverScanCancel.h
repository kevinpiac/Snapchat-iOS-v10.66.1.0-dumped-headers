//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSString;

@interface SCADiscoverScanCancel : SCAUserTrackedEvent
{
    long long denyReason;
    long long exitEvent;
    long long page;
    NSString *publisherId;
    NSString *editionId;
    NSString *dsnapId;
    NSString *scanActionId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getDenyReason;
- (id)getDsnapId;
- (id)getEditionId;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getExitEvent;
- (long long)getPage;
- (double)getPerUserSamplingRate;
- (id)getPublisherId;
- (id)getScanActionId;
- (id)init;
- (void)setDenyReason:(long long)arg1;
- (void)setDsnapId:(id)arg1;
- (void)setEditionId:(id)arg1;
- (void)setExitEvent:(long long)arg1;
- (void)setPage:(long long)arg1;
- (void)setPublisherId:(id)arg1;
- (void)setScanActionId:(id)arg1;

@end

