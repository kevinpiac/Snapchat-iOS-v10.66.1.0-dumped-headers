//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol SCLensRemoteAssetsUploader <NSObject>
- (void)uploadUserGeneratedAssetWithId:(NSString *)arg1 assetPath:(NSString *)arg2 encryptionKey:(NSData *)arg3 encryptionIv:(NSData *)arg4 completion:(void (^)(_Bool, unsigned long long, NSError *))arg5;
@end

