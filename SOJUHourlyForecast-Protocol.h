//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSNumber, NSString;

@protocol SOJUHourlyForecast <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSNumber *celsius;
@property(readonly, copy, nonatomic) NSString *displayTime;
@property(readonly, copy, nonatomic) NSNumber *fahrenheit;
@property(readonly, copy, nonatomic) NSString *weatherCondition;
@end
