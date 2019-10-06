//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCScopeLifecycleMonitor-Protocol.h"

@class NSMapTable;

@interface SCEntryPointWatchDog : NSObject <SCScopeLifecycleMonitor>
{
    CDUnknownBlockType _timerFactory;
    double _timeout;
    NSMapTable *_lifecycleAndEntryPointToTimer;
}

- (void).cxx_destruct;
- (void)_neverEndingEntryPointDetected:(id)arg1;
- (void)entryPoint:(id)arg1 beganInLifecycle:(id)arg2;
- (void)entryPoint:(id)arg1 beginningInLifecycle:(id)arg2;
- (void)entryPoint:(id)arg1 endedInLifecycle:(id)arg2;
- (void)entryPoint:(id)arg1 endingInLifecycle:(id)arg2;
- (id)initWithTimerFactory:(CDUnknownBlockType)arg1 entryPointTimeout:(double)arg2;
- (void)lifecycleBegan:(id)arg1;
- (void)lifecycleBeginning:(id)arg1;
- (void)lifecycleEnded:(id)arg1;
- (void)lifecycleEnding:(id)arg1;
- (void)scope:(id)arg1 willBeExposedFromLifecycle:(id)arg2;
- (void)scope:(id)arg1 willBeRemovedFromLifecycle:(id)arg2;
- (void)services:(id)arg1 willBeExposedInLifecycle:(id)arg2;

@end

