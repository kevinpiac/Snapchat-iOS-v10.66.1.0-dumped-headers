//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSSet, NSString, SCMapBitmojiLayerController;

@protocol SCMapBitmojiLayerControllerDelegate <NSObject>
- (_Bool)isMapBitmojiLayerControllerAtMaximumZoomLevel:(SCMapBitmojiLayerController *)arg1;
- (void)mapBitmojiLayerController:(SCMapBitmojiLayerController *)arg1 didLongPressUserId:(NSString *)arg2;
- (void)mapBitmojiLayerController:(SCMapBitmojiLayerController *)arg1 didPanOrZoomToDeselectUserId:(NSString *)arg2;
- (void)mapBitmojiLayerController:(SCMapBitmojiLayerController *)arg1 didTapPersonLocationClusters:(NSSet *)arg2;
- (void)mapBitmojiLayerController:(SCMapBitmojiLayerController *)arg1 didTapToDeselectUserId:(NSString *)arg2;
- (void)mapBitmojiLayerController:(SCMapBitmojiLayerController *)arg1 wantsToSelectUserId:(NSString *)arg2;
@end
