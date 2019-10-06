//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUStorySticker-Protocol.h"

@class NSNumber, NSString;

@interface SOJUStorySticker : NSObject <SOJUStorySticker>
{
    NSString *_stickerId;
    NSString *_packId;
    NSNumber *_width;
    NSNumber *_height;
    NSNumber *_centerX;
    NSNumber *_centerY;
    NSNumber *_rotation;
    NSNumber *_tracking;
    NSString *_type;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *centerX; // @synthesize centerX=_centerX;
- (float)centerXValue;
@property(readonly, copy, nonatomic) NSNumber *centerY; // @synthesize centerY=_centerY;
- (float)centerYValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSNumber *height; // @synthesize height=_height;
- (float)heightValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithStickerId:(id)arg1 packId:(id)arg2 width:(id)arg3 height:(id)arg4 centerX:(id)arg5 centerY:(id)arg6 rotation:(id)arg7 tracking:(id)arg8 type:(id)arg9;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *packId; // @synthesize packId=_packId;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSNumber *rotation; // @synthesize rotation=_rotation;
- (float)rotationValue;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *stickerId; // @synthesize stickerId=_stickerId;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSNumber *tracking; // @synthesize tracking=_tracking;
- (_Bool)trackingValue;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
- (long long)typeEnum;
@property(readonly, copy, nonatomic) NSNumber *width; // @synthesize width=_width;
- (float)widthValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

