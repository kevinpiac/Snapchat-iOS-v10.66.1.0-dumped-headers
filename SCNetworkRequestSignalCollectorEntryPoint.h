//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCEntryPointCleanup, SCNetworkRequestSignalCollector, SCRetrySignalAnnouncerServices, SCSystemScope;

@interface SCNetworkRequestSignalCollectorEntryPoint : SCEntryPoint
{
    SCEntryPointCleanup *_cleanup;
    SCNetworkRequestSignalCollector *_networkRequestSignalCollector;
    SCSystemScope *_systemScope;
    SCRetrySignalAnnouncerServices *_retrySignalAnnouncerServices;
}

- (void).cxx_destruct;
- (void)begin;
- (id)end;
@property(nonatomic) __weak SCRetrySignalAnnouncerServices *retrySignalAnnouncerServices; // @synthesize retrySignalAnnouncerServices=_retrySignalAnnouncerServices;
@property(nonatomic) __weak SCSystemScope *systemScope; // @synthesize systemScope=_systemScope;

@end

