//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCFideliusDataProvider-Protocol.h"
#import "SCFideliusProtocol-Protocol.h"
#import "SCNMessagingKeyProvider-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "SCUserSessionScoped-Protocol.h"

@class NSMutableSet, NSString, SCEllipticCurveCrypto, SCFideliusDeviceGraphManager, SCFideliusLogger, SCFideliusServiceProvider, SCFideliusUserDatabaseManager, SCFideliusUserIdentity, SCLazy, SCUserSession;
@protocol SCPerforming;

@interface SCFideliusManager : NSObject <SCNMessagingKeyProvider, SCFideliusDataProvider, SCUserSessionScoped, SCTraceEnabled, SCFideliusProtocol>
{
    SCEllipticCurveCrypto *_beta;
    SCFideliusUserIdentity *_currentIdentity;
    SCUserSession *_userSession;
    unsigned long long _status;
    _Bool _newClientIdentity;
    SCFideliusLogger *_logger;
    _Bool _waitingForDbTransition;
    long long _mismatchCount;
    SCFideliusDeviceGraphManager *_deviceGraphManager;
    long long initializeDbCount;
    NSMutableSet *_suppressedSnaps;
    SCLazy *_fidUpdatesRateLimiter;
    SCFideliusServiceProvider *_services;
    id <SCPerforming> _performer;
    SCFideliusUserDatabaseManager *_userDatabaseManager;
}

+ (id)initSourceNames;
+ (_Bool)isLoadingFinished:(unsigned long long)arg1;
+ (id)nameForStatus:(unsigned long long)arg1;
+ (id)nameForType:(unsigned long long)arg1;
+ (id)statusNames;
- (void).cxx_destruct;
- (void)_clearUserInfo;
- (void)_clientInit:(id)arg1 source:(unsigned long long)arg2;
- (void)_fetchUpdates:(id)arg1;
- (void)_fetchUpdates:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)_generateAndUpload:(unsigned long long)arg1;
- (id)_getKeysForUser:(id)arg1;
- (_Bool)_isBetaReady:(id)arg1;
- (_Bool)_isReady:(id)arg1;
- (void)_loadExistingIdentity:(id)arg1 hashedBeta:(id)arg2 source:(unsigned long long)arg3;
- (void)_loadFromArchive;
- (void)_loadFromDisk:(unsigned long long)arg1;
- (void)_loadFromDiskStage2:(unsigned long long)arg1;
- (void)_loadLocalIdentityWithIwek:(id)arg1 hashedBeta:(id)arg2 source:(unsigned long long)arg3 callback:(CDUnknownBlockType)arg4;
- (void)_logNotReady:(id)arg1 action:(id)arg2;
- (id)_myBeta;
- (void)_onArchiveLoaded:(unsigned long long)arg1;
- (void)_onClientInitFailure;
- (_Bool)_optionallyLoadArchiveOnDemand;
- (void)_postReadyNotification:(id)arg1 identity:(id)arg2;
- (void)_postTempReadyNotification;
- (void)_processServerInitIwek:(id)arg1 hashedOutBeta:(id)arg2 friends:(id)arg3 tempIdentity:(id)arg4 source:(unsigned long long)arg5;
- (void)_processUpdatesResponse:(id)arg1;
- (void)_reInitialize;
- (void)_resetCurrentDeviceUser;
- (void)_reuseAndUpload:(unsigned long long)arg1;
- (void)_transitionFromTempReadyToFullReady:(id)arg1 initSource:(unsigned long long)arg2;
- (void)_uploadFideliusInfo:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)_useNewIdentity:(id)arg1 friends:(id)arg2 source:(unsigned long long)arg3;
- (void)coldStartLoad;
- (void)fetchUpdates:(id)arg1;
- (id)getKeyForCurrentUser;
- (id)getKeysForUser:(id)arg1;
- (id)initWithUserSession:(id)arg1;
- (id)initWithUserSession:(id)arg1 useFakePerformer:(_Bool)arg2 deviceGraphManager:(id)arg3 logger:(id)arg4;
- (void)invalidate;
- (_Bool)isBetaReady:(id)arg1;
- (_Bool)isReady:(id)arg1;
- (id)lastSuppressedSnapTs:(id)arg1;
- (void)loadFromDataAvailable;
- (id)loadingStatus;
- (unsigned long long)loadingStatusEnum;
- (void)logNotReady:(id)arg1 action:(id)arg2;
- (void)loginWithIwek:(id)arg1 hashedBeta:(id)arg2 tempIdentity:(id)arg3;
- (id)myBeta;
- (void)onFideliusWarmStart;
@property(retain, nonatomic) id <SCPerforming> performer; // @synthesize performer=_performer;
- (void)reInitialize;
- (void)receiveLogoutNotification;
@property(retain, nonatomic) SCFideliusServiceProvider *services; // @synthesize services=_services;
- (void)setSuppressedSnap:(id)arg1;
@property(retain, nonatomic) SCFideliusUserDatabaseManager *userDatabaseManager; // @synthesize userDatabaseManager=_userDatabaseManager;
- (_Bool)shouldSuppressNotification:(id)arg1;
- (_Bool)startedLoading;
- (void)tweakReInitIdentity;
- (id)userDbManager;
- (id)userSession;
- (void)verifyOutBetaReturnedFromServer:(id)arg1 statusBeforeFetch:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

