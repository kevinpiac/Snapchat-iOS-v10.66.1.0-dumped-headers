//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSDictionary, SCFriendsFeedArroyoUpdateDataRequest;

@protocol SCChatConversationBatchFetching
- (void)batchFetchConversationsFromServerByIds:(NSArray *)arg1;
- (void)batchFetchConversationsWithV3ActiveMessageData:(NSDictionary *)arg1 arroyoActiveMessageData:(NSDictionary *)arg2 forDataRequest:(SCFriendsFeedArroyoUpdateDataRequest *)arg3;
@end

