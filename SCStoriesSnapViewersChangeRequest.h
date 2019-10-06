//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDocObjectChangeRequest-Protocol.h"

@class NSArray, NSString;

@interface SCStoriesSnapViewersChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    NSString *_snapId;
    NSArray *_friendViewerList;
    long long _friendViewCount;
    long long _friendScreenshotCount;
    NSArray *_otherViewerList;
    long long _otherViewCount;
    long long _otherScreenshotCount;
}

+ (id)changeRequestForStoriesSnapViewers:(id)arg1;
+ (id)creationRequestWithStoriesSnapViewers:(id)arg1;
+ (id)deletionRequestForStoriesSnapViewers:(id)arg1;
- (void).cxx_destruct;
- (id)_storiesSnapViewers;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
@property(nonatomic) long long friendScreenshotCount; // @synthesize friendScreenshotCount=_friendScreenshotCount;
@property(nonatomic) long long friendViewCount; // @synthesize friendViewCount=_friendViewCount;
@property(copy, nonatomic) NSArray *friendViewerList; // @synthesize friendViewerList=_friendViewerList;
- (id)initWithRowid:(long long)arg1 snapId:(id)arg2 friendViewerList:(id)arg3 friendViewCount:(long long)arg4 friendScreenshotCount:(long long)arg5 otherViewerList:(id)arg6 otherViewCount:(long long)arg7 otherScreenshotCount:(long long)arg8;
@property(nonatomic) long long otherScreenshotCount; // @synthesize otherScreenshotCount=_otherScreenshotCount;
@property(nonatomic) long long otherViewCount; // @synthesize otherViewCount=_otherViewCount;
@property(copy, nonatomic) NSArray *otherViewerList; // @synthesize otherViewerList=_otherViewerList;
@property(copy, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;
- (const char *)table;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

