//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCLazy, SCLoggerServices, SCServicesExposer;

@interface SCReceiveMessageLoggerEntryPoint : SCEntryPoint
{
    SCLazy *_lazyReceiveFlowLogger;
    SCLoggerServices *_loggerServices;
    SCServicesExposer *_receiveFlowLogger;
}

- (void).cxx_destruct;
- (void)begin;
@property(nonatomic) __weak SCLoggerServices *loggerServices; // @synthesize loggerServices=_loggerServices;
@property(retain, nonatomic) SCServicesExposer *receiveFlowLogger; // @synthesize receiveFlowLogger=_receiveFlowLogger;

@end

