//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData, NSString, SCWebProxyCacheLayer, SCWebProxyRequest;

@protocol SCWebProxyCacheLayerDelegate
- (void)proxyCacheLayer:(SCWebProxyCacheLayer *)arg1 didFullyCacheResourceForProxyRequest:(SCWebProxyRequest *)arg2 resourceData:(NSData *)arg3;
- (NSString *)proxyCacheLeyer:(SCWebProxyCacheLayer *)arg1 cacheKeyForProxyRequest:(SCWebProxyRequest *)arg2;
@end
