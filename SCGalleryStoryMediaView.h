//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCGalleryEntryThumbnailGeneratorDelegate-Protocol.h"
#import "SCSendPreviewMediaView-Protocol.h"

@class NSString, SCGalleryEntryThumbnailGenerator, SCUserSession, UIImageView;
@protocol SCGalleryEntry;

@interface SCGalleryStoryMediaView : UIView <SCGalleryEntryThumbnailGeneratorDelegate, SCSendPreviewMediaView>
{
    id <SCGalleryEntry> _storyEntry;
    SCUserSession *_userSession;
    SCGalleryEntryThumbnailGenerator *_thumbnailGenerator;
    UIImageView *_imageView;
    UIImageView *_maskView;
}

- (void).cxx_destruct;
- (id)SCAMediaTypes;
- (id)initWithStoryEntry:(id)arg1 userSession:(id)arg2;
- (void)layoutSubviews;
- (void)pause;
- (void)play;
- (void)thumbnailGenerator:(id)arg1 didLoadMiniThumbnail:(id)arg2 snap:(id)arg3 duration:(double)arg4;
- (void)thumbnailGenerator:(id)arg1 didUpdateSnapThumbnailWithImage:(id)arg2 snap:(id)arg3 duration:(double)arg4;
- (void)thumbnailGenerator:(id)arg1 didUpdateStoryThumbnailWithImage:(id)arg2 snap:(id)arg3 duration:(double)arg4;
- (void)thumbnailGeneratorHasDelayedLoading:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
