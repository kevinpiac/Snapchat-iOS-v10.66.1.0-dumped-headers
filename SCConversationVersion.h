//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDictionary;

@interface SCConversationVersion : NSObject <NSCopying, NSCoding>
{
    unsigned long long _subtype;
    NSDictionary *_oneOnOneConversation_chatSequenceNumbers;
    NSDictionary *_oneOnOneConversation_updateSequenceNumbers;
    NSDictionary *_groupConversation_knownChatSequenceNumbers;
}

+ (id)groupConversationWithKnownChatSequenceNumbers:(id)arg1;
+ (id)oneOnOneConversationWithChatSequenceNumbers:(id)arg1 updateSequenceNumbers:(id)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchOneOnOneConversation:(CDUnknownBlockType)arg1 groupConversation:(CDUnknownBlockType)arg2;

@end

