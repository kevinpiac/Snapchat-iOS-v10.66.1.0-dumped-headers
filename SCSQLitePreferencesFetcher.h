//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EGODatabase, EGODatabaseStatement;

@interface SCSQLitePreferencesFetcher : NSObject
{
    EGODatabase *_database;
    EGODatabaseStatement *_queryValueForKey;
}

- (void).cxx_destruct;
- (id)initWithFilePath:(id)arg1;
- (id)objectForKey:(id)arg1;

@end

