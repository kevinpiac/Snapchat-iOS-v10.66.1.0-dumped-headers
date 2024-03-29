//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCEagleProductCollectionViewCellDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSString, SCEagleSearchResult, SCScanCardButton, UICollectionView;
@protocol SCEagleResultsViewDelegate;

@interface SCEagleResultsView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, SCEagleProductCollectionViewCellDelegate>
{
    UIView *_headerView;
    UICollectionView *_resultsCollectionView;
    UIView *_footerView;
    SCScanCardButton *_moreResultsButton;
    UIView *_separatorView;
    SCEagleSearchResult *_eagleSearchResult;
    id <SCEagleResultsViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_didLongPressHeaderView:(id)arg1;
- (void)_didTapMoreResultsButton:(id)arg1;
- (unsigned long long)_resultsCount;
- (void)_setupFooterView;
- (void)_setupHeaderView;
- (void)_setupResultsCollectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
@property(nonatomic) __weak id <SCEagleResultsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)eagleProductCellDidTapActionMenu:(id)arg1;
- (void)eagleProductCellDidTapCell:(id)arg1;
- (struct CGSize)getSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateResult:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

