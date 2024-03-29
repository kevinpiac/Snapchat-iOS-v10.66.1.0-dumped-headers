//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDocObjectChangeRequest-Protocol.h"

@class NSString;

@interface SCStoriesPostableLiveStoryMetadataChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    NSString *_userId;
    NSString *_username;
    NSString *_displayName;
}

+ (id)changeRequestForStoriesPostableLiveStoryMetadata:(id)arg1;
+ (id)creationRequestWithStoriesPostableLiveStoryMetadata:(id)arg1;
+ (id)deletionRequestForStoriesPostableLiveStoryMetadata:(id)arg1;
- (void).cxx_destruct;
- (id)_storiesPostableLiveStoryMetadata;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)initWithRowid:(long long)arg1 userId:(id)arg2 username:(id)arg3 displayName:(id)arg4;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (const char *)table;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

