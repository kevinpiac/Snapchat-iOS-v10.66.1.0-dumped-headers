//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, SCLRUCacheNode;
@protocol SCLRUCacheDelegate;

@interface SCLRUCache : NSObject
{
    NSMutableDictionary *_keysToNodes;
    SCLRUCacheNode *_headNode;
    SCLRUCacheNode *_tailNode;
    unsigned long long _totalCostLimit;
    unsigned long long _countLimit;
    unsigned long long _totalCost;
    unsigned long long _count;
    id <SCLRUCacheDelegate> _delegate;
    NSString *_name;
}

- (void).cxx_destruct;
- (void)_evictObjectsForCostChange:(long long)arg1 countChange:(long long)arg2;
- (void)_moveNodeToHead:(id)arg1;
- (void)_removeNodeFromLinkedList:(id)arg1;
- (id)allKeys;
- (id)allValues;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) unsigned long long countLimit; // @synthesize countLimit=_countLimit;
- (id)debugDescription;
@property(nonatomic) __weak id <SCLRUCacheDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)objectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 markRecentlyUsed:(_Bool)arg2;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3;
@property(nonatomic) unsigned long long totalCost; // @synthesize totalCost=_totalCost;
@property(nonatomic) unsigned long long totalCostLimit; // @synthesize totalCostLimit=_totalCostLimit;

@end

