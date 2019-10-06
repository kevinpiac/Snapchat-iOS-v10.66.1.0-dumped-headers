//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSRecursiveLock;

@interface SCAsyncBlockOperation : NSOperation
{
    CDUnknownBlockType _excutionBlock;
    _Bool _isCancelled;
    _Bool _isExecuting;
    _Bool _isFinished;
    NSRecursiveLock *_operationLock;
}

+ (id)asyncOperationWithBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)cancel;
- (void)finish;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isAsynchronous;
- (_Bool)isCancelled;
- (_Bool)isConcurrent;
- (_Bool)isExecuting;
- (_Bool)isFinished;
- (void)main;
- (void)start;

@end

