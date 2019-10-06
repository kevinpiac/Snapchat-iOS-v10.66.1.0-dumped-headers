//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary;

@interface SCAppNotificationBatcher : NSObject
{
    NSMutableDictionary *_batchedNotifications;
    CDUnknownBlockType _dispatchBlock;
    NSDate *_lastDispatchedNotificationDate;
}

- (void).cxx_destruct;
- (void)addNotification:(id)arg1;
- (void)cancelPendingNotifications;
- (id)initWithDispatchBlock:(CDUnknownBlockType)arg1;
- (void)postNotifications;
- (void)removeNotification:(id)arg1;
- (_Bool)shouldDispatchNotifications;

@end
