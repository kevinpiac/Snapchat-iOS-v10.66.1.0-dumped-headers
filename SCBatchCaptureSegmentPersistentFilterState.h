//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, SCAltitude, SCPreviewFilterDataProviderContextData, SCSpeed, SCTimestampMetadata, SCWeather;

@interface SCBatchCaptureSegmentPersistentFilterState : NSObject
{
    _Bool _usesPrecaptureGeofilter;
    _Bool _isGeoFilterLoaded;
    _Bool _isClassficationDataGenerated;
    _Bool _isGeoFilterUpdatedWithTags;
    long long _streakCount;
    SCSpeed *_speed;
    SCWeather *_weather;
    SCAltitude *_altitude;
    SCTimestampMetadata *_timestamp;
    unsigned long long _batteryStatus;
    NSMutableDictionary *_activeGeofilters;
    NSMutableDictionary *_geoFilterImages;
    NSMutableDictionary *_geoFilterAppearances;
    SCPreviewFilterDataProviderContextData *_filterContextData;
    NSArray *_tags;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *activeGeofilters; // @synthesize activeGeofilters=_activeGeofilters;
@property(retain, nonatomic) SCAltitude *altitude; // @synthesize altitude=_altitude;
@property(nonatomic) unsigned long long batteryStatus; // @synthesize batteryStatus=_batteryStatus;
@property(copy, nonatomic) SCPreviewFilterDataProviderContextData *filterContextData; // @synthesize filterContextData=_filterContextData;
@property(retain, nonatomic) NSMutableDictionary *geoFilterAppearances; // @synthesize geoFilterAppearances=_geoFilterAppearances;
@property(retain, nonatomic) NSMutableDictionary *geoFilterImages; // @synthesize geoFilterImages=_geoFilterImages;
- (id)init;
@property(nonatomic) _Bool isClassficationDataGenerated; // @synthesize isClassficationDataGenerated=_isClassficationDataGenerated;
@property(nonatomic) _Bool isGeoFilterLoaded; // @synthesize isGeoFilterLoaded=_isGeoFilterLoaded;
@property(nonatomic) _Bool isGeoFilterUpdatedWithTags; // @synthesize isGeoFilterUpdatedWithTags=_isGeoFilterUpdatedWithTags;
@property(retain, nonatomic) SCSpeed *speed; // @synthesize speed=_speed;
@property(nonatomic) long long streakCount; // @synthesize streakCount=_streakCount;
@property(copy, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) SCTimestampMetadata *timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) _Bool usesPrecaptureGeofilter; // @synthesize usesPrecaptureGeofilter=_usesPrecaptureGeofilter;
@property(retain, nonatomic) SCWeather *weather; // @synthesize weather=_weather;

@end

