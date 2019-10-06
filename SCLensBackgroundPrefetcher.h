//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBackgroundPrefetchProtocol-Protocol.h"
#import "SCLensDataFetcherListener-Protocol.h"
#import "SCLensMetadataStoreListener-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSMutableSet, NSString, SCCircumstanceEngine;
@protocol SCLensDataFetcher, SCLensMetadataStoreProtocol, SCLensUserProvider, SCPerforming;

@interface SCLensBackgroundPrefetcher : NSObject <SCTraceEnabled, SCLensMetadataStoreListener, SCLensDataFetcherListener, SCBackgroundPrefetchProtocol>
{
    id <SCLensDataFetcher> _lensDataFetcher;
    id <SCLensMetadataStoreProtocol> _prefetchMetadataStore;
    id <SCLensUserProvider> _lensUserProvider;
    id <SCPerforming> _performer;
    CDUnknownBlockType _prefetchCompletionHandler;
    SCCircumstanceEngine *_circumstanceEngine;
    NSMutableSet *_lensesToPrefetch;
    unsigned long long _metadataCallbackCount;
    _Bool _completionHandlerHasRun;
}

- (void).cxx_destruct;
- (void)_doPrefetchLens:(id)arg1;
- (void)_prefetchLenses:(id)arg1;
- (void)backgroundPrefetchMediaWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithLensDataFetcher:(id)arg1 performer:(id)arg2 prefetchMetadataStore:(id)arg3 lensUserProvider:(id)arg4 circumstanceEngine:(id)arg5;
- (void)lensDataFetcher:(id)arg1 didFinishLoadingContentForAsset:(id)arg2 content:(id)arg3 error:(id)arg4;
- (void)lensDataFetcher:(id)arg1 didFinishLoadingContentForLens:(id)arg2 contentPath:(id)arg3 error:(id)arg4;
- (void)lensDataFetcher:(id)arg1 didFinishLoadingFilterOverlayImageForLens:(id)arg2 imagePath:(id)arg3 error:(id)arg4;
- (void)lensDataFetcher:(id)arg1 didFinishLoadingImageForLens:(id)arg2 image:(id)arg3 error:(id)arg4;
- (void)lensDataFetcher:(id)arg1 willStartLoadingAsset:(id)arg2;
- (void)lensDataFetcher:(id)arg1 willStartLoadingContentForLens:(id)arg2;
- (void)lensDataFetcher:(id)arg1 willStartLoadingFilterOverlayImagePathForLens:(id)arg2;
- (void)lensDataFetcher:(id)arg1 willStartLoadingImageForLens:(id)arg2;
- (void)lensMetadataStore:(id)arg1 didUpdateLenses:(id)arg2;
- (void)lensMetadataStore:(id)arg1 didUpdateLensesToPrefetch:(id)arg2;
- (id)name;
- (unsigned long long)prefetchIntervalInSeconds;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

