//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface SCFideliusIndex : NSObject
{
    NSString *_indexName;
    NSString *_tableName;
    NSMutableArray *_columnNames;
}

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 tableName:(id)arg2 columns:(id)arg3;
- (id)name;
- (id)translateToCreateIndexIfNotExists;

@end

