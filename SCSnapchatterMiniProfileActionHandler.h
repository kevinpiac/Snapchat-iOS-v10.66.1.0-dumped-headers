//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"

@class NSString, SCLazy, SCUserSession, UIViewController;
@protocol SCMiniProfileViewControllerDelegate;

@interface SCSnapchatterMiniProfileActionHandler : NSObject <SCActionHandling>
{
    UIViewController *_presentingViewController;
    id <SCMiniProfileViewControllerDelegate> _miniProfileDelegate;
    SCUserSession *_userSession;
    SCLazy *_snapchattersDataProvider;
    SCLazy *_tempSnapchatterDataCoordinator;
    SCLazy *_snapchattersDataMutator;
    SCLazy *_snapchattersDataTracker;
    SCLazy *_userInfoProvider;
    SCLazy *_viewedIncomingFriendsTracker;
    SCLazy *_friendScoreProvider;
    SCLazy *_usernameToSnapchatterFetcher;
}

+ (id)miniProfileActionHandlerWithPresentingViewController:(id)arg1 userSession:(id)arg2;
- (void).cxx_destruct;
- (void)_handleSnapchatterFetchWithActionDataModel:(id)arg1 snapchatter:(id)arg2 error:(id)arg3;
- (void)_presentMiniProfileControllerWithSnapchatter:(id)arg1 requestContexts:(id)arg2 pageType:(long long)arg3 addSourceType:(long long)arg4 viewLocation:(long long)arg5;
- (void)_presentMiniProfileForTempSnapchatter:(id)arg1 requestContexts:(id)arg2 pageType:(long long)arg3 addSourceType:(long long)arg4 viewLocation:(long long)arg5;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithPresentingViewController:(id)arg1 userSession:(id)arg2 snapchattersDataProvider:(id)arg3 tempSnapchatterDataCoordinator:(id)arg4 snapchattersDataMutator:(id)arg5 snapchattersDataTracker:(id)arg6 userInfoProvider:(id)arg7 viewedIncomingFriendsTracker:(id)arg8 friendScoreProvider:(id)arg9 usernameToSnapchatterFetcher:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

