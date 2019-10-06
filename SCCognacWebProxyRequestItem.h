//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCCognacWebProxyLoadRequest, SCCognacWebProxyRequest;
@protocol OS_dispatch_queue;

@interface SCCognacWebProxyRequestItem : NSObject
{
    _Bool _cancelled;
    SCCognacWebProxyRequest *_request;
    NSObject<OS_dispatch_queue> *_completionQueue;
    CDUnknownBlockType _completionBlock;
    SCCognacWebProxyLoadRequest *_loadRequest;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(retain, nonatomic) SCCognacWebProxyLoadRequest *loadRequest; // @synthesize loadRequest=_loadRequest;
@property(retain, nonatomic) SCCognacWebProxyRequest *request; // @synthesize request=_request;

@end

