//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCognacAppViewLifeCycleListener-Protocol.h"
#import "SCCognacOperaSession-Protocol.h"
#import "SCCognacOperaSessionParticipantTracking-Protocol.h"
#import "SCOperaViewProvider-Protocol.h"
#import "SCOperaWebAppPresenceFrameProvider-Protocol.h"
#import "SCTCognacServices-Protocol.h"

@class NSDictionary, NSString, SCCognacAppViewLifeCycleListenerAnnouncer, SCCognacButtonTooltipController, SCCognacOperaDataSource, SCCognacOperaSessionParticipantTracker, SCQueuePerformer, UIView;
@protocol SCTCognacSession, SCTalkManager;

@interface SCCognacOperaTalkSession : NSObject <SCTCognacServices, SCOperaWebAppPresenceFrameProvider, SCCognacOperaSession, SCOperaViewProvider, SCCognacOperaSessionParticipantTracking, SCCognacAppViewLifeCycleListener>
{
    id <SCTalkManager> _talkManager;
    id <SCTCognacSession> _cognacTalkSession;
    UIView *_presenceBar;
    NSDictionary *_presenceViews;
    _Bool _isMessageServiceConnected;
    _Bool _isPublishingAudio;
    SCCognacOperaSessionParticipantTracker *_participantTracker;
    SCQueuePerformer *_performer;
    SCCognacButtonTooltipController *_tooltipController;
    double _audioDidStartTime;
    SCCognacAppViewLifeCycleListenerAnnouncer *_viewLifeCycleAnnouncer;
    SCCognacOperaDataSource *_dataSource;
}

+ (id)registeredEventsForOperaSession;
- (void).cxx_destruct;
- (void)_activateAndUpdateCognacTalkSession;
- (void)_createCognacTalkSession;
- (void)_fetchSnapchattersMetadata:(id)arg1 localUsername:(id)arg2 conversationId:(id)arg3 snapchatterService:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)_logEventWithEventName:(id)arg1 paramDict:(id)arg2;
- (void)_startPublishingAudioWithLogEvent:(_Bool)arg1;
- (void)_stopPublishingAudio;
- (void)_updateWithPresentUsers:(id)arg1 sortedPresentUsernames:(id)arg2;
- (void)attachPresenceBar:(id)arg1;
@property(nonatomic) double audioDidStartTime; // @synthesize audioDidStartTime=_audioDidStartTime;
- (void)cognacAppViewDidBecomeActive:(_Bool)arg1 event:(id)arg2;
- (void)cognacAppViewDidUpdateVolumeCategory:(id)arg1 damping:(_Bool)arg2;
@property(retain, nonatomic) SCCognacOperaDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)detachPresenceBar;
- (void)endSession;
- (void)handleAudioPublishStateChange:(_Bool)arg1 localSpeaking:(_Bool)arg2 remotePublished:(_Bool)arg3;
- (void)handleConnectivityChange:(_Bool)arg1;
- (void)handleMessage:(id)arg1 fromUser:(id)arg2;
- (void)handlePresencePositionChange:(id)arg1;
- (id)initWithTalkManager:(id)arg1;
- (void)logInGameChatSentEvent;
- (void)logVoicePartyEndEventIfNecessary;
- (void)logVoicePartyStartEvent;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)participantInfo;
- (void)pauseSession;
- (struct CGRect)presenceRectWithUsername:(id)arg1 containerView:(id)arg2;
- (id)registeredWVJBHandlerNameToHandler;
- (void)resumeSession;
@property(retain, nonatomic) SCCognacAppViewLifeCycleListenerAnnouncer *viewLifeCycleAnnouncer; // @synthesize viewLifeCycleAnnouncer=_viewLifeCycleAnnouncer;
- (void)startSession;
- (void)updateView:(id)arg1 withUpdatedProperties:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewForProperties:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

