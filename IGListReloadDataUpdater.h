//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListUpdatingDelegate-Protocol.h"

@class NSString;

@interface IGListReloadDataUpdater : NSObject <IGListUpdatingDelegate>
{
}

- (void)_reloadItemsInCollectionView:(id)arg1 indexPaths:(id)arg2;
- (void)_synchronousReloadDataWithCollectionView:(id)arg1;
- (void)deleteItemsFromCollectionView:(id)arg1 indexPaths:(id)arg2;
- (void)insertItemsIntoCollectionView:(id)arg1 indexPaths:(id)arg2;
- (void)moveItemInCollectionView:(id)arg1 fromIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)moveSectionInCollectionView:(id)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3;
- (id)objectLookupPointerFunctions;
- (void)performUpdateWithCollectionView:(id)arg1 animated:(_Bool)arg2 itemUpdates:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)performUpdateWithCollectionView:(id)arg1 fromObjects:(id)arg2 toObjects:(id)arg3 animated:(_Bool)arg4 objectTransitionBlock:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (void)reloadCollectionView:(id)arg1 sections:(id)arg2;
- (void)reloadDataWithCollectionView:(id)arg1 reloadUpdateBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reloadItemInCollectionView:(id)arg1 fromIndexPath:(id)arg2 toIndexPath:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

