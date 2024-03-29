//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCChatConversationV3, SCChatMessageV3;

@interface SCChatMergedMessageConversationResult : NSObject <NSCopying>
{
    SCChatMessageV3 *_updatedMessage;
    SCChatConversationV3 *_updatedConversation;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithUpdatedMessage:(id)arg1 updatedConversation:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCChatConversationV3 *updatedConversation; // @synthesize updatedConversation=_updatedConversation;
@property(readonly, copy, nonatomic) SCChatMessageV3 *updatedMessage; // @synthesize updatedMessage=_updatedMessage;

@end

