//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import "SCGalleryEntryThumbnailGeneratorDelegate-Protocol.h"

@class NSString, SCGalleryEntryThumbnailGenerator;

@interface SCGallerySearchQueryResultImageView : UIImageView <SCGalleryEntryThumbnailGeneratorDelegate>
{
    SCGalleryEntryThumbnailGenerator *_thumbnailGenerator;
    _Bool _shouldCrossFade;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)setGalleryEntry:(id)arg1 targetSize:(struct CGSize)arg2 userSession:(id)arg3;
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

