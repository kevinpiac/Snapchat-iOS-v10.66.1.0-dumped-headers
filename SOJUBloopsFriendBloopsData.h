//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUBloopsFriendBloopsData-Protocol.h"

@class NSString, SOJUBloopsFriendBloopsDataElement;

@interface SOJUBloopsFriendBloopsData : NSObject <SOJUBloopsFriendBloopsData>
{
    NSString *_username;
    NSString *_formatVersion;
    NSString *_sdkVersion;
    SOJUBloopsFriendBloopsDataElement *_rawImage;
    SOJUBloopsFriendBloopsDataElement *_processedImage;
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
@property(readonly, copy, nonatomic) NSString *formatVersion; // @synthesize formatVersion=_formatVersion;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithUsername:(id)arg1 formatVersion:(id)arg2 sdkVersion:(id)arg3 rawImage:(id)arg4 processedImage:(id)arg5;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) SOJUBloopsFriendBloopsDataElement *processedImage; // @synthesize processedImage=_processedImage;
@property(readonly, copy, nonatomic) SOJUBloopsFriendBloopsDataElement *rawImage; // @synthesize rawImage=_rawImage;
@property(readonly, copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
