//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, SCSpectaclesFirmwareDownloader;
@protocol SCSpectaclesFirmwareVersion;

@protocol SCSpectaclesFirmwareDownloaderDelegate
- (void)firmwareDownloader:(SCSpectaclesFirmwareDownloader *)arg1 didDownloadPatchToPath:(NSString *)arg2;
- (void)firmwareDownloader:(SCSpectaclesFirmwareDownloader *)arg1 didFailMetadataFetch:(long long)arg2;
- (void)firmwareDownloader:(SCSpectaclesFirmwareDownloader *)arg1 didFetchTargetDigest:(NSString *)arg2 targetVersion:(id <SCSpectaclesFirmwareVersion>)arg3 intermediateDigest:(NSString *)arg4 intermediateVersion:(id <SCSpectaclesFirmwareVersion>)arg5;
- (void)firmwareDownloaderDidFailPatchDownload:(SCSpectaclesFirmwareDownloader *)arg1;
@end
