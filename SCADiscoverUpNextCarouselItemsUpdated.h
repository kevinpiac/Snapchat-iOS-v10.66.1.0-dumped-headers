//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSString;

@interface SCADiscoverUpNextCarouselItemsUpdated : SCAUserTrackedEvent
{
    NSString *orderedVisibleItemIds;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getOrderedVisibleItemIds;
- (double)getPerUserSamplingRate;
- (void)setOrderedVisibleItemIds:(id)arg1;

@end

