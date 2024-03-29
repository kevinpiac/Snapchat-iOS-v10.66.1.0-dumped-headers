//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCAppUserLifecycleEventHandler, SCEntryPointCleanup, SCLazy, SCServicesExposer, SCShakeToReportServices, SCSystemScope, SCUserSessionScope;

@interface SCFriendsFeedLoggingServicesEntryPoint : SCEntryPoint
{
    SCLazy *_friendsFeedReadyLogger;
    SCAppUserLifecycleEventHandler *_friendsFeedReadyAppUserLifecycleEventHandler;
    SCLazy *_ghostToFeedLogger;
    SCAppUserLifecycleEventHandler *_ghostToFeedAppUserLifecycleEventHandler;
    SCEntryPointCleanup *_cleanup;
    SCSystemScope *_systemScope;
    SCUserSessionScope *_userSessionScope;
    SCShakeToReportServices *_shakeToReportServices;
    SCServicesExposer *_friendsFeedLoggingServicesExposer;
}

- (void).cxx_destruct;
- (void)begin;
- (id)end;
@property(retain, nonatomic) SCServicesExposer *friendsFeedLoggingServicesExposer; // @synthesize friendsFeedLoggingServicesExposer=_friendsFeedLoggingServicesExposer;
@property(nonatomic) __weak SCShakeToReportServices *shakeToReportServices; // @synthesize shakeToReportServices=_shakeToReportServices;
@property(nonatomic) __weak SCSystemScope *systemScope; // @synthesize systemScope=_systemScope;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;

@end

