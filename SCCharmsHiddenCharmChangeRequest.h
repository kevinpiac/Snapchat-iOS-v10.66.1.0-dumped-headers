//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDocObjectChangeRequest-Protocol.h"

@class NSString;

@interface SCCharmsHiddenCharmChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    int _charmIdentifier;
    NSString *_ownerIdentifier;
    long long _ownerType;
    NSString *_displayName;
    long long _hiddenAtTsMs;
}

+ (id)changeRequestForCharmsHiddenCharm:(id)arg1;
+ (id)creationRequestWithCharmsHiddenCharm:(id)arg1;
+ (id)deletionRequestForCharmsHiddenCharm:(id)arg1;
- (void).cxx_destruct;
- (id)_charmsHiddenCharm;
@property(nonatomic) int charmIdentifier; // @synthesize charmIdentifier=_charmIdentifier;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic) long long hiddenAtTsMs; // @synthesize hiddenAtTsMs=_hiddenAtTsMs;
- (id)initWithRowid:(long long)arg1 ownerIdentifier:(id)arg2 charmIdentifier:(int)arg3 ownerType:(long long)arg4 displayName:(id)arg5 hiddenAtTsMs:(long long)arg6;
@property(copy, nonatomic) NSString *ownerIdentifier; // @synthesize ownerIdentifier=_ownerIdentifier;
@property(nonatomic) long long ownerType; // @synthesize ownerType=_ownerType;
- (const char *)table;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

