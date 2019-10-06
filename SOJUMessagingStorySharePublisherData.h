//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUMessagingStorySharePublisherData-Protocol.h"

@class NSNumber, NSString;

@interface SOJUMessagingStorySharePublisherData : NSObject <SOJUMessagingStorySharePublisherData>
{
    NSString *_userId;
    NSString *_username;
    NSString *_displayName;
    NSString *_thumbnailUrl;
    NSString *_profileDescription;
    NSNumber *_live;
    NSNumber *_publishTimestamp;
    NSString *_bitmojiAvatarId;
    NSString *_bitmojiSelfieId;
    NSString *_bitmojiSnapcodeSelfieId;
    NSNumber *_isUserPopular;
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
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithUserId:(id)arg1 username:(id)arg2 displayName:(id)arg3 thumbnailUrl:(id)arg4 profileDescription:(id)arg5 live:(id)arg6 publishTimestamp:(id)arg7 bitmojiAvatarId:(id)arg8 bitmojiSelfieId:(id)arg9 bitmojiSnapcodeSelfieId:(id)arg10 isUserPopular:(id)arg11;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *isUserPopular; // @synthesize isUserPopular=_isUserPopular;
- (_Bool)isUserPopularValue;
@property(readonly, copy, nonatomic) NSNumber *live; // @synthesize live=_live;
- (_Bool)liveValue;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSString *profileDescription; // @synthesize profileDescription=_profileDescription;
@property(readonly, copy, nonatomic) NSNumber *publishTimestamp; // @synthesize publishTimestamp=_publishTimestamp;
- (long long)publishTimestampValue;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *thumbnailUrl; // @synthesize thumbnailUrl=_thumbnailUrl;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
