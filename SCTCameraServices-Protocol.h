//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SCTVideoFrameReceiver;

@protocol SCTCameraServices <NSObject>
- (void)acquirePreviewWithCompletion:(void (^)(UIView *))arg1;
- (unsigned long long)getCameraType;
- (void)relinquishPreview;
- (void)setAutofocusAndExposurePointOfInterest:(struct CGPoint)arg1 viewSize:(struct CGSize)arg2;
- (void)setCameraType:(unsigned long long)arg1;
- (void)setVideoFrameReceiver:(id <SCTVideoFrameReceiver>)arg1;
- (void)startForConsumer:(NSString *)arg1 completion:(void (^)(void))arg2;
- (void)stopForConsumer:(NSString *)arg1 completion:(void (^)(void))arg2;
@end

