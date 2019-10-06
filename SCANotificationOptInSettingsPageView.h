//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCANotificationOptInSettingsPageView : SCAUserTrackedEvent
{
    NSNumber *withModalPageView;
    NSNumber *optionsAvailableCount;
    NSNumber *optionsSelectedCount;
    NSNumber *withError;
    long long source;
    NSString *notificationType;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getNotificationType;
- (long long)getOptionsAvailableCount;
- (long long)getOptionsSelectedCount;
- (double)getPerUserSamplingRate;
- (long long)getSource;
- (_Bool)getWithError;
- (_Bool)getWithModalPageView;
- (id)init;
- (void)setNotificationType:(id)arg1;
- (void)setOptionsAvailableCount:(long long)arg1;
- (void)setOptionsSelectedCount:(long long)arg1;
- (void)setSource:(long long)arg1;
- (void)setWithError:(_Bool)arg1;
- (void)setWithModalPageView:(_Bool)arg1;

@end
