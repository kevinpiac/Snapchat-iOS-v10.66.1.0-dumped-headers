//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@protocol SCFeatureSettingsUpdateService <NSObject>
- (void)updateFeatureSettingsToServer:(NSArray *)arg1 successQueue:(NSObject<OS_dispatch_queue> *)arg2 failureQueue:(NSObject<OS_dispatch_queue> *)arg3 successBlock:(void (^)(NSArray *))arg4 failureBlock:(void (^)(NSArray *, NSError *))arg5;
@end
