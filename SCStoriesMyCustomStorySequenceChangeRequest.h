//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDocObjectChangeRequest-Protocol.h"

@class NSArray, NSString;

@interface SCStoriesMyCustomStorySequenceChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    NSString *_publicationId;
    NSArray *_storySnaps;
}

+ (id)changeRequestForStoriesMyCustomStorySequence:(id)arg1;
+ (id)creationRequestWithStoriesMyCustomStorySequence:(id)arg1;
+ (id)deletionRequestForStoriesMyCustomStorySequence:(id)arg1;
- (void).cxx_destruct;
- (id)_storiesMyCustomStorySequence;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
- (id)initWithRowid:(long long)arg1 publicationId:(id)arg2 storySnaps:(id)arg3;
@property(copy, nonatomic) NSString *publicationId; // @synthesize publicationId=_publicationId;
@property(copy, nonatomic) NSArray *storySnaps; // @synthesize storySnaps=_storySnaps;
- (const char *)table;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

