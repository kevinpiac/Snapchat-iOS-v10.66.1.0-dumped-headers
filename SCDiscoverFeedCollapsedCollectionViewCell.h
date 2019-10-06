//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCActionable-Protocol.h"
#import "SCDiscoverFeedCollectionViewCellAnimating-Protocol.h"
#import "SCViewModelConfigurable-Protocol.h"

@class NSString, SCActionModel, SCGrowingButton, UILabel;
@protocol SCActionHandling;

@interface SCDiscoverFeedCollapsedCollectionViewCell : UICollectionViewCell <SCActionable, SCViewModelConfigurable, SCDiscoverFeedCollectionViewCellAnimating>
{
    UILabel *_titleLabel;
    SCActionModel *_tapActionModel;
    SCGrowingButton *_watchAgainButton;
    UILabel *_watchAgainLabel;
    id <SCActionHandling> _actionHandler;
    id _viewModel;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (void)_handleTapAction:(id)arg1;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (_Bool)shouldAnimateOnTap;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
