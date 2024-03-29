//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSString, SCGallerySpectaclesExportLivePreviewView, UICollectionView, UIImage;
@protocol SCLagunaExportImagesCollectionViewDelegate;

@interface SCGalleryLagunaExportImageCollectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate>
{
    SCGallerySpectaclesExportLivePreviewView *_thumbnailLiveView;
    _Bool _newportExportSupported;
    UIImage *_thumbnail;
    id <SCLagunaExportImagesCollectionViewDelegate> _exportImagesDelegate;
    UICollectionView *_collectionView;
}

- (void).cxx_destruct;
- (void)_configureCell:(id)arg1 exportType:(long long)arg2;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
@property(nonatomic) __weak id <SCLagunaExportImagesCollectionViewDelegate> exportImagesDelegate; // @synthesize exportImagesDelegate=_exportImagesDelegate;
- (id)initWithFrame:(struct CGRect)arg1 thumbnail:(id)arg2 thumbnailLiveView:(id)arg3;
@property(nonatomic) _Bool newportExportSupported; // @synthesize newportExportSupported=_newportExportSupported;
- (void)scrollViewDidScroll:(id)arg1;
@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

