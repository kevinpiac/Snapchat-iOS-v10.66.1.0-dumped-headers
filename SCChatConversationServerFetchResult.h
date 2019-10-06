//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCChatConversationV3;

@interface SCChatConversationServerFetchResult : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCChatConversationV3 *_success_conversation;
    NSString *_failure_conversationId;
}

+ (id)failureWithConversationId:(id)arg1;
+ (id)successWithConversation:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;

@end
