//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEncryptedTable.h"

@class NSArray, SCFideliusColumn, SCFideliusTableSchema;

@interface SCFideliusFriendDeviceInfoTable : SCEncryptedTable
{
    SCFideliusTableSchema *_schema;
    NSArray *_indexes;
    SCFideliusColumn *_theirOutBetaCol;
    SCFideliusColumn *_theirUserIdCol;
    SCFideliusColumn *_mystiqueCol;
    SCFideliusColumn *_versionCol;
    SCFideliusColumn *_timestampCol;
}

- (void).cxx_destruct;
- (id)_devicesForUserIds:(id)arg1;
- (id)batchUpdateParametersForObjects:(id)arg1;
- (_Bool)deleteAllFriendDevicesForUserId:(id)arg1;
- (id)friendDevicesForUserId:(id)arg1;
- (id)indexes;
- (id)initWithDatabase:(id)arg1 performer:(id)arg2;
- (id)objectFromRow:(id)arg1;
- (id)tableName;
- (id)tableSchema;
- (id)updateParametersForObject:(id)arg1;
- (id)userIdToDeviceListDict:(id)arg1;

@end
