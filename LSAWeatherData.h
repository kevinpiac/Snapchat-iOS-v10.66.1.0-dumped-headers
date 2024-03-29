//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface LSAWeatherData : NSObject
{
    NSNumber *_celsius;
    NSNumber *_fahrenheit;
    NSString *_locationName;
    NSArray *_hourlyForecast;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *celsius; // @synthesize celsius=_celsius;
@property(readonly, nonatomic) NSNumber *fahrenheit; // @synthesize fahrenheit=_fahrenheit;
@property(readonly, copy, nonatomic) NSArray *hourlyForecast; // @synthesize hourlyForecast=_hourlyForecast;
- (id)initWithCelsius:(id)arg1 fahrenheit:(id)arg2 locationName:(id)arg3 hourlyForecast:(id)arg4;
@property(readonly, copy, nonatomic) NSString *locationName; // @synthesize locationName=_locationName;

@end

