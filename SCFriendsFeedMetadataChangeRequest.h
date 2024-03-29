//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDocObjectChangeRequest-Protocol.h"

@class NSString, SCFriendsFeedPaginationMetadata, SCFriendsFeedSyncMetadata;

@interface SCFriendsFeedMetadataChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    NSString *_userId;
    SCFriendsFeedSyncMetadata *_syncMetadata;
    SCFriendsFeedPaginationMetadata *_paginationMetadata;
}

+ (id)changeRequestForFriendsFeedMetadata:(id)arg1;
+ (id)creationRequestWithFriendsFeedMetadata:(id)arg1;
+ (id)deletionRequestForFriendsFeedMetadata:(id)arg1;
- (void).cxx_destruct;
- (id)_friendsFeedMetadata;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
- (id)initWithRowid:(long long)arg1 userId:(id)arg2 syncMetadata:(id)arg3 paginationMetadata:(id)arg4;
@property(copy, nonatomic) SCFriendsFeedPaginationMetadata *paginationMetadata; // @synthesize paginationMetadata=_paginationMetadata;
@property(copy, nonatomic) SCFriendsFeedSyncMetadata *syncMetadata; // @synthesize syncMetadata=_syncMetadata;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (const char *)table;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

