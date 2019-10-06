//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCOnboardingTooltipManager.h"

#import "SCDataCoordinatorListener-Protocol.h"

@class NSString, SCLazy, SCUserSession, UICollectionView;

@interface SCDiscoverTooltipManager : SCOnboardingTooltipManager <SCDataCoordinatorListener>
{
    SCUserSession *_userSession;
    UICollectionView *_parentView;
    SCLazy *_newUserStoryOnboardingTooltip;
    SCLazy *_friendStoriesDataCoordinator;
}

- (void).cxx_destruct;
- (id)_createNewUserStoryOnboardingTooltip;
- (void)_hideTeamSnapchatStoryTooltipIfNeeded:(id)arg1;
- (void)_setupWithParentView:(id)arg1;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (id)initWithUserSession:(id)arg1 parentView:(id)arg2 friendStoriesDataCoordinator:(id)arg3;
- (void)markTooltipCompleted:(id)arg1;
- (void)storyWillPlayWithFriendUserName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
