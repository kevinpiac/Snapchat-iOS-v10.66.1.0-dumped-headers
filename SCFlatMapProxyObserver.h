//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCObserver-Protocol.h"

@class SCObservable;
@protocol SCFlatMapProxyObserverDelegate, SCObserver;

@interface SCFlatMapProxyObserver : NSObject <SCObserver>
{
    SCObservable *_observable;
    id <SCObserver> _observer;
    id <SCFlatMapProxyObserverDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)complete;
- (id)initWithGeneratedObservable:(id)arg1 observer:(id)arg2 delegate:(id)arg3;
- (void)next:(id)arg1;

@end

