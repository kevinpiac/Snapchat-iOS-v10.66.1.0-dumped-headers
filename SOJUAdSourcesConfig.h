//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUAdSourcesConfig-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SOJUAdSourcesConfig : NSObject <SOJUAdSourcesConfig>
{
    NSArray *_adSources;
    NSNumber *_useV2;
    NSArray *_shutOffRules;
    NSNumber *_useAppInstallV2;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *adSources; // @synthesize adSources=_adSources;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithAdSources:(id)arg1 useV2:(id)arg2 shutOffRules:(id)arg3 useAppInstallV2:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSArray *shutOffRules; // @synthesize shutOffRules=_shutOffRules;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSNumber *useAppInstallV2; // @synthesize useAppInstallV2=_useAppInstallV2;
- (_Bool)useAppInstallV2Value;
@property(readonly, copy, nonatomic) NSNumber *useV2; // @synthesize useV2=_useV2;
- (_Bool)useV2Value;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

