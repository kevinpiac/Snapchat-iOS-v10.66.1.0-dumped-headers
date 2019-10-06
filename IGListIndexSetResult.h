//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexSet, NSMapTable;

@interface IGListIndexSetResult : NSObject
{
    NSMapTable *_oldIndexMap;
    NSMapTable *_newIndexMap;
    NSIndexSet *_inserts;
    NSIndexSet *_deletes;
    NSIndexSet *_updates;
    NSArray *_moves;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long changeCount;
@property(readonly, nonatomic) NSIndexSet *deletes; // @synthesize deletes=_deletes;
- (id)description;
@property(readonly, nonatomic) _Bool hasChanges;
- (id)initWithInserts:(id)arg1 deletes:(id)arg2 updates:(id)arg3 moves:(id)arg4 oldIndexMap:(id)arg5 newIndexMap:(id)arg6;
@property(readonly, nonatomic) NSIndexSet *inserts; // @synthesize inserts=_inserts;
@property(readonly, copy, nonatomic) NSArray *moves; // @synthesize moves=_moves;
- (long long)newIndexForIdentifier:(id)arg1;
- (long long)oldIndexForIdentifier:(id)arg1;
- (id)resultForBatchUpdates;
@property(readonly, nonatomic) NSIndexSet *updates; // @synthesize updates=_updates;

@end

