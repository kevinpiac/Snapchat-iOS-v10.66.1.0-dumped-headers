//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSObject, NSString;
@protocol OS_dispatch_queue, SCMediaUploadMetadataFetcher, SCMediaUploadMetadataMutator, SCMediaUploadMetadataTracker;

@protocol SCMediaUploader <NSObject>
- (void)uploadMedia:(NSString *)arg1 dataToUpload:(NSData *)arg2 callbackQueue:(NSObject<OS_dispatch_queue> *)arg3 successBlock:(void (^)(NSString *, NSURL *, NSDate *))arg4 failureBlock:(void (^)(NSHTTPURLResponse *, NSError *))arg5;
- (id <SCMediaUploadMetadataFetcher>)uploadMetadataFetcher;
- (id <SCMediaUploadMetadataMutator>)uploadMetadataMutator;
- (id <SCMediaUploadMetadataTracker>)uploadMetadataTracker;
@end

