//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, SCLensUnlockerAction;
@protocol OS_dispatch_queue;

@protocol SCLensUnlockerProtocol <NSObject>
- (void)performAction:(SCLensUnlockerAction *)arg1 completion:(void (^)(SCLensUnlockerResult *))arg2 completionQueue:(NSObject<OS_dispatch_queue> *)arg3;
@end

