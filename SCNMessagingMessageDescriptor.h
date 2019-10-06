//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, SCNMessagingUUID;

@interface SCNMessagingMessageDescriptor : NSObject
{
    SCNMessagingUUID *_conversationId;
    NSNumber *_messageId;
    NSNumber *_clientResolutionId;
}

+ (id)MessageDescriptorWithConversationId:(id)arg1 messageId:(id)arg2 clientResolutionId:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *clientResolutionId; // @synthesize clientResolutionId=_clientResolutionId;
@property(readonly, nonatomic) SCNMessagingUUID *conversationId; // @synthesize conversationId=_conversationId;
- (id)description;
- (id)initWithConversationId:(id)arg1 messageId:(id)arg2 clientResolutionId:(id)arg3;
@property(readonly, nonatomic) NSNumber *messageId; // @synthesize messageId=_messageId;

@end
