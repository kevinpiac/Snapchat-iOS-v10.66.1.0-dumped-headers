//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSString;

@interface SCAUserProfileUpdate : SCAUserTrackedEvent
{
    long long settingFieldName;
    NSString *settingFieldValue;
    NSString *settingFieldValuePrevious;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (long long)getSettingFieldName;
- (id)getSettingFieldValue;
- (id)getSettingFieldValuePrevious;
- (id)init;
- (void)setSettingFieldName:(long long)arg1;
- (void)setSettingFieldValue:(id)arg1;
- (void)setSettingFieldValuePrevious:(id)arg1;

@end
