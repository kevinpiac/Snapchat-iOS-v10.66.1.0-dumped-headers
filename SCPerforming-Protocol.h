//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue;

@protocol SCPerforming <NSObject>
- (void)assertQueue;
- (_Bool)isCurrentPerformer;
- (void)perform:(void (^)(void))arg1;
- (void)perform:(void (^)(void))arg1 after:(double)arg2;
- (void)performAndWait:(void (^)(void))arg1;
- (void)performImmediatelyIfCurrentPerformer:(void (^)(void))arg1;
- (void)performOnGroupNotification_DEPRECATED:(NSObject<OS_dispatch_group> *)arg1 block:(void (^)(void))arg2;
- (void)performWithBarrier:(void (^)(void))arg1;
- (void)performWithQoS:(unsigned int)arg1 block:(void (^)(void))arg2;
- (NSObject<OS_dispatch_queue> *)queue;
@end
