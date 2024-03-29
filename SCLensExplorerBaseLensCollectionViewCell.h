//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCActionable-Protocol.h"
#import "SCViewModelConfigurable-Protocol.h"

@class NSString, SCLECollectionViewCellBehavior, SCLensExplorerLensCellViewModel, SCLensExplorerLensInfoView, SCLensFeedCellLayout, UIButton, UIImageView, UIView;
@protocol SCActionHandling, SCLensExplorerImagesDataStoreProtocol;

@interface SCLensExplorerBaseLensCollectionViewCell : UICollectionViewCell <SCViewModelConfigurable, SCActionable>
{
    UIButton *_debugButton;
    SCLECollectionViewCellBehavior *_cellBehavior;
    id <SCActionHandling> _actionHandler;
    SCLensExplorerLensCellViewModel *_viewModel;
    id <SCLensExplorerImagesDataStoreProtocol> _imagesDataStore;
    UIImageView *_lensIconImageView;
    SCLensExplorerLensInfoView *_lensInfoView;
    UIView *_roundedContainerView;
    SCLensFeedCellLayout *_layout;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (void)_handleDebugButtonTapAction;
- (void)_handleTapAction:(id)arg1;
- (void)_handleTapActionOnInfoView:(id)arg1;
- (void)_karmaSetSelected:(_Bool)arg1;
- (void)_prepareDebugButton;
- (void)_prepareIconImageView;
- (void)_prepareLensInfo;
- (void)_prepareRoundedContainerView;
- (void)_setupKarma;
- (void)_setupLensInfoView;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (id)cellBehavior;
- (struct CGRect)iconViewFrame;
@property(retain, nonatomic) id <SCLensExplorerImagesDataStoreProtocol> imagesDataStore; // @synthesize imagesDataStore=_imagesDataStore;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) SCLensFeedCellLayout *layout; // @synthesize layout=_layout;
@property(readonly, nonatomic) UIImageView *lensIconImageView; // @synthesize lensIconImageView=_lensIconImageView;
@property(readonly, nonatomic) SCLensExplorerLensInfoView *lensInfoView; // @synthesize lensInfoView=_lensInfoView;
- (void)onIconImageDownloadingFinished:(id)arg1;
- (void)prepareForReuse;
@property(readonly, nonatomic) UIView *roundedContainerView; // @synthesize roundedContainerView=_roundedContainerView;
@property(readonly, nonatomic) double roundedContainerViewCornerRadius;
@property(retain, nonatomic) SCLensExplorerLensCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (_Bool)shouldShowBackgroundView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

