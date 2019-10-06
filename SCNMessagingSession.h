//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCNMessagingSession : NSObject
{
    struct Handle<std::__1::shared_ptr<snap::messaging::Session>, std::__1::shared_ptr<snap::messaging::Session>> _cppRefHandle;
}

+ (id)create:(id)arg1 keyProvider:(id)arg2 sessionDelegate:(id)arg3 conversationManagerDelegate:(id)arg4 feedManagerDelegate:(id)arg5 notificationsDelegate:(id)arg6 uploadDelegate:(id)arg7 queue:(id)arg8 taskQueueListenerDelegate:(id)arg9;
+ (id)defaultMessagingServiceParameters:(id)arg1 userAgentPrefix:(id)arg2;
+ (id)defaultStreamingServiceParameters:(id)arg1 userAgentPrefix:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)appStateChanged:(long long)arg1;
- (void)dispose;
- (id)getConversationManager;
- (id)getFeedManager;
- (long long)getNetworkResourceStatus;
- (id)initWithCpp:(const shared_ptr_dbc838bb *)arg1;
- (void)reachabilityChanged:(_Bool)arg1;
- (void)setDebugMode:(_Bool)arg1;

@end
