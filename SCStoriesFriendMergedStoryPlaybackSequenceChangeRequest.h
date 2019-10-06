//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDocObjectChangeRequest-Protocol.h"

@class NSArray, NSString;

@interface SCStoriesFriendMergedStoryPlaybackSequenceChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    NSString *_userId;
    NSString *_username;
    NSArray *_storySnaps;
}

+ (id)changeRequestForStoriesFriendMergedStoryPlaybackSequence:(id)arg1;
+ (id)creationRequestWithStoriesFriendMergedStoryPlaybackSequence:(id)arg1;
+ (id)deletionRequestForStoriesFriendMergedStoryPlaybackSequence:(id)arg1;
- (void).cxx_destruct;
- (id)_storiesFriendMergedStoryPlaybackSequence;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
- (id)initWithRowid:(long long)arg1 userId:(id)arg2 username:(id)arg3 storySnaps:(id)arg4;
@property(copy, nonatomic) NSArray *storySnaps; // @synthesize storySnaps=_storySnaps;
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

