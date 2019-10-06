//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCMiniProfileOptionViewModel, UIImageView, UILabel;
@protocol SCMiniProfileOptionViewDelegate;

@interface SCMiniProfileOptionView : UIView
{
    UILabel *_label;
    UIImageView *_imageView;
    SCMiniProfileOptionViewModel *_optionViewModel;
    id <SCMiniProfileOptionViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_didSelectOptionView;
@property(nonatomic) __weak id <SCMiniProfileOptionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) SCMiniProfileOptionViewModel *optionViewModel; // @synthesize optionViewModel=_optionViewModel;

@end

