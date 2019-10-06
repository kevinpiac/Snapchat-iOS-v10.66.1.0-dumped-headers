//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCActionable-Protocol.h"
#import "SCViewModelConfigurable-Protocol.h"

@class NSString, UIButton, UILabel;
@protocol SCActionHandling;

@interface SCCognacListHeaderView : UIView <SCActionable, SCViewModelConfigurable>
{
    UILabel *_titleLabel;
    UIButton *_rightButton;
    id _viewModel;
    id <SCActionHandling> _actionHandler;
}

- (void).cxx_destruct;
- (void)_didTapOnRightButton;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
