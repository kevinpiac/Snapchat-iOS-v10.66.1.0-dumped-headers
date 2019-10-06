//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUIdentityDeepLinkRequest-Protocol.h"

@class NSString;

@interface SOJUIdentityDeepLinkRequest : NSObject <SOJUIdentityDeepLinkRequest>
{
    NSString *_timestamp;
    NSString *_reqToken;
    NSString *_username;
    NSString *_deepLinkAction;
    NSString *_friendUsername;
    NSString *_linkId;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *deepLinkAction; // @synthesize deepLinkAction=_deepLinkAction;
- (long long)deepLinkActionEnum;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *friendUsername; // @synthesize friendUsername=_friendUsername;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithTimestamp:(id)arg1 reqToken:(id)arg2 username:(id)arg3 deepLinkAction:(id)arg4 friendUsername:(id)arg5 linkId:(id)arg6;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *linkId; // @synthesize linkId=_linkId;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSString *reqToken; // @synthesize reqToken=_reqToken;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

