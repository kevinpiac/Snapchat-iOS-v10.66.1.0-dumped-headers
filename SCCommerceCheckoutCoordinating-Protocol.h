//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, SCCommerceCheckoutDataModel;
@protocol OS_dispatch_queue;

@protocol SCCommerceCheckoutCoordinating <NSObject>
- (void)createCheckout:(SCCommerceCheckoutDataModel *)arg1 completion:(void (^)(SCCommerceCheckoutDataModel *, NSError *))arg2 completionQueue:(NSObject<OS_dispatch_queue> *)arg3;
- (void)finalizeCheckout:(SCCommerceCheckoutDataModel *)arg1 completion:(void (^)(NSError *))arg2 completionQueue:(NSObject<OS_dispatch_queue> *)arg3;
- (void)updateCheckout:(SCCommerceCheckoutDataModel *)arg1 completion:(void (^)(SCCommerceCheckoutDataModel *, NSError *))arg2 completionQueue:(NSObject<OS_dispatch_queue> *)arg3;
@end

