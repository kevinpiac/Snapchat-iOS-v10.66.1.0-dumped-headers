//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCSpectaclesTask : NSObject
{
    long long _failureCount;
}

- (_Bool)allowsTransferChannel:(long long)arg1;
@property(readonly, nonatomic) long long failureCount; // @synthesize failureCount=_failureCount;
- (_Bool)handleResponse:(id)arg1;
- (long long)increaseAndGetFailureCount;
- (_Bool)isFinished;
- (id)nextRequest:(long long)arg1;
- (double)requiredDelay;
- (_Bool)supportsBatchingOnTransferChannel:(long long)arg1;
- (unsigned long long)type;

@end

