//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCMapBitmojiSticker;
@protocol SCXBitmojiLayerModelProvider;

@protocol SCXBitmojiLayerModelProviderListener <NSObject>
- (void)bitmojiLayerModelProvider:(id <SCXBitmojiLayerModelProvider>)arg1 didUpdateModelsWithDuration:(double)arg2;
- (void)bitmojiLayerModelProvider:(id <SCXBitmojiLayerModelProvider>)arg1 didUpdateSticker:(SCMapBitmojiSticker *)arg2 userId:(NSString *)arg3 animated:(_Bool)arg4;
@end

