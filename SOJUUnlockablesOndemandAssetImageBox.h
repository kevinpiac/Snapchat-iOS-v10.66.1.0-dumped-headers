//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUUnlockablesOndemandAssetImageBox-Protocol.h"

@class NSNumber, NSString;

@interface SOJUUnlockablesOndemandAssetImageBox : NSObject <SOJUUnlockablesOndemandAssetImageBox>
{
    NSNumber *_posX;
    NSNumber *_posY;
    NSNumber *_width;
    NSNumber *_height;
    NSNumber *_rotation;
    NSString *_imagePngBase64;
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
@property(readonly, copy, nonatomic) NSNumber *height; // @synthesize height=_height;
- (double)heightValue;
@property(readonly, copy, nonatomic) NSString *imagePngBase64; // @synthesize imagePngBase64=_imagePngBase64;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithPosX:(id)arg1 posY:(id)arg2 width:(id)arg3 height:(id)arg4 rotation:(id)arg5 imagePngBase64:(id)arg6;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *posX; // @synthesize posX=_posX;
- (double)posXValue;
@property(readonly, copy, nonatomic) NSNumber *posY; // @synthesize posY=_posY;
- (double)posYValue;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSNumber *rotation; // @synthesize rotation=_rotation;
- (double)rotationValue;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSNumber *width; // @synthesize width=_width;
- (double)widthValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
