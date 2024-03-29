//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSError, NSString;

@protocol SCMediaDownloadLogger <NSObject>
- (void)downloadQueuedWithMediaScenePath:(CDStruct_bac8f6e9)arg1;
- (void)downloadStartedWithMediaScenePath:(CDStruct_bac8f6e9)arg1;
- (void)logGetSnapsError:(NSArray *)arg1 getSnapResponse:(NSString *)arg2;
- (void)mediaDownloadEntityRequestCompelte:(_Bool)arg1 canceled:(_Bool)arg2 latency:(double)arg3;
- (void)mediaDownloadRedirectRequestCompelte:(_Bool)arg1 canceled:(_Bool)arg2 snapId:(NSString *)arg3 objectType:(long long)arg4 statusCode:(long long)arg5 latency:(double)arg6 urlPath:(NSString *)arg7 contentLengthInByte:(unsigned long long)arg8 error:(NSError *)arg9 addtionalParams:(NSDictionary *)arg10;
- (void)setSceneWithMediaScenePath:(CDStruct_bac8f6e9)arg1;
@end

