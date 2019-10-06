//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCTable.h"

@class NSArray, SCFideliusColumn, SCFideliusTableSchema;

@interface SCFideliusUserDeviceTable : SCTable
{
    SCFideliusTableSchema *_schema;
    NSArray *_indexes;
    SCFideliusColumn *_dbNameCol;
    SCFideliusColumn *_hashedBetaCol;
    SCFideliusColumn *_timestampCol;
    SCFideliusColumn *_temporaryCol;
}

- (void).cxx_destruct;
- (id)allDbNames;
- (id)allHashedBetas;
- (id)indexes;
- (id)initWithDatabase:(id)arg1 performer:(id)arg2;
- (id)objectFromRow:(id)arg1;
- (id)oldestUserDevice;
- (id)tableName;
- (id)tableSchema;
- (id)updateParametersForObject:(id)arg1;

@end
