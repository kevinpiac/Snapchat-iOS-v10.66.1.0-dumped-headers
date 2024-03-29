//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, SCAvailableScope;
@protocol SCScopeLifecycleMonitor;

@interface SCScopeLifecycleContext : NSObject
{
    SCAvailableScope *_availableScope;
    NSOperationQueue *_operationQueue;
    id <SCScopeLifecycleMonitor> _monitor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SCAvailableScope *availableScope; // @synthesize availableScope=_availableScope;
- (id)initWithOperationQueue:(id)arg1 availableScope:(id)arg2 monitor:(id)arg3;
@property(retain, nonatomic) id <SCScopeLifecycleMonitor> monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;

@end

