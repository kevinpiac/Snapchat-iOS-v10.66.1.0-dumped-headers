//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class SCAPageExitInfo, SCAPageInstanceInfo;

@interface SCAPageViewBase : SCAUserTrackedEvent
{
    SCAPageInstanceInfo *pageInstanceInfo;
    SCAPageExitInfo *pageExitInfo;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getPageExitInfo;
- (id)getPageInstanceInfo;
- (double)getPerUserSamplingRate;
- (void)setPageExitInfo:(id)arg1;
- (void)setPageInstanceInfo:(id)arg1;

@end

