//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCMapCarouselPageView.h"

#import "SCGroupsDataRequestListener-Protocol.h"
#import "SCMapCarouselPersonRowControllerDelegate-Protocol.h"
#import "SCMapExploreStatusRowDelegate-Protocol.h"

@class NSString, SCContextV2Manager, SCExperimentManager, SCLocationSharingPreferencesV1, SCMapCarouselContextCardsSection, SCMapExploreStatusRow, SCMapExploreStatusVerticalScrollingViewModel, SCMapStatusStore, SCMapUserPreferences, UIViewController;
@protocol SCContextV2DependencyProvider, SCImageDownloading, SCMapExplorerVerticalScrollingViewDelegate, SCMapPeopleFriendsProvider, SCMapPeopleGroupsProvider, SCMapPersonLocationsProviding, SCPageNameLogging;

@interface SCMapExplorerVerticalScrollingView : SCMapCarouselPageView <SCMapExploreStatusRowDelegate, SCMapCarouselPersonRowControllerDelegate, SCGroupsDataRequestListener>
{
    UIViewController<SCPageNameLogging> *_baseViewController;
    id <SCContextV2DependencyProvider> _contextDependencyProvider;
    SCContextV2Manager *_contextV2Manager;
    NSString *_currentUserId;
    id <SCMapExplorerVerticalScrollingViewDelegate> _delegate;
    SCExperimentManager *_experimentManager;
    id <SCImageDownloading> _imageDownloader;
    SCLocationSharingPreferencesV1 *_locationSharingPreferences;
    id <SCMapPeopleFriendsProvider> _mapPeopleFriendsProvider;
    id <SCMapPeopleGroupsProvider> _mapPeopleGroupsProvider;
    id <SCMapPersonLocationsProviding> _mapPersonLocationsProvider;
    unsigned long long _mapSessionId;
    SCMapUserPreferences *_mapUserPreferences;
    SCMapStatusStore *_statusStore;
    SCMapExploreStatusVerticalScrollingViewModel *_viewModel;
    SCMapExploreStatusRow *_cachedStatusRow;
    SCMapCarouselContextCardsSection *_previousContextCardsSection;
    NSString *_previousContextCardsSectionPlaceId;
}

- (void).cxx_destruct;
- (id)_contextCardsSectionWithPlaceId:(id)arg1;
- (void)_didTapChatOrCreateGroupButton;
- (void)_updateSections;
- (id)baseViewControllerForFocusingPersonRowController:(id)arg1;
- (void)didCompletelyLoseFocus;
- (void)didUpdateGroupsDataRequest:(long long)arg1 groupId:(id)arg2;
- (void)exploreCarouselRow:(id)arg1 wantsToOpenReplyCameraForUserId:(id)arg2;
- (void)exploreCarouselRow:(id)arg1 wantsToSendReplyMessage:(id)arg2 toUserId:(id)arg3;
- (void)exploreCarouselStatusRowDidLongPressProfile:(id)arg1;
- (void)exploreCarouselStatusRowDidTapButton:(id)arg1;
- (void)exploreCarouselStatusRowDidTapProfile:(id)arg1;
- (void)exploreCarouselStatusRowDidTapStory:(id)arg1 fromSourceView:(id)arg2;
- (void)exploreCarouselStatusRowWantsToPlayMapStory:(id)arg1 withPoiId:(id)arg2 fromSourceView:(id)arg3;
- (id)exploreCarouselWantsBaseViewControllerForFocusing:(id)arg1;
- (id)initWithBaseViewController:(id)arg1 contextDependencyProvider:(id)arg2 contextV2Manager:(id)arg3 currentUserId:(id)arg4 delegate:(id)arg5 experimentManager:(id)arg6 imageDownloader:(id)arg7 locationSharingPreferences:(id)arg8 mapPeopleFriendsProvider:(id)arg9 mapPeopleGroupsProvider:(id)arg10 mapPersonLocationsProvider:(id)arg11 mapSessionId:(unsigned long long)arg12 mapUserPreferences:(id)arg13 sections:(id)arg14 statusStore:(id)arg15;
- (void)personCarouselRow:(id)arg1 wantsToSendMapReplyMessage:(id)arg2;
- (void)personCarouselRowDidFocus:(id)arg1;
- (void)personCarouselRowDidLongPressProfile:(id)arg1;
- (void)personCarouselRowDidTapStory:(id)arg1 sourceView:(id)arg2;
- (void)personCarouselRowWantsToOpenChat:(id)arg1;
- (void)personCarouselRowWantsToPresentReplyCamera:(id)arg1;
- (id)screenshotGeneratorForExploreCarouselRow:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)updateContentInset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

