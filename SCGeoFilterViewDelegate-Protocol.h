//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCOverlayFilterView, SCPreviewStickerView, UIGestureRecognizer;
@protocol SCGeoFilterView;

@protocol SCGeoFilterViewDelegate <NSObject>
- (void)geoFilterViewMoveStickerToStickerContainer:(SCPreviewStickerView *)arg1 gestureRecognizer:(UIGestureRecognizer *)arg2;
- (void)geoFilterViewNeedsUpdate:(SCOverlayFilterView<SCGeoFilterView> *)arg1;
- (void)geoFilterViewSponsoredSlugTapped:(SCOverlayFilterView<SCGeoFilterView> *)arg1;
@end

