//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSURLRequest, NSURLResponse;

@protocol CRNNetworkClientProtocol <NSObject>
- (void)cancelAuthRequest;
- (void)didCreateNativeRequest:(struct URLRequest *)arg1;
- (void)didFailWithNSErrorCode:(long long)arg1 netErrorCode:(int)arg2;
- (void)didFinishLoading;
- (void)didLoadData:(NSData *)arg1;
- (void)didReceiveResponse:(NSURLResponse *)arg1;
- (void)didRecieveAuthChallenge:(struct AuthChallengeInfo *)arg1 nativeRequest:(const struct URLRequest *)arg2 callback:(const RepeatingCallback_f9343488 *)arg3;
- (void)wasRedirectedToRequest:(NSURLRequest *)arg1 nativeRequest:(struct URLRequest *)arg2 redirectResponse:(NSURLResponse *)arg3;
@end
