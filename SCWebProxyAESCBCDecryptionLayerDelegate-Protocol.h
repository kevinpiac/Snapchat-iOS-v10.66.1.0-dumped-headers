//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSNumber, NSString, SCWebProxyAESCBCDecryptionLayer, SCWebProxyRequest;

@protocol SCWebProxyAESCBCDecryptionLayerDelegate
- (NSString *)proxyDecryptionLayer:(SCWebProxyAESCBCDecryptionLayer *)arg1 ivForProxyRequest:(SCWebProxyRequest *)arg2;
- (NSString *)proxyDecryptionLayer:(SCWebProxyAESCBCDecryptionLayer *)arg1 keyForProxyRequest:(SCWebProxyRequest *)arg2;
- (_Bool)proxyDecryptionLayer:(SCWebProxyAESCBCDecryptionLayer *)arg1 shouldDecryptProxyRequest:(SCWebProxyRequest *)arg2;
- (NSNumber *)proxyDecryptionLayer:(SCWebProxyAESCBCDecryptionLayer *)arg1 unencryptedResourceSizeForProxyRequest:(SCWebProxyRequest *)arg2;
@end
