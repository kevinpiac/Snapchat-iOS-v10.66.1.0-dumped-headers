//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCApplicationStorageServices, SCLazy, SCOneTapLoginDefaultRepository, SCServicesExposer, SCSystemNetworkServices;

@interface SCOneTapLoginServicesEntryPoint : SCEntryPoint
{
    SCOneTapLoginDefaultRepository *_oneTapLoginRepository;
    SCLazy *_lazyOneTapLoginAuthenticator;
    SCLazy *_lazyOneTapLoginDisplayData;
    SCApplicationStorageServices *_applicationStorageServices;
    SCSystemNetworkServices *_systemNetworkServices;
    SCServicesExposer *_oneTapLoginServicesExposer;
}

- (void).cxx_destruct;
- (id)_oneTapLoginAuthenticator;
- (id)_oneTapLoginDisplayData;
@property(nonatomic) __weak SCApplicationStorageServices *applicationStorageServices; // @synthesize applicationStorageServices=_applicationStorageServices;
- (void)begin;
@property(nonatomic) __weak SCServicesExposer *oneTapLoginServicesExposer; // @synthesize oneTapLoginServicesExposer=_oneTapLoginServicesExposer;
@property(nonatomic) __weak SCSystemNetworkServices *systemNetworkServices; // @synthesize systemNetworkServices=_systemNetworkServices;

@end

