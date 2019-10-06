//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class LSARemoteAsset, LSARemoteAssetsComponent, NSData, NSString;

@protocol LSARemoteAssetsComponentListener <NSObject>
- (void)remoteAssetsComponent:(LSARemoteAssetsComponent *)arg1 didRequestAsset:(LSARemoteAsset *)arg2 effectId:(NSString *)arg3;
- (void)remoteAssetsComponent:(LSARemoteAssetsComponent *)arg1 didRequestAssetUploadWithId:(NSString *)arg2 assetPath:(NSString *)arg3 effectId:(NSString *)arg4 deleteAfterUploading:(_Bool)arg5;
- (void)remoteAssetsComponent:(LSARemoteAssetsComponent *)arg1 didRequestAssetUploadWithId:(NSString *)arg2 assetPath:(NSString *)arg3 encryptionKey:(NSData *)arg4 encryptionIv:(NSData *)arg5 assetBatchId:(NSString *)arg6 effectId:(NSString *)arg7 deleteAfterUploading:(_Bool)arg8;
@end

