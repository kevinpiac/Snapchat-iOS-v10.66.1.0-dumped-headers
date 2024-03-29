//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDocObjectChangeRequest-Protocol.h"

@class NSString;

@interface SCSnapchattersContactNonSnapchatterChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    NSString *_phoneNumber;
    NSString *_displayName;
    double _lastInteractionTimestamp;
}

+ (id)changeRequestForSnapchattersContactNonSnapchatter:(id)arg1;
+ (id)creationRequestWithSnapchattersContactNonSnapchatter:(id)arg1;
+ (id)deletionRequestForSnapchattersContactNonSnapchatter:(id)arg1;
- (void).cxx_destruct;
- (id)_snapchattersContactNonSnapchatter;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)initWithRowid:(long long)arg1 phoneNumber:(id)arg2 displayName:(id)arg3 lastInteractionTimestamp:(double)arg4;
@property(nonatomic) double lastInteractionTimestamp; // @synthesize lastInteractionTimestamp=_lastInteractionTimestamp;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (const char *)table;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

