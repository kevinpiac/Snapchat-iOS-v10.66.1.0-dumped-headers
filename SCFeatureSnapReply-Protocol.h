//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class SCQuickStickerImage, SCReplyParameters, UIImageView;

@protocol SCFeatureSnapReply
- (void)addScreenCaptureNotificationObserver;
@property(readonly, copy, nonatomic) SCQuickStickerImage *quickStickerImage;
- (void)removeScreenCaptureNotificationObserver;
- (void)setReplyParameters:(SCReplyParameters *)arg1;
@property(readonly, nonatomic) UIImageView *snapReplyStickerView;
@end

