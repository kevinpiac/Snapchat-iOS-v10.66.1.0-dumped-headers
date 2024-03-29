//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MGLStyleValue.h"

@class NSDictionary;

@interface MGLStyleFunction : MGLStyleValue
{
    unsigned long long _interpolationMode;
    NSDictionary *_stops;
    double _interpolationBase;
}

+ (id)functionWithInterpolationBase:(double)arg1 stops:(id)arg2;
+ (id)functionWithStops:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithInterpolationBase:(double)arg1 stops:(id)arg2;
@property(nonatomic) double interpolationBase; // @synthesize interpolationBase=_interpolationBase;
@property(nonatomic) unsigned long long interpolationMode; // @synthesize interpolationMode=_interpolationMode;
- (_Bool)isEqual:(id)arg1;
@property(copy, nonatomic) NSDictionary *stops; // @synthesize stops=_stops;

@end

