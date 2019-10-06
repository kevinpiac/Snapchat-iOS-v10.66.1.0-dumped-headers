//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCNavigationServices, SCServicesExposer, SCUserSessionScope;

@interface SCLegacyNotificationSettingsServiceEntryPoint : SCEntryPoint
{
    SCUserSessionScope *_userSessionScope;
    SCNavigationServices *_navigationServices;
    SCServicesExposer *_legacyNotificationSettingsServicesExposer;
}

- (void).cxx_destruct;
- (void)begin;
@property(retain, nonatomic) SCServicesExposer *legacyNotificationSettingsServicesExposer; // @synthesize legacyNotificationSettingsServicesExposer=_legacyNotificationSettingsServicesExposer;
@property(nonatomic) __weak SCNavigationServices *navigationServices; // @synthesize navigationServices=_navigationServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;

@end
