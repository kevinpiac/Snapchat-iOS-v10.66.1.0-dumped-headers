//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying-Protocol.h"

@class NSString, SCProfileChatAttachmentInfoDataModel, SCProfileChatAttachmentSnapchatterDataModel;

@interface SCProfileChatAttachmentDataModel : SCDocObject <NSCopying>
{
    NSString *_ownerId;
    NSString *_chatAttachmentId;
    unsigned long long _expirationTimestamp;
    NSString *_messageId;
    long long _type;
    NSString *_senderUsername;
    NSString *_conversationId;
    unsigned long long _messageTimeStamp;
    SCProfileChatAttachmentSnapchatterDataModel *_snapchatter;
    SCProfileChatAttachmentInfoDataModel *_info;
}

+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (const char *)table;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *chatAttachmentId; // @synthesize chatAttachmentId=_chatAttachmentId;
@property(readonly, copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned long long expirationTimestamp; // @synthesize expirationTimestamp=_expirationTimestamp;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) SCProfileChatAttachmentInfoDataModel *info; // @synthesize info=_info;
- (id)initWithOwnerId:(id)arg1 chatAttachmentId:(id)arg2 expirationTimestamp:(unsigned long long)arg3 messageId:(id)arg4 type:(long long)arg5 senderUsername:(id)arg6 conversationId:(id)arg7 messageTimeStamp:(unsigned long long)arg8 snapchatter:(id)arg9 info:(id)arg10;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(readonly, nonatomic) unsigned long long messageTimeStamp; // @synthesize messageTimeStamp=_messageTimeStamp;
@property(readonly, copy, nonatomic) NSString *ownerId; // @synthesize ownerId=_ownerId;
@property(readonly, copy, nonatomic) NSString *senderUsername; // @synthesize senderUsername=_senderUsername;
@property(readonly, copy, nonatomic) SCProfileChatAttachmentSnapchatterDataModel *snapchatter; // @synthesize snapchatter=_snapchatter;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;

@end

