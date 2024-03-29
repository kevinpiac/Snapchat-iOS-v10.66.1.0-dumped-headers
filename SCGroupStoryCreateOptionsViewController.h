//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCGenericSettingsViewController.h"

#import "SCGroupStorySelectMembersViewControllerDelegate-Protocol.h"
#import "SCSendToNavigationDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, SCGroupStoryCreationSession, SCGroupStoryCreationSettings, SCSearchContainerView, SCSendToTransitionProvider, SCUserSession, UILabel, UITableView;
@protocol SCCustomStorySettingsViewControllerDelegate;

@interface SCGroupStoryCreateOptionsViewController : SCGenericSettingsViewController <UITableViewDataSource, UITableViewDelegate, SCGroupStorySelectMembersViewControllerDelegate, SCSendToNavigationDelegate>
{
    SCUserSession *_userSession;
    UITableView *_tableView;
    UILabel *_footerLabel;
    NSArray *_sections;
    SCGroupStoryCreationSettings *_creationSettings;
    SCGroupStoryCreationSession *_creationSession;
    id <SCCustomStorySettingsViewControllerDelegate> _settingsVCDelegate;
    SCSearchContainerView *_blurredContainerView;
    SCSendToTransitionProvider *_sendToTransitionProvider;
    _Bool _dismissChildVCAnimated;
    long long _context;
}

- (void).cxx_destruct;
- (void)_createCustomStory;
- (void)_createGeoStory;
- (void)_createGroupChatStory;
- (struct UIEdgeInsets)_createOptionCellEdgeInsets;
- (void)_createPrivateStory;
- (long long)_createTypeForIndex:(unsigned long long)arg1;
- (id)_customStoryCellAtIndexPath:(id)arg1;
- (id)_geoStoryCellAtIndexPath:(id)arg1;
- (id)_groupChatStoryCellAtIndexPath:(id)arg1;
- (void)_logCreationSession;
- (void)_presentMemberSelectorWithStoryType:(long long)arg1 selectingPosters:(_Bool)arg2;
- (id)_privateStoryCellAtIndexPath:(id)arg1;
- (id)_sectionsTemplate;
- (id)backgroundColorForHeader;
@property(nonatomic) long long context; // @synthesize context=_context;
- (void)dismissSendViewController:(id)arg1;
- (id)getTitle;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)initWithCreationContext:(long long)arg1 userSession:(id)arg2 settingsDelegate:(id)arg3;
- (void)leftButtonPressed;
- (void)leftSwipeSucceed;
- (void)newGroupStorySelectMembersViewController:(id)arg1 updateCustomGroupStoryPrivacyWithPosterIds:(id)arg2 viewerIds:(id)arg3 modifiedSettings:(_Bool)arg4 storyType:(long long)arg5;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)preferredStatusBarStyle;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)textColorForHeader:(id)arg1;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

