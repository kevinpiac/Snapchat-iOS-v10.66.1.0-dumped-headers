//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface SCTimeboundCompletion : NSObject
{
    CDUnknownBlockType _completion;
    NSObject<OS_dispatch_source> *_timer;
    double _timeout;
}

- (void).cxx_destruct;
- (void)_executeCompletionTimedOut:(_Bool)arg1;
- (void)complete;
- (id)initWithCompletion:(CDUnknownBlockType)arg1 timeout:(double)arg2;
- (void)start;
- (void)timeout;

@end

