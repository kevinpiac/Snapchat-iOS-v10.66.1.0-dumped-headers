//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayerLooper, SCPlayerView, SCQueuePlayer, UIScrollView;
@protocol SCBloopsEmptyViewDelegate;

@interface SCBloopsEmptyView : UIView
{
    UIScrollView *_scrollView;
    SCPlayerView *_playerView;
    SCQueuePlayer *_player;
    AVPlayerLooper *_playerLooper;
    id <SCBloopsEmptyViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_createBloopViewClicked:(id)arg1;
- (void)_loadVideo;
@property(nonatomic) __weak id <SCBloopsEmptyViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)stopPlayVideo;
- (void)tryPlayVideo;

@end

