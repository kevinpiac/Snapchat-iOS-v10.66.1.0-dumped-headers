//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSNumber, NSString;

@protocol SOJUWeatherResponse <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSNumber *celsius;
@property(readonly, copy, nonatomic) NSNumber *dailyBoundary;
@property(readonly, copy, nonatomic) NSArray *dailyForecasts;
@property(readonly, copy, nonatomic) NSNumber *fahrenheit;
@property(readonly, copy, nonatomic) NSNumber *hourlyBoundary;
@property(readonly, copy, nonatomic) NSArray *hourlyForecasts;
@property(readonly, copy, nonatomic) NSNumber *latitude;
@property(readonly, copy, nonatomic) NSString *locationName;
@property(readonly, copy, nonatomic) NSNumber *longitude;
@property(readonly, copy, nonatomic) NSString *severeCondition;
@property(readonly, copy, nonatomic) NSNumber *timestamp;
@end

