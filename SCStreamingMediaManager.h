//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SCStreamingDelegate, SCStreamingRequestExtraInfoProviding, SCStreamingResponseCaching, SCStreamingZipDataCaching, SCWebProxyRequestHandling;

@interface SCStreamingMediaManager : NSObject
{
    id <SCStreamingResponseCaching> _responseCache;
    id <SCStreamingRequestExtraInfoProviding> _extraInfoProvider;
    id <SCWebProxyRequestHandling> _requestHandler;
    id <SCStreamingZipDataCaching> _zipDataCache;
    id <SCStreamingDelegate> _longformStreamingDelegate;
}

- (void).cxx_destruct;
- (void)clearCache;
- (id)initWithCache:(id)arg1 cacheTTL:(double)arg2 requestManager:(id)arg3;
@property(readonly, nonatomic) id <SCStreamingDelegate> longformStreamingDelegate; // @synthesize longformStreamingDelegate=_longformStreamingDelegate;
- (id)newMediaFetcherWithStreamingDelegate:(id)arg1;
- (id)newResourceLoaderDelegateWithStreamingDelegate:(id)arg1;
- (id)newURLProvider;
- (id)newURLProviderWithStreamingDelegate:(id)arg1;
@property(readonly, nonatomic) id <SCStreamingZipDataCaching> zipDataCache; // @synthesize zipDataCache=_zipDataCache;

@end

