//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCOperaSubscriptionButton, UIColor, UIImageView;

@interface SCOperaWebSubscribeView : UIView
{
    UIColor *_iconColor;
    UIImageView *_horizontalIconView;
    SCOperaSubscriptionButton *_actionButton;
}

+ (_Bool)shouldShowSubscribeView:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) SCOperaSubscriptionButton *actionButton; // @synthesize actionButton=_actionButton;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setupHorizontalIcon:(id)arg1;
- (void)updateWithConfiguration:(id)arg1;

@end

