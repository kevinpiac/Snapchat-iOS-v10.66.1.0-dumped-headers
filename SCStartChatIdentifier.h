//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCStartChatIdentifier : NSObject <NSCopying>
{
    unsigned long long _subtype;
    NSString *_oneOnOneConversation_username;
    NSString *_groupConversation_conversationId;
    NSString *_arroyoOneOnOneConversation_conversationId;
    NSString *_arroyoOneOnOneConversation_userId;
}

+ (id)arroyoOneOnOneConversationWithConversationId:(id)arg1 userId:(id)arg2;
+ (id)groupConversationWithConversationId:(id)arg1;
+ (id)oneOnOneConversationWithUsername:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchOneOnOneConversation:(CDUnknownBlockType)arg1 groupConversation:(CDUnknownBlockType)arg2 arroyoOneOnOneConversation:(CDUnknownBlockType)arg3;

@end

