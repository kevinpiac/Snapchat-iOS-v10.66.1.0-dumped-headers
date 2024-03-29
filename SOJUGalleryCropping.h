//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUGalleryCropping-Protocol.h"

@class NSNumber, NSString;

@interface SOJUGalleryCropping : NSObject <SOJUGalleryCropping>
{
    NSNumber *_translationX;
    NSNumber *_translationY;
    NSNumber *_rotation;
    NSNumber *_scale;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithTranslationX:(id)arg1 translationY:(id)arg2 rotation:(id)arg3 scale:(id)arg4;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSNumber *rotation; // @synthesize rotation=_rotation;
- (double)rotationValue;
@property(readonly, copy, nonatomic) NSNumber *scale; // @synthesize scale=_scale;
- (double)scaleValue;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSNumber *translationX; // @synthesize translationX=_translationX;
- (double)translationXValue;
@property(readonly, copy, nonatomic) NSNumber *translationY; // @synthesize translationY=_translationY;
- (double)translationYValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

