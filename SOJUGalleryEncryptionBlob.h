//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUGalleryEncryptionBlob-Protocol.h"

@class NSNumber, NSString;

@interface SOJUGalleryEncryptionBlob : NSObject <SOJUGalleryEncryptionBlob>
{
    NSString *_encryptionKey;
    NSString *_encryptionIv;
    NSNumber *_encrypted;
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
@property(readonly, copy, nonatomic) NSNumber *encrypted; // @synthesize encrypted=_encrypted;
- (_Bool)encryptedValue;
@property(readonly, copy, nonatomic) NSString *encryptionIv; // @synthesize encryptionIv=_encryptionIv;
@property(readonly, copy, nonatomic) NSString *encryptionKey; // @synthesize encryptionKey=_encryptionKey;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEncryptionKey:(id)arg1 encryptionIv:(id)arg2 encrypted:(id)arg3;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

