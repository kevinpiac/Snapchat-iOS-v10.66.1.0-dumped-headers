//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCGradientView, SCOperaWebAppChatHeaderViewModel, UILabel;

@interface SCOperaWebAppChatHeaderView : UIView
{
    SCGradientView *_gradientView;
    UILabel *_primaryLabel;
    UILabel *_subLabel;
    SCOperaWebAppChatHeaderViewModel *_viewModel;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateWithViewModel:(id)arg1;
@property(readonly, copy, nonatomic) SCOperaWebAppChatHeaderViewModel *viewModel; // @synthesize viewModel=_viewModel;

@end
