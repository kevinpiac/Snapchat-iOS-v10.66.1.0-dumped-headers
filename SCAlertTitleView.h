//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface SCAlertTitleView : UIView
{
    _Bool _hasSeparator;
    _Bool _isPromptView;
    UILabel *_textLabel;
    UIView *_separatorView;
}

+ (double)separatorHeight;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1 hasSeparator:(_Bool)arg2 isPromptView:(_Bool)arg3;
- (void)layoutSubviews;
@property(readonly, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;

@end

