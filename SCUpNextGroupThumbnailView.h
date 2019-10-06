//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCAvatarView, SCNetworkImageView, SCUpNextGroupThumbnailViewModel, UILabel;
@protocol SCImageDownloading, SCUpNextGroupThumbnailViewDelegate;

@interface SCUpNextGroupThumbnailView : UIView
{
    UIView *_avatarContainerView;
    SCAvatarView *_avatarView;
    UILabel *_displayTextLabel;
    SCNetworkImageView *_networkImageView;
    id <SCUpNextGroupThumbnailViewDelegate> _delegate;
    id <SCImageDownloading> _imageDownloader;
    SCUpNextGroupThumbnailViewModel *_viewModel;
}

- (void).cxx_destruct;
- (id)_loadThumbnail:(id)arg1;
- (void)_setupViews;
- (struct CGSize)_textSize:(id)arg1;
@property(nonatomic) __weak id <SCUpNextGroupThumbnailViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)loadThumbnail:(id)arg1;
- (void)prepareForReuse;
@property(retain, nonatomic) SCUpNextGroupThumbnailViewModel *viewModel; // @synthesize viewModel=_viewModel;

@end
