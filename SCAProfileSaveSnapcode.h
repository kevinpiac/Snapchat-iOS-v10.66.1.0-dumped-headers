//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber;

@interface SCAProfileSaveSnapcode : SCAUserTrackedEvent
{
    NSNumber *isSuccess;
    long long source;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (_Bool)getIsSuccess;
- (double)getPerUserSamplingRate;
- (long long)getSource;
- (id)init;
- (void)setIsSuccess:(_Bool)arg1;
- (void)setSource:(long long)arg1;

@end

