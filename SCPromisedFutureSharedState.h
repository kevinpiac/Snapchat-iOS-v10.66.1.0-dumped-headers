//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMutableArray;
@protocol SCPerforming;

@interface SCPromisedFutureSharedState : NSObject
{
    id <SCPerforming> _performer;
    _Bool _isComplete;
    id _value;
    NSError *_error;
    NSMutableArray *_handlers;
}

- (void).cxx_destruct;
- (void)completeWithError:(id)arg1;
- (void)completeWithValue:(id)arg1;
- (void)failIfIncomplete;
- (id)initWithPerformer:(id)arg1;
- (void)valueWithCompletion:(CDUnknownBlockType)arg1 performer:(id)arg2;

@end

