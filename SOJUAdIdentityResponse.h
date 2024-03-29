//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUAdIdentityResponse-Protocol.h"

@class NSString;

@interface SOJUAdIdentityResponse : NSObject <SOJUAdIdentityResponse>
{
    NSString *_rawUserData;
    NSString *_userAdId;
    NSString *_trackHostAndPath;
    NSString *_thirdPartyTrackHostAndPath;
    NSString *_trackRequestCookie;
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
- (id)initWithRawUserData:(id)arg1 userAdId:(id)arg2 trackHostAndPath:(id)arg3 thirdPartyTrackHostAndPath:(id)arg4 trackRequestCookie:(id)arg5;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSString *rawUserData; // @synthesize rawUserData=_rawUserData;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *thirdPartyTrackHostAndPath; // @synthesize thirdPartyTrackHostAndPath=_thirdPartyTrackHostAndPath;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSString *trackHostAndPath; // @synthesize trackHostAndPath=_trackHostAndPath;
@property(readonly, copy, nonatomic) NSString *trackRequestCookie; // @synthesize trackRequestCookie=_trackRequestCookie;
@property(readonly, copy, nonatomic) NSString *userAdId; // @synthesize userAdId=_userAdId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

