//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCACognacActionEventBase.h"

@class NSNumber;

@interface SCACognacInAppSettingsPageSelection : SCACognacActionEventBase
{
    NSNumber *appAudioOn;
    NSNumber *isHideScoreEnabled;
    long long selection;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)getAppAudioOn;
- (id)getEventName;
- (long long)getEventQoS;
- (_Bool)getIsHideScoreEnabled;
- (double)getPerUserSamplingRate;
- (long long)getSelection;
- (id)init;
- (void)setAppAudioOn:(_Bool)arg1;
- (void)setIsHideScoreEnabled:(_Bool)arg1;
- (void)setSelection:(long long)arg1;

@end

