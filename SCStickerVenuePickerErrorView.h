//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel, UIStackView;
@protocol SCStickerVenuePickerErrorViewDelegate;

@interface SCStickerVenuePickerErrorView : UIView
{
    id <SCStickerVenuePickerErrorViewDelegate> _delegate;
    UIStackView *_stackView;
    UILabel *_label;
    UIButton *_retryButton;
    UILabel *_buttonLabel;
}

- (void).cxx_destruct;
- (void)_addConstraints;
- (void)_addSubviews;
@property(readonly, nonatomic) UILabel *buttonLabel; // @synthesize buttonLabel=_buttonLabel;
@property(nonatomic) __weak id <SCStickerVenuePickerErrorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) UIButton *retryButton; // @synthesize retryButton=_retryButton;
- (void)retryButtonTapped:(id)arg1;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;

@end

