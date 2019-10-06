//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "SCMyUnifiedProfilePresentActionMenuActionHandlerDelegate-Protocol.h"
#import "SCReplyDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "SCUnifiedProfilePlayStoryActionHandlerDelegate-Protocol.h"
#import "SCUnifiedProfileStoriesPlaybackHandling-Protocol.h"

@class NSString, SCEventListenerAnnouncer, SCMyUnifiedProfileBitmojiActionHandler, SCMyUnifiedProfileCreateYourOwnActionHandler, SCMyUnifiedProfileEventsSectionActionHandler, SCMyUnifiedProfileFriendActionHandler, SCMyUnifiedProfileHeaderActionHandler, SCMyUnifiedProfileMapSectionActionHandler, SCMyUnifiedProfilePostRegistrationActionHandler, SCMyUnifiedProfilePresentActionMenuActionHandler, SCMyUnifiedProfileSnapProActionHandler, SCMyUnifiedProfileUsernameActionHandler, SCUnifiedProfileLoggingService, SCUnifiedProfileMyStoriesActionHandler, SCUnifiedProfilePlayStoryActionHandler, SCUnifiedProfileShowCameraActionHandler, SCUnifiedProfileStoryActionMenuActionHandler, SCUnifiedProfileViewController, SCUserSession;
@protocol SCStartChatDelegate;

@interface SCMyProfilePageActionHandler : NSObject <SCMyUnifiedProfilePresentActionMenuActionHandlerDelegate, SCUnifiedProfilePlayStoryActionHandlerDelegate, SCReplyDelegate, SCTraceEnabled, SCActionHandling, SCUnifiedProfileStoriesPlaybackHandling, SCEventListener>
{
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCMyUnifiedProfileHeaderActionHandler *_headerActionHandler;
    SCMyUnifiedProfileBitmojiActionHandler *_bitmojiActionHandler;
    SCMyUnifiedProfileFriendActionHandler *_friendActionHandler;
    SCMyUnifiedProfileMapSectionActionHandler *_mapActionHandler;
    SCMyUnifiedProfilePostRegistrationActionHandler *_postRegistrationActionHandler;
    SCUnifiedProfileMyStoriesActionHandler *_storiesActionHandler;
    SCMyUnifiedProfileSnapProActionHandler *_snapProActionHandler;
    SCMyUnifiedProfileUsernameActionHandler *_usernameActionHandler;
    SCUnifiedProfilePlayStoryActionHandler *_playFriendStoryActionHandler;
    SCUnifiedProfileShowCameraActionHandler *_showCameraActionHandler;
    SCMyUnifiedProfileEventsSectionActionHandler *_eventsActionHandler;
    SCMyUnifiedProfileCreateYourOwnActionHandler *_createYourOwnHandler;
    SCMyUnifiedProfilePresentActionMenuActionHandler *_presentActionMenuActionHandler;
    SCUnifiedProfileStoryActionMenuActionHandler *_storyActionMenuActionHandler;
    id <SCStartChatDelegate> _startChatDelegate;
    SCUserSession *_userSession;
    SCUnifiedProfileViewController *_unifiedProfileViewController;
    SCUnifiedProfileLoggingService *_loggingService;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (_Bool)_handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (void)_handleEditName;
- (void)addListener:(id)arg1;
- (void)dealloc;
- (void)didFollowThrough;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)handleActionFromMyUnifiedProfilePresentActionMenuActionHandler:(id)arg1 actionModel:(id)arg2;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithNavigationDelegate:(id)arg1 startChatDelegate:(id)arg2 lagunaPairingDelegate:(id)arg3 postRegistrationStateManager:(id)arg4 storiesDataSourceManager:(id)arg5 userSession:(id)arg6 bitmojiSectionloadingStateProvider:(id)arg7;
@property(retain, nonatomic) SCUnifiedProfileLoggingService *loggingService; // @synthesize loggingService=_loggingService;
- (void)presentActionMenuActionHandler:(id)arg1 didPresentViewController:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)replyWithParameter:(id)arg1;
- (_Bool)replyingToStoryWithChat;
@property(nonatomic) __weak SCUnifiedProfileViewController *unifiedProfileViewController; // @synthesize unifiedProfileViewController=_unifiedProfileViewController;
- (void)unifiedProfilePlayStoryActionHandler:(id)arg1 willBeginDismissingStory:(id)arg2 storySectionIdentifier:(id)arg3;
- (void)updateOperaDismissBaseView:(id)arg1;
- (void)willDismissViewControllerFromPresentActionMenuActionHandler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

