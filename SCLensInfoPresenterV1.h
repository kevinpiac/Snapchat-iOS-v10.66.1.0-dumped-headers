//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSDictionary, NSString, UICollectionView;

@interface SCLensInfoPresenterV1 : NSObject <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    NSString *_reusableIdentifier;
    UICollectionView *_collectionView;
    NSDictionary *_entities;
}

+ (struct CGSize)contentSize;
+ (id)itemsSize;
- (void).cxx_destruct;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
@property(retain, nonatomic) NSDictionary *entities; // @synthesize entities=_entities;
- (id)init;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)reloadEntity:(id)arg1;
@property(copy, nonatomic) NSString *reusableIdentifier; // @synthesize reusableIdentifier=_reusableIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

