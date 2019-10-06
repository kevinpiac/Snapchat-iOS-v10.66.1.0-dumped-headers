//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SCLoadingIndicatorView, SCTDimensions, TCVideoView, UILabel;

@interface SCTV3RemoteVideoView : UIView
{
    TCVideoView *_coreVideoView;
    SCLoadingIndicatorView *_loadingIndicatorView;
    long long _state;
    UILabel *_messageLabel;
    UIView *_overlayView;
    UIView *_blurEffectView;
    SCTDimensions *_labelSize;
    NSString *_sinkId;
    long long _mediaStatus;
    long long _mode;
}

- (void).cxx_destruct;
- (void)_addLoadingIndicatorView;
- (void)_addMessageLabel;
- (void)_addOverlayView;
- (double)_getSizeProgress;
- (void)_hideOverlayView;
- (void)_prepareConstraints;
- (_Bool)_shouldHideLabel;
- (_Bool)_shouldStartForMediaStatus:(long long)arg1;
- (void)_showOverlayView;
- (void)_startLoadingAnimation;
- (void)_startVideo;
- (void)_startVideoIfPossible;
- (void)_stopLoadingAnimation;
- (void)_stopVideoIfNeeded;
- (void)_updateOverlayView;
- (void)_updateSubviewConstraints;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(nonatomic) long long mediaStatus; // @synthesize mediaStatus=_mediaStatus;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(copy, nonatomic) NSString *sinkId; // @synthesize sinkId=_sinkId;
- (void)updateConstraints;

@end
