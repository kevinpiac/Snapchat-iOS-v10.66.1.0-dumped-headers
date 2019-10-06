//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCalendar, NSDateFormatter, NSMutableDictionary;

@interface SCContextMetaFeatureManager : NSObject
{
    NSDateFormatter *_dateFormatter;
    NSMutableDictionary *_stickerTags;
    _Bool _updating;
    NSCalendar *_gregorian;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)_locationServicesDataStoreDidUpdate:(id)arg1;
- (void)_startUpdatingStickerTags;
- (void)_stopUpdatingStickerTags;
- (id)_updateBirthdayTagsFromDate:(id)arg1;
- (id)_updateDateTagsFromDate:(id)arg1;
- (id)_updateHolidayTagsFromDate:(id)arg1;
- (id)_updateTimeTagsFromDate:(id)arg1;
- (id)_updateWeatherTagsFromWeather:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)stickerTags;

@end

