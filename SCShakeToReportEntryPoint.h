//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCServicesExposer, SCUserSessionScope;

@interface SCShakeToReportEntryPoint : SCEntryPoint
{
    SCUserSessionScope *_userSessionScope;
    SCServicesExposer *_shakeToReportServicesExposer;
}

- (void).cxx_destruct;
- (void)begin;
@property(retain, nonatomic) SCServicesExposer *shakeToReportServicesExposer; // @synthesize shakeToReportServicesExposer=_shakeToReportServicesExposer;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;

@end

