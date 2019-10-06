//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCActionable-Protocol.h"
#import "SCViewModelConfigurable-Protocol.h"

@class CAShapeLayer, NSString, SCAsyncAssetImageView, SCDiscoverFeedAvatarView, UILabel;
@protocol SCActionHandling, SCImageDownloading;

@interface SCDiscoverFeedWhiteSpaceProfileRowView : UIView <SCViewModelConfigurable, SCActionable>
{
    UILabel *_profileNameLabel;
    unsigned long long _currentTitleLanguageDirection;
    SCDiscoverFeedAvatarView *_avatarView;
    SCAsyncAssetImageView *_avatarImageView;
    SCAsyncAssetImageView *_profileNameRightCaret;
    CAShapeLayer *_circleLayer;
    id <SCActionHandling> _actionHandler;
    id _viewModel;
    id <SCImageDownloading> _imageDownloader;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (void)_viewModelDidUpdate;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (id)storyCoverImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

