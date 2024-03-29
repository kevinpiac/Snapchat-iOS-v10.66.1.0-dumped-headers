//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCEventListener-Protocol.h"
#import "SCOperaSession-Protocol.h"
#import "SCSendToDelegate-Protocol.h"
#import "SCSendToNavigationDelegate-Protocol.h"

@class NSDictionary, NSString, SCArroyoGroupFilterer, SCCreatorSettingsDataFetcher, SCCreatorSettingsDataMutator, SCCreatorSettingsDataTracker, SCDiscoverFeedStoriesEverywhereService, SCOperaViewController, SCSendToTransitionProvider, SCStoriesOperaPlaybackSequence, SCStoriesSnapPlaybackMetadata, SCStoryUsageLogger, SCUserSession, UIViewController;
@protocol SCOperaPlaylistItemController, SCSendToScreen, SCStoriesOperaPageProvider;

@interface SCFriendStorySharingSession : NSObject <SCSendToDelegate, SCSendToNavigationDelegate, SCEventListener, SCOperaSession>
{
    SCStoriesSnapPlaybackMetadata *_storySnap;
    NSDictionary *_currentStoryScoreUpdateProperty;
    NSDictionary *_currentStoryActionMenuDoorbellUpdateProperty;
    SCUserSession *_userSession;
    long long _viewLocation;
    SCDiscoverFeedStoriesEverywhereService *_storiesEverywhereService;
    SCStoryUsageLogger *_usageLogger;
    SCOperaViewController *_operaViewController;
    id <SCStoriesOperaPageProvider> _operaPageProvider;
    id <SCOperaPlaylistItemController> _operaPlaylistItemController;
    UIViewController<SCSendToScreen> *_sendViewController;
    long long _entryEvent;
    SCSendToTransitionProvider *_sendToTransitionProvider;
    SCStoriesOperaPlaybackSequence *_storiesPlaybackSequence;
    SCArroyoGroupFilterer *_arroyoGroupFilterer;
    SCCreatorSettingsDataFetcher *_creatorSettingsFetcher;
    SCCreatorSettingsDataMutator *_creatorSettingsMutator;
    SCCreatorSettingsDataTracker *_creatorSettingsTracker;
    NSString *_trackingId;
}

- (void).cxx_destruct;
- (void)_deletePressed;
- (void)_didDismissSendViewController;
- (void)_didSendOperaEvent:(id)arg1;
- (void)_fetchCreatorSetting;
- (void)_fetchCreatorSettingSuccess:(id)arg1 posterUserId:(id)arg2;
- (void)_fetchCreatorSettingWithSnapchatter:(id)arg1;
- (void)_fetchFriendScore;
- (void)_handleNotificationOptInWithContext:(id)arg1 params:(id)arg2 targetUserId:(id)arg3;
- (void)_handleShareStoryWithUrl:(id)arg1;
- (id)_legacyStoryInCurrentSharingSession;
- (void)_logFriendStoryOptIn:(_Bool)arg1 interactionContext:(long long)arg2;
- (_Bool)_myStoryIncluded;
- (void)_presentSendViewControllerWithParentViewController:(id)arg1;
- (void)_savePressed;
- (void)_saveStory:(_Bool)arg1 additionalText:(id)arg2 shouldShowToast:(_Bool)arg3;
- (id)_selectRecipientConfiguration;
- (void)_sendStoryShareToRecipients:(id)arg1 mischiefs:(id)arg2 additionalText:(id)arg3;
- (void)_sendStorySnapPlaybackInfo:(id)arg1 toConversationIds:(id)arg2 additionalText:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_sendUsingChatSDKWithType:(id)arg1 payload:(id)arg2 recipients:(id)arg3 mischiefs:(id)arg4 additionalText:(id)arg5;
- (void)_shareLinkForUsername:(id)arg1 inCell:(id)arg2;
- (void)_sharePressedForCell:(id)arg1;
- (void)_showOptInPrompt:(_Bool)arg1;
- (void)dealloc;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)dismissSendViewController:(id)arg1;
- (id)extraPropertiesForStorySnap:(id)arg1;
- (id)initWithUserSession:(id)arg1 viewLocation:(long long)arg2 operaViewController:(id)arg3 operaPageProvider:(id)arg4 operaPlaylistItemController:(id)arg5;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)registeredEventsForOperaSession;
- (void)sendViewController:(id)arg1 sendToRecipients:(id)arg2 storiesPostingConfig:(id)arg3 businessIds:(id)arg4 mischiefs:(id)arg5 businessProfiles:(id)arg6 appStories:(id)arg7 gallery:(_Bool)arg8 inviteRecipientShown:(long long)arg9 additionalText:(id)arg10;
@property(copy, nonatomic) NSString *trackingId; // @synthesize trackingId=_trackingId;
- (void)showPhotoAccessDeniedAlertView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

