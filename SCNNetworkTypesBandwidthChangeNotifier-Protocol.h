//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class SCNNetworkTypesBandwidthChangeListener;

@protocol SCNNetworkTypesBandwidthChangeNotifier
- (void)notifyDownloadListeners:(long long)arg1;
- (void)notifyUploadListeners:(long long)arg1;
- (long long)registerDownloadListener:(SCNNetworkTypesBandwidthChangeListener *)arg1;
- (long long)registerUploadListener:(SCNNetworkTypesBandwidthChangeListener *)arg1;
@end

