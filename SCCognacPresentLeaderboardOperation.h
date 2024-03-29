//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCCognacWVJBRequestOperation.h"

@class NSString, SCCognacAppViewLifeCycleListenerAnnouncer, SCCognacBlizzardEventLoggingController, SCCognacDataStorage, SCCognacOperaDataSource, SCCognacServiceCoordinator, SCCognacSnapchatterService, SCExperimentManager, SCPreferences, UIViewController;
@protocol SCCognacPresentLeaderboardOperationDelegate, SCImageDownloading;

@interface SCCognacPresentLeaderboardOperation : SCCognacWVJBRequestOperation
{
    SCExperimentManager *_experimentManager;
    SCPreferences *_userPreferences;
    id <SCImageDownloading> _imageDownloader;
    SCCognacSnapchatterService *_cognacSnapchatterService;
    SCCognacServiceCoordinator *_cognacServiceCoordinator;
    SCCognacDataStorage *_cognacDataStorage;
    SCCognacAppViewLifeCycleListenerAnnouncer *_cognacViewLifeCycleAnnouncer;
    SCCognacBlizzardEventLoggingController *_cognacEventLoggingController;
    SCCognacOperaDataSource *_cognacOperaDataSource;
    NSString *_userId;
    NSString *_appId;
    NSString *_cognacSessionId;
    long long _leaderboardSourceType;
    UIViewController *_presentingViewController;
    id <SCCognacPresentLeaderboardOperationDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_getAppDataModelWithAppId:(id)arg1 leaderboardWithLeaderboardId:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) SCCognacDataStorage *cognacDataStorage; // @synthesize cognacDataStorage=_cognacDataStorage;
@property(retain, nonatomic) SCCognacBlizzardEventLoggingController *cognacEventLoggingController; // @synthesize cognacEventLoggingController=_cognacEventLoggingController;
@property(retain, nonatomic) SCCognacOperaDataSource *cognacOperaDataSource; // @synthesize cognacOperaDataSource=_cognacOperaDataSource;
@property(retain, nonatomic) SCCognacServiceCoordinator *cognacServiceCoordinator; // @synthesize cognacServiceCoordinator=_cognacServiceCoordinator;
@property(copy, nonatomic) NSString *cognacSessionId; // @synthesize cognacSessionId=_cognacSessionId;
@property(retain, nonatomic) SCCognacSnapchatterService *cognacSnapchatterService; // @synthesize cognacSnapchatterService=_cognacSnapchatterService;
@property(retain, nonatomic) SCCognacAppViewLifeCycleListenerAnnouncer *cognacViewLifeCycleAnnouncer; // @synthesize cognacViewLifeCycleAnnouncer=_cognacViewLifeCycleAnnouncer;
@property(nonatomic) __weak id <SCCognacPresentLeaderboardOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SCExperimentManager *experimentManager; // @synthesize experimentManager=_experimentManager;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(nonatomic) long long leaderboardSourceType; // @synthesize leaderboardSourceType=_leaderboardSourceType;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void)run;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) SCPreferences *userPreferences; // @synthesize userPreferences=_userPreferences;

@end

