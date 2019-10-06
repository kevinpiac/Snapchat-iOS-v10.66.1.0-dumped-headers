//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDictionary, SCChatDraft;

@interface SCChatConversationMetadata : NSObject <NSCopying, NSCoding>
{
    NSDictionary *_messageMetadata;
    SCChatDraft *_chatDraft;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCChatDraft *chatDraft; // @synthesize chatDraft=_chatDraft;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessageMetadata:(id)arg1 chatDraft:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)loadedMediaIds;
@property(readonly, copy, nonatomic) NSDictionary *messageMetadata; // @synthesize messageMetadata=_messageMetadata;

@end
