//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTraceEnabled-Protocol.h"

@class NSString, SC3DBitmojiMetadataStore, SCExperimentManager, SCLensBitmojiListManager, SCLensBlobDataFetcher, SCLensContentDataFetcher, SCLensDownloadTracker, SCLensSecurity;
@protocol SCBitmojiImageFetcher, SCLensDownloadLogger, SCLensPreferences, SCLensRemoteAssetLoggerProtocol, SCLensRemoteAssetsLensResourceResolver, SCLensUserProvider;

@interface SCLensDownloadOperationFactory : NSObject <SCTraceEnabled>
{
    id <SCLensUserProvider> _lensUserProvider;
    id <SCLensRemoteAssetLoggerProtocol> _lensRemoteAssetLogger;
    SCLensContentDataFetcher *_contentDataFetcher;
    SCLensBlobDataFetcher *_blobDataFetcher;
    id <SCBitmojiImageFetcher> _bitmojiImageFetcher;
    SCLensBitmojiListManager *_bitmojiListManager;
    SC3DBitmojiMetadataStore *_bitmoji3DMetadataStore;
    SCLensSecurity *_signatureValidator;
    id <SCLensPreferences> _lensPreferences;
    id <SCLensDownloadLogger> _lensDownloadLogger;
    id <SCLensRemoteAssetsLensResourceResolver> _assetLensResourceResolver;
    SCLensDownloadTracker *_downloadTracker;
    SCExperimentManager *_experimentManager;
}

- (void).cxx_destruct;
- (id)assetDownloadOperationForAsset:(id)arg1 contextLens:(id)arg2 requestTiming:(long long)arg3;
@property(retain, nonatomic) id <SCLensRemoteAssetsLensResourceResolver> assetLensResourceResolver; // @synthesize assetLensResourceResolver=_assetLensResourceResolver;
@property(retain, nonatomic) SC3DBitmojiMetadataStore *bitmoji3DMetadataStore; // @synthesize bitmoji3DMetadataStore=_bitmoji3DMetadataStore;
- (id)bitmojiIconDownloadOperationForLens:(id)arg1 requestTiming:(long long)arg2;
@property(retain, nonatomic) id <SCBitmojiImageFetcher> bitmojiImageFetcher; // @synthesize bitmojiImageFetcher=_bitmojiImageFetcher;
@property(retain, nonatomic) SCLensBitmojiListManager *bitmojiListManager; // @synthesize bitmojiListManager=_bitmojiListManager;
@property(retain, nonatomic) SCLensBlobDataFetcher *blobDataFetcher; // @synthesize blobDataFetcher=_blobDataFetcher;
@property(retain, nonatomic) SCLensContentDataFetcher *contentDataFetcher; // @synthesize contentDataFetcher=_contentDataFetcher;
- (id)contentDownloadOperationForLens:(id)arg1 requestTiming:(long long)arg2 userInitiated:(_Bool)arg3;
@property(retain, nonatomic) SCLensDownloadTracker *downloadTracker; // @synthesize downloadTracker=_downloadTracker;
@property(retain, nonatomic) SCExperimentManager *experimentManager; // @synthesize experimentManager=_experimentManager;
- (id)filterOverlayDownloadOperationForLens:(id)arg1 requestTiming:(long long)arg2;
- (id)iconDownloadOperationForLens:(id)arg1 requestTiming:(long long)arg2;
- (id)imageDownloadOperationForLens:(id)arg1 requestTiming:(long long)arg2;
- (id)initWithContentDataFetcher:(id)arg1 blobDataFetcher:(id)arg2 bitmojiImageFetcher:(id)arg3 lensBitmojiListManager:(id)arg4 bitmoji3dMetadataStore:(id)arg5 signatureValidator:(id)arg6 downloadTracker:(id)arg7 lensPreferences:(id)arg8 lensUserProvider:(id)arg9 lensDownloadLogger:(id)arg10 lensRemoteAssetLogger:(id)arg11 assetLensResourceResolver:(id)arg12 experimentManager:(id)arg13;
@property(retain, nonatomic) id <SCLensDownloadLogger> lensDownloadLogger; // @synthesize lensDownloadLogger=_lensDownloadLogger;
@property(retain, nonatomic) id <SCLensPreferences> lensPreferences; // @synthesize lensPreferences=_lensPreferences;
@property(retain, nonatomic) SCLensSecurity *signatureValidator; // @synthesize signatureValidator=_signatureValidator;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

