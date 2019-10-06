//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCMiniProfileRowController.h"

#import "SCMiniProfileStoryIdentityCollectionViewCellDelegate-Protocol.h"

@class NSString, SCMiniProfileStorySubscribeButtonViewModel, SCNetworkImage;
@protocol SCImageDownloading, SCMiniProfileStoryIdentityRowControllerDelegate, SCMiniProfileStorySubscribeButtonDelegate;

@interface SCMiniProfileStoryIdentityRowController : SCMiniProfileRowController <SCMiniProfileStoryIdentityCollectionViewCellDelegate>
{
    SCNetworkImage *_image;
    NSString *_title;
    NSString *_subtitle;
    NSString *_detailText;
    SCMiniProfileStorySubscribeButtonViewModel *_buttonViewModel;
    id <SCMiniProfileStorySubscribeButtonDelegate> _buttonDelegate;
    id <SCMiniProfileStoryIdentityRowControllerDelegate> _delegate;
    id <SCImageDownloading> _imageDownloader;
}

- (void).cxx_destruct;
- (Class)cellClass;
- (double)cellHeight;
- (id)initWithImage:(id)arg1 title:(id)arg2 subtitle:(id)arg3 detailText:(id)arg4 imageDownloader:(id)arg5 subscribeButtonViewModel:(id)arg6 subscribeButtonDelegate:(id)arg7;
- (void)setDelegate:(id)arg1;
- (_Bool)shouldSelectCell;
- (void)storyIdentityCollectionViewCell:(id)arg1 didTapThumbnailView:(id)arg2;
- (void)willDisplayCell:(id)arg1;

@end

