//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCOnboardingTooltip.h"

#import "SCDataCoordinatorListener-Protocol.h"

@class NSString, SCFeatureSettingsManager, SCLazy;

@interface SCBarracudaDiscoverFeedOnboardingTooltip : SCOnboardingTooltip <SCDataCoordinatorListener>
{
    SCFeatureSettingsManager *_featureSettingsManager;
    SCLazy *_storiesDataCoordinatorLazy;
    _Bool _hasFriendsStories;
}

- (void).cxx_destruct;
- (void)_hideIfHasNoFriendStories:(id)arg1 withError:(id)arg2;
- (id)_tooltipAppearance;
- (id)_tooltipBackgroundColor;
- (id)_tooltipText;
- (id)_tooltipTextColor;
- (id)_tooltipTextFont;
- (void)_updateFriendsStoriesInfoWithUpdatedStoryIds:(id)arg1;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)dealloc;
- (id)initWithParentView:(id)arg1 featureSettingsManager:(id)arg2 storiesDataCoordinatorLazy:(id)arg3;
- (void)markCompleted;
- (_Bool)needsToBeCompleted;
- (void)willShow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

