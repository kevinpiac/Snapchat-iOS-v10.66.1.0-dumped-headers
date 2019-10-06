//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAMapShareRequestLocationShown : SCAUserTrackedEvent
{
    NSNumber *isMischief;
    long long source;
    NSString *shareMessageType;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (_Bool)getIsMischief;
- (double)getPerUserSamplingRate;
- (id)getShareMessageType;
- (long long)getSource;
- (id)init;
- (void)setIsMischief:(_Bool)arg1;
- (void)setShareMessageType:(id)arg1;
- (void)setSource:(long long)arg1;

@end

