//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCSearchCollectionViewCell.h"

@class SCLensExplorerNetworkImageView, SCSearchActionButton, SCSearchLensExplorerCellViewModel, UILabel;
@protocol SCImageDownloading, SCLensExplorerUnlockActionProviderProtocol, SCLensUnlockerProtocol;

@interface SCSearchLensExplorerLensCollectionViewCell : SCSearchCollectionViewCell
{
    SCLensExplorerNetworkImageView *_lensIconImageView;
    UILabel *_lensNameLabel;
    UILabel *_lensCreatorLabel;
    SCSearchActionButton *_unlockButton;
    SCSearchLensExplorerCellViewModel *_viewModel;
    id <SCLensUnlockerProtocol> _unlockLensInteractor;
    id <SCLensExplorerUnlockActionProviderProtocol> _unlockActionProvider;
    id <SCImageDownloading> _imageDownloader;
    double _maxTextWidth;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (void)_handleUnlockTap:(id)arg1;
- (void)_prepareCreator;
- (void)_prepareLensIcon;
- (void)_prepareLensName;
- (void)_prepareUnlock;
- (void)_setupKarma;
- (void)applyLayoutAttributes:(id)arg1;
@property(nonatomic) __weak id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
- (void)layoutSubviews;
@property(nonatomic) double maxTextWidth; // @synthesize maxTextWidth=_maxTextWidth;
@property(nonatomic) __weak id <SCLensExplorerUnlockActionProviderProtocol> unlockActionProvider; // @synthesize unlockActionProvider=_unlockActionProvider;
@property(nonatomic) __weak id <SCLensUnlockerProtocol> unlockLensInteractor; // @synthesize unlockLensInteractor=_unlockLensInteractor;
@property(retain, nonatomic) SCSearchLensExplorerCellViewModel *viewModel; // @synthesize viewModel=_viewModel;

@end

