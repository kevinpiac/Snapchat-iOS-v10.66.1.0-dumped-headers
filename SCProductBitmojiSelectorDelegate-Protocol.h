//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCBitmojiImageParams, SCProductBitmojiSelectorViewController, UIImage;

@protocol SCProductBitmojiSelectorDelegate <NSObject>
- (void)bitmojiSelectorVC:(SCProductBitmojiSelectorViewController *)arg1 didSelectBitmojiImage:(UIImage *)arg2 params:(SCBitmojiImageParams *)arg3;
- (void)dismissBitmojiSelectorVC:(SCProductBitmojiSelectorViewController *)arg1;
@end

