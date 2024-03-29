//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject;
@protocol OS_dispatch_queue, SCPostableStoriesUpdateListener;

@protocol SCPostableStoriesProviding <NSObject>
- (void)addListener:(id <SCPostableStoriesUpdateListener>)arg1;
- (void)postableCustomStoriesWithCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1 completion:(void (^)(NSArray *))arg2;
- (void)postableOurStoriesWithCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1 completion:(void (^)(NSArray *))arg2;
- (void)removeListener:(id <SCPostableStoriesUpdateListener>)arg1;
- (void)warmUpCache;
@end

