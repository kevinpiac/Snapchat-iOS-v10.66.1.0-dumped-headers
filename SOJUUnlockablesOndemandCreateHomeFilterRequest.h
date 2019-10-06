//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUUnlockablesOndemandCreateHomeFilterRequest-Protocol.h"

@class NSNumber, NSString, SOJUUnlockablesOndemandHomeFilterAddress, SOJUUnlockablesOndemandHomeFilterTargeting;

@interface SOJUUnlockablesOndemandCreateHomeFilterRequest : NSObject <SOJUUnlockablesOndemandCreateHomeFilterRequest>
{
    NSString *_adAccountId;
    NSNumber *_isEnabled;
    SOJUUnlockablesOndemandHomeFilterAddress *_address;
    NSString *_assetBase64Str;
    NSString *_assetName;
    NSString *_templateId;
    NSString *_templateInstanceId;
    NSString *_categoryId;
    NSString *_categoryName;
    SOJUUnlockablesOndemandHomeFilterTargeting *_targeting;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *adAccountId; // @synthesize adAccountId=_adAccountId;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandHomeFilterAddress *address; // @synthesize address=_address;
@property(readonly, copy, nonatomic) NSString *assetBase64Str; // @synthesize assetBase64Str=_assetBase64Str;
@property(readonly, copy, nonatomic) NSString *assetName; // @synthesize assetName=_assetName;
@property(readonly, copy, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
@property(readonly, copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithAdAccountId:(id)arg1 isEnabled:(id)arg2 address:(id)arg3 assetBase64Str:(id)arg4 assetName:(id)arg5 templateId:(id)arg6 templateInstanceId:(id)arg7 categoryId:(id)arg8 categoryName:(id)arg9 targeting:(id)arg10;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;
- (id)initWithProtoBuf:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *isEnabled; // @synthesize isEnabled=_isEnabled;
- (_Bool)isEnabledValue;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandHomeFilterTargeting *targeting; // @synthesize targeting=_targeting;
@property(readonly, copy, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(readonly, copy, nonatomic) NSString *templateInstanceId; // @synthesize templateInstanceId=_templateInstanceId;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

