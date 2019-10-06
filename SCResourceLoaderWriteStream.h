//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNContentManagerWriteStream-Protocol.h"

@class NSOperationQueue, SCDisposableObserverLifecycle, SCPublishSubject;

@interface SCResourceLoaderWriteStream : NSObject <SCNContentManagerWriteStream>
{
    NSOperationQueue *_mointoringQueue;
    SCPublishSubject *_streamDataObservable;
    SCDisposableObserverLifecycle *_streamLifeCycle;
}

- (void).cxx_destruct;
- (void)free;
- (id)initWithMonitoringQueue:(id)arg1;
- (void)putBytes:(long long)arg1 dataBytes:(id)arg2;
- (void)setError:(long long)arg1 message:(id)arg2;
- (void)startMonitoringForUpdates:(CDUnknownBlockType)arg1;
- (void)stopMonitoringForUpdates;

@end
