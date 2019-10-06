//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUUnlockablesOndemandCreateHomeFilterResponse-Protocol.h"

@class NSString, SOJUUnlockablesOndemandHomeFilterAssetWireModel, SOJUUnlockablesOndemandHomeFilterWireModel;

@interface SOJUUnlockablesOndemandCreateHomeFilterResponse : NSObject <SOJUUnlockablesOndemandCreateHomeFilterResponse>
{
    NSString *_status;
    SOJUUnlockablesOndemandHomeFilterWireModel *_homeFilter;
    SOJUUnlockablesOndemandHomeFilterAssetWireModel *_homeFilterAsset;
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
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandHomeFilterWireModel *homeFilter; // @synthesize homeFilter=_homeFilter;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandHomeFilterAssetWireModel *homeFilterAsset; // @synthesize homeFilterAsset=_homeFilterAsset;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithStatus:(id)arg1 homeFilter:(id)arg2 homeFilterAsset:(id)arg3;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *status; // @synthesize status=_status;
- (long long)statusEnum;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

