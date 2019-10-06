//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FABCertificatePinner, NSMutableDictionary;

@interface ANSNetworkRetryHandler : NSObject
{
    FABCertificatePinner *_certPinner;
    NSMutableDictionary *_retryTimerMap;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) FABCertificatePinner *certPinner; // @synthesize certPinner=_certPinner;
- (id)errorWithCode:(long long)arg1 forIdentifier:(id)arg2 request:(id)arg3 handlerError:(id)arg4;
- (void)handleChallenge:(id)arg1 fromURLSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handleCompletedRequest:(id)arg1 withResponse:(id)arg2 forIdentifier:(id)arg3 error:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)handleCompletedRequest:(id)arg1 withResponse:(id)arg2 forIdentifier:(id)arg3 maxRetries:(unsigned long long)arg4 error:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)init;
@property(readonly, nonatomic) NSMutableDictionary *retryTimerMap; // @synthesize retryTimerMap=_retryTimerMap;
- (double)retryValueForResponse:(id)arg1;
- (id)sharedFabricSDK;
- (id)timerForIdentifier:(id)arg1 initialRetryValue:(double)arg2;

@end

