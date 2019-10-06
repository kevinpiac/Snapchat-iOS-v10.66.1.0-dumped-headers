//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUUnlockablesTextShadow-Protocol.h"

@class NSNumber, NSString, SOJUUnlockablesTextColor;

@interface SOJUUnlockablesTextShadow : NSObject <SOJUUnlockablesTextShadow>
{
    SOJUUnlockablesTextColor *_color;
    NSNumber *_x;
    NSNumber *_y;
    NSNumber *_radius;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SOJUUnlockablesTextColor *color; // @synthesize color=_color;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithColor:(id)arg1 x:(id)arg2 y:(id)arg3 radius:(id)arg4;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;
- (id)initWithProtoBuf:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSNumber *radius; // @synthesize radius=_radius;
- (double)radiusValue;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSNumber *x; // @synthesize x=_x;
- (double)xValue;
@property(readonly, copy, nonatomic) NSNumber *y; // @synthesize y=_y;
- (double)yValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
