//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCCognacChatDockTextBackgroundView, SCGCDBlockTimer, UILabel;

@interface SCCognacChatDockTextView : UIView
{
    UILabel *_textLabel;
    SCCognacChatDockTextBackgroundView *_backgroundView;
    SCGCDBlockTimer *_timer;
}

- (void).cxx_destruct;
- (void)_performPulseAnimation;
- (void)_performSinglePulseAnimation;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHidden:(_Bool)arg1 animationDelay:(double)arg2;

@end

