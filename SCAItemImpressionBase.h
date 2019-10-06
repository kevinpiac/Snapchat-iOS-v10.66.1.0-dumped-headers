//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, SCAPageInstanceInfo, SCAPageItemInfo, SCAPageSectionInfo;

@interface SCAItemImpressionBase : SCAUserTrackedEvent
{
    NSNumber *impressionTimeSecs;
    long long impressionType;
    SCAPageInstanceInfo *pageInstanceInfo;
    SCAPageSectionInfo *pageSectionInfo;
    SCAPageItemInfo *pageItemInfo;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getImpressionTimeSecs;
- (long long)getImpressionType;
- (id)getPageInstanceInfo;
- (id)getPageItemInfo;
- (id)getPageSectionInfo;
- (double)getPerUserSamplingRate;
- (id)init;
- (void)setImpressionTimeSecs:(double)arg1;
- (void)setImpressionType:(long long)arg1;
- (void)setPageInstanceInfo:(id)arg1;
- (void)setPageItemInfo:(id)arg1;
- (void)setPageSectionInfo:(id)arg1;

@end
