//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet;
@protocol SCPerforming;

@interface SCCloudFSLRUQueue : NSObject
{
    id <SCPerforming> _performer;
    NSMutableDictionary *_hashSet;
    NSMutableOrderedSet *_queue;
    long long _storageSize;
    long long _storageSizeLimit;
}

- (void).cxx_destruct;
- (id)evictItem;
- (double)highestOrder;
- (id)initWithStorageSizeLimit:(long long)arg1 performer:(id)arg2;
- (void)insertItem:(id)arg1;
- (_Bool)isUndercapacity;
- (id)itemForHashString:(id)arg1;
- (void)removeItem:(id)arg1;
@property(readonly, nonatomic) long long storageSize; // @synthesize storageSize=_storageSize;
@property(readonly, nonatomic) long long storageSizeLimit; // @synthesize storageSizeLimit=_storageSizeLimit;

@end

