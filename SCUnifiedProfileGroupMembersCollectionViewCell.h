//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCUnifiedProfileBaseCollectionViewCell.h"

@class CAGradientLayer, SCUnifiedProfileSquadmojiView, UIView;

@interface SCUnifiedProfileGroupMembersCollectionViewCell : SCUnifiedProfileBaseCollectionViewCell
{
    UIView *_membersBackgroundView;
    CAGradientLayer *_shadowGradient;
    SCUnifiedProfileSquadmojiView *_foregroundSquadmojiView;
    UIView *_whiteBackgroundView;
    CAGradientLayer *_whiteGradient;
    SCUnifiedProfileSquadmojiView *_backgroundSquadmojiView;
    id _viewModel;
}

+ (unsigned long long)_numBitmojisInForeground:(unsigned long long)arg1;
+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setImageDownloader:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)viewModel;

@end

