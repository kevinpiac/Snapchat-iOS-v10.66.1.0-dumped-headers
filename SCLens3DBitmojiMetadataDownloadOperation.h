//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCLensAssetDownloadOperation.h"

#import "SCTraceEnabled-Protocol.h"

@class NSString, SC3DBitmojiMetadataStore;

@interface SCLens3DBitmojiMetadataDownloadOperation : SCLensAssetDownloadOperation <SCTraceEnabled>
{
    SC3DBitmojiMetadataStore *_bitmoji3DMetadataStore;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SC3DBitmojiMetadataStore *bitmoji3DMetadataStore; // @synthesize bitmoji3DMetadataStore=_bitmoji3DMetadataStore;
- (void)boostWithSettings:(id)arg1;
- (void)executeWithSettings:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithLens:(id)arg1 requestTiming:(long long)arg2 asset:(id)arg3 bitmoji3DMetadataStore:(id)arg4;
- (_Bool)isEqual:(id)arg1;
- (void)processBitmojiMetadataResponse:(id)arg1 cached:(_Bool)arg2 inputSettings:(id)arg3 error:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

