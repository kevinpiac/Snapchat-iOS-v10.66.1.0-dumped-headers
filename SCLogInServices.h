//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;

@interface SCLogInServices : NSObject
{
    SCLazy *_lazyLoginService;
    SCLazy *_lazyUnauthenticatedOdlvService;
    SCLazy *_lazyUnauthenticatedTwoFAService;
}

- (void).cxx_destruct;
- (id)initWithLazyLogInService:(id)arg1 lazyUnauthenticatedOdlvService:(id)arg2 lazyUnauthenticatedTwoFAService:(id)arg3;
@property(readonly, nonatomic) SCLazy *lazyLoginService; // @synthesize lazyLoginService=_lazyLoginService;
@property(readonly, nonatomic) SCLazy *lazyUnauthenticatedOdlvService; // @synthesize lazyUnauthenticatedOdlvService=_lazyUnauthenticatedOdlvService;
@property(readonly, nonatomic) SCLazy *lazyUnauthenticatedTwoFAService; // @synthesize lazyUnauthenticatedTwoFAService=_lazyUnauthenticatedTwoFAService;

@end

