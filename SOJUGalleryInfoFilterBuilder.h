//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SOJUGalleryAltitudeInfoFilter, SOJUGalleryBatteryInfoFilter, SOJUGalleryDateInfoFilter, SOJUGallerySpeedInfoFilter, SOJUGalleryWeatherInfoFilter;

@interface SOJUGalleryInfoFilterBuilder : NSObject
{
    NSString *_type;
    SOJUGalleryBatteryInfoFilter *_battery;
    SOJUGalleryDateInfoFilter *_date;
    SOJUGallerySpeedInfoFilter *_speed;
    SOJUGalleryWeatherInfoFilter *_weather;
    SOJUGalleryAltitudeInfoFilter *_altitude;
}

+ (id)withJUGalleryInfoFilter:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setAltitude:(id)arg1;
- (id)setBattery:(id)arg1;
- (id)setDate:(id)arg1;
- (id)setSpeed:(id)arg1;
- (id)setType:(id)arg1;
- (id)setTypeEnum:(long long)arg1;
- (id)setWeather:(id)arg1;

@end

