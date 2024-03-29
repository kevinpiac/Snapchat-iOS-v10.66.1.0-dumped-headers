//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCCommerceImageTitleSubtitleSelectionViewDelegate-Protocol.h"

@class NSString, SCCommerceImageTitleSubtitleSelectionView, SCCommerceProductDetailsBitmojiViewModel, UIButton, UIView;
@protocol SCCommerceBitmojiAvatarSelectionCollectionViewCellDelegate;

@interface SCCommerceBitmojiAvatarSelectionCollectionViewCell : UICollectionViewCell <SCCommerceImageTitleSubtitleSelectionViewDelegate>
{
    id <SCCommerceBitmojiAvatarSelectionCollectionViewCellDelegate> _delegate;
    SCCommerceProductDetailsBitmojiViewModel *_bitmojiViewModel;
    UIView *_contentDividerView;
    SCCommerceImageTitleSubtitleSelectionView *_leftBitmojiAvatarSelectionView;
    SCCommerceImageTitleSubtitleSelectionView *_rightBitmojiAvatarSelectionView;
    UIButton *_switchAvatarsButton;
}

+ (double)height;
- (void).cxx_destruct;
- (void)_setup;
- (void)_setupBitmojiAvatarSelectionView:(id)arg1;
- (void)_setupBitmojiAvatarSelectionView:(id)arg1 withAvatarInfo:(id)arg2;
- (void)_setupBitmojiAvatarSelectionViewForAddFriend:(id)arg1 alpha:(double)arg2 enabled:(_Bool)arg3;
- (void)_setupBitmojiAvatarSelectionViewForNoAvatarSelected:(id)arg1;
- (void)_setupContentDividerView;
- (void)_setupLeftBitmojiAvatarSelectionView;
- (void)_setupRightBitmojiAvatarSelectionView;
- (void)_setupSeparator;
- (void)_setupSwitchAvatarsButton;
- (void)_shouldHideReverseButton:(_Bool)arg1;
- (void)_switchAvatarsButtonTapped;
@property(retain, nonatomic) SCCommerceProductDetailsBitmojiViewModel *bitmojiViewModel; // @synthesize bitmojiViewModel=_bitmojiViewModel;
@property(retain, nonatomic) UIView *contentDividerView; // @synthesize contentDividerView=_contentDividerView;
@property(nonatomic) __weak id <SCCommerceBitmojiAvatarSelectionCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)imageTitleSubtitleViewTapped:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) SCCommerceImageTitleSubtitleSelectionView *leftBitmojiAvatarSelectionView; // @synthesize leftBitmojiAvatarSelectionView=_leftBitmojiAvatarSelectionView;
@property(retain, nonatomic) SCCommerceImageTitleSubtitleSelectionView *rightBitmojiAvatarSelectionView; // @synthesize rightBitmojiAvatarSelectionView=_rightBitmojiAvatarSelectionView;
@property(retain, nonatomic) UIButton *switchAvatarsButton; // @synthesize switchAvatarsButton=_switchAvatarsButton;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

