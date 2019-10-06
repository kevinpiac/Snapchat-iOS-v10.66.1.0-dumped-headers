//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDocObjectChangeRequest-Protocol.h"

@class NSArray, NSString;

@interface SCConversationAllConversationIdsChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    int _identifier;
    NSArray *_conversationIds;
}

+ (id)changeRequestForConversationAllConversationIds:(id)arg1;
+ (id)creationRequestWithConversationAllConversationIds:(id)arg1;
+ (id)deletionRequestForConversationAllConversationIds:(id)arg1;
- (void).cxx_destruct;
- (id)_conversationAllConversationIds;
@property(copy, nonatomic) NSArray *conversationIds; // @synthesize conversationIds=_conversationIds;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
@property(nonatomic) int identifier; // @synthesize identifier=_identifier;
- (id)initWithRowid:(long long)arg1 identifier:(int)arg2 conversationIds:(id)arg3;
- (const char *)table;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

