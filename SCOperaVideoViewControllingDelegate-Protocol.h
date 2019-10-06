//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCOperaVideoControlsView;

@protocol SCOperaVideoViewControllingDelegate <NSObject>
- (void)videoControlsView:(SCOperaVideoControlsView *)arg1 didEndSeekingWithPlayButtonToggled:(_Bool)arg2;
- (void)videoControlsView:(SCOperaVideoControlsView *)arg1 didSeekToTime:(double)arg2 reason:(long long)arg3;
- (void)videoControlsView:(SCOperaVideoControlsView *)arg1 didToggleCaption:(_Bool)arg2;
- (void)videoControlsView:(SCOperaVideoControlsView *)arg1 didTogglePlay:(_Bool)arg2;
- (void)videoControlsView:(SCOperaVideoControlsView *)arg1 didToggleRotateLeft:(_Bool)arg2;
- (void)videoControlsView:(SCOperaVideoControlsView *)arg1 didToggleVolume:(_Bool)arg2;
- (void)videoControlsViewDidBeginSeeking:(SCOperaVideoControlsView *)arg1;
- (void)videoControlsViewDidPressExit:(SCOperaVideoControlsView *)arg1;
- (void)videoControlsViewDidPressSendButton:(SCOperaVideoControlsView *)arg1;
- (void)videoControlsViewDidPressShowActionMenuButton:(SCOperaVideoControlsView *)arg1;
@end

