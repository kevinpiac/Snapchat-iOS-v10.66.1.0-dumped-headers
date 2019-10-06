//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDiscoverSessionLogging-Protocol.h"
#import "SCEventAnnouncing-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "SCOperaSession-Protocol.h"

@class CADisplayLink, NSArray, NSDictionary, NSMutableSet, NSNotificationCenter, NSSet, NSString, SCDiscoverChannel, SCDiscoverChunk, SCDiscoverEdition, SCDiscoverFeedMiniProfileHandler, SCDiscoverLogger, SCDiscoverOperaMediaManager, SCDiscoverOperaSessionLoggingContext, SCDiscoverRemoteVideoSession, SCDiscoverSharingSession, SCDiscoverSubscriptionSession, SCDiscoverUserProperties, SCEventListenerAnnouncer, SCOperaConfiguration, SCOperaContextLongformViewLogger, SCOperaEventListenerAnnouncer, SCOperaViewController, SCRequestManager, SCStopwatch, SCUserSession;
@protocol NavigationDelegate, SCOperaPlaylistItemController, SCOperaSubscribeActionHandler;

@interface SCSingleDiscoverEditionSession : NSObject <SCOperaSession, SCEventListener, SCEventAnnouncing, SCDiscoverSessionLogging>
{
    SCDiscoverLogger *_logger;
    SCOperaContextLongformViewLogger *_operaLongformLogger;
    SCDiscoverSubscriptionSession *_subscriptionSession;
    SCDiscoverRemoteVideoSession *_remoteVideoSession;
    SCDiscoverUserProperties *_discoverUserProperties;
    SCUserSession *_userSession;
    SCRequestManager *_requestManager;
    NSNotificationCenter *_notificationCenter;
    SCOperaEventListenerAnnouncer *_eventAnnouncer;
    SCOperaViewController *_operaViewController;
    id <SCOperaPlaylistItemController> _playlistItemController;
    SCOperaConfiguration *_operaConfiguration;
    id <SCOperaSubscribeActionHandler> _subscribeActionHandler;
    SCDiscoverFeedMiniProfileHandler *_miniProfileHandler;
    SCDiscoverOperaMediaManager *_mediaManager;
    id <NavigationDelegate> _navigationDelegate;
    SCStopwatch *_sessionStopwatch;
    NSSet *_longformViewed;
    NSSet *_loadingScreensViewed;
    NSDictionary *_currentPageContext;
    SCStopwatch *_pageViewStopwatch;
    CADisplayLink *_foregroundDisplayLink;
    _Bool _didShowTapTooltipsWhenUserTapLeftForFirstTime;
    _Bool _editionInitialViewedState;
    NSMutableSet *_dSnapIdsEnabledSkipping;
    _Bool _shouldShowTapToolTipsForCurrentPage;
    _Bool _isShowingOptOutInterstitial;
    _Bool _isShowProfilePresented;
    _Bool _areSubtitlesAvailable;
    _Bool _isShownWithSubtitles;
    SCEventListenerAnnouncer *_searchEventAnnouncer;
    NSString *_sessionID;
    SCDiscoverOperaSessionLoggingContext *_loggingContext;
    double _sessionTimeViewedSec;
    unsigned long long _channelIndex;
    NSString *_sortOrderId;
    unsigned long long _context;
    NSString *_deepLinkId;
    NSSet *_topSnapsViewed;
    SCDiscoverEdition *_edition;
    SCDiscoverChannel *_channel;
    NSArray *_adChunks;
    long long _autoAdvanceIndex;
    SCDiscoverSharingSession *_sharingSession;
    SCDiscoverChunk *_currentChunk;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (id)_currentPlaylistItemFromContext:(id)arg1;
- (void)_endViewWithContext:(id)arg1 params:(id)arg2;
- (void)_fetchCatalogForEdition;
- (void)_fetchMediaIfNecessary;
- (void)_fetchMediaIfNecessaryFromNotification;
- (_Bool)_isLoadingWithContext:(id)arg1;
- (void)_logAdOpportunityMissDueToPendingRequestIfNecessaryWithContext:(id)arg1;
- (void)_logDiscoverTopSnapViewWithContext:(id)arg1 params:(id)arg2 isImage:(_Bool)arg3;
- (void)_logEditionView;
- (void)_logLoadedDsnapWaitTimeForCurrentChunk;
- (void)_logLoadingDsnapWaitTimeForCurrentChunk;
- (void)_logLocalWebpageViewWithContext:(id)arg1 params:(id)arg2;
- (void)_logLongformCameraViewWithContext:(id)arg1 params:(id)arg2;
- (void)_logLongformVideoViewWithContext:(id)arg1 params:(id)arg2;
- (void)_logProductViewWithContext:(id)arg1 params:(id)arg2;
- (void)_logRemoteWebpageViewWithContext:(id)arg1 params:(id)arg2;
- (void)_logStartPlayingEdition;
- (void)_logStoreViewWithContext:(id)arg1 params:(id)arg2;
- (void)_logSubscriptionLongformWithContext:(id)arg1 params:(id)arg2;
- (void)_logTopSnapVideoStreamingWithContext:(id)arg1 params:(id)arg2;
- (void)_onOpenViewEventWithContext:(id)arg1;
- (void)_setupSubSessions;
- (void)_showTapTooltipsForCurrentPageWithId:(id)arg1;
- (void)_startSessionTimer;
- (void)_startViewWithContext:(id)arg1 logWaitTime:(_Bool)arg2;
@property(readonly, nonatomic) long long actionMenuEntryEvent;
@property(readonly, copy, nonatomic) NSArray *adChunks; // @synthesize adChunks=_adChunks;
- (void)addListener:(id)arg1;
- (_Bool)areSubtitlesAvailable;
@property(readonly, nonatomic) long long autoAdvanceIndex; // @synthesize autoAdvanceIndex=_autoAdvanceIndex;
- (_Bool)becameFullyViewed;
- (void)beginViewingEdition;
@property(readonly, nonatomic) SCDiscoverChannel *channel; // @synthesize channel=_channel;
@property(readonly, nonatomic) unsigned long long channelIndex; // @synthesize channelIndex=_channelIndex;
@property(readonly, copy, nonatomic) NSArray *chunks;
- (void)clearEventAnnouncer;
@property(readonly, nonatomic) unsigned long long context; // @synthesize context=_context;
@property(readonly, nonatomic) SCDiscoverChunk *currentChunk; // @synthesize currentChunk=_currentChunk;
- (id)currentDSnapId;
- (id)currentLongformVideoId;
- (unsigned long long)currentSnapIndexPos;
- (void)dealloc;
@property(readonly, copy, nonatomic) NSString *deepLinkId; // @synthesize deepLinkId=_deepLinkId;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
@property(readonly, nonatomic) SCDiscoverEdition *edition; // @synthesize edition=_edition;
@property(readonly, copy, nonatomic) NSString *editionId;
@property(readonly, copy, nonatomic) NSString *editionVersion;
- (void)endSession;
- (void)extraPropertiesForChunk:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)hasBeenFullyViewed;
- (_Bool)hasEdition;
- (unsigned long long)indexOfChunk:(id)arg1;
- (id)initWithEventAnnouncer:(id)arg1 edition:(id)arg2 context:(unsigned long long)arg3 channelIndex:(unsigned long long)arg4 sortOrderId:(id)arg5 discoverUserProperties:(id)arg6 userSession:(id)arg7 operaViewController:(id)arg8 operaConfiguration:(id)arg9 playlistItemController:(id)arg10 loggingContext:(id)arg11 deepLinkId:(id)arg12 startWithOpenViewContext:(id)arg13 subscribeActionHandler:(id)arg14 miniProfileHandler:(id)arg15 mediaManager:(id)arg16 navigationDelegate:(id)arg17;
- (id)initWithEventAnnouncer:(id)arg1 edition:(id)arg2 context:(unsigned long long)arg3 channelIndex:(unsigned long long)arg4 sortOrderId:(id)arg5 discoverUserProperties:(id)arg6 userSession:(id)arg7 operaViewController:(id)arg8 operaConfiguration:(id)arg9 sessionStopwatch:(id)arg10 pageViewStopwatch:(id)arg11 subscriptionSession:(id)arg12 remoteVideoSession:(id)arg13 sharingSession:(id)arg14 logger:(id)arg15 operaLongformLogger:(id)arg16 requestManager:(id)arg17 notificationCenter:(id)arg18 playlistItemController:(id)arg19 loggingContext:(id)arg20 deepLinkId:(id)arg21 startWithOpenViewContext:(id)arg22 subscribeActionHandler:(id)arg23 miniProfileHandler:(id)arg24 mediaManager:(id)arg25 navigationDelegate:(id)arg26;
- (_Bool)isShownWithSubtitles;
- (_Bool)isSubscribed;
- (_Bool)isViewingAd;
- (_Bool)isViewingArchivedEdition;
- (_Bool)isViewingLocalWebpage;
- (_Bool)isViewingLongform;
- (_Bool)isViewingLongformVideo;
- (_Bool)isViewingRemoteWebpage;
- (_Bool)isViewingStore;
- (_Bool)isViewingSubscriptionDSnap;
- (_Bool)isViewingSubscriptionLongform;
- (_Bool)isViewingTopSnap;
- (_Bool)isViewingTopSnapImage;
- (_Bool)isViewingTopSnapRemoteWebpage;
- (_Bool)isViewingTopSnapVideo;
- (id)lastInteraction;
@property(readonly, nonatomic) SCDiscoverOperaSessionLoggingContext *loggingContext; // @synthesize loggingContext=_loggingContext;
- (unsigned long long)numLoadingScreensViewed;
- (unsigned long long)numLongformViewed;
@property(readonly, nonatomic) unsigned long long numSnaps;
- (unsigned long long)numTopSnapsViewed;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (double)pageTimeViewedSec;
@property(readonly, copy, nonatomic) NSString *publisherId;
- (id)registeredEventsForOperaSession;
- (void)removeListener:(id)arg1;
@property(readonly, copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) double sessionTimeViewedSec; // @synthesize sessionTimeViewedSec=_sessionTimeViewedSec;
@property(readonly, nonatomic) SCDiscoverSharingSession *sharingSession; // @synthesize sharingSession=_sharingSession;
@property(readonly, nonatomic) long long sharingState;
- (_Bool)shouldHandleEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
@property(readonly, copy, nonatomic) NSString *sortOrderId; // @synthesize sortOrderId=_sortOrderId;
- (void)teardown;
@property(readonly, nonatomic) NSSet *topSnapsViewed; // @synthesize topSnapsViewed=_topSnapsViewed;
- (void)userDidTakeScreenshot;
- (void)viewWillEnterForeground;
- (_Bool)wasFullyViewed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
