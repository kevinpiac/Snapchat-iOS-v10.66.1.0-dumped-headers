//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUUnlockablesOndemandHomeFilterWireModel-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUUnlockablesOndemandHomeFilterAddress, SOJUUnlockablesOndemandHomeFilterTargeting;

@interface SOJUUnlockablesOndemandHomeFilterWireModel : NSObject <SOJUUnlockablesOndemandHomeFilterWireModel>
{
    NSNumber *_isEnabled;
    SOJUUnlockablesOndemandHomeFilterAddress *_address;
    SOJUUnlockablesOndemandHomeFilterTargeting *_targeting;
    NSArray *_homeFilterAssets;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandHomeFilterAddress *address; // @synthesize address=_address;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSArray *homeFilterAssets; // @synthesize homeFilterAssets=_homeFilterAssets;
- (id)initWithCoder:(id)arg1;
- (id)initWithIsEnabled:(id)arg1 address:(id)arg2 targeting:(id)arg3 homeFilterAssets:(id)arg4;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;
- (id)initWithProtoBuf:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *isEnabled; // @synthesize isEnabled=_isEnabled;
- (_Bool)isEnabledValue;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandHomeFilterTargeting *targeting; // @synthesize targeting=_targeting;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

