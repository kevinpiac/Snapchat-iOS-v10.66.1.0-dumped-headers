//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBloopsPickerAccessoryFactory-Protocol.h"

@class NSString, SCLazy, SCUserSession;
@protocol SCBloopsConverterFactory, SCBloopsFullscreenViewFactory;

@interface SCBloopsPickerAccessoryFactoryImpl : NSObject <SCBloopsPickerAccessoryFactory>
{
    SCLazy *_bloopsAPI;
    SCLazy *_onboardingResourcesService;
    SCLazy *_bloopsReenactmentService;
    SCLazy *_bloopsRecentService;
    SCUserSession *_userSession;
    SCLazy *_changeTargetControllerFactory;
    SCLazy *_onboardingControllerFactory;
    SCLazy *_exportPresenterFactory;
    id <SCBloopsConverterFactory> _bloopsConverterFactory;
    id <SCBloopsFullscreenViewFactory> _bloopsFullscreenViewFactory;
    SCLazy *_bloopsResultProviderFactory;
}

- (void).cxx_destruct;
- (id)createPickerAccessoryWithSecondTargetProvider:(id)arg1 conversationCallStateListener:(id)arg2;
- (id)initWithBloopsAPI:(id)arg1 onboardingResourcesService:(id)arg2 bloopsReenactmentService:(id)arg3 bloopsRecentService:(id)arg4 userSession:(id)arg5 changeTargetControllerFactory:(id)arg6 onboardingControllerFactory:(id)arg7 bloopsConverterFactory:(id)arg8 bloopsFullscreenViewFactory:(id)arg9 exportPresenterFactory:(id)arg10 bloopResultProviderFactory:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

