//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCServicesExposer, SCSystemScope;

@interface SCRetrySignalAnnouncerEntryPoint : SCEntryPoint
{
    SCSystemScope *_systemScope;
    SCServicesExposer *_retrySignalAnnouncerServicesExposer;
}

- (void).cxx_destruct;
- (void)begin;
- (id)end;
@property(retain, nonatomic) SCServicesExposer *retrySignalAnnouncerServicesExposer; // @synthesize retrySignalAnnouncerServicesExposer=_retrySignalAnnouncerServicesExposer;
@property(nonatomic) __weak SCSystemScope *systemScope; // @synthesize systemScope=_systemScope;

@end

