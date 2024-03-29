//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

#import "SCTraceEnabled-Protocol.h"

@class NSString, SCApplicationStorageServices, SCAttributionServices, SCServicesExposer, SCSystemScope;

@interface SCCrashAttributionEntryPoint : SCEntryPoint <SCTraceEnabled>
{
    SCSystemScope *_systemScope;
    SCAttributionServices *_attributionServices;
    SCApplicationStorageServices *_applicationStorageServices;
    SCServicesExposer *_crashAttributionServicesExposer;
}

- (void).cxx_destruct;
- (id)_createLastPageViewPersistence;
@property(nonatomic) __weak SCApplicationStorageServices *applicationStorageServices; // @synthesize applicationStorageServices=_applicationStorageServices;
@property(nonatomic) __weak SCAttributionServices *attributionServices; // @synthesize attributionServices=_attributionServices;
- (void)begin;
@property(retain, nonatomic) SCServicesExposer *crashAttributionServicesExposer; // @synthesize crashAttributionServicesExposer=_crashAttributionServicesExposer;
@property(nonatomic) __weak SCSystemScope *systemScope; // @synthesize systemScope=_systemScope;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

