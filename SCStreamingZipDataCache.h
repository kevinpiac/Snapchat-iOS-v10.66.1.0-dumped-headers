//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStreamingZipDataCaching-Protocol.h"

@class NSString;
@protocol SCStreamingResponseCaching;

@interface SCStreamingZipDataCache : NSObject <SCStreamingZipDataCaching>
{
    id <SCStreamingResponseCaching> _responseCache;
    double _ttl;
}

- (void).cxx_destruct;
- (void)_cacheStreamingZipInitialMediaData:(id)arg1 m3u8Data:(id)arg2 encrypted:(_Bool)arg3 completionQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)cacheStreamingZipData:(id)arg1 forKey:(id)arg2 muxedMediaSize:(unsigned long long)arg3 completionQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithResponseCache:(id)arg1 ttl:(double)arg2;
@property(readonly, nonatomic) id <SCStreamingResponseCaching> responseCache; // @synthesize responseCache=_responseCache;
@property(readonly, nonatomic) double ttl; // @synthesize ttl=_ttl;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

