//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol SCFeatureScanningDelegate;

@protocol SCFeatureScanning
@property(nonatomic) __weak id <SCFeatureScanningDelegate> delegate;
@property(nonatomic) double lastSuccessfulScanTime;
- (void)startScanning;
- (void)stopScanning;
- (void)stopSearch;
@end

