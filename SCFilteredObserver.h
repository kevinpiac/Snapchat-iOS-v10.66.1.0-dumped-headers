//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCObserver-Protocol.h"

@protocol SCObserver;

@interface SCFilteredObserver : NSObject <SCObserver>
{
    id <SCObserver> _observer;
    CDUnknownBlockType _predicate;
}

- (void).cxx_destruct;
- (void)complete;
- (id)initWithObserver:(id)arg1 filter:(CDUnknownBlockType)arg2;
- (void)next:(id)arg1;

@end

