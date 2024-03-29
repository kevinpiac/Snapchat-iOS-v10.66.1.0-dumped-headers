//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBaseMediaMessageOperaDataSourceDelegate-Protocol.h"
#import "SCContextPresenterDelegate-Protocol.h"
#import "SCOperaEventListener-Protocol.h"
#import "SCReportPageViewControllerDelegate-Protocol.h"

@class NSDate, NSString, SCAttachmentsLogger, SCBaseMediaMessageOperaDataSource, SCChatSavingOperaSession, SCLazy, SCOperaConfiguration, SCOperaPerfTestsLogger, SCOperaPerformanceTrackingPlugin, SCOperaPlaybackIntentToNextTrackingPlugin, SCOperaViewController, SCOperaViewModel, SCQueuePerformer, SCSnapGrapheneLogger, SCUserSession, UIView, UIViewController;
@protocol NavigationDelegate, SCBaseMediaOperaPresenterDelegate;

@interface SCBaseMediaOperaPresenter : NSObject <SCOperaEventListener, SCBaseMediaMessageOperaDataSourceDelegate, SCContextPresenterDelegate, SCReportPageViewControllerDelegate>
{
    UIViewController *_presentingViewController;
    UIView *_baseView;
    SCBaseMediaMessageOperaDataSource *_dataSource;
    SCOperaViewModel *_operaViewModel;
    SCOperaConfiguration *_operaConfiguration;
    SCOperaViewController *_operaViewController;
    _Bool _willLeaveAppFromPlayer;
    _Bool _isSnapInfinite;
    SCUserSession *_userSession;
    long long _source;
    long long _numScreenshots;
    long long _numScreenRecordings;
    NSDate *_snapViewStartTimestamp;
    NSDate *_storyViewStartTimestamp;
    NSString *_lastReplayedStackId;
    SCQueuePerformer *_performer;
    SCAttachmentsLogger *_attachmentsLogger;
    id <NavigationDelegate> _navigationDelegate;
    long long _cellViewPosition;
    long long _snappableInviteAction;
    SCChatSavingOperaSession *_savingSession;
    SCLazy *_snapchattersDataMutator;
    SCLazy *_usernameToSnapchatterFetcher;
    SCLazy *_groupSnapchatterRepository;
    SCOperaPerformanceTrackingPlugin *_performanceTrackingPlugin;
    SCOperaPlaybackIntentToNextTrackingPlugin *_playbackIntentToNextPlugin;
    SCOperaPerfTestsLogger *_perfLogger;
    SCSnapGrapheneLogger *_snapGraphene;
    _Bool _didLeaveAppFromPlayer;
    _Bool _isDisplayingMedia;
    _Bool _keepMuteOverrideOnDismiss;
    id <SCBaseMediaOperaPresenterDelegate> _delegate;
    long long _messageType;
    NSString *_currentOperaPageId;
}

