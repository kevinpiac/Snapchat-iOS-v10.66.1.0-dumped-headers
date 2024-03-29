//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCActionable-Protocol.h"
#import "SCViewModelConfigurable-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSString, UIView;
@protocol SCActionHandling;

@interface SCUnifiedProfileIdentityItemBaseCollectionCell : UICollectionViewCell <UICollectionViewDelegateFlowLayout, SCViewModelConfigurable, SCActionable>
{
    id _viewModel;
    id <SCActionHandling> _actionHandler;
    UIView *_imageContentView;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (void)_handleLongPressImageContent:(id)arg1;
- (void)_handleTapImageContent;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void)handleLongPressImageContentFromSourceView:(id)arg1;
- (void)handleTapImageContentFromSourceView:(id)arg1;
@property(retain, nonatomic) UIView *imageContentView; // @synthesize imageContentView=_imageContentView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

