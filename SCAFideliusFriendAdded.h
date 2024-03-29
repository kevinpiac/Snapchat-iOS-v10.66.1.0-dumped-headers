//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAFideliusFriendAdded : SCAUserTrackedEvent
{
    NSNumber *currentDeviceCount;
    NSNumber *previousDeviceCount;
    NSString *operationResult;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getCurrentDeviceCount;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getOperationResult;
- (double)getPerUserSamplingRate;
- (long long)getPreviousDeviceCount;
- (void)setCurrentDeviceCount:(long long)arg1;
- (void)setOperationResult:(id)arg1;
- (void)setPreviousDeviceCount:(long long)arg1;

@end

