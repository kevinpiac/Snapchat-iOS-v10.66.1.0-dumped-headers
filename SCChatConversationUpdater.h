//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinatorListener-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSMutableDictionary, NSString, SCChatActiveConversationData, SCChatAnimationDataCoordinator, SCChatConversationUpdaterListenerAnnouncer, SCChatConversationViewModelV3, SCChatSendBlockAssigner, SCExperimentManager, SCLazy, SCQueuePerformer;
@protocol SCChatExternalAPIProvider, SCChatMessageViewModelFactory, SCGroupManager;

@interface SCChatConversationUpdater : NSObject <SCTraceEnabled, SCDataCoordinatorListener>
{
    SCChatConversationUpdaterListenerAnnouncer *_announcer;
    SCQueuePerformer *_schedulingPerformer;
    SCQueuePerformer *_viewModelGenerationPerformer;
    SCChatSendBlockAssigner *_blockAssigner;
    SCChatAnimationDataCoordinator *_animationDataCoordinator;
    SCExperimentManager *_experimentManager;
    NSString *_activeConversationId;
    CDUnknownBlockType _pendingRenderBlock;
    NSString *_currentUpdateToken;
    NSMutableDictionary *_conversationSnapshotViewModels;
    NSString *_username;
    NSString *_userId;
    id <SCGroupManager> _groupManager;
    id <SCChatExternalAPIProvider> _provider;
    id <SCChatMessageViewModelFactory> _messageViewModelFactory;
    SCLazy *_arroyoConversationIdsManager;
    NSString *_failedFetchConversationId;
    SCChatConversationViewModelV3 *_conversationViewModel;
    SCChatActiveConversationData *_activeConversationData;
    double _lastUpdateTime;
    unsigned long long _numberOfMessagesFromLastUpdate;
}

+ (void)addViewModel:(id)arg1 toArray:(id)arg2 updateCount:(id)arg3;
- (void).cxx_destruct;
- (void)_cancelCurrentUpdateBlockIfNecessaryForIncomingToken:(id)arg1;
- (double)_delayForUpdate;
- (void)_handleAnimationUpdateRequestWithToken:(id)arg1;
- (void)_logNewViewModels:(id)arg1 messageTypes:(id)arg2;
- (id)_regularViewModelWithMessage:(id)arg1 previousMessage:(id)arg2 previousViewModel:(id)arg3 messageGroup:(id)arg4 currentTime:(id)arg5 conversation:(id)arg6 messageMetadataDictionary:(id)arg7 group:(id)arg8 snapshotViewModel:(id)arg9 parsingData:(id)arg10 messageAnimationData:(id)arg11 blockInfo:(id)arg12 miniThumbnailImages:(id)arg13 snapchattersData:(id)arg14 isGroupInviteChat:(_Bool)arg15;
- (void)_scheduleConversationUpdateWithToken:(id)arg1;
- (void)_unsetActiveConversation:(id)arg1 token:(id)arg2;
- (id)_viewModelForConversation:(id)arg1 metadata:(id)arg2 group:(id)arg3 withSnapshotViewModel:(id)arg4 storiesSummaryInfo:(id)arg5 blockInfo:(id)arg6 animationData:(id)arg7 miniThumbnailImages:(id)arg8 snapchattersData:(id)arg9;
@property(retain) SCChatActiveConversationData *activeConversationData; // @synthesize activeConversationData=_activeConversationData;
- (_Bool)activeConversationHasUnreadMessage;
- (id)activeConversationId;
- (void)addListener:(id)arg1;
- (void)clear;
- (void)configureWithExternalAPIProvider:(id)arg1 username:(id)arg2 userId:(id)arg3 groupManager:(id)arg4 messageViewModelFactory:(id)arg5 blockAssigner:(id)arg6 animationDataCoordinator:(id)arg7 arroyoConversationIdsManager:(id)arg8 experimentManager:(id)arg9;
- (void)conversationFetchDidFailForConversationId:(id)arg1;
@property(retain) SCChatConversationViewModelV3 *conversationViewModel; // @synthesize conversationViewModel=_conversationViewModel;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (id)init;
@property double lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property unsigned long long numberOfMessagesFromLastUpdate; // @synthesize numberOfMessagesFromLastUpdate=_numberOfMessagesFromLastUpdate;
- (void)removeListener:(id)arg1;
- (void)unsetActiveConversation:(id)arg1 token:(id)arg2;
- (void)updateWithNewViewModel:(id)arg1 token:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

