//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCDerivedObservable.h"

@class NSOperationQueue;

@interface SCAsyncObservable : SCDerivedObservable
{
    NSOperationQueue *_queue;
}

- (void).cxx_destruct;
- (id)initWithParentObservable:(id)arg1 queue:(id)arg2;
- (id)subscribe:(id)arg1;

@end

