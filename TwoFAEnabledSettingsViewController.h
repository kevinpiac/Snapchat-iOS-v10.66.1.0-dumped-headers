//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCGenericSettingsViewController.h"

#import "SCLayoutAccessoryTableViewCellDelegate-Protocol.h"
#import "SCMobileSettingsDelegate-Protocol.h"
#import "SCPageNameLogging-Protocol.h"
#import "SCSettingsSwitchTableViewCellDelegate-Protocol.h"
#import "TwoFARecoveryCodeViewBackDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, SCLoadingScreen, SCSettingsSwitchTableViewCell, SCUserSession, UILabel, UITableView;

@interface TwoFAEnabledSettingsViewController : SCGenericSettingsViewController <UITableViewDataSource, UITableViewDelegate, SCLayoutAccessoryTableViewCellDelegate, SCMobileSettingsDelegate, TwoFARecoveryCodeViewBackDelegate, SCSettingsSwitchTableViewCellDelegate, SCPageNameLogging>
{
    SCSettingsSwitchTableViewCell *_smsCell;
    SCSettingsSwitchTableViewCell *_tpaCell;
    NSString *_pageViewName;
    _Bool _leftSwipeable;
    UILabel *_infoLabel;
    UITableView *_tableView;
    SCLoadingScreen *_loadingScreen;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (_Bool)disableLeftSwipe;
- (void)disableSwitch:(id)arg1 withAction:(long long)arg2;
- (id)getDisableAlertDescription:(id)arg1;
- (id)getDisableAlertTitle:(id)arg1;
- (id)getTitle;
- (void)hideLoadingScreen;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
- (id)initWithPageViewName:(id)arg1 title:(id)arg2 leftSwipeable:(_Bool)arg3 userSession:(id)arg4;
- (struct CGRect)layoutAccessoryTableViewCell:(id)arg1 frameForAccessoryView:(id)arg2;
- (void)leftButtonPressed;
@property(nonatomic) _Bool leftSwipeable; // @synthesize leftSwipeable=_leftSwipeable;
- (void)loadView;
@property(retain, nonatomic) SCLoadingScreen *loadingScreen; // @synthesize loadingScreen=_loadingScreen;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onTapLeftBackButton:(id)arg1;
- (id)pageViewName;
- (void)presentAuthAppSetupView;
- (void)presentForgetDevice;
- (void)presentMobileSettingView;
- (void)presentRecoveryCode;
- (void)presentSettingPage;
- (void)presentSmsCodeConfirmationView;
- (void)refreshRecoveryCodeCell;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void)settingsSwitchTableViewCell:(id)arg1 didToggleSwitch:(_Bool)arg2;
- (void)showLoadingScreenWithLabelText:(id)arg1;
- (id)smsCell;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tpaCell;
- (void)tryEnableSMSSwitch;
- (void)verifyMobileDidSucceed;
- (void)verifyMobileWasCancelled;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

