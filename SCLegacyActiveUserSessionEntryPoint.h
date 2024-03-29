//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCActiveUserSessionScope, SCBitmojiSelfieServices, SCNavigationInitializer, SCNetworkImageServices, SCServicesExposer, SCSystemScope, SCUserSession, SCUserSessionContext;

@interface SCLegacyActiveUserSessionEntryPoint : SCEntryPoint
{
    SCUserSession *_userSession;
    SCUserSessionContext *_userSessionContext;
    SCNavigationInitializer *_navInitializer;
    SCSystemScope *_systemScope;
    SCActiveUserSessionScope *_activeUserSessionScope;
    SCBitmojiSelfieServices *_bitmojiSelfieServices;
    SCNetworkImageServices *_networkImageServices;
    SCServicesExposer *_navigationServicesExposer;
}

- (void).cxx_destruct;
- (void)_additionalLoginAndRegistrationSetUp;
- (void)_commonSetUp;
- (void)_loginAndRegistrationSetUp;
- (void)_registrationSetUp;
- (void)_setUpView;
@property(nonatomic) __weak SCActiveUserSessionScope *activeUserSessionScope; // @synthesize activeUserSessionScope=_activeUserSessionScope;
- (void)begin;
@property(nonatomic) __weak SCBitmojiSelfieServices *bitmojiSelfieServices; // @synthesize bitmojiSelfieServices=_bitmojiSelfieServices;
- (id)end;
@property(retain, nonatomic) SCServicesExposer *navigationServicesExposer; // @synthesize navigationServicesExposer=_navigationServicesExposer;
@property(nonatomic) __weak SCNetworkImageServices *networkImageServices; // @synthesize networkImageServices=_networkImageServices;
@property(nonatomic) __weak SCSystemScope *systemScope; // @synthesize systemScope=_systemScope;

@end

