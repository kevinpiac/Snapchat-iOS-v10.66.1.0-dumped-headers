//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSerengetiObservable-Protocol.h"

@class NSMutableArray, NSString;

@interface SCSerengetiBasicObservable : NSObject <SCSerengetiObservable>
{
    NSString *_javascriptFunctionName;
    NSMutableArray *_observers;
}

- (void).cxx_destruct;
- (void)_removeObserverEntry:(id)arg1;
- (id)addObserverWithParameters:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithJavascriptName:(id)arg1;
- (id)javascriptFunctionName;
- (void)notifyObserversWithParameters:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

