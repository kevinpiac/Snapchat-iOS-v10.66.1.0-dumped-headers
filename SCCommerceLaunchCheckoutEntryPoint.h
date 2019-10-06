//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCActiveUserSessionScope, SCCommerceServices, SCOptionalScopeExposer, SCServicesExposer;

@interface SCCommerceLaunchCheckoutEntryPoint : SCEntryPoint
{
    SCActiveUserSessionScope *_activeUserSessionScope;
    SCCommerceServices *_commerceServices;
    SCServicesExposer *_launchCheckoutServicesExposer;
    SCOptionalScopeExposer *_checkoutScopeExposer;
}

- (void).cxx_destruct;
@property(nonatomic) __weak SCActiveUserSessionScope *activeUserSessionScope; // @synthesize activeUserSessionScope=_activeUserSessionScope;
- (void)begin;
@property(nonatomic) __weak SCOptionalScopeExposer *checkoutScopeExposer; // @synthesize checkoutScopeExposer=_checkoutScopeExposer;
@property(nonatomic) __weak SCCommerceServices *commerceServices; // @synthesize commerceServices=_commerceServices;
@property(nonatomic) __weak SCServicesExposer *launchCheckoutServicesExposer; // @synthesize launchCheckoutServicesExposer=_launchCheckoutServicesExposer;

@end

