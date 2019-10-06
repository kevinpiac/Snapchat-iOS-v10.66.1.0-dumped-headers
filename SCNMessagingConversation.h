//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString, SCNMessagingConversationRetentionPolicy, SCNMessagingUUID;

@interface SCNMessagingConversation : NSObject <NSCopying>
{
    SCNMessagingUUID *_conversationId;
    NSString *_title;
    NSArray *_participants;
    SCNMessagingConversationRetentionPolicy *_retentionPolicy;
    long long _conversationType;
}

+ (id)ConversationWithConversationId:(id)arg1 title:(id)arg2 participants:(id)arg3 retentionPolicy:(id)arg4 conversationType:(long long)arg5;
- (void).cxx_destruct;
@property(readonly, nonatomic) SCNMessagingUUID *conversationId; // @synthesize conversationId=_conversationId;
@property(readonly, nonatomic) long long conversationType; // @synthesize conversationType=_conversationType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithConversationId:(id)arg1 title:(id)arg2 participants:(id)arg3 retentionPolicy:(id)arg4 conversationType:(long long)arg5;
@property(readonly, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(readonly, nonatomic) SCNMessagingConversationRetentionPolicy *retentionPolicy; // @synthesize retentionPolicy=_retentionPolicy;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;

@end
