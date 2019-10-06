//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "LSARemoteAssetsComponentListener-Protocol.h"
#import "SCImageProcessLensCommandListener-Protocol.h"

@class NSString, SCImageProcessLensCommand, SCLensUriServiceProvider, SCLensUriServiceSnap3DRemoteDataHandler;
@protocol SCLensRemoteAssetsUploader;

@interface SCMagicMomentLensDataController : NSObject <SCImageProcessLensCommandListener, LSARemoteAssetsComponentListener>
{
    SCImageProcessLensCommand *_lensCommand;
    SCLensUriServiceSnap3DRemoteDataHandler *_remoteDataHandler;
    SCLensUriServiceProvider *_uriServiceProvider;
    id <SCLensRemoteAssetsUploader> _lensDataUploader;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)imageProcessLensCommand:(id)arg1 didFinishProcessingFrameWithLens:(id)arg2;
- (void)imageProcessLensCommand:(id)arg1 didRecognizeExpression:(id)arg2;
- (void)imageProcessLensCommand:(id)arg1 didRecognizeFaces:(unsigned long long)arg2;
- (void)imageProcessLensCommand:(id)arg1 didUnloadWithLensComponentManager:(id)arg2;
- (void)imageProcessLensCommand:(id)arg1 willLoadWithLensComponentManager:(id)arg2;
- (id)initWithLensDataUploader:(id)arg1;
@property(retain, nonatomic) SCImageProcessLensCommand *lensCommand; // @synthesize lensCommand=_lensCommand;
- (id)lensDataFuture;
@property(retain, nonatomic) id <SCLensRemoteAssetsUploader> lensDataUploader; // @synthesize lensDataUploader=_lensDataUploader;
- (void)remoteAssetsComponent:(id)arg1 didRequestAsset:(id)arg2 effectId:(id)arg3;
- (void)remoteAssetsComponent:(id)arg1 didRequestAssetUploadWithId:(id)arg2 assetPath:(id)arg3 effectId:(id)arg4 deleteAfterUploading:(_Bool)arg5;
- (void)remoteAssetsComponent:(id)arg1 didRequestAssetUploadWithId:(id)arg2 assetPath:(id)arg3 encryptionKey:(id)arg4 encryptionIv:(id)arg5 assetBatchId:(id)arg6 effectId:(id)arg7 deleteAfterUploading:(_Bool)arg8;
@property(retain, nonatomic) SCLensUriServiceSnap3DRemoteDataHandler *remoteDataHandler; // @synthesize remoteDataHandler=_remoteDataHandler;
@property(retain, nonatomic) SCLensUriServiceProvider *uriServiceProvider; // @synthesize uriServiceProvider=_uriServiceProvider;
- (void)setupFutureWithLensCommand:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

