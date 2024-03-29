//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSOrderedSet;

@interface SCScriptIndexer : NSObject
{
    NSArray *_sortedEntities;
    NSOrderedSet *_script;
    NSDictionary *_sparseKeyToSortedEntitiesMapping;
    NSDictionary *_keyToSectionBasedIndexMapping;
    NSDictionary *_keyToRowBasedIndexMapping;
}

- (void).cxx_destruct;
- (id)initWithSortedEntities:(id)arg1 script:(id)arg2;
- (unsigned long long)rowBasedIndexAtScriptIndex:(unsigned long long)arg1;
- (unsigned long long)rowBasedIndexForKey:(id)arg1;
- (unsigned long long)sectionBasedIndexAtScriptIndex:(unsigned long long)arg1;
- (unsigned long long)sectionBasedIndexForKey:(id)arg1;
- (id)sortedEntitiesForKey:(id)arg1;

@end

