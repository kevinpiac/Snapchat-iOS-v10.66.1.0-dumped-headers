//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCAvatarView, SCCognacChatDockBlurEffectView, SCNetworkImageView;

@interface SCCognacChatDockTransitionAvatarView : UIView
{
    SCAvatarView *_avatarView;
    SCNetworkImageView *_iconView;
    SCCognacChatDockBlurEffectView *_blurView;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setIconImage:(id)arg1 avatarViewModel:(id)arg2;
- (void)setImageDownloader:(id)arg1;

@end
