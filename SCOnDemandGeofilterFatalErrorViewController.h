//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCOnDemandGeofilterBaseLeftSwipableViewController.h"

@class SCOnDemandGeofilterEventsLogger, SCOnDemandGeofilterPillButton, SOJUUnlockablesOndemandAuthorizationFailure;

@interface SCOnDemandGeofilterFatalErrorViewController : SCOnDemandGeofilterBaseLeftSwipableViewController
{
    SCOnDemandGeofilterPillButton *_continueButton;
    SCOnDemandGeofilterEventsLogger *_eventsLogger;
    SOJUUnlockablesOndemandAuthorizationFailure *_authorizationFailure;
}

- (void).cxx_destruct;
- (void)_continueButtonAction;
- (id)_localizedAuthorizationFailure:(id)arg1;
- (id)initWithLogger:(id)arg1 authFailure:(id)arg2;
- (_Bool)shouldDisplayStatusBar;
- (void)trackFatalErrorEvent;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

@end

