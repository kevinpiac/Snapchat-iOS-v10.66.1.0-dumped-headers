//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCRetrySignalAnnouncerServices, SCServicesExposer;

@interface SCBackgroundRetrySignalCollectorEntryPoint : SCEntryPoint
{
    SCRetrySignalAnnouncerServices *_retrySignalAnnouncerServices;
    SCServicesExposer *_autoRetryBackgroundPrefetchServicesExposer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SCServicesExposer *autoRetryBackgroundPrefetchServicesExposer; // @synthesize autoRetryBackgroundPrefetchServicesExposer=_autoRetryBackgroundPrefetchServicesExposer;
- (void)begin;
- (id)end;
@property(nonatomic) __weak SCRetrySignalAnnouncerServices *retrySignalAnnouncerServices; // @synthesize retrySignalAnnouncerServices=_retrySignalAnnouncerServices;

@end
