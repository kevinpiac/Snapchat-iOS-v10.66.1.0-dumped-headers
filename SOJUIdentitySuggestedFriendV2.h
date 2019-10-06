//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUIdentitySuggestedFriendV2-Protocol.h"

@class NSNumber, NSString;

@interface SOJUIdentitySuggestedFriendV2 : NSObject <SOJUIdentitySuggestedFriendV2>
{
    NSString *_userId;
    NSString *_username;
    NSString *_displayName;
    NSString *_storyPrivacy;
    NSString *_bitmojiAvatarId;
    NSString *_metadata;
    NSString *_bitmojiSelfieId;
    NSString *_bitmojiSnapcodeSelfieId;
    NSString *_emojiSymbol;
    NSNumber *_isPopularAccout;
    NSString *_displayUsername;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(readonly, copy, nonatomic) NSString *bitmojiSelfieId; // @synthesize bitmojiSelfieId=_bitmojiSelfieId;
@property(readonly, copy, nonatomic) NSString *bitmojiSnapcodeSelfieId; // @synthesize bitmojiSnapcodeSelfieId=_bitmojiSnapcodeSelfieId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *displayUsername; // @synthesize displayUsername=_displayUsername;
@property(readonly, copy, nonatomic) NSString *emojiSymbol; // @synthesize emojiSymbol=_emojiSymbol;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithUserId:(id)arg1 username:(id)arg2 displayName:(id)arg3 storyPrivacy:(id)arg4 bitmojiAvatarId:(id)arg5 metadata:(id)arg6 bitmojiSelfieId:(id)arg7 bitmojiSnapcodeSelfieId:(id)arg8 emojiSymbol:(id)arg9 isPopularAccout:(id)arg10 displayUsername:(id)arg11;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *isPopularAccout; // @synthesize isPopularAccout=_isPopularAccout;
- (_Bool)isPopularAccoutValue;
@property(readonly, copy, nonatomic) NSString *metadata; // @synthesize metadata=_metadata;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *storyPrivacy; // @synthesize storyPrivacy=_storyPrivacy;
- (long long)storyPrivacyEnum;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
