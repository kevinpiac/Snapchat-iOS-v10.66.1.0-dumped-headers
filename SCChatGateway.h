//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCPSessionDelegate-Protocol.h"
#import "SCChatMessageReceiver-Protocol.h"
#import "SCChatSenderDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSDate, NSString, SCCPSession, SCCPSessionDataStore, SCChatMessageReceiveListenerAnnouncer, SCChatSender, SCExperimentContext;

@interface SCChatGateway : NSObject <SCCPSessionDelegate, SCChatSenderDelegate, SCTraceEnabled, SCChatMessageReceiver>
{
    SCChatMessageReceiveListenerAnnouncer *_receiveAnnouncer;
    unsigned long long numberOfRetries;
    _Bool _sendingChatBatch;
    SCChatSender *_chatSender;
    SCExperimentContext *_networkPingIntervalExpContext;
    SCCPSessionDataStore *_sessionDataStore;
    SCCPSession *_sccpSession;
    double _sccpDisconnectTime;
    NSDate *_lastGatewayInfoUpdateFailureDate;
    unsigned long long _gatewaySessionsEstablished;
}

+ (double)SCMessageGatewayDNSCacheTTL;
+ (id)shared;
- (void).cxx_destruct;
- (id)_connectDictionary:(id)arg1;
- (void)_handleMischiefSojuResponses:(id)arg1 chatSOJUResponses:(id)arg2 fetchContext:(id)arg3;
- (_Bool)_shouldReestablishTheConnectionForDatastore:(id)arg1;
- (void)addReceiveListener:(id)arg1;
- (void)appWillSuspend;
@property(retain, nonatomic) SCChatSender *chatSender; // @synthesize chatSender=_chatSender;
- (id)debugInfo;
@property(readonly, copy) NSString *description;
- (id)diagnosticSCCPState;
- (void)didEndSessionWithError:(id)arg1;
- (void)didEnterBackground;
- (void)didEnterChat;
- (void)didEnterFeed;
- (void)didFailToStartSessionWithError:(id)arg1 updatedServerInfo:(id)arg2 gatewayReachable:(_Bool)arg3 triggerSource:(long long)arg4;
- (void)didReceiveJSONDictionary:(id)arg1;
- (void)didStartSession:(id)arg1 triggerSource:(long long)arg2;
- (void)didUpdateSCCPDataStore;
- (void)fetchGatewayInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) unsigned long long gatewaySessionsEstablished; // @synthesize gatewaySessionsEstablished=_gatewaySessionsEstablished;
- (void)handleMischiefSojuResponses:(id)arg1 chatSOJUResponses:(id)arg2 fetchContext:(id)arg3;
- (id)init;
- (_Bool)isConnected;
- (_Bool)isDNSCacheEnabled;
- (_Bool)isSCCPSessionConnected;
@property(retain, nonatomic) NSDate *lastGatewayInfoUpdateFailureDate; // @synthesize lastGatewayInfoUpdateFailureDate=_lastGatewayInfoUpdateFailureDate;
- (void)logSendAttempt;
@property(retain, nonatomic) SCExperimentContext *networkPingIntervalExpContext; // @synthesize networkPingIntervalExpContext=_networkPingIntervalExpContext;
- (void)onPackageReceived:(id)arg1 recipient:(id)arg2 packageId:(id)arg3 pkg:(id)arg4;
- (id)performer;
- (void)removeReceiveListener:(id)arg1;
@property(nonatomic) double sccpDisconnectTime; // @synthesize sccpDisconnectTime=_sccpDisconnectTime;
@property(retain, nonatomic) SCCPSession *sccpSession; // @synthesize sccpSession=_sccpSession;
@property(nonatomic) _Bool sendingChatBatch; // @synthesize sendingChatBatch=_sendingChatBatch;
@property(retain, nonatomic) SCCPSessionDataStore *sessionDataStore; // @synthesize sessionDataStore=_sessionDataStore;
- (void)tearDownSCCPSession;
- (void)triggerStartSCCPSession:(long long)arg1;
- (void)userDidLogout;
- (void)willEnterForeground;
- (void)writeConversationMessage:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)writeDataWithLengthPrefix:(id)arg1 withTimeout:(double)arg2 tag:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

