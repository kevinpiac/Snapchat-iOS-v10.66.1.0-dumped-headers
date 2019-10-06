//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSDictionary, NSString, SCNMdpCommonRequestContext;
@protocol SCNNetworkManagerProgressiveDownloadCallback, SCNNetworkManagerUrlRequest, SCNNetworkManagerUrlRequestCallback;

@protocol SCNNetworkManagerNetworkManager
- (void)cancelRequest:(NSString *)arg1;
- (void)submit:(id <SCNNetworkManagerUrlRequest>)arg1 callback:(id <SCNNetworkManagerUrlRequestCallback>)arg2 requestContext:(SCNMdpCommonRequestContext *)arg3 priority:(long long)arg4 connectivity:(long long)arg5 httpHeaders:(NSDictionary *)arg6 requestMediaType:(long long)arg7;
- (void)submitProgressiveDownloadRequest:(id <SCNNetworkManagerUrlRequest>)arg1 requestKey:(NSString *)arg2 requestContext:(SCNMdpCommonRequestContext *)arg3 priority:(long long)arg4 connectivity:(long long)arg5 httpHeaders:(NSDictionary *)arg6 callback:(id <SCNNetworkManagerProgressiveDownloadCallback>)arg7;
- (void)updateRankingInfo:(NSString *)arg1 priority:(long long)arg2 connectivity:(long long)arg3 contexts:(NSArray *)arg4;
@end
