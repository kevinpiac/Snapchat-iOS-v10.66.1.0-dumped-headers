//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class FLAnimatedImageView, NSString, UIColor, UIImageView;

@interface SCVideoNoteView : UIView
{
    FLAnimatedImageView *_coverAnimationView;
    UIImageView *_muteIconView;
    UIView *_muteIconContainerView;
    UIView *_videoView;
    double _frameTimeInterval;
    NSString *_mediaId;
    _Bool _isSender;
    unsigned long long _status;
    UIColor *_borderColor;
}

+ (id)defaultBorderColor;
- (void).cxx_destruct;
@property(copy, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
- (void)clearContents;
- (id)coverAnimationView;
- (void)displayCoverAnimationView;
- (void)displayVideoView;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool isSender; // @synthesize isSender=_isSender;
- (void)layoutSubviews;
- (id)muteIconContainerView;
- (id)muteIconView;
- (void)setMediaId:(id)arg1;
- (void)setPlayerLayer:(id)arg1;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (void)startAnimation;
- (void)stopAnimation;
- (id)videoView;

@end

