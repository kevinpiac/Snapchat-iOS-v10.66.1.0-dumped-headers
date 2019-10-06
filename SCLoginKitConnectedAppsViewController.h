//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCGenericSettingsViewController.h"

#import "SCLoginKitAppPermissionsDelegate-Protocol.h"
#import "SCLoginKitPrivacyViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableDictionary, NSString, SCLoadingIndicatorView, SCLoginKitPrivacyView, SCScopedAccess, SCUserSession, UILabel, UITableView;

@interface SCLoginKitConnectedAppsViewController : SCGenericSettingsViewController <UITableViewDelegate, UITableViewDataSource, SCLoginKitAppPermissionsDelegate, SCLoginKitPrivacyViewDelegate>
{
    SCUserSession *_userSession;
    SCLoadingIndicatorView *_loadingIndicator;
    UITableView *_appConnectionsTableView;
    UILabel *_descriptionLabel;
    SCLoginKitPrivacyView *_privacyView;
    NSMutableDictionary *_appConnections;
    SCScopedAccess *_snapKitAppStateController;
}

- (void).cxx_destruct;
- (void)_initAppConnectionsTableView;
- (void)_loadHasConnectedAppsView;
- (void)_loadNoConnectedAppsView;
- (void)_makeConnectionStatesRequestWithAccessToken:(id)arg1 successQueue:(id)arg2 failureQueue:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)_refreshData;
- (void)_retrieveAppsWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)_setupDescriptionLabel;
- (void)_setupLoadingIndicator;
- (void)_showErrorMessage:(id)arg1;
- (void)_showPrivacyViews;
- (id)_sortedAppIds;
- (void)appPermissionsVC:(id)arg1 didRemoveAppWithAppId:(id)arg2;
- (void)appPermissionsVC:(id)arg1 didUpdateAppWithAppId:(id)arg2 updatedApprovedScopes:(id)arg3;
- (void)didPressContinueButton:(id)arg1;
- (void)didPressPrivacyPolicyButton:(id)arg1 privacyPolicyUrlString:(id)arg2;
- (id)getTitle;
- (id)initWithUserSession:(id)arg1;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

