//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCViewModelConfigurable-Protocol.h"

@class NSString, SCNetworkImageView, UILabel;
@protocol SCImageDownloading;

@interface SCCognacLeaderboardInfoCell : UICollectionViewCell <SCViewModelConfigurable>
{
    SCNetworkImageView *_logoImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    id _viewModel;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (void)_updateWithViewModel;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

