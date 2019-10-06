//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUHourlyForecast-Protocol.h"

@class NSNumber, NSString;

@interface SOJUHourlyForecast : NSObject <SOJUHourlyForecast>
{
    NSNumber *_fahrenheit;
    NSNumber *_celsius;
    NSString *_weatherCondition;
    NSString *_displayTime;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *celsius; // @synthesize celsius=_celsius;
- (float)celsiusValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayTime; // @synthesize displayTime=_displayTime;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *fahrenheit; // @synthesize fahrenheit=_fahrenheit;
- (float)fahrenheitValue;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFahrenheit:(id)arg1 celsius:(id)arg2 weatherCondition:(id)arg3 displayTime:(id)arg4;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSString *weatherCondition; // @synthesize weatherCondition=_weatherCondition;
- (long long)weatherConditionEnum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

