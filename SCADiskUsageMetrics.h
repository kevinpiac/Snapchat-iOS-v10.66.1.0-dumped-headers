//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSArray, NSNumber;

@interface SCADiskUsageMetrics : SCAUserTrackedEvent
{
    NSNumber *totalSizeKb;
    NSNumber *freeSpaceKb;
    NSNumber *totalSpaceKb;
    NSArray *directoryUsages;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getDirectoryUsages;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getFreeSpaceKb;
- (double)getPerUserSamplingRate;
- (long long)getTotalSizeKb;
- (long long)getTotalSpaceKb;
- (void)setDirectoryUsages:(id)arg1;
- (void)setFreeSpaceKb:(long long)arg1;
- (void)setTotalSizeKb:(long long)arg1;
- (void)setTotalSpaceKb:(long long)arg1;

@end

