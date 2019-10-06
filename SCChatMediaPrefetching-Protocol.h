//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, SCChatMessageMetadata, SCChatMessageV3;

@protocol SCChatMediaPrefetching <NSObject>
- (void)performPrefetchIfNecessaryForConversationIds:(NSArray *)arg1;
- (void)prefetchMessageContent:(SCChatMessageV3 *)arg1 messageMetadata:(SCChatMessageMetadata *)arg2;
- (_Bool)shouldPrefetchExpensiveContent;
@end
