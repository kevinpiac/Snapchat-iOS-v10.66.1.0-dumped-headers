//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDocObjectChangeRequest-Protocol.h"

@class NSString, SCProfileChatAttachmentInfoDataModel, SCProfileChatAttachmentSnapchatterDataModel;

@interface SCProfileChatAttachmentDataModelChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
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

+ (id)changeRequestForProfileChatAttachmentDataModel:(id)arg1;
+ (id)creationRequestWithProfileChatAttachmentDataModel:(id)arg1;
+ (id)deletionRequestForProfileChatAttachmentDataModel:(id)arg1;
- (void).cxx_destruct;
- (id)_profileChatAttachmentDataModel;
@property(copy, nonatomic) NSString *chatAttachmentId; // @synthesize chatAttachmentId=_chatAttachmentId;
@property(copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
@property(nonatomic) unsigned long long expirationTimestamp; // @synthesize expirationTimestamp=_expirationTimestamp;
@property(copy, nonatomic) SCProfileChatAttachmentInfoDataModel *info; // @synthesize info=_info;
- (id)initWithRowid:(long long)arg1 ownerId:(id)arg2 chatAttachmentId:(id)arg3 expirationTimestamp:(unsigned long long)arg4 messageId:(id)arg5 type:(long long)arg6 senderUsername:(id)arg7 conversationId:(id)arg8 messageTimeStamp:(unsigned long long)arg9 snapchatter:(id)arg10 info:(id)arg11;
@property(copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(nonatomic) unsigned long long messageTimeStamp; // @synthesize messageTimeStamp=_messageTimeStamp;
@property(copy, nonatomic) NSString *ownerId; // @synthesize ownerId=_ownerId;
@property(copy, nonatomic) NSString *senderUsername; // @synthesize senderUsername=_senderUsername;
@property(copy, nonatomic) SCProfileChatAttachmentSnapchatterDataModel *snapchatter; // @synthesize snapchatter=_snapchatter;
@property(nonatomic) long long type; // @synthesize type=_type;
- (const char *)table;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

