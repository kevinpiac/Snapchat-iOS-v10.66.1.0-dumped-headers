//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCFeatureCameraBottomUIContender-Protocol.h"

@protocol SCFeatureScanBarDelegate;

@protocol SCFeatureScanBar <SCFeatureCameraBottomUIContender>
- (void)beginScanBarAnimation;
@property(nonatomic) __weak id <SCFeatureScanBarDelegate> delegate;
@end
