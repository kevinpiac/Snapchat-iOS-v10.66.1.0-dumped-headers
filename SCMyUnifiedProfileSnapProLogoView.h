//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCDelegateActionable-Protocol.h"
#import "SCViewModelConfigurable-Protocol.h"

@class NSString, SCSnapchatterAvatarThumbnailView, UIImageView;
@protocol SCActionHandlingDelegate;

@interface SCMyUnifiedProfileSnapProLogoView : UIView <SCViewModelConfigurable, SCDelegateActionable>
{
    UIImageView *_addToStoryImageView;
    SCSnapchatterAvatarThumbnailView *_thumbnailView;
    id <SCActionHandlingDelegate> _actionHandlingDelegate;
    id _viewModel;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SCActionHandlingDelegate> actionHandlingDelegate; // @synthesize actionHandlingDelegate=_actionHandlingDelegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setImageDownloader:(id)arg1;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

