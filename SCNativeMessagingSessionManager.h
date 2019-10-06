//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNMessagingSessionDelegate-Protocol.h"
#import "SCNMessagingUploadDelegate-Protocol.h"
#import "SCNativeMessagingSessionManaging-Protocol.h"
#import "SCNetworkConnectivityListener-Protocol.h"

@class NSString, SCArroyoConversationDataUpdateAnnouncer, SCArroyoFeedDataUpdateAnnouncer, SCArroyoNotificationsDelegateAdaptor, SCLazy, SCNMessagingSession, SCNMessagingSessionParameters, SCNativeFeedManager, SCPreferences, SCUserSession;
@protocol SCNGrpcAuthContextDelegate, SCNMessagingKeyProvider, SCNMessagingUploadDelegate;

@interface SCNativeMessagingSessionManager : NSObject <SCNMessagingSessionDelegate, SCNMessagingUploadDelegate, SCNetworkConnectivityListener, SCNativeMessagingSessionManaging>
{
    SCNMessagingSessionParameters *_nativeSessionParams;
    id <SCNMessagingKeyProvider> _keyProvider;
    SCLazy *_friendsFeedReadyLogger;
    SCLazy *_ghostToFeedLogger;
    SCNMessagingSession *_nativeSession;
    SCArroyoConversationDataUpdateAnnouncer *_conversationDataUpdateAnnouncer;
    SCArroyoFeedDataUpdateAnnouncer *_feedDataUpdateAnnouncer;
    SCArroyoNotificationsDelegateAdaptor *_notificationsDelegateAdaptor;
    SCUserSession *_userSession;
    SCPreferences *_userPreferences;
    SCNativeFeedManager *_feedManager;
    id <SCNGrpcAuthContextDelegate> _authContextDelegateImpl;
    id <SCNMessagingUploadDelegate> _uploadDelegateImpl;
}

- (void).cxx_destruct;
- (id)conversationDataUpdateAnnouncer;
- (void)createSession;
- (void)dealloc;
- (void)dispose;
- (void)endSession;
- (id)getAuthContextDelegate;
- (id)getFeedManager;
- (id)getNativeConversationManager;
- (id)getNativeSession;
- (id)initWithUserSession:(id)arg1 keyProvider:(id)arg2 friendsFeedReadyLogger:(id)arg3 ghostToFeedLogger:(id)arg4 uploadDelegate:(id)arg5;
- (void)networkConnectivityStatusDidChange:(long long)arg1;
- (void)onConnectionStateChanged:(long long)arg1;
- (void)setNotificationsDelegate:(id)arg1;
- (void)uploadMedia:(id)arg1 callback:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
