//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCDiscoverFeedLabelPrefixIconViewModel, UIImageView, UILabel;

@interface SCDiscoverFeedLabelPrefixIconView : UIView
{
    UIImageView *_prefixIconImageView;
    UILabel *_prefixIconEmojiLabel;
    SCDiscoverFeedLabelPrefixIconViewModel *_viewModel;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) SCDiscoverFeedLabelPrefixIconViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
