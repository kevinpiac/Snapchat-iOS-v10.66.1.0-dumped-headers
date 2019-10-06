//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUGalleryInfoFilter-Protocol.h"

@class NSString, SOJUGalleryAltitudeInfoFilter, SOJUGalleryBatteryInfoFilter, SOJUGalleryDateInfoFilter, SOJUGallerySpeedInfoFilter, SOJUGalleryWeatherInfoFilter;

@interface SOJUGalleryInfoFilter : NSObject <SOJUGalleryInfoFilter>
{
    NSString *_type;
    SOJUGalleryBatteryInfoFilter *_battery;
    SOJUGalleryDateInfoFilter *_date;
    SOJUGallerySpeedInfoFilter *_speed;
    SOJUGalleryWeatherInfoFilter *_weather;
    SOJUGalleryAltitudeInfoFilter *_altitude;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SOJUGalleryAltitudeInfoFilter *altitude; // @synthesize altitude=_altitude;
@property(readonly, copy, nonatomic) SOJUGalleryBatteryInfoFilter *battery; // @synthesize battery=_battery;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) SOJUGalleryDateInfoFilter *date; // @synthesize date=_date;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithType:(id)arg1 battery:(id)arg2 date:(id)arg3 speed:(id)arg4 weather:(id)arg5 altitude:(id)arg6;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) SOJUGallerySpeedInfoFilter *speed; // @synthesize speed=_speed;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
- (long long)typeEnum;
@property(readonly, copy, nonatomic) SOJUGalleryWeatherInfoFilter *weather; // @synthesize weather=_weather;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

