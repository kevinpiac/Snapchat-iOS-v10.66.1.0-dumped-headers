//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, NSString, SCStreamingZipData;
@protocol OS_dispatch_queue;

@protocol SCStreamingZipDataCaching <NSObject>
- (void)cacheStreamingZipData:(SCStreamingZipData *)arg1 forKey:(NSString *)arg2 muxedMediaSize:(unsigned long long)arg3 completionQueue:(NSObject<OS_dispatch_queue> *)arg4 completion:(void (^)(void))arg5;
@end

