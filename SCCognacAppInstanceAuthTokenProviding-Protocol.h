//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol SCCognacAppInstanceAuthTokenProviding <NSObject>
- (void)getAppInstanceAuthTokenWithAppInstanceId:(NSString *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completionBlock:(void (^)(NSError *, NSString *))arg3;
@end
