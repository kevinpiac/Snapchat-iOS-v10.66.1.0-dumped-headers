//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAProfileAddressBookContactPermissionDeny : SCAUserTrackedEvent
{
    long long verificationType;
    long long source;
    long long sourcePage;
}

- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (long long)getSource;
- (long long)getSourcePage;
- (long long)getVerificationType;
- (id)init;
- (void)setSource:(long long)arg1;
- (void)setSourcePage:(long long)arg1;
- (void)setVerificationType:(long long)arg1;

@end

