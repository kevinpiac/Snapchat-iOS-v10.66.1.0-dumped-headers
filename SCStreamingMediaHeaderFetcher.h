//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SCWebProxyRequestHandling;

@interface SCStreamingMediaHeaderFetcher : NSObject
{
    unsigned long long _initialRequestSize;
    id <SCWebProxyRequestHandling> _requestHandler;
}

- (void).cxx_destruct;
- (void)_fetchMediaHeaderForRequestInfo:(id)arg1 requestSize:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchMediaHeaderForRequestInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithRequestHandler:(id)arg1;
- (id)initWithRequestHandler:(id)arg1 initialRequestSize:(unsigned long long)arg2;
@property(readonly, nonatomic) __weak id <SCWebProxyRequestHandling> requestHandler; // @synthesize requestHandler=_requestHandler;

@end

