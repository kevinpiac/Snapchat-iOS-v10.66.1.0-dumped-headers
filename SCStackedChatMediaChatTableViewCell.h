//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCStackedChatTableViewCell.h"

@class UIViewController;
@protocol SCChatCellBaseGestureDelegate, SCChatFullscreenMediaChatTableCellDelegate;

@interface SCStackedChatMediaChatTableViewCell : SCStackedChatTableViewCell
{
    UIViewController<SCChatCellBaseGestureDelegate> *_parentVC;
    id <SCChatFullscreenMediaChatTableCellDelegate> _delegate;
}

- (void).cxx_destruct;
- (unsigned long long)_itemIndexWithIndexPath:(id)arg1 inCollectionView:(id)arg2;
- (void)clearContents;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 parentVC:(id)arg3 delegate:(id)arg4 userSession:(id)arg5;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)startAnimations;
- (void)stopAnimations;
- (id)thumbnailViewForMediaId:(id)arg1;

@end

