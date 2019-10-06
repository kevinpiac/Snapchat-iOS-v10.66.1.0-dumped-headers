//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAnnouncing-Protocol.h"
#import "SCDiscoverFeedActionHandling-Protocol.h"
#import "SCDiscoverFeedDebugViewControllerDelegate-Protocol.h"

@class NSString, SCDiscoverFeedDebugInfoDataProvider, SCDynamicLayoutActionHandler, SCLazy, SCScopedAccess, SCUserSession, UIViewController;
@protocol NavigationDelegate, SCDiscoverFeedActionHandling, SCDiscoverFeedOperaViewingHandling, SCDiscoverFeedStoryPositionProviding, SCPageNameLogging, SCReplyDelegate, SCStartChatDelegate;

@interface SCDiscoverFeedSectionHeaderActionHandler : NSObject <SCDiscoverFeedDebugViewControllerDelegate, SCDiscoverFeedActionHandling, SCAnnouncing>
{
    SCUserSession *_userSession;
    SCDiscoverFeedDebugInfoDataProvider *_debugInfoDataProvider;
    id <SCDiscoverFeedActionHandling> _discoverFeedActionHandler;
    SCDynamicLayoutActionHandler *_dynamicLayoutActionHandler;
    id <NavigationDelegate> _navigationDelegate;
    id <SCReplyDelegate> _replyDelegate;
    id <SCStartChatDelegate> _startChatDelegate;
    SCLazy *_storiesSummaryProvider;
    SCScopedAccess *_scopedLazyStoriesPlaybackDataProvider;
    SCScopedAccess *_scopedLegacyStoriesPlaybackDataProvider;
    UIViewController<SCPageNameLogging> *_presentingViewController;
    id <SCDiscoverFeedStoryPositionProviding> _storyPositionProvider;
    id <SCDiscoverFeedOperaViewingHandling> _operaViewingHandler;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_generateAndPresentDebugViewControllerWithDebugInfo:(id)arg1 feedType:(id)arg2;
- (void)_hideSection:(id)arg1;
- (void)_logHideSectionForSection:(id)arg1;
- (void)_presentDebugViewController:(id)arg1;
- (void)_showHideAlertForSection:(id)arg1;
- (void)discoverFeedDebugViewControllerNeedsToDismiss:(id)arg1 animated:(_Bool)arg2;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithUserSession:(id)arg1 discoverFeedActionHandler:(id)arg2 navigationDelegate:(id)arg3 replyDelegate:(id)arg4 startChatDelegate:(id)arg5 storiesSummaryProvider:(id)arg6 scopedLazyStoriesPlaybackDataProvider:(id)arg7 scopedLegacyStoriesPlaybackDataProvider:(id)arg8;
@property(retain, nonatomic) id <SCDiscoverFeedOperaViewingHandling> operaViewingHandler; // @synthesize operaViewingHandler=_operaViewingHandler;
@property(nonatomic) __weak UIViewController<SCPageNameLogging> *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) id <SCDiscoverFeedStoryPositionProviding> storyPositionProvider; // @synthesize storyPositionProvider=_storyPositionProvider;
- (void)updateDismissBaseView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

