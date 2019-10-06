//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCChatSingleMediaThumbnailView-Protocol.h"
#import "SCSnapchatterCardViewDelegate-Protocol.h"

@class SCBaseMediaThumbnailView, SCContributionStoryPublisherMediaCardView, SCSnapchatterCardView, SCStorySnapMessageThumbnailViewModel, UILabel, UIViewController;
@protocol SCChatCellGestureDelegate, SCChatFullscreenMediaChatTableCellDelegate;

@interface SCStoryShareThumbnailView : UIView <SCSnapchatterCardViewDelegate, SCChatSingleMediaThumbnailView>
{
    UILabel *_unviewableLabel;
    UIView *_blurView;
    UILabel *_blurLabel;
    UILabel *_storyInfoLabel;
    SCSnapchatterCardView *_snapchatterMediaCard;
    SCContributionStoryPublisherMediaCardView *_contributionStoryPublisherMediaCard;
    UIView *_mediaCardPlaceholderView;
    UILabel *_mediaCardPlaceholderLabel;
    SCStorySnapMessageThumbnailViewModel *_viewModel;
    UIViewController<SCChatCellGestureDelegate> *_parentVC;
    id <SCChatFullscreenMediaChatTableCellDelegate> _delegate;
    SCBaseMediaThumbnailView *_baseMediaThumbnailView;
}

- (void).cxx_destruct;
- (void)_initBaseMediaThumbnailViewWithParentVC:(id)arg1 delegate:(id)arg2;
@property(readonly, nonatomic) SCBaseMediaThumbnailView *baseMediaThumbnailView; // @synthesize baseMediaThumbnailView=_baseMediaThumbnailView;
- (id)blurView;
- (id)contributionStoryPublisherMediaCard;
- (void)dismissFullScreenView;
- (_Bool)fullScreenIsShown;
- (id)initWithParentVC:(id)arg1 delegate:(id)arg2;
- (id)mediaCardPlaceholderView;
- (id)mediaId;
- (void)pauseVideo;
- (void)prepareVideoIfNecessary;
- (void)rerenderForActionMenuWithBoundingSize:(struct CGSize)arg1;
- (void)resetContents;
- (void)resetPlayer;
- (void)resetWithOriginalSettings;
- (void)resumeVideo;
- (void)setMediaViewModel:(id)arg1;
- (void)setThumbnailSize:(struct CGSize)arg1;
- (id)snapchatterMediaCard;
- (void)snapchatterNameCardView:(id)arg1 didTapForSnapchatter:(id)arg2;
- (void)snapchatterNameCardView:(id)arg1 didToggleButtonForUsername:(id)arg2;
- (id)storyInfoLabel;
- (struct CGSize)thumbnailSize;
- (id)unviewableLabel;

@end
