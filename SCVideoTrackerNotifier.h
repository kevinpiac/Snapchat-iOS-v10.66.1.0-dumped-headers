//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, SCVideoTrackerListener;

@interface SCVideoTrackerNotifier : NSObject
{
    id <SCVideoTrackerListener> _listener;
    NSObject<OS_dispatch_queue> *_notificationQueue;
}

- (void).cxx_destruct;
- (id)initWithListener:(id)arg1 notificationQueue:(id)arg2;
@property(readonly, nonatomic) __weak id <SCVideoTrackerListener> listener; // @synthesize listener=_listener;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // @synthesize notificationQueue=_notificationQueue;

@end

