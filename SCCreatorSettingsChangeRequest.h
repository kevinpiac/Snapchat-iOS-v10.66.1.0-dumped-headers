//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDocObjectChangeRequest-Protocol.h"

@class NSString, SCCreatorData;

@interface SCCreatorSettingsChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    _Bool _isSubscribed;
    _Bool _isOptedInForNotifications;
    _Bool _canOptInForNotifications;
    _Bool _isHidden;
    NSString *_identifier;
    SCCreatorData *_creatorData;
}

+ (id)changeRequestForCreatorSettings:(id)arg1;
+ (id)creationRequestWithCreatorSettings:(id)arg1;
+ (id)deletionRequestForCreatorSettings:(id)arg1;
- (void).cxx_destruct;
- (id)_creatorSettings;
@property(nonatomic) _Bool canOptInForNotifications; // @synthesize canOptInForNotifications=_canOptInForNotifications;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
@property(copy, nonatomic) SCCreatorData *creatorData; // @synthesize creatorData=_creatorData;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithRowid:(long long)arg1 identifier:(id)arg2 creatorData:(id)arg3 isSubscribed:(_Bool)arg4 isOptedInForNotifications:(_Bool)arg5 canOptInForNotifications:(_Bool)arg6 isHidden:(_Bool)arg7;
@property(nonatomic) _Bool isHidden; // @synthesize isHidden=_isHidden;
@property(nonatomic) _Bool isOptedInForNotifications; // @synthesize isOptedInForNotifications=_isOptedInForNotifications;
@property(nonatomic) _Bool isSubscribed; // @synthesize isSubscribed=_isSubscribed;
- (const char *)table;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

