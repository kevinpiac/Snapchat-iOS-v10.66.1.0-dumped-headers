//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView;
@protocol SCCachingMediaRequest, SCCanceling, SCMediaDrawerItem;

@interface SCChatMediaDrawerSendBarCollectionViewCell : UICollectionViewCell
{
    UIImageView *_thumbnailView;
    id <SCMediaDrawerItem> _drawerItem;
    id <SCCachingMediaRequest> _galleryThumbnailRequest;
    id <SCCanceling> _miniThumbnailRequest;
}

+ (id)_sharedPerformer;
- (void).cxx_destruct;
- (void)_showThumbnailForGalleryEntry:(id)arg1 userSession:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setDrawerItem:(id)arg1 userSession:(id)arg2;

@end

