//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, SCWebProxyHeaderTransformLayer, SCWebProxyRequest;

@protocol SCWebProxyHeaderTransformLayerDelegate
- (_Bool)proxyHeaderTransformLayer:(SCWebProxyHeaderTransformLayer *)arg1 shouldTransformResponseHeadersForProxyRequest:(SCWebProxyRequest *)arg2;
- (NSDictionary *)proxyHeaderTransformLayer:(SCWebProxyHeaderTransformLayer *)arg1 transformResponseHeaders:(NSDictionary *)arg2 forProxyRequest:(SCWebProxyRequest *)arg3;
@end
