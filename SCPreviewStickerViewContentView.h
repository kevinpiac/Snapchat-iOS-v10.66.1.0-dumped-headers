//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol SCPreviewStickerViewSizeChangeDelegate;

@interface SCPreviewStickerViewContentView : UIView
{
    id <SCPreviewStickerViewSizeChangeDelegate> _sizeChangeDelegate;
}

- (void).cxx_destruct;
- (void)drawScreenshotImageInCurrentContextWithRect:(struct CGRect)arg1;
- (_Bool)hasImage;
- (void)onScreenshotTaken;
- (void)onStickerViewScaled:(double)arg1;
- (void)pan:(id)arg1;
- (id)renderState;
@property(nonatomic) __weak id <SCPreviewStickerViewSizeChangeDelegate> sizeChangeDelegate; // @synthesize sizeChangeDelegate=_sizeChangeDelegate;
- (_Bool)shouldReceiveTapsViaStickerContainer;
- (_Bool)shouldRespondToTap:(id)arg1;
- (_Bool)shouldRespondToTouchControl:(id)arg1;
- (void)tap:(id)arg1;

@end

