//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCMapSearchGenericCell.h"

@class SCMapSearchGenericPoiRowCellViewModel, SCMapThumbnailTextureFetcher, UIImageView, UIView;

@interface SCMapSearchGenericPoiRowCell : SCMapSearchGenericCell
{
    SCMapThumbnailTextureFetcher *_thumbnailTextureFetcher;
    UIView *_thumbnailImageViewContainer;
    UIImageView *_thumbnailImageView;
    SCMapSearchGenericPoiRowCellViewModel *_poiRowViewModel;
}

- (void).cxx_destruct;
- (void)_didTapStoryThumbnail;
- (void)_fetchImageForThumbnail:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) SCMapSearchGenericPoiRowCellViewModel *poiRowViewModel; // @synthesize poiRowViewModel=_poiRowViewModel;
- (void)setViewModel:(id)arg1;

@end
