//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCLensAssetDownloadOperation.h"

#import "SCTraceEnabled-Protocol.h"

@class NSString, SCLensBlobDataFetcher;
@protocol SCLensRemoteAssetLoggerProtocol;

@interface SCLensUserGeneratedRemoteAssetDownloadOperation : SCLensAssetDownloadOperation <SCTraceEnabled>
{
    id <SCLensRemoteAssetLoggerProtocol> _lensRemoteAssetLogger;
    SCLensBlobDataFetcher *_blobDataFetcher;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SCLensBlobDataFetcher *blobDataFetcher; // @synthesize blobDataFetcher=_blobDataFetcher;
- (void)boostWithSettings:(id)arg1;
- (void)executeWithSettings:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithLens:(id)arg1 requestTiming:(long long)arg2 asset:(id)arg3 blobDataFetcher:(id)arg4 lensRemoteAssetLogger:(id)arg5;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
