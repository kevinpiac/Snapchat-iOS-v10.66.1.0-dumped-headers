//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;

@protocol SCCommerceCheckoutDelegate <NSObject>
- (void)checkoutDidComplete;
- (void)checkoutFailedToLoadWithError:(NSError *)arg1;
- (void)checkoutWillPresent;
- (void)checkoutWillStartPreloading;
@end
