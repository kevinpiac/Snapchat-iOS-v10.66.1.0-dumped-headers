//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCLensDownloadOperation.h"

#import "SCTraceEnabled-Protocol.h"

@class NSString, SCLensAsset;

@interface SCLensAssetDownloadOperation : SCLensDownloadOperation <SCTraceEnabled>
{
    SCLensAsset *_asset;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCLensAsset *asset; // @synthesize asset=_asset;
@property(readonly, copy) NSString *description;
- (id)initWithLens:(id)arg1 requestTiming:(long long)arg2 asset:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
