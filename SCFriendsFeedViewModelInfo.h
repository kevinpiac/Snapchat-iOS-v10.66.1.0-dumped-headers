//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCAvatarAccessoryIcon, SCFriendsFeedComponentViewRightButtonViewModel, SCFriendsFeedFriendmojiViewModel, SCFriendsFeedItem;

@interface SCFriendsFeedViewModelInfo : NSObject <NSCopying>
{
    _Bool _isStoryReplayable;
    _Bool _canShowDoubleTapToReply;
    _Bool _isReplayingSnap;
    _Bool _isArroyoConversation;
    _Bool _isJustViewedSnap;
    SCFriendsFeedItem *_friendsFeedItem;
    long long _tooltipState;
    SCFriendsFeedComponentViewRightButtonViewModel *_rightButtonViewModel;
    SCFriendsFeedFriendmojiViewModel *_friendmojiViewModel;
    SCFriendsFeedFriendmojiViewModel *_sublabelFriendmojiViewModel;
    SCAvatarAccessoryIcon *_avatarAccessoryIcon;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCAvatarAccessoryIcon *avatarAccessoryIcon; // @synthesize avatarAccessoryIcon=_avatarAccessoryIcon;
@property(readonly, nonatomic) _Bool canShowDoubleTapToReply; // @synthesize canShowDoubleTapToReply=_canShowDoubleTapToReply;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) SCFriendsFeedFriendmojiViewModel *friendmojiViewModel; // @synthesize friendmojiViewModel=_friendmojiViewModel;
@property(readonly, copy, nonatomic) SCFriendsFeedItem *friendsFeedItem; // @synthesize friendsFeedItem=_friendsFeedItem;
- (unsigned long long)hash;
- (id)initWithFriendsFeedItem:(id)arg1 isStoryReplayable:(_Bool)arg2 canShowDoubleTapToReply:(_Bool)arg3 isReplayingSnap:(_Bool)arg4 tooltipState:(long long)arg5 isArroyoConversation:(_Bool)arg6 isJustViewedSnap:(_Bool)arg7 rightButtonViewModel:(id)arg8 friendmojiViewModel:(id)arg9 sublabelFriendmojiViewModel:(id)arg10 avatarAccessoryIcon:(id)arg11;
@property(readonly, nonatomic) _Bool isArroyoConversation; // @synthesize isArroyoConversation=_isArroyoConversation;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isJustViewedSnap; // @synthesize isJustViewedSnap=_isJustViewedSnap;
@property(readonly, nonatomic) _Bool isReplayingSnap; // @synthesize isReplayingSnap=_isReplayingSnap;
@property(readonly, nonatomic) _Bool isStoryReplayable; // @synthesize isStoryReplayable=_isStoryReplayable;
@property(readonly, copy, nonatomic) SCFriendsFeedComponentViewRightButtonViewModel *rightButtonViewModel; // @synthesize rightButtonViewModel=_rightButtonViewModel;
@property(readonly, copy, nonatomic) SCFriendsFeedFriendmojiViewModel *sublabelFriendmojiViewModel; // @synthesize sublabelFriendmojiViewModel=_sublabelFriendmojiViewModel;
@property(readonly, nonatomic) long long tooltipState; // @synthesize tooltipState=_tooltipState;

@end
