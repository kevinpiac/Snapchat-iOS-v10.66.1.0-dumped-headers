//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCCognacChatDockBadgeView, SCCognacChatDockPresenceInfo, SCCognacChatDockRingsGroupView, SCCognacChatDockTextView, SCNetworkImageView;

@interface SCCognacChatDockAppView : UIView
{
    SCCognacChatDockRingsGroupView *_ringsGroupView;
    SCNetworkImageView *_iconView;
    SCCognacChatDockBadgeView *_badgeView;
    SCCognacChatDockTextView *_textView;
    SCCognacChatDockPresenceInfo *_presenceInfo;
    double _iconSizeScale;
}

- (void).cxx_destruct;
- (void)_setIconSizeScale:(double)arg1;
- (void)addSubview:(id)arg1;
- (id)animationBaseView;
- (void)clear;
@property(readonly, nonatomic) double iconSizeScale; // @synthesize iconSizeScale=_iconSizeScale;
- (id)imageDownloader;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(readonly, copy, nonatomic) SCCognacChatDockPresenceInfo *presenceInfo; // @synthesize presenceInfo=_presenceInfo;
- (void)setAnimationPaused:(_Bool)arg1;
- (void)setIconImage:(id)arg1 iconSizeScale:(double)arg2 showIconBorder:(_Bool)arg3;
- (void)setImageDownloader:(id)arg1;
- (void)setPresenceInfo:(id)arg1;
- (void)setPresenceInfo:(id)arg1 animationDelay:(double)arg2 pulseBadgeView:(_Bool)arg3;

@end
