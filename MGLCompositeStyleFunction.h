//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MGLStyleFunction.h"

@class MGLStyleValue, NSDictionary, NSString;

@interface MGLCompositeStyleFunction : MGLStyleFunction
{
    NSString *_attributeName;
    MGLStyleValue *_defaultValue;
}

+ (id)functionWithInterpolationMode:(unsigned long long)arg1 stops:(id)arg2 attributeName:(id)arg3 options:(id)arg4;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *attributeName; // @synthesize attributeName=_attributeName;
@property(retain, nonatomic) MGLStyleValue *defaultValue; // @synthesize defaultValue=_defaultValue;
- (id)description;
- (unsigned long long)hash;
- (id)initWithInterpolationBase:(double)arg1 stops:(id)arg2;
- (id)initWithInterpolationMode:(unsigned long long)arg1 stops:(id)arg2 attributeName:(id)arg3 options:(id)arg4;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSDictionary *stops; // @dynamic stops;

@end

