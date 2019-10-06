//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCNetworkImage, SCNetworkImageView, SCRoundedCornerContainerView;
@protocol SCImageDownloading;

@interface SCDiscoverFeedManagementThumbnailImageView : UIView
{
    SCNetworkImageView *_thumbnailImageView;
    SCRoundedCornerContainerView *_cornerViewContainer;
    SCNetworkImage *_thumbnailImage;
    id <SCImageDownloading> _imageDownloader;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) SCNetworkImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;

@end

