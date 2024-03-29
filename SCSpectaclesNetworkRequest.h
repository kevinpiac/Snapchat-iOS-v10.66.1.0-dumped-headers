//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSpectaclesNetworkRequestProvider-Protocol.h"

@class NSString;

@interface SCSpectaclesNetworkRequest : NSObject <SCSpectaclesNetworkRequestProvider>
{
    unsigned long long _expectedResponseCount;
    CDUnknownBlockType _providerBlock;
}

+ (id)analyticsFilesDeleteRequest;
+ (id)analyticsFilesGetWithFilename:(id)arg1 range:(struct _NSRange)arg2;
+ (id)analyticsFilesListRequest;
+ (id)batchReadRequestWithFilename:(id)arg1 range:(struct _NSRange)arg2 chunkSize:(unsigned long long)arg3 allowDataPacket:(_Bool)arg4;
+ (id)crashLogFileListRequest;
+ (id)crashLogFileRequestWithFilename:(id)arg1 range:(struct _NSRange)arg2;
+ (id)deletionRequestForContentNamed:(id)arg1 includeHd:(_Bool)arg2;
+ (id)firmwareWriteRequest:(id)arg1 start:(unsigned long long)arg2;
+ (id)gpsWriteRequest:(id)arg1;
+ (id)lagunaPairingRequestWithAmbaRequest:(id)arg1;
+ (id)markTransferredRequestForContentNamed:(id)arg1 includeHd:(_Bool)arg2;
+ (id)mediaListRequest;
+ (id)readRequestWithFilename:(id)arg1;
+ (id)requestByBatchingRequests:(id)arg1;
+ (id)shareWifiCredentialsRequest;
+ (id)shareWifiCredentialsStatusRequest;
+ (id)startAsNeededDeletionRequest;
+ (id)stereoCalibrationDataRequest;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long expectedResponseCount; // @synthesize expectedResponseCount=_expectedResponseCount;
- (id)initWithProviderBlock:(CDUnknownBlockType)arg1 expectedResponseCount:(unsigned long long)arg2;
- (id)lagunaRequests;
- (id)malibuRequest;
@property(copy, nonatomic) CDUnknownBlockType providerBlock; // @synthesize providerBlock=_providerBlock;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

