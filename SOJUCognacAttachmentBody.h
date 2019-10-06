//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUCognacAttachmentBody-Protocol.h"

@class NSString;

@interface SOJUCognacAttachmentBody : NSObject <SOJUCognacAttachmentBody>
{
    NSString *_appId;
    NSString *_appDisplayName;
    NSString *_appLoadingPageImageUrl;
    NSString *_appIconImageUrl;
    NSString *_appLogoUrl;
    NSString *_appContentUrl;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *appContentUrl; // @synthesize appContentUrl=_appContentUrl;
@property(readonly, copy, nonatomic) NSString *appDisplayName; // @synthesize appDisplayName=_appDisplayName;
@property(readonly, copy, nonatomic) NSString *appIconImageUrl; // @synthesize appIconImageUrl=_appIconImageUrl;
@property(readonly, copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(readonly, copy, nonatomic) NSString *appLoadingPageImageUrl; // @synthesize appLoadingPageImageUrl=_appLoadingPageImageUrl;
@property(readonly, copy, nonatomic) NSString *appLogoUrl; // @synthesize appLogoUrl=_appLogoUrl;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithAppId:(id)arg1 appDisplayName:(id)arg2 appLoadingPageImageUrl:(id)arg3 appIconImageUrl:(id)arg4 appLogoUrl:(id)arg5 appContentUrl:(id)arg6;
- (id)initWithCoder:(id)arg1;
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
