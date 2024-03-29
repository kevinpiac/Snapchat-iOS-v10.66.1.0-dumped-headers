//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCFriendmojiRendering-Protocol.h"

@class NSString, SCLazy;

@interface SCComposerPeopleFriendmojiRenderer : NSObject <SCCFriendmojiRendering>
{
    SCLazy *_friendmojiPresenter;
    _Bool _shouldDisplayStreakCounter;
    _Bool _shouldDisplayStreak;
}

- (void).cxx_destruct;
- (id)initWithFriendmojiPresenter:(id)arg1 shouldDisplayStreakCounter:(_Bool)arg2 shouldDisplayStreak:(_Bool)arg3;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)renderForFriendNoRequestWithUserId:(id)arg1 username:(id)arg2 streakLength:(double)arg3 friendmojis:(id)arg4;
- (id)renderForFriendWithRequest:(id)arg1;
- (id)renderForGroupNoRequestWithGroupId:(id)arg1;
- (id)renderForGroupWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

