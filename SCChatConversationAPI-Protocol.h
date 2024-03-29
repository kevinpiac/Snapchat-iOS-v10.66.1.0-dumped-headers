//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData, NSDictionary, NSNumber, NSObject, NSString, SCRequest;
@protocol OS_dispatch_queue;

@protocol SCChatConversationAPI
- (SCRequest *)clearConversationForConversationId:(NSString *)arg1 successBlock:(void (^)(NSHTTPURLResponse *, id))arg2 failureBlock:(void (^)(NSHTTPURLResponse *, NSError *))arg3;
- (SCRequest *)clearGroupConversationForConversationId:(NSString *)arg1 successBlock:(void (^)(NSHTTPURLResponse *, id))arg2 failureBlock:(void (^)(NSHTTPURLResponse *, NSError *))arg3;
- (SCRequest *)fetchGatewayAuthTokenWithSuccessBlock:(void (^)(NSHTTPURLResponse *, NSDictionary *))arg1 failureBlock:(void (^)(NSHTTPURLResponse *, NSError *))arg2;
- (SCRequest *)modifyMessageRetentionPolicyForConversationId:(NSString *)arg1 retentionInMinutes:(unsigned long long)arg2 successBlock:(void (^)(NSHTTPURLResponse *, id))arg3 failureBlock:(void (^)(NSHTTPURLResponse *, NSError *))arg4;
- (SCRequest *)sendTypingNotificationToGroupConversation:(NSString *)arg1 sequenceNumbers:(NSDictionary *)arg2 successBlock:(void (^)(NSHTTPURLResponse *, id))arg3 failureBlock:(void (^)(NSHTTPURLResponse *, NSError *))arg4;
- (SCRequest *)sendTypingNotificationToRecipient:(NSString *)arg1 sequenceNumbers:(NSDictionary *)arg2 successBlock:(void (^)(NSHTTPURLResponse *, id))arg3 failureBlock:(void (^)(NSHTTPURLResponse *, NSError *))arg4;
- (SCRequest *)updateCognacNotificationStatus:(_Bool)arg1 conversationId:(NSString *)arg2 successBlock:(void (^)(NSHTTPURLResponse *, id))arg3 failureBlock:(void (^)(NSHTTPURLResponse *, NSError *))arg4 callbackQueue:(NSObject<OS_dispatch_queue> *)arg5;
- (SCRequest *)uploadChatMediaWithIdentifier:(NSString *)arg1 type:(NSString *)arg2 recipient:(NSString *)arg3 conversationId:(NSString *)arg4 sourceId:(NSString *)arg5 isZipped:(NSNumber *)arg6 data:(NSData *)arg7 callbackQueue:(NSObject<OS_dispatch_queue> *)arg8 successBlock:(void (^)(NSHTTPURLResponse *, id))arg9 failureBlock:(void (^)(NSHTTPURLResponse *, NSError *))arg10;
@end