+ (_Bool)_isVideoForPageWithContext:(id)arg1;
+ (long long)_mediaTypeForPageWithContext:(id)arg1 isDiscoverContent:(_Bool)arg2;
+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (_Bool)_allowLoadingScreens;
- (void)_cleanupOperaVC;
- (void)_didFinishViewingMessageWithPageId:(id)arg1 params:(id)arg2;
- (void)_didOpenWebViewWithContext:(id)arg1;
- (_Bool)_displayContextForThisSnap;
- (void)_finishViewingSnapWithPageID:(id)arg1;
- (void)_hideBaseViewForThumbnailById:(id)arg1 conversationId:(id)arg2;
- (_Bool)_isCurrentPageWebView;
- (_Bool)_isShowingChatV3Snap;
- (_Bool)_isShowingChatV3SnapStack;
- (_Bool)_isShowingDiscoverContent;
- (_Bool)_isShowingReplyMedia;
- (_Bool)_isShowingSnap;
- (void)_logChatDirectSnapViewForSpeedwayStoryWithMessage:(id)arg1 mediaId:(id)arg2 viewTimeSec:(double)arg3 parameters:(id)arg4 inviteId:(id)arg5;
- (void)_logChatMessageV3MediaViewForMediaId:(id)arg1 parameters:(id)arg2 source:(long long)arg3;
- (void)_logChatSnapViewForMessage:(id)arg1 parameters:(id)arg2;
- (void)_logCloseViewForDiscoverContentWithParams:(id)arg1;
- (void)_logMediaConsumptionWithPageId:(id)arg1;
- (void)_logMediaViewForMessage:(id)arg1 messageMetadata:(id)arg2 mediaId:(id)arg3 viewTimeSec:(double)arg4 contextSnapViewMetrics:(id)arg5 parameters:(id)arg6 source:(long long)arg7;
- (void)_logMediaViewForPageId:(id)arg1 parameters:(id)arg2 context:(id)arg3;
- (void)_logMessageViewForMediaId:(id)arg1 parameters:(id)arg2;
- (void)_logOpenV3ChatSnapAttachmentWithMessageId:(id)arg1 context:(id)arg2;
- (void)_logPlaybackFailureForPageId:(id)arg1 isVideo:(_Bool)arg2 mediaType:(long long)arg3 params:(id)arg4;
- (void)_logStartToPresentForDiscoverContentIfNeeded:(_Bool)arg1;
- (void)_logVidDidPlayForDiscoverContentIfNeededWithError:(_Bool)arg1;
- (void)_logViewEndForDiscoverContentIfNeeded;
- (void)_openSnapMediaById:(id)arg1 isVideo:(_Bool)arg2;
- (id)_operaConfigurationWithOperaViewModel:(id)arg1;
- (void)_prefetchMediaFromMedia:(id)arg1;
- (void)_presentMediaWithDataSource:(id)arg1 fromView:(id)arg2 startIndex:(unsigned long long)arg3 shouldDisplayCircleTransition:(_Bool)arg4;
- (void)_presentMessage:(id)arg1 conversationId:(id)arg2 isGroupConversation:(_Bool)arg3 fromPresentingViewController:(id)arg4 fromView:(id)arg5 startIndex:(unsigned long long)arg6 shouldDisplayCircleTransition:(_Bool)arg7 fromSource:(long long)arg8 chatContentMedia:(id)arg9;
- (void)_reportSnapForSnapchatter:(id)arg1;
- (void)_reportSnapForUsername:(id)arg1 conversationId:(id)arg2;
- (void)_retryFetchMediaFromMedia:(id)arg1;
- (_Bool)_shouldEnableFullContent;
- (_Bool)_shouldHideBaseViewWhenPresented;
- (void)_showBaseViewForThumbnailById:(id)arg1 conversationId:(id)arg2;
- (long long)_snapSourceToViewLocation:(long long)arg1;
- (void)_snapchatterForUsername:(id)arg1 conversationId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_unarchiveFailureWithMessage:(id)arg1 error:(long long)arg2;
- (void)_unarchiveMediaMessageV3IfNecessary:(id)arg1 conversationId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)actionHandler;
- (void)appDidBecomeActiveWhileContextPresented:(id)arg1;
- (void)appWillResignActiveWhileContextPresented:(id)arg1;
- (void)context:(id)arg1 didLeaveApp:(_Bool)arg2;
- (void)contextBeganMediaPresentation:(id)arg1;
- (void)contextCardWasTapped:(id)arg1;
- (void)contextCardsViewDidAppear:(id)arg1;
- (void)contextDidDismissSwipeUpContent:(id)arg1;
- (void)contextDidPresentSwipeUpContent:(id)arg1;
- (void)contextFinishedMediaPresentation:(id)arg1;
- (void)contextPresenter:(id)arg1 wantsCTAToBeHidden:(_Bool)arg2;
- (void)contextWillDismissSwipeUpContent:(id)arg1;
- (void)contextWillLeaveApp:(id)arg1;
- (void)contextWillPresentSwipeUpContent:(id)arg1;
@property(readonly, copy, nonatomic) NSString *conversationId;
@property(readonly, copy, nonatomic) NSString *currentOperaPageId; // @synthesize currentOperaPageId=_currentOperaPageId;
@property(nonatomic) __weak id <SCBaseMediaOperaPresenterDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool didLeaveAppFromPlayer; // @synthesize didLeaveAppFromPlayer=_didLeaveAppFromPlayer;
- (void)dismiss;
- (_Bool)fullScreenIsShown;
- (id)init;
- (id)initWithDelegate:(id)arg1 userSession:(id)arg2 navigationDelegate:(id)arg3 snapchattersDataMutator:(id)arg4 usernameToSnapchatterFetcher:(id)arg5 groupSnapchatterRepository:(id)arg6;
@property(readonly, nonatomic) _Bool isDisplayingMedia; // @synthesize isDisplayingMedia=_isDisplayingMedia;
- (_Bool)isPlayingSnap;
@property(nonatomic) _Bool keepMuteOverrideOnDismiss; // @synthesize keepMuteOverrideOnDismiss=_keepMuteOverrideOnDismiss;
- (void)markStoryAsViewed;
@property(readonly, nonatomic) long long messageType; // @synthesize messageType=_messageType;
- (void)operaDataSource:(id)arg1 requestCallbackWhenViewModelConnectionIsStable:(CDUnknownBlockType)arg2;
- (void)operaDataSourceFoundNothingToDisplay:(id)arg1;
- (void)operaDataSourceReadyForPlayback:(id)arg1;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (void)prepareForContextPresentation:(id)arg1 snapWillBePartiallyVisible:(_Bool)arg2;
- (void)presentChatContentMedia:(id)arg1 messageId:(id)arg2 conversationId:(id)arg3 isGroupConversation:(_Bool)arg4 fromPresentingViewController:(id)arg5 fromView:(id)arg6 shouldDisplayCircleTransition:(_Bool)arg7;
- (void)presentDiscoveryMediaFromViewModel:(id)arg1 fromPresentingViewController:(id)arg2 fromView:(id)arg3 isV3Message:(_Bool)arg4;
- (void)presentGroupSnapStackForConversation:(id)arg1 isGroupConversation:(_Bool)arg2 fromPresentingViewController:(id)arg3 fromView:(id)arg4 fromSource:(long long)arg5 cellViewPosition:(long long)arg6;
- (void)presentMediaMessage:(id)arg1 conversationId:(id)arg2 isGroupConversation:(_Bool)arg3 fromPresentingViewController:(id)arg4 fromView:(id)arg5 startIndex:(unsigned long long)arg6 shouldDisplayCircleTransition:(_Bool)arg7 fromSource:(long long)arg8;
- (id)registeredEventsForOperaSession;
- (void)reportPageViewControllerDidCancelAtLevel:(unsigned long long)arg1 additionalData:(id)arg2;
- (void)reportPageViewControllerDidSubmitReport:(id)arg1 reasonId:(id)arg2 additionalData:(id)arg3;
- (void)reportSnapWithMessageId:(id)arg1 presentingViewController:(id)arg2;
- (void)updateFooterIfNecessary;
- (void)userDidScreenRecord;
- (void)userDidTakeScreenshot;
- (id)userSession;
- (void)viewWillEnterForeground:(id)arg1;
- (void)viewWillResignActive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

