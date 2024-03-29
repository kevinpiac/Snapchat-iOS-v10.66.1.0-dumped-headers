//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCImpalaSnapViewersActionHandling-Protocol.h"
#import "SCImpalaViewControllerAsyncPreparing-Protocol.h"
#import "SCMiniProfileViewControllerDelegate-Protocol.h"
#import "SCPageNameLogging-Protocol.h"

@class NSString, SCImpalaSnapInsightsContext, SCImpalaSnapInsightsView, SCSearchV2ProfilePresenter, SCUserSession, UIScrollView;
@protocol NavigationDelegate;

@interface SCImpalaSnapInsightsViewController : UIViewController <SCMiniProfileViewControllerDelegate, SCImpalaSnapViewersActionHandling, SCPageNameLogging, SCImpalaViewControllerAsyncPreparing>
{
    SCImpalaSnapInsightsView *_insightsView;
    SCImpalaSnapInsightsContext *_context;
    SCSearchV2ProfilePresenter *_profilePresenter;
    SCUserSession *_userSession;
    id <NavigationDelegate> _navigationDelegate;
    NSString *_businessProfileId;
    NSString *_snapId;
}

- (void).cxx_destruct;
- (void)_loadInsightsViewIfNeeded;
- (void)_presentProfileForSnapchatter:(id)arg1;
@property(readonly, copy, nonatomic) NSString *businessProfileId; // @synthesize businessProfileId=_businessProfileId;
- (id)initWithUserSession:(id)arg1 navigationDelegate:(id)arg2 businessProfileId:(id)arg3 snapId:(id)arg4;
- (void)miniProfileController:(id)arg1 wantsToNavigateToChatWithDeepLinkURL:(id)arg2;
@property(readonly, nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
- (void)openProfileWithViewer:(id)arg1;
- (id)pageViewName;
- (void)prepareWithCompletion:(CDUnknownBlockType)arg1;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(readonly, copy, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

