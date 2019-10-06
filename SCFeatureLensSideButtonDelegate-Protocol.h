//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCGrowingButton;
@protocol SCCameraScreenBadgingStateProvider, SCFeatureLensSideButton, SCFeatureLensSideButtonUpdateProvider;

@protocol SCFeatureLensSideButtonDelegate <NSObject>
- (void)featureLensSideButton:(id <SCFeatureLensSideButton>)arg1 didPressLensButton:(SCGrowingButton *)arg2;
- (id <SCCameraScreenBadgingStateProvider>)featureLensSideButtonBadgingUpdateProvider;
- (id <SCFeatureLensSideButtonUpdateProvider>)featureLensSideButtonUpdateProvider;
@end

