//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCognacSettingsListViewControllerDismissDelegate-Protocol.h"
#import "SCCognacSwipeTransitionPresenterDelegate-Protocol.h"

@class NSString, SCAlertView, SCCognacAppViewLifeCycleListenerAnnouncer, SCCognacOperaDataSource, SCCognacSettingsListViewController, SCCognacSwipeTransitionPresenter, UIViewController;
@protocol SCCognacPreconditionLeaderboardAlertControllerDelegate;

@interface SCCognacPreconditionLeaderboardAlertController : NSObject <SCCognacSettingsListViewControllerDismissDelegate, SCCognacSwipeTransitionPresenterDelegate>
{
    SCCognacOperaDataSource *_operaDataSource;
    SCCognacAppViewLifeCycleListenerAnnouncer *_viewLifeCycleAnnouncer;
    UIViewController *_presentingViewController;
    SCAlertView *_leaderboardAlertView;
    SCCognacSettingsListViewController *_settingsViewController;
    SCCognacSwipeTransitionPresenter *_settingsViewControllerPresenter;
    id <SCCognacPreconditionLeaderboardAlertControllerDelegate> _delegate;
    long long _alertType;
}

- (void).cxx_destruct;
- (void)_dismissCurrentAlert;
- (void)_logAlertEventWithEventName:(id)arg1;
- (long long)_loggingAlertType;
- (CDUnknownBlockType)_makeAlertConfiguration;
- (id)_makeLeaderboardAlertTitle;
- (void)_presentLeaderboardAlert;
- (void)_presentSettings;
@property(readonly, nonatomic) long long alertType; // @synthesize alertType=_alertType;
- (void)cognacSwipeTransitionPresenterDidDismiss:(id)arg1;
@property(nonatomic) __weak id <SCCognacPreconditionLeaderboardAlertControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissAlert;
- (id)initWithAlertType:(long long)arg1 operaDataSource:(id)arg2 viewLifeCycleAnnouncer:(id)arg3 presentingViewController:(id)arg4;
- (_Bool)isPresentingAlert;
- (_Bool)presentAlert;
- (void)settingsListViewControllerDidDismiss:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

