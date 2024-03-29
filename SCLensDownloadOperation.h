//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTraceEnabled-Protocol.h"

@class NSString, SCLens, SCPromise;

@interface SCLensDownloadOperation : NSObject <SCTraceEnabled>
{
    NSString *_operationId;
    SCLens *_lens;
    long long _requestTiming;
    long long _fetchPriority;
    SCPromise *_resultPromise;
    NSString *_enqueuedRequestId;
}

- (void).cxx_destruct;
- (void)boostWithRequestTiming:(long long)arg1;
- (void)boostWithSettings:(id)arg1;
@property(readonly, copy) NSString *description;
@property(copy) NSString *enqueuedRequestId; // @synthesize enqueuedRequestId=_enqueuedRequestId;
- (void)executeWithSettings:(id)arg1;
@property(nonatomic) long long fetchPriority; // @synthesize fetchPriority=_fetchPriority;
- (void)finishWithFailure:(id)arg1 settings:(id)arg2;
- (void)finishWithResult:(id)arg1;
- (void)finishWithSuccess:(id)arg1 settings:(id)arg2;
- (id)initWithLens:(id)arg1 requestTiming:(long long)arg2;
@property(readonly, nonatomic) SCLens *lens; // @synthesize lens=_lens;
@property(readonly, copy, nonatomic) NSString *operationId; // @synthesize operationId=_operationId;
@property(readonly, nonatomic) long long requestTiming; // @synthesize requestTiming=_requestTiming;
@property(readonly, nonatomic) SCPromise *resultPromise; // @synthesize resultPromise=_resultPromise;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

