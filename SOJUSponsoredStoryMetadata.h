//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUSponsoredStoryMetadata-Protocol.h"

@class NSString;

@interface SOJUSponsoredStoryMetadata : NSObject <SOJUSponsoredStoryMetadata>
{
    NSString *_previewDisplayName;
    NSString *_postviewDisplayName;
    NSString *_sponsor;
    NSString *_thirdPartyTagUrl;
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
- (id)initWithPreviewDisplayName:(id)arg1 postviewDisplayName:(id)arg2 sponsor:(id)arg3 thirdPartyTagUrl:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *postviewDisplayName; // @synthesize postviewDisplayName=_postviewDisplayName;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSString *previewDisplayName; // @synthesize previewDisplayName=_previewDisplayName;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *sponsor; // @synthesize sponsor=_sponsor;
@property(readonly, copy, nonatomic) NSString *thirdPartyTagUrl; // @synthesize thirdPartyTagUrl=_thirdPartyTagUrl;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
