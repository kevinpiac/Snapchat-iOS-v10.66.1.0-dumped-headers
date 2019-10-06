//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class NSOperationQueue, SCEntryPointCleanup, SCLazy, SCServicesExposer, SCUserSessionScope;

@interface SCUserStorageEntryPoint : SCEntryPoint
{
    SCLazy *_lazyDocObjectContext;
    SCEntryPointCleanup *_cleanup;
    NSOperationQueue *_cleanupQueue;
    SCUserSessionScope *_userSessionScope;
    SCServicesExposer *_userStorageServicesExposer;
}

- (void).cxx_destruct;
- (void)begin;
- (id)end;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(retain, nonatomic) SCServicesExposer *userStorageServicesExposer; // @synthesize userStorageServicesExposer=_userStorageServicesExposer;

@end
