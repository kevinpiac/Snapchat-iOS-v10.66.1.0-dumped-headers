//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface SCRPCCallOptions : NSObject
{
    NSString *_authToken;
    long long _rpcTimeout;
    NSDictionary *_additionalHeaders;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *additionalHeaders; // @synthesize additionalHeaders=_additionalHeaders;
@property(readonly, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
- (id)initWithAuthToken:(id)arg1 rpcTimeout:(long long)arg2 additionalHeaders:(id)arg3;
@property(readonly, nonatomic) long long rpcTimeout; // @synthesize rpcTimeout=_rpcTimeout;

@end
