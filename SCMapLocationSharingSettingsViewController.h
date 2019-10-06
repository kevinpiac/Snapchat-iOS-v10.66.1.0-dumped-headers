//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCGenericSettingsViewController.h"

#import "SCBitmojiAvatarBuilderRouterDelegate-Protocol.h"
#import "SCLocationSharingPreferencesListener-Protocol.h"
#import "SCMapModalViewControllerSubclass-Protocol.h"
#import "SCMapSettingsTableViewCellDelegate-Protocol.h"
#import "SCMapboxAttributionViewDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, SCBitmojiLinkPageLogger, SCLocationSharingAudienceChooser, SCLocationSharingPreferencesV1, SCMapAttributionInformation, SCMapModalViewController, SCMapSettingsTableViewCell, SCPreviewTooltipBalloon, SCUserSession, UIColor, UISwitch, UITableView, UIView;
@protocol SCBitmojiAvatarBuilderRouting, SCBitmojiAvatarProvider, SCBitmojiFashionPresenting, SCBitmojiSettingsPresenting, SCCurrentPageTracker, SCMapPeopleFriendsProvider, SCMapPersonLocationsProviding, SCObserving, SCPageViewLogging, SCShakeToReportPresenting;

@interface SCMapLocationSharingSettingsViewController : SCGenericSettingsViewController <UITableViewDelegate, UITableViewDataSource, SCMapSettingsTableViewCellDelegate, SCTraceEnabled, SCMapboxAttributionViewDelegate, SCLocationSharingPreferencesListener, SCBitmojiAvatarBuilderRouterDelegate, SCMapModalViewControllerSubclass>
{
    SCMapAttributionInformation *_attributionInformation;
    id <SCBitmojiAvatarProvider> _bitmojiAvatarProvider;
    id <SCBitmojiFashionPresenting> _bitmojiFashionPresenter;
    SCBitmojiLinkPageLogger *_bitmojiLinkPageLogger;
    id <SCBitmojiAvatarBuilderRouting> _bitmojiAvatarBuildRouter;
    id <SCBitmojiSettingsPresenting> _bitmojiSettingsPresenter;
    SCLocationSharingPreferencesV1 *_locationSharingPreferences;
    id <SCMapPeopleFriendsProvider> _mapPeopleFriendsProvider;
    id <SCMapPersonLocationsProviding> _mapPersonLocationsProvider;
    id <SCShakeToReportPresenting> _mapShakeToReportPresenter;
    unsigned long long _options;
    id <SCPageViewLogging> _pageViewLogger;
    id <SCCurrentPageTracker> _currentPageTracker;
    long long _source;
    SCUserSession *_userSession;
    SCLocationSharingAudienceChooser *_audienceChooser;
    id <SCObserving> _allowLocationRequestsObserver;
    UITableView *_tableView;
    NSArray *_visibleSections;
    UIColor *_defaultTableViewBackgroundColor;
    UIColor *_defaultTableViewSeparatorColor;
    _Bool _loading;
    _Bool _didLoad;
    SCPreviewTooltipBalloon *_ghostModeTooltip;
    SCMapSettingsTableViewCell *_ghostModeCell;
    UISwitch *_ghostModeSwitch;
    SCMapSettingsTableViewCell *_allowLocationRequestCell;
    SCMapSettingsTableViewCell *_supportCell;
    UISwitch *_allowLocationRequestSwitch;
    UIView *_attributionView;
    _Bool _shouldForceShowRemovingYourLocation;
    _Bool _fetchingBitmojiOutfitData;
}

- (void).cxx_destruct;
- (void)_allowLocationRequestSwitchValueDidChange:(id)arg1;
- (id)_availableAudienceItems;
- (id)_blacklistedFriendsCommaSeparatedString;
- (id)_cellForSectionWhoCanSeeMyLocationAtIndexPath:(id)arg1 withGhostMode:(_Bool)arg2 currentSharingAudience:(int)arg3;
- (id)_commaSeparatedStringForSharingModeFriendIds:(id)arg1;
- (void)_didLoadPreferencesWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)_doOnAvatarBuilderPrepared:(_Bool)arg1;
- (void)_doOnLegacyFashionBuilderPrepared:(_Bool)arg1;
- (void)_enterFriendsModeAfterDeselectingAll;
- (void)_enterGhostModeAfterDeselectingAll;
- (void)_forceShowRemovingYourLocationForSeconds:(double)arg1;
- (void)_ghostModeSwitchValueDidChange:(id)arg1;
- (_Bool)_isRTL;
- (void)_launchLegacyFashionBuilder;
- (void)_launchWebAvatarBuilder;
- (void)_layoutAttributionView;
- (CDUnknownBlockType)_locationPreferencesUpdateCallback;
- (void)_presentReportAnIssue;
- (void)_reloadPreferences;
- (void)_reloadTableView;
- (id)_selectedFriendsCommaSeparatedString;
- (void)_setupHeaderView;
- (void)_showAudienceChooserAlertForSwitchingOffGhostMode:(id)arg1;
- (void)_showChangeBitmojiOutfitViewController;
- (void)_showFriendChooserForCurrentPreferences:(int)arg1;
- (void)_showGhostModeTimerOptionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateGhostModeCell;
- (id)bitmojiAvatarBuilderPresentingViewController;
- (void)dealloc;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)initWithAttributionInfo:(id)arg1 bitmojiAvatarProvider:(id)arg2 bitmojiFashionPresenter:(id)arg3 bitmojiAvatarBuilderRouter:(id)arg4 bitmojiSettingsPresenter:(id)arg5 locationSharingPreferences:(id)arg6 mapPeopleFriendsProvider:(id)arg7 mapPersonLocationsProvider:(id)arg8 mapShakeToReportPresenter:(id)arg9 options:(unsigned long long)arg10 pageViewLogger:(id)arg11 currentPageTracker:(id)arg12 source:(long long)arg13 userSession:(id)arg14;
- (id)initWithAttributionInfo:(id)arg1 options:(unsigned long long)arg2 source:(long long)arg3 userSession:(id)arg4;
- (void)loadView;
- (void)locationSharingPreferencesSynced:(id)arg1;
- (void)locationSharingPreferencesUpdated:(id)arg1;
- (void)mapAttributionViewDidTapDigitalGlobe:(id)arg1;
- (void)mapAttributionViewDidTapMapbox:(id)arg1;
- (void)mapAttributionViewDidTapOpenStreetMap:(id)arg1;
- (struct CGRect)mapSettingsTableViewCell:(id)arg1 frameForAccessoryView:(id)arg2;
- (_Bool)modalViewController:(id)arg1 panGestureRecognizer:(id)arg2 shouldBeginInView:(id)arg3;
- (void)modalViewControllerPanGestureRecognizerDidFinish:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)scrollViewDidScroll:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak SCMapModalViewController *parentModalViewController;
@property(readonly) Class superclass;

@end

