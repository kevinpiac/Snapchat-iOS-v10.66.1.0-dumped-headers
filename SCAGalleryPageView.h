//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAGalleryPageView : SCAUserTrackedEvent
{
    NSNumber *viewTimeSec;
    long long page;
    long long pageName;
    NSString *lagunaTransferBatchId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getLagunaTransferBatchId;
- (long long)getPage;
- (long long)getPageName;
- (double)getPerUserSamplingRate;
- (double)getViewTimeSec;
- (id)init;
- (void)setLagunaTransferBatchId:(id)arg1;
- (void)setPage:(long long)arg1;
- (void)setPageName:(long long)arg1;
- (void)setViewTimeSec:(double)arg1;

@end

