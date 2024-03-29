//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UICollectionView;

@interface SCMiniProfileSectionsView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    NSMutableArray *_sectionControllers;
    long long _cellStyle;
    _Bool _centersContent;
    _Bool _centerFirstSection;
    UICollectionView *_collectionView;
}

- (void).cxx_destruct;
- (void)_reloadContentInsetAnimated:(_Bool)arg1;
- (void)_reloadData;
@property(nonatomic) _Bool centerFirstSection; // @synthesize centerFirstSection=_centerFirstSection;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGRect)contentFrame;
- (double)contentHeight;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 cellStyle:(long long)arg2 centersContent:(_Bool)arg3;
- (void)layoutSubviews;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)reloadAllSections;
- (void)reloadSection:(id)arg1 animated:(_Bool)arg2;
- (void)reloadSections:(id)arg1 animated:(_Bool)arg2;
- (void)replaceSectionController:(id)arg1 withSectionController:(id)arg2;
- (id)sectionControllerForSection:(long long)arg1;
@property(copy, nonatomic) NSArray *sectionControllers;
- (double)topInset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

