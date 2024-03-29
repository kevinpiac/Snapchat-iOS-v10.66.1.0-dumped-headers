//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnapAdsAdTransformListener-Protocol.h"

@class NSString, SCAdResponseAdDataV2, SCDiscoverChunk;

@interface SCDiscoverChunkAdTransformListener : NSObject <SCSnapAdsAdTransformListener>
{
    SCAdResponseAdDataV2 *_adResponseV2;
    SCDiscoverChunk *_chunk;
}

- (void).cxx_destruct;
- (void)_handleMediaFetchCompleteForAdKey:(id)arg1 downloadTimeInSec:(double)arg2 isSuccess:(_Bool)arg3 error:(id)arg4;
- (void)_handleMediaFetchFailure;
@property(retain, nonatomic) SCDiscoverChunk *chunk; // @synthesize chunk=_chunk;
- (id)initWithChunk:(id)arg1;
- (void)onAdTransformComplete:(id)arg1 shouldPredownloadMedia:(_Bool)arg2;
- (void)onAdTransformError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

