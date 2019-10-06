//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCGalleryBaseStorySnapCell.h"

#import "SCGalleryEntrySyncStatusGeneratorDelegate-Protocol.h"

@class CAShapeLayer, NSString, UIImageView, UILabel;

@interface SCGalleryStorySnapCell : SCGalleryBaseStorySnapCell <SCGalleryEntrySyncStatusGeneratorDelegate>
{
    CAShapeLayer *_roundCornerMaskLayer;
    CAShapeLayer *_borderLayer;
    UIImageView *_lagunaIcon;
    UILabel *_videoDurationLabel;
    UIImageView *_badgeView;
}

- (void).cxx_destruct;
- (void)_createAndShowBadgeForSnap:(id)arg1;
- (void)_setupVideoThumbnailLabelIfNeeded:(id)arg1;
- (void)entrySyncStatusGenerator:(id)arg1 didUpdateStatus:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;
- (void)roundCorner:(unsigned long long)arg1;
- (void)setSnap:(id)arg1 storyViewModel:(id)arg2 mediaScenePath:(CDStruct_bac8f6e9)arg3 selectMode:(_Bool)arg4 userSession:(id)arg5 debugSyncStatusChecker:(id)arg6;
- (id)sourceViewForOpera;
- (void)updateUI;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

