//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet, NSString;

@interface SCCrNetFrameworkController : NSObject
{
    _Bool _isCrNetInstalled;
    _Bool _isCertPinningInstallSuccess;
    _Bool _shouldEnableCrnet;
    NSSet *_sessionWhiteList;
    NSSet *_blackListedURLs;
    _Bool _quicHostWhitelisted;
    NSSet *_quicHostsFromExperimentOptions;
    NSString *_experimentalOptions;
    NSDictionary *_experimentalOptionsDictionary;
    CDUnknownBlockType _finalRequestFilerBlock;
}

+ (id)absolutePathToFile;
+ (id)filename;
+ (_Bool)isNetLogEnabled;
+ (id)networkApi;
+ (id)sharedInstance;
+ (_Bool)startNetLogger;
+ (void)stopNetLogger;
- (void).cxx_destruct;
- (void)_enableCertPinning;
- (_Bool)_isCronetInstalled;
- (void)_proceedAfterCronetInitialized;
- (void)_setExperimentalOptions;
- (void)_setQUICHints;
- (void)_setupFinalFilterBlock;
- (void)_updateConfiguration;
- (void)_updateConfigurationFromABTest;
- (void)_updateConfigurationFromTweak;
- (_Bool)enableCrNetForSCAPIURLSession:(id)arg1 sessionIdentifier:(id)arg2 withNSURLSessionConfiguration:(id)arg3;
- (id)init;
- (void)installCronetWithSessionIdentifier:(id)arg1;
- (_Bool)isServedByCrNet:(id)arg1 withSessionIdentifier:(id)arg2;
- (_Bool)shouldInstallCronetForSessionWithIdentifier:(id)arg1;

@end

