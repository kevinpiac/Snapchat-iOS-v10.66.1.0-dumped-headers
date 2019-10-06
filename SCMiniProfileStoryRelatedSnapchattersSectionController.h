//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCMiniProfileSectionController.h"

#import "SCMiniProfileFriendRowControllerDelegate-Protocol.h"

@class Friend, NSArray, NSString, SCLazy, SCUserSession;
@protocol SCMiniProfileRelatedSnapchattersSectionControllerDelegate;

@interface SCMiniProfileStoryRelatedSnapchattersSectionController : SCMiniProfileSectionController <SCMiniProfileFriendRowControllerDelegate>
{
    SCUserSession *_userSession;
    NSArray *_friends;
    Friend *_originalFriend;
    _Bool _showTitle;
    id <SCMiniProfileRelatedSnapchattersSectionControllerDelegate> _delegate;
    SCLazy *_storiesPlaybackFetcher;
}

- (void).cxx_destruct;
- (void)_tapToPlayFriendStoriesWithSummaryInfo:(id)arg1 baseView:(id)arg2;
- (double)extraTopInsetSpacing;
- (void)friendIdentityRowControllerDidLongPressFriend:(id)arg1;
- (void)friendIdentityRowControllerDidTapAddFriend:(id)arg1;
- (void)friendIdentityRowControllerDidTapFriendStory:(id)arg1 baseView:(id)arg2;
- (id)initWithUserSession:(id)arg1 friends:(id)arg2 originalFriend:(id)arg3 delegate:(id)arg4;
- (double)minimumLineSpacingBetweenRows;
- (long long)numberOfRows;
- (id)rowControllerAtIndex:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
