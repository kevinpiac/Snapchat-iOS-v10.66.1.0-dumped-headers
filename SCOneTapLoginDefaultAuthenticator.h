//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOneTapLoginAuthenticator-Protocol.h"

@class SCSystemNetworkServices;
@protocol SCEndpointDeviceIDManager, SCOneTapLoginRepository;

@interface SCOneTapLoginDefaultAuthenticator : NSObject <SCOneTapLoginAuthenticator>
{
    id <SCOneTapLoginRepository> _oneTapLoginRepository;
    SCSystemNetworkServices *_networkServices;
    id <SCEndpointDeviceIDManager> _deviceIdManager;
}

- (void).cxx_destruct;
- (void)_handleLoginSuccess:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)authenticateWithOneTapLoginSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)initWithOneTapLoginRepository:(id)arg1 networkServices:(id)arg2 deviceIdManager:(id)arg3;
- (void)persistOneTapLoginToken:(id)arg1 expiry:(long long)arg2;
- (void)removeOneTapLogin;

@end
