//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData, NSString, TCV3ConversationCtx;
@protocol TCV3CompletionHandler;

@protocol TCV3CognacSessionDelegate
- (TCV3ConversationCtx *)getConversationCtx;
- (void)onConnectivityChanged;
- (void)onMessage:(NSString *)arg1 message:(NSData *)arg2;
- (void)onStateChanged;
- (void)refreshAuth:(id <TCV3CompletionHandler>)arg1;
@end

