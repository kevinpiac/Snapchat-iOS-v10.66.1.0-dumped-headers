//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSNumber, NSString, UIColor;

@protocol SCGroupParticipant <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *bitmojiAvatarId;
@property(readonly, copy, nonatomic) NSString *bitmojiSelfieId;
@property(readonly, copy, nonatomic) UIColor *color;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSNumber *joinTimestamp;
@property(readonly, nonatomic) unsigned long long mischiefVersion;
@property(readonly, nonatomic) unsigned long long orderIndex;
@property(readonly, copy, nonatomic) NSNumber *talkSessionUserId;
@property(readonly, copy, nonatomic) NSString *userId;
@property(readonly, copy, nonatomic) NSString *username;
@end
