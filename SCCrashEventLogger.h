//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCCrashEventCollection;
@protocol OS_dispatch_queue;

@interface SCCrashEventLogger : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    SCCrashEventCollection *_tracesCollection;
    SCCrashEventCollection *_blizzardEventsCollection;
    SCCrashEventCollection *_odpEventsCollection;
}

+ (id)shared;
- (void).cxx_destruct;
- (id)_collectionWithName:(id)arg1 scopedUserSession:(id)arg2;
- (id)_dictionaryForCollection:(id)arg1;
- (id)eventDictionaries;
- (id)init;
- (void)logEventWithType:(unsigned long long)arg1 name:(id)arg2;

@end

