//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCAppUserLifecycleEventHandler, SCEntryPointCleanup, SCLegacySnapchatterServices, SCLoggerServices, SCNativeMessagingServices, SCServicesExposer, SCSnapchatterServices, SCSystemScope, SCUserSessionScope, SCUserStorageServices;
@protocol SCGroupManager;

@interface SCGroupServicesEntryPoint : SCEntryPoint
{
    id <SCGroupManager> _groupManager;
    SCAppUserLifecycleEventHandler *_lifecycleEventHandler;
    SCEntryPointCleanup *_cleanup;
    SCSystemScope *_systemScope;
    SCUserSessionScope *_userSessionScope;
    SCUserStorageServices *_userStorageServices;
    SCSnapchatterServices *_snapchatterServices;
    SCNativeMessagingServices *_nativeMessagingServices;
    SCLoggerServices *_loggerServices;
    SCLegacySnapchatterServices *_legacySnapchatterServices;
    SCServicesExposer *_groupServicesExposer;
}

- (void).cxx_destruct;
- (void)begin;
- (id)end;
@property(retain, nonatomic) SCServicesExposer *groupServicesExposer; // @synthesize groupServicesExposer=_groupServicesExposer;
@property(nonatomic) __weak SCLegacySnapchatterServices *legacySnapchatterServices; // @synthesize legacySnapchatterServices=_legacySnapchatterServices;
@property(nonatomic) __weak SCLoggerServices *loggerServices; // @synthesize loggerServices=_loggerServices;
@property(nonatomic) __weak SCNativeMessagingServices *nativeMessagingServices; // @synthesize nativeMessagingServices=_nativeMessagingServices;
@property(nonatomic) __weak SCSnapchatterServices *snapchatterServices; // @synthesize snapchatterServices=_snapchatterServices;
@property(nonatomic) __weak SCSystemScope *systemScope; // @synthesize systemScope=_systemScope;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCUserStorageServices *userStorageServices; // @synthesize userStorageServices=_userStorageServices;

@end

