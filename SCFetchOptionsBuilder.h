//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSPredicate;

@interface SCFetchOptionsBuilder : NSObject
{
    NSPredicate *_predicate;
    NSArray *_sortDescriptors;
    unsigned long long _fetchOffset;
    unsigned long long _fetchLimit;
    NSArray *_propertiesToFetch;
}

+ (id)withFetchOptions:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setFetchLimit:(unsigned long long)arg1;
- (id)setFetchOffset:(unsigned long long)arg1;
- (id)setPredicate:(id)arg1;
- (id)setPropertiesToFetch:(id)arg1;
- (id)setSortDescriptors:(id)arg1;

@end
