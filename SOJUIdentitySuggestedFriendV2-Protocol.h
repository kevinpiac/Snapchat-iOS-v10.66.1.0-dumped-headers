//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSNumber, NSString;

@protocol SOJUIdentitySuggestedFriendV2 <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *bitmojiAvatarId;
@property(readonly, copy, nonatomic) NSString *bitmojiSelfieId;
@property(readonly, copy, nonatomic) NSString *bitmojiSnapcodeSelfieId;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSString *displayUsername;
@property(readonly, copy, nonatomic) NSString *emojiSymbol;
@property(readonly, copy, nonatomic) NSNumber *isPopularAccout;
@property(readonly, copy, nonatomic) NSString *metadata;
@property(readonly, copy, nonatomic) NSString *storyPrivacy;
@property(readonly, copy, nonatomic) NSString *userId;
@property(readonly, copy, nonatomic) NSString *username;
@end

