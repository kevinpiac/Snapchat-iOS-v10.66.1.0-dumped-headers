//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAGeofilterOndemandEventBase.h"

@class NSNumber, NSString;

@interface SCAGeofilterOndemandPageView : SCAGeofilterOndemandEventBase
{
    NSNumber *viewTimeSec;
    NSNumber *isPendingCollection;
    long long previousPage;
    long long nextPage;
    long long exitEvent;
    NSString *lineItemId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getExitEvent;
- (_Bool)getIsPendingCollection;
- (id)getLineItemId;
- (long long)getNextPage;
- (double)getPerUserSamplingRate;
- (long long)getPreviousPage;
- (double)getViewTimeSec;
- (id)init;
- (void)setExitEvent:(long long)arg1;
- (void)setIsPendingCollection:(_Bool)arg1;
- (void)setLineItemId:(id)arg1;
- (void)setNextPage:(long long)arg1;
- (void)setPreviousPage:(long long)arg1;
- (void)setViewTimeSec:(double)arg1;

@end
