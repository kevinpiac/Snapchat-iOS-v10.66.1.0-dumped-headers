//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UILabel, UIView;
@protocol SCOperaHeaderSubscribeButtonDelegate;

@interface SCOperaHeaderSubscribeButton : UIButton
{
    UIView *_labelContainer;
    UILabel *_label;
    double _maximumLabelWidth;
    _Bool _isExpanded;
    _Bool _subscribed;
    id <SCOperaHeaderSubscribeButtonDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_expandLabel;
- (void)_growAndShrinkImage;
- (void)buttonTapped;
@property(nonatomic) __weak id <SCOperaHeaderSubscribeButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, getter=isSubscribed) _Bool subscribed; // @synthesize subscribed=_subscribed;
- (void)layoutSubviews;

@end

