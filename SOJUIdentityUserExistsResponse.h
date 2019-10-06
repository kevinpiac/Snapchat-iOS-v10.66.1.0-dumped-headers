//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUIdentityUserExistsResponse-Protocol.h"

@class NSNumber, NSString, SOJUFriend, SOJUFriendStories;

@interface SOJUIdentityUserExistsResponse : NSObject <SOJUIdentityUserExistsResponse>
{
    NSNumber *_exists;
    NSNumber *_throttled;
    NSNumber *_logged;
    SOJUFriend *_friend;
    SOJUFriendStories *_friendStories;
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
@property(readonly, copy, nonatomic) NSNumber *exists; // @synthesize exists=_exists;
- (_Bool)existsValue;
@property(readonly, copy, nonatomic) SOJUFriend *friend; // @synthesize friend=_friend;
@property(readonly, copy, nonatomic) SOJUFriendStories *friendStories; // @synthesize friendStories=_friendStories;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithExists:(id)arg1 throttled:(id)arg2 logged:(id)arg3 friend:(id)arg4 friendStories:(id)arg5;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *logged; // @synthesize logged=_logged;
- (_Bool)loggedValue;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSNumber *throttled; // @synthesize throttled=_throttled;
- (_Bool)throttledValue;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
