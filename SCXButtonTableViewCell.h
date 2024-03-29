//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIActivityIndicatorView, UIButton;
@protocol SCXButtonTableViewCellDelegate;

@interface SCXButtonTableViewCell : UITableViewCell
{
    id <SCXButtonTableViewCellDelegate> _delegate;
    UIButton *_xButton;
    UIActivityIndicatorView *_indicator;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SCXButtonTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIActivityIndicatorView *indicator; // @synthesize indicator=_indicator;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setIsWorking:(_Bool)arg1;
- (void)setSubText:(id)arg1;
- (void)setText:(id)arg1;
@property(retain, nonatomic) UIButton *xButton; // @synthesize xButton=_xButton;
- (void)xButtonPressed;

@end

