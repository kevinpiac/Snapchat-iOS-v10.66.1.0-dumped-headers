//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class IGListAdapter;

@interface IGListAdapterProxy : NSProxy
{
    id _collectionViewTarget;
    id _scrollViewTarget;
    IGListAdapter *_interceptor;
}

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithCollectionViewTarget:(id)arg1 scrollViewTarget:(id)arg2 interceptor:(id)arg3;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;

@end

