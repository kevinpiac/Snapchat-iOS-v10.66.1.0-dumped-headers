//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;
@protocol SCBloopsSelfieConfirmationControlViewDelegate;

@interface SCBloopsSelfieConfirmationControlView : UIView
{
    id <SCBloopsSelfieConfirmationControlViewDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_describeLabel;
    UILabel *_noticeLabel;
    UIButton *_useSelfieButton;
    UIButton *_retakeSelfieButton;
}

- (void).cxx_destruct;
- (void)_initialSetup;
@property(nonatomic) __weak id <SCBloopsSelfieConfirmationControlViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *describeLabel; // @synthesize describeLabel=_describeLabel;
- (void)didTapRetakeSelfie:(id)arg1;
- (void)didTapUseSelfie:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UILabel *noticeLabel; // @synthesize noticeLabel=_noticeLabel;
@property(retain, nonatomic) UIButton *retakeSelfieButton; // @synthesize retakeSelfieButton=_retakeSelfieButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *useSelfieButton; // @synthesize useSelfieButton=_useSelfieButton;

@end

