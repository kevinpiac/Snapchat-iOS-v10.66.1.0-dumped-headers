//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCAbuseWarningScope, SCAbuseWarningWorkflow, SCAuthenticatedNetworkServices;

@interface SCAuthenticatedAbuseWarningEntryPoint : SCEntryPoint
{
    SCAbuseWarningWorkflow *_abuseWarningWorkflow;
    SCAuthenticatedNetworkServices *_networkServices;
    SCAbuseWarningScope *_abuseWarningScope;
}

- (void).cxx_destruct;
@property(nonatomic) __weak SCAbuseWarningScope *abuseWarningScope; // @synthesize abuseWarningScope=_abuseWarningScope;
- (void)begin;
@property(nonatomic) __weak SCAuthenticatedNetworkServices *networkServices; // @synthesize networkServices=_networkServices;

@end

