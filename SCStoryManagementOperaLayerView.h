//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCStoryManagementUploadedSnapOperaViewDelegate-Protocol.h"

@class NSString, SCStoryManagementFailedToPostButton, SCStoryManagementUploadedSnapOperaView, SCStoryManagementUploadingIndicatorView;
@protocol SCStoryManagementOperaLayerViewDelegate;

@interface SCStoryManagementOperaLayerView : UIView <SCStoryManagementUploadedSnapOperaViewDelegate>
{
    SCStoryManagementUploadingIndicatorView *_uploadingView;
    SCStoryManagementFailedToPostButton *_failedToPostButton;
    SCStoryManagementUploadedSnapOperaView *_uploadedSnapOperaView;
    id <SCStoryManagementOperaLayerViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_didTapFailedToPostButton;
- (void)_didTapUploadingView;
- (void)_layoutFailedToUploadViewIfNecessary;
- (void)_layoutUploadedViewIfNecessary;
- (void)_layoutUploadingViewIfNecessary;
- (void)_setUpUploadingViewIfNecessaryWithUploadStatus:(long long)arg1;
- (void)_updateFailedToUploadViewBasedOnUploadStatus:(long long)arg1;
- (void)_updateUploadedViewBasedOnSnapDataModel:(id)arg1;
- (void)_updateUploadingViewBasedOnUploadStatus:(long long)arg1;
@property(nonatomic) __weak id <SCStoryManagementOperaLayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)storyManagementUploadedSnapOperaViewDidTapAttachments:(id)arg1;
- (void)storyManagementUploadedSnapOperaViewDidTapViewersTag:(id)arg1;
- (void)updateViewBasedOnSnapDataModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
