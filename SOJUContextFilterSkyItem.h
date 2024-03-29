//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUContextFilterSkyItem-Protocol.h"

@class NSNumber, NSString;

@interface SOJUContextFilterSkyItem : NSObject <SOJUContextFilterSkyItem>
{
    NSString *_uuid;
    NSString *_url;
    NSString *_skyType;
    NSString *_styleType;
    NSNumber *_colorBrightness;
    NSString *_replacementSkyUrl;
    NSString *_blimpUrl;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *blimpUrl; // @synthesize blimpUrl=_blimpUrl;
@property(readonly, copy, nonatomic) NSNumber *colorBrightness; // @synthesize colorBrightness=_colorBrightness;
- (float)colorBrightnessValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithUuid:(id)arg1 url:(id)arg2 skyType:(id)arg3 styleType:(id)arg4 colorBrightness:(id)arg5 replacementSkyUrl:(id)arg6 blimpUrl:(id)arg7;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSString *replacementSkyUrl; // @synthesize replacementSkyUrl=_replacementSkyUrl;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *skyType; // @synthesize skyType=_skyType;
- (long long)skyTypeEnum;
@property(readonly, copy, nonatomic) NSString *styleType; // @synthesize styleType=_styleType;
- (long long)styleTypeEnum;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

