//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCCognacNudgeFriendPopoverView, SCCognacNudgeFriendViewModel, UIView;
@protocol SCCognacNudgeFriendPresenterDelegate, SCImageDownloading;

@interface SCCognacNudgeFriendPresenter : NSObject
{
    SCCognacNudgeFriendPopoverView *_popoverView;
    UIView *_dimBackgroundView;
    _Bool _animating;
    _Bool _animatingToVisible;
    CDUnknownBlockType _pendingAnimationBlock;
    id <SCCognacNudgeFriendPresenterDelegate> _delegate;
    id <SCImageDownloading> _imageDownloader;
    UIView *_containerView;
    SCCognacNudgeFriendViewModel *_viewModel;
}

- (void).cxx_destruct;
- (void)_didTapDismissButton;
- (void)_didTapInviteButton;
- (void)_setupDimBackgroundView;
- (void)_setupGestures;
- (void)_setupPopoverView;
- (void)cleanUp;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <SCCognacNudgeFriendPresenterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
- (id)initWithContainerView:(id)arg1;
- (_Bool)isPresenting;
- (void)setPopoverViewVisible:(_Bool)arg1 bottomOffset:(double)arg2;
- (void)updateWithViewModel:(id)arg1;
@property(readonly, nonatomic) SCCognacNudgeFriendViewModel *viewModel; // @synthesize viewModel=_viewModel;

@end

