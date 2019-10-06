//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCFriendsFeedSnapchatterBasicInfo, UIColor;

@interface SCFriendsFeedGroupParticipant : NSObject <NSCopying>
{
    SCFriendsFeedSnapchatterBasicInfo *_snapchatterBasicInfo;
    NSString *_uniqueDisplayName;
    NSString *_talkSessionUserID;
    UIColor *_color;
    NSString *_videoChatUserID;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) UIColor *color; // @synthesize color=_color;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithSnapchatterBasicInfo:(id)arg1 uniqueDisplayName:(id)arg2 talkSessionUserID:(id)arg3 color:(id)arg4 videoChatUserID:(id)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCFriendsFeedSnapchatterBasicInfo *snapchatterBasicInfo; // @synthesize snapchatterBasicInfo=_snapchatterBasicInfo;
@property(readonly, copy, nonatomic) NSString *talkSessionUserID; // @synthesize talkSessionUserID=_talkSessionUserID;
@property(readonly, copy, nonatomic) NSString *uniqueDisplayName; // @synthesize uniqueDisplayName=_uniqueDisplayName;
@property(readonly, copy, nonatomic) NSString *videoChatUserID; // @synthesize videoChatUserID=_videoChatUserID;

@end
