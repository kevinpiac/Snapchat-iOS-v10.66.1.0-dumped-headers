//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class SCFuture, SCLoadingIndicatorView, TTTAttributedLabel, UIImage, UIImageView, UILabel;

@interface SCPrivacyPolicyContentScrollView : UIScrollView
{
    UIImage *_image;
    UIImageView *_imageView;
    TTTAttributedLabel *_title;
    TTTAttributedLabel *_contentHeader;
    TTTAttributedLabel *_contentUpdate;
    UILabel *_contentFooter;
    SCFuture *_resourceImage;
    SCLoadingIndicatorView *_imageLoadingView;
}

- (void).cxx_destruct;
- (id)_contentBackgroundColorWhite;
- (void)_initContentWithLinkDelegate:(id)arg1;
- (void)_updateImage:(id)arg1;
- (id)initWithLinkDelegate:(id)arg1 resourceImage:(id)arg2;

@end
