//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUChatConversationActionRequest-Protocol.h"

@class NSNumber, NSString;

@interface SOJUChatConversationActionRequest : NSObject <SOJUChatConversationActionRequest>
{
    NSString *_timestamp;
    NSString *_reqToken;
    NSString *_username;
    NSString *_conversationId;
    NSString *_action;
    NSNumber *_enabled;
    NSNumber *_messageRetentionInMinutes;
    NSNumber *_muteCognacNotification;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(readonly, copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSNumber *enabled; // @synthesize enabled=_enabled;
- (_Bool)enabledValue;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithTimestamp:(id)arg1 reqToken:(id)arg2 username:(id)arg3 conversationId:(id)arg4 action:(id)arg5 enabled:(id)arg6 messageRetentionInMinutes:(id)arg7 muteCognacNotification:(id)arg8;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *messageRetentionInMinutes; // @synthesize messageRetentionInMinutes=_messageRetentionInMinutes;
- (long long)messageRetentionInMinutesValue;
@property(readonly, copy, nonatomic) NSNumber *muteCognacNotification; // @synthesize muteCognacNotification=_muteCognacNotification;
- (_Bool)muteCognacNotificationValue;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSString *reqToken; // @synthesize reqToken=_reqToken;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

