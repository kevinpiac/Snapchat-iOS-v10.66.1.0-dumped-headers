//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCLensExplorerBaseLensCollectionViewCell.h"

@class UIImageView;

@interface SCLensExplorerLensWithPreviewCollectionViewCell : SCLensExplorerBaseLensCollectionViewCell
{
    UIImageView *_previewImageView;
    UIImageView *_animatedImageView;
}

- (void).cxx_destruct;
- (void)_playAnimation;
- (void)_prepareAnimatedImageView;
- (void)_preparePreviewImageView;
- (void)_stopAnimation;
- (struct CGRect)iconViewFrame;
- (void)prepareForReuse;
- (void)setViewModel:(id)arg1;

@end

