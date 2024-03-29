//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "LSARemoteAssetsComponentListener-Protocol.h"
#import "SCActiveLensProvider-Protocol.h"
#import "SCLensRemoteAssetsProvider-Protocol.h"
#import "SCLensRemoteAssetsUploadOperationDelegate-Protocol.h"
#import "SCLensRemoteAssetsUploadOperationListener-Protocol.h"
#import "SCLensRemoteAssetsUploadOperationProvider-Protocol.h"
#import "SCLensUIUpdateListener-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class LSARemoteAssetsComponent, NSMutableDictionary, NSString, SCAssetValidator, SCExperimentManager, SCLens;
@protocol SCLensDataFetcher, SCLensLoggerConsumptionTrackingProviding, SCLensRemoteAssetLoggerProtocol, SCLensRemoteAssetsUploadFileManager, SCLensRemoteAssetsUploader, SCPerforming;

@interface SCLensRemoteAssetsDataProvider : NSObject <SCTraceEnabled, SCLensRemoteAssetsUploadOperationListener, SCLensRemoteAssetsUploadOperationDelegate, LSARemoteAssetsComponentListener, SCActiveLensProvider, SCLensUIUpdateListener, SCLensRemoteAssetsUploadOperationProvider, SCLensRemoteAssetsProvider>
{
    LSARemoteAssetsComponent *_remoteAssetsComponent;
    id <SCLensDataFetcher> _dataFetcher;
    id <SCLensRemoteAssetsUploader> _assetsUploader;
    id <SCLensRemoteAssetsUploadFileManager> _assetsFileManager;
    id <SCLensLoggerConsumptionTrackingProviding> _consumptionLensLogger;
    id <SCPerforming> _performer;
    SCAssetValidator *_assetValidator;
    NSMutableDictionary *_batches;
    id <SCLensRemoteAssetLoggerProtocol> _lensRemoteAssetLogger;
    SCExperimentManager *_experimentManager;
    SCLens *_activeLens;
    NSString *_userId;
    NSString *_bitmojiAvatarId;
    NSString *_friendUserId;
    NSString *_friendAvatarId;
}

- (void).cxx_destruct;
- (void)_getLsaRemoteAsset:(id)arg1 effectId:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)_operationForBatchId:(id)arg1;
- (id)_whitelistedDomains;
@property(retain, nonatomic) SCLens *activeLens; // @synthesize activeLens=_activeLens;
- (id)assetsUploaderForUploadOperation:(id)arg1;
@property(copy, nonatomic) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
- (void)didEndDisplayingLens:(id)arg1;
- (void)didHideLenses;
- (void)didSelectLens:(id)arg1;
- (void)didUpdateActiveLensOrder:(id)arg1;
- (id)fileManagerForUploadOperation:(id)arg1;
@property(copy, nonatomic) NSString *friendAvatarId; // @synthesize friendAvatarId=_friendAvatarId;
@property(copy, nonatomic) NSString *friendUserId; // @synthesize friendUserId=_friendUserId;
- (void)getLsaRemoteAsset:(id)arg1 effectId:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)initWithRemoteAssetsComponent:(id)arg1 dataFetcher:(id)arg2 assetsUploader:(id)arg3 assetsFileManager:(id)arg4 consumptionLensLogger:(id)arg5 lensRemoteAssetLogger:(id)arg6 experimentManager:(id)arg7;
- (id)initWithRemoteAssetsComponent:(id)arg1 dataFetcher:(id)arg2 assetsUploader:(id)arg3 assetsFileManager:(id)arg4 consumptionLensLogger:(id)arg5 lensRemoteAssetLogger:(id)arg6 performer:(id)arg7 experimentManager:(id)arg8;
- (void)lensRemoteAssetsUploadOperation:(id)arg1 didFailUploadingAssetWithId:(id)arg2 effectId:(id)arg3 error:(id)arg4;
- (void)lensRemoteAssetsUploadOperation:(id)arg1 didSucceedUploadingAssetWithId:(id)arg2 effectId:(id)arg3;
- (void)lensRemoteAssetsUploadOperationDidFail:(id)arg1 withError:(id)arg2;
- (void)lensRemoteAssetsUploadOperationDidSucceed:(id)arg1;
- (void)remoteAssetsComponent:(id)arg1 didRequestAsset:(id)arg2 effectId:(id)arg3;
- (void)remoteAssetsComponent:(id)arg1 didRequestAssetUploadWithId:(id)arg2 assetPath:(id)arg3 effectId:(id)arg4 deleteAfterUploading:(_Bool)arg5;
- (void)remoteAssetsComponent:(id)arg1 didRequestAssetUploadWithId:(id)arg2 assetPath:(id)arg3 encryptionKey:(id)arg4 encryptionIv:(id)arg5 assetBatchId:(id)arg6 effectId:(id)arg7 deleteAfterUploading:(_Bool)arg8;
- (void)setActive:(_Bool)arg1;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (id)uploadOperationForAssetBatchId:(id)arg1;
- (void)willDisplayLens:(id)arg1;
- (void)willShowLenses;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

