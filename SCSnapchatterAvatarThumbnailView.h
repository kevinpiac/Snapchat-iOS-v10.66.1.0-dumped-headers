//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCDelegateActionable-Protocol.h"
#import "SCSnapchatterViewModelConfigurable-Protocol.h"

@class NSString, NSTimer, SCLazy, SCSnapchatterAvatarContainerView;
@protocol SCActionHandlingDelegate, SCImageDownloading;

@interface SCSnapchatterAvatarThumbnailView : UIView <SCSnapchatterViewModelConfigurable, SCDelegateActionable>
{
    SCSnapchatterAvatarContainerView *_avatarContainerView;
    id <SCImageDownloading> _imageDownloader;
    SCLazy *_badgeView;
    NSTimer *_badgeAnimationTimer;
    id _viewModel;
    id <SCActionHandlingDelegate> _actionHandlingDelegate;
}

- (void).cxx_destruct;
- (id)_newCircularBadgeView;
@property(nonatomic) __weak id <SCActionHandlingDelegate> actionHandlingDelegate; // @synthesize actionHandlingDelegate=_actionHandlingDelegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setImageDownloader:(id)arg1;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)willMoveToSuperview:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

