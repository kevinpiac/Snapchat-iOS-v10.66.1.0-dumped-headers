//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCNativeMessagingServices, SCServicesExposer;

@interface SCCoreMessagingServicesEntryPoint : SCEntryPoint
{
    SCNativeMessagingServices *_nativeMessagingServices;
    SCServicesExposer *_coreMessagingServicesExposer;
}

- (void).cxx_destruct;
- (void)begin;
@property(retain, nonatomic) SCServicesExposer *coreMessagingServicesExposer; // @synthesize coreMessagingServicesExposer=_coreMessagingServicesExposer;
@property(nonatomic) __weak SCNativeMessagingServices *nativeMessagingServices; // @synthesize nativeMessagingServices=_nativeMessagingServices;

@end

