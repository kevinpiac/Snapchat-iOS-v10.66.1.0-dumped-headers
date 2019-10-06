//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString;
@protocol SCLensRemoteAssetsUploadOperation;

@protocol SCLensRemoteAssetsUploadOperationListener <NSObject>
- (void)lensRemoteAssetsUploadOperation:(id <SCLensRemoteAssetsUploadOperation>)arg1 didFailUploadingAssetWithId:(NSString *)arg2 effectId:(NSString *)arg3 error:(NSError *)arg4;
- (void)lensRemoteAssetsUploadOperation:(id <SCLensRemoteAssetsUploadOperation>)arg1 didSucceedUploadingAssetWithId:(NSString *)arg2 effectId:(NSString *)arg3;
- (void)lensRemoteAssetsUploadOperationDidFail:(id <SCLensRemoteAssetsUploadOperation>)arg1 withError:(NSError *)arg2;
- (void)lensRemoteAssetsUploadOperationDidSucceed:(id <SCLensRemoteAssetsUploadOperation>)arg1;
@end

