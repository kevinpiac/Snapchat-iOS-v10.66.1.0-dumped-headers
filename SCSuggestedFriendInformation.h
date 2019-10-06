//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCSuggestedFriendInformation : NSObject
{
    _Bool _isPopularAccount;
    NSString *_userId;
    NSString *_username;
    NSString *_displayName;
    NSString *_storyPrivacy;
    NSString *_bitmojiAvatarId;
    NSString *_bitmojiSelfieId;
    NSString *_popularUserEmoji;
}

+ (id)initWithFriend:(id)arg1;
+ (id)initWithSojuSuggestedFriend:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(copy, nonatomic) NSString *bitmojiSelfieId; // @synthesize bitmojiSelfieId=_bitmojiSelfieId;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic) _Bool isPopularAccount; // @synthesize isPopularAccount=_isPopularAccount;
@property(retain, nonatomic) NSString *popularUserEmoji; // @synthesize popularUserEmoji=_popularUserEmoji;
@property(retain, nonatomic) NSString *storyPrivacy; // @synthesize storyPrivacy=_storyPrivacy;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;

@end
