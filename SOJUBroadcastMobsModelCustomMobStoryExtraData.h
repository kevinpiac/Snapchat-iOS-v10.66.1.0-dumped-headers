//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUBroadcastMobsModelCustomMobStoryExtraData-Protocol.h"

@class NSArray, NSString;

@interface SOJUBroadcastMobsModelCustomMobStoryExtraData : NSObject <SOJUBroadcastMobsModelCustomMobStoryExtraData>
{
    NSArray *_contributors;
    NSArray *_viewers;
    NSString *_subtype;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *contributors; // @synthesize contributors=_contributors;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithContributors:(id)arg1 viewers:(id)arg2 subtype:(id)arg3;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *subtype; // @synthesize subtype=_subtype;
- (long long)subtypeEnum;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSArray *viewers; // @synthesize viewers=_viewers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

