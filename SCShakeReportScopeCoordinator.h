//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCUserSessionScope;

@interface SCShakeReportScopeCoordinator : SCEntryPoint
{
    SCUserSessionScope *_userSessionScope;
}

- (void).cxx_destruct;
- (void)_onIdle;
- (void)begin;
- (id)end;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;

@end

