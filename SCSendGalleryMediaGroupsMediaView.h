//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCSendPreviewMediaView-Protocol.h"

@class NSArray, NSDictionary, NSString, SCUserSession, UIScrollView;

@interface SCSendGalleryMediaGroupsMediaView : UIView <SCSendPreviewMediaView>
{
    NSArray *_galleryMediaGroups;
    NSDictionary *_cloudFiles;
    SCUserSession *_userSession;
    UIScrollView *_scrollView;
    NSArray *_previewModels;
    NSArray *_mediaViews;
}

- (void).cxx_destruct;
- (id)SCAMediaTypes;
- (void)_addModelsForGalleryMediaGroup:(id)arg1 previewModels:(id)arg2 mediaViews:(id)arg3;
- (void)_setupView;
- (id)initWithGalleryMediaGroups:(id)arg1 cloudFiles:(id)arg2 userSession:(id)arg3;
- (void)layoutSubviews;
- (void)pause;
- (void)play;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
