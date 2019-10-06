//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCWebProxyRequest, SCWebProxyResponse, SCWebProxyTransformLayer;
@protocol SCWebProxyURLProviding;

@protocol SCWebProxyTransformLayerDelegate <NSObject>
- (_Bool)proxyTransformLayer:(SCWebProxyTransformLayer *)arg1 shouldTransformProxyRequest:(SCWebProxyRequest *)arg2;
- (void)proxyTransformLayer:(SCWebProxyTransformLayer *)arg1 transformProxyResponse:(SCWebProxyResponse *)arg2 proxyRequest:(SCWebProxyRequest *)arg3 urlProvider:(id <SCWebProxyURLProviding>)arg4 completion:(void (^)(SCWebProxyResponse *))arg5;
@end
