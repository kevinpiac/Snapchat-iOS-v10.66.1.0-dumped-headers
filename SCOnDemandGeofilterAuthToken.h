//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, SCSessionRequestManager, SCUserSession, SOJUUnlockablesOndemandMobileAuthTokenWrapper;

@interface SCOnDemandGeofilterAuthToken : NSObject
{
    SCUserSession *_userSession;
    SCSessionRequestManager *_sessionRequestManager;
    SOJUUnlockablesOndemandMobileAuthTokenWrapper *_token;
    NSNumber *_authTokenStartTime;
}

- (void).cxx_destruct;
- (void)_cacheAccessToken:(id)arg1;
- (_Bool)_checkIfTokenValid:(id)arg1;
- (_Bool)_checkIfTokenWillExpireSoon:(id)arg1;
- (id)_tokenFromCache;
- (void)fetchTokenWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)initWithUserSession:(id)arg1;
- (id)tokenString;

@end

