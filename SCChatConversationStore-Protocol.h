//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol SCChatConversationStore
- (void)clear;
- (void)clearConversationById:(NSString *)arg1;
- (void)getConversationById:(NSString *)arg1 withCompletionHandler:(void (^)(SCChatConversationV3 *, long long))arg2;
- (void)prefetchConversationById:(NSString *)arg1;
@end

