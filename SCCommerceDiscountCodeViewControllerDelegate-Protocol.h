//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCCommerceDiscountCodeViewController;

@protocol SCCommerceDiscountCodeViewControllerDelegate <NSObject>
- (void)commerceDiscountCodeViewController:(SCCommerceDiscountCodeViewController *)arg1 didAddDiscountCode:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)commerceDiscountCodeViewController:(SCCommerceDiscountCodeViewController *)arg1 didRemoveDiscountCode:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
@end

