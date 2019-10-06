//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUAdCognacMetadata-Protocol.h"

@class NSString;

@interface SOJUAdCognacMetadata : NSObject <SOJUAdCognacMetadata>
{
    NSString *_orgId;
    NSString *_gameId;
    NSString *_buildId;
    NSString *_slotId;
    NSString *_developerFacingRequestId;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *buildId; // @synthesize buildId=_buildId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *developerFacingRequestId; // @synthesize developerFacingRequestId=_developerFacingRequestId;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *gameId; // @synthesize gameId=_gameId;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithOrgId:(id)arg1 gameId:(id)arg2 buildId:(id)arg3 slotId:(id)arg4 developerFacingRequestId:(id)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *orgId; // @synthesize orgId=_orgId;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *slotId; // @synthesize slotId=_slotId;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

