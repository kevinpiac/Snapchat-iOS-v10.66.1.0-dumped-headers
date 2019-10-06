//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSString, SCProfileChatMediaGeneralMediaDataModel;

@interface SCProfileChatMediaDataModel : SCDocObject <NSCopying>
{
    BOOL _messageType;
    _Bool _isGroupMessage;
    int _senderChatSequenceNumber;
    NSString *_ownerId;
    NSString *_chatMediaId;
    unsigned long long _expirationTimestamp;
    NSString *_messageId;
    long long _type;
    NSString *_senderUsername;
    NSString *_conversationId;
    unsigned long long _sequenceNumber;
    unsigned long long _messageTimeStamp;
    SCProfileChatMediaGeneralMediaDataModel *_generalMedia;
    NSArray *_memoryStories;
    NSArray *_savedStates;
    NSArray *_mediaCardAttributes;
    NSArray *_mentions;
    unsigned long long _retentionInMinutes;
}

+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (const char *)table;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *chatMediaId; // @synthesize chatMediaId=_chatMediaId;
@property(readonly, copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned long long expirationTimestamp; // @synthesize expirationTimestamp=_expirationTimestamp;
@property(readonly, copy, nonatomic) SCProfileChatMediaGeneralMediaDataModel *generalMedia; // @synthesize generalMedia=_generalMedia;
- (unsigned long long)hash;
- (id)initWithOwnerId:(id)arg1 chatMediaId:(id)arg2 expirationTimestamp:(unsigned long long)arg3 messageId:(id)arg4 type:(long long)arg5 senderUsername:(id)arg6 conversationId:(id)arg7 sequenceNumber:(unsigned long long)arg8 messageTimeStamp:(unsigned long long)arg9 generalMedia:(id)arg10 memoryStories:(id)arg11 savedStates:(id)arg12 messageType:(BOOL)arg13 mediaCardAttributes:(id)arg14 isGroupMessage:(_Bool)arg15 mentions:(id)arg16 retentionInMinutes:(unsigned long long)arg17 senderChatSequenceNumber:(int)arg18;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isGroupMessage; // @synthesize isGroupMessage=_isGroupMessage;
@property(readonly, copy, nonatomic) NSArray *mediaCardAttributes; // @synthesize mediaCardAttributes=_mediaCardAttributes;
@property(readonly, copy, nonatomic) NSArray *memoryStories; // @synthesize memoryStories=_memoryStories;
@property(readonly, copy, nonatomic) NSArray *mentions; // @synthesize mentions=_mentions;
@property(readonly, copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(readonly, nonatomic) unsigned long long messageTimeStamp; // @synthesize messageTimeStamp=_messageTimeStamp;
@property(readonly, nonatomic) BOOL messageType; // @synthesize messageType=_messageType;
@property(readonly, copy, nonatomic) NSString *ownerId; // @synthesize ownerId=_ownerId;
@property(readonly, nonatomic) unsigned long long retentionInMinutes; // @synthesize retentionInMinutes=_retentionInMinutes;
@property(readonly, copy, nonatomic) NSArray *savedStates; // @synthesize savedStates=_savedStates;
@property(readonly, nonatomic) int senderChatSequenceNumber; // @synthesize senderChatSequenceNumber=_senderChatSequenceNumber;
@property(readonly, copy, nonatomic) NSString *senderUsername; // @synthesize senderUsername=_senderUsername;
@property(readonly, nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;

@end

