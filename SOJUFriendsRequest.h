//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUFriendsRequest-Protocol.h"

@class NSNumber, NSString;

@interface SOJUFriendsRequest : NSObject <SOJUFriendsRequest>
{
    NSString *_friendsSyncToken;
    NSNumber *_requestTokenOnlyDeprecated;
    NSString *_addedFriendsSyncToken;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *addedFriendsSyncToken; // @synthesize addedFriendsSyncToken=_addedFriendsSyncToken;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *friendsSyncToken; // @synthesize friendsSyncToken=_friendsSyncToken;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFriendsSyncToken:(id)arg1 requestTokenOnlyDeprecated:(id)arg2 addedFriendsSyncToken:(id)arg3;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSNumber *requestTokenOnlyDeprecated; // @synthesize requestTokenOnlyDeprecated=_requestTokenOnlyDeprecated;
- (_Bool)requestTokenOnlyDeprecatedValue;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
