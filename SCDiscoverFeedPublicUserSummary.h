//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCDiscoverFeedThumbnailInfo;

@interface SCDiscoverFeedPublicUserSummary : NSObject <NSCopying>
{
    _Bool _isPopular;
    _Bool _showOfficialBadge;
    NSString *_userName;
    NSString *_displayName;
    NSString *_userId;
    NSString *_emoji;
    NSString *_bitmojiAvatarId;
    long long _displayTimestampSecs;
    SCDiscoverFeedThumbnailInfo *_thumbnailURL;
    NSString *_bitmojiAvatarSelfieId;
    NSString *_businessLogoURL;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(readonly, copy, nonatomic) NSString *bitmojiAvatarSelfieId; // @synthesize bitmojiAvatarSelfieId=_bitmojiAvatarSelfieId;
@property(readonly, copy, nonatomic) NSString *businessLogoURL; // @synthesize businessLogoURL=_businessLogoURL;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) long long displayTimestampSecs; // @synthesize displayTimestampSecs=_displayTimestampSecs;
@property(readonly, copy, nonatomic) NSString *emoji; // @synthesize emoji=_emoji;
- (unsigned long long)hash;
- (id)initWithUserName:(id)arg1 displayName:(id)arg2 userId:(id)arg3 emoji:(id)arg4 bitmojiAvatarId:(id)arg5 isPopular:(_Bool)arg6 displayTimestampSecs:(long long)arg7 thumbnailURL:(id)arg8 bitmojiAvatarSelfieId:(id)arg9 businessLogoURL:(id)arg10 showOfficialBadge:(_Bool)arg11;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isPopular; // @synthesize isPopular=_isPopular;
@property(readonly, nonatomic) _Bool showOfficialBadge; // @synthesize showOfficialBadge=_showOfficialBadge;
@property(readonly, copy, nonatomic) SCDiscoverFeedThumbnailInfo *thumbnailURL; // @synthesize thumbnailURL=_thumbnailURL;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (id)xLogObjectInfo;

@end
