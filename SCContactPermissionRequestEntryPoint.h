//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCContactPermissionRequestScope, SCContactPermissionRequestServices, SCContactPermissionRequestWorkflow;

@interface SCContactPermissionRequestEntryPoint : SCEntryPoint
{
    SCContactPermissionRequestWorkflow *_workflow;
    SCContactPermissionRequestServices *_contactPermissionRequestServices;
    SCContactPermissionRequestScope *_contactPermissionRequestScope;
}

- (void).cxx_destruct;
- (void)begin;
@property(nonatomic) __weak SCContactPermissionRequestScope *contactPermissionRequestScope; // @synthesize contactPermissionRequestScope=_contactPermissionRequestScope;
@property(nonatomic) __weak SCContactPermissionRequestServices *contactPermissionRequestServices; // @synthesize contactPermissionRequestServices=_contactPermissionRequestServices;

@end

