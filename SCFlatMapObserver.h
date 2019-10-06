//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCFlatMapProxyObserverDelegate-Protocol.h"
#import "SCObserver-Protocol.h"

@protocol SCObserver;

@interface SCFlatMapObserver : NSObject <SCFlatMapProxyObserverDelegate, SCObserver>
{
    id <SCObserver> _observer;
    CDUnknownBlockType _mapper;
    struct mutex _proxyObserversLock;
    struct vector<SCFlatMapProxyObserver *, std::__1::allocator<SCFlatMapProxyObserver *>> _proxyObservers;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)complete;
- (void)flatMapProxyObserverDidComplete:(id)arg1;
- (id)initWithObserver:(id)arg1 mapper:(CDUnknownBlockType)arg2;
- (void)next:(id)arg1;

@end
