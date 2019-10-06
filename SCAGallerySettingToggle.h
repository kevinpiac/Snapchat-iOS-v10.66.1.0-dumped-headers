//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber;

@interface SCAGallerySettingToggle : SCAUserTrackedEvent
{
    NSNumber *withSetting;
    long long gallerySetting;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getGallerySetting;
- (double)getPerUserSamplingRate;
- (_Bool)getWithSetting;
- (id)init;
- (void)setGallerySetting:(long long)arg1;
- (void)setWithSetting:(_Bool)arg1;

@end
