//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCNMessagingUUID;

@interface SCNMessagingServerConversationIdentifier : NSObject
{
    SCNMessagingUUID *_serverConversationId;
}

+ (id)ServerConversationIdentifierWithServerConversationId:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithServerConversationId:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) SCNMessagingUUID *serverConversationId; // @synthesize serverConversationId=_serverConversationId;

@end

