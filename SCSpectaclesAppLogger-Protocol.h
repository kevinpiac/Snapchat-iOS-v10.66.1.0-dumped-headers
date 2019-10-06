//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSUUID, SCAppNotification, SCLagunaFirmwareUpdateUserInfo, SCLagunaGetHdSessionInfo, SCLagunaOnboardingSessionInfo, SCSpectaclesAncsNotificationSettings, SCSpectaclesConnectionInfo, SCSpectaclesDevice;
@protocol SCSpectaclesFirmwareVersion;

@protocol SCSpectaclesAppLogger <NSObject>
- (void)logBoomboxSnapView:(NSString *)arg1 entryId:(NSString *)arg2 durationSec:(double)arg3 fileType:(long long)arg4 deviceId:(NSString *)arg5 firmwareVersion:(NSString *)arg6 hardwareVersion:(NSString *)arg7 deviceColor:(long long)arg8 sessionId:(NSString *)arg9;
- (void)logBoomboxStoryView:(NSString *)arg1 durationSec:(double)arg2 numVideos:(unsigned long long)arg3 numPhotos:(unsigned long long)arg4 deviceId:(NSString *)arg5 firmwareVersion:(NSString *)arg6 hardwareVersion:(NSString *)arg7 deviceColor:(long long)arg8 sessionId:(NSString *)arg9;
- (void)logContextNotificationSettingsChanged:(SCSpectaclesAncsNotificationSettings *)arg1 numAllFriends:(unsigned long long)arg2;
- (void)logContextNotificationSettingsOff;
- (void)logContextNotificationSettingsOn:(SCSpectaclesAncsNotificationSettings *)arg1 numAllFriends:(unsigned long long)arg2;
- (void)logCustomExportCancel:(NSString *)arg1 source:(long long)arg2 cancellationSource:(long long)arg3;
- (void)logCustomExportForContentId:(NSString *)arg1 lensInfo:(NSString *)arg2 source:(long long)arg3 action:(long long)arg4 shareChannel:(NSString *)arg5;
- (void)logCustomExportStart:(NSString *)arg1 source:(long long)arg2;
- (void)logDeviceStatusUpdate:(SCSpectaclesDevice *)arg1 videoCount:(long long)arg2;
- (void)logFirmwareUpdateBinaryRevertFinished:(SCLagunaFirmwareUpdateUserInfo *)arg1;
- (void)logFirmwareUpdateBinaryRevertStarted:(SCLagunaFirmwareUpdateUserInfo *)arg1;
- (void)logFirmwareUpdateChecked:(SCSpectaclesDevice *)arg1;
- (void)logFirmwareUpdateFailed:(SCLagunaFirmwareUpdateUserInfo *)arg1 reason:(unsigned long long)arg2;
- (void)logFirmwareUpdateFlashStarted:(SCLagunaFirmwareUpdateUserInfo *)arg1;
- (void)logFirmwareUpdatePatchApplyFinished:(SCLagunaFirmwareUpdateUserInfo *)arg1;
- (void)logFirmwareUpdatePatchApplyStarted:(SCLagunaFirmwareUpdateUserInfo *)arg1;
- (void)logFirmwareUpdatePatchDownloadFinished:(SCLagunaFirmwareUpdateUserInfo *)arg1;
- (void)logFirmwareUpdatePatchDownloadStarted:(SCLagunaFirmwareUpdateUserInfo *)arg1;
- (void)logFirmwareUpdatePatchTransferFinished:(SCLagunaFirmwareUpdateUserInfo *)arg1;
- (void)logFirmwareUpdatePatchTransferStarted:(SCLagunaFirmwareUpdateUserInfo *)arg1;
- (void)logFirmwareUpdatePromptDismissed:(SCSpectaclesDevice *)arg1 promptAccepted:(_Bool)arg2;
- (void)logFirmwareUpdatePromptShown:(SCSpectaclesDevice *)arg1;
- (void)logFirmwareUpdateScheduled:(SCLagunaFirmwareUpdateUserInfo *)arg1;
- (void)logFirmwareUpdateSeen:(SCSpectaclesDevice *)arg1;
- (void)logFirmwareUpdateStarted:(SCLagunaFirmwareUpdateUserInfo *)arg1;
- (void)logFirmwareUpdateSucceeded:(SCLagunaFirmwareUpdateUserInfo *)arg1;
- (void)logHdFlowStartedWithBatchId:(NSUUID *)arg1;
- (void)logHomeWifiInstructionsDisplayed:(SCSpectaclesDevice *)arg1;
- (void)logHomeWifiRefreshTokenInvalid:(SCSpectaclesDevice *)arg1;
- (void)logHomeWifiRemoveNetwork:(SCSpectaclesDevice *)arg1;
- (void)logHomeWifiShareFlowConnected:(SCSpectaclesDevice *)arg1 isResharingCredentials:(_Bool)arg2;
- (void)logHomeWifiShareFlowFailed:(SCSpectaclesDevice *)arg1 isResharingCredentials:(_Bool)arg2 failureReason:(long long)arg3;
- (void)logHomeWifiShareFlowShared:(SCSpectaclesDevice *)arg1 isResharingCredentials:(_Bool)arg2;
- (void)logHomeWifiShareFlowStarted:(SCSpectaclesDevice *)arg1 isResharingCredentials:(_Bool)arg2;
- (void)logHomeWifiUploadUpdate:(SCSpectaclesDevice *)arg1 updateType:(long long)arg2;
- (void)logHomeWifiViewOpened:(SCSpectaclesDevice *)arg1 numAddedNetworks:(long long)arg2 startSource:(unsigned long long)arg3;
- (void)logLagunaGetHdButtonPressed:(SCLagunaGetHdSessionInfo *)arg1 fromSource:(unsigned long long)arg2;
- (void)logLagunaHdFlowCancelled:(SCLagunaGetHdSessionInfo *)arg1 fromSource:(unsigned long long)arg2;
- (void)logLagunaHdFlowStarted:(SCLagunaGetHdSessionInfo *)arg1 fromSource:(unsigned long long)arg2;
- (void)logNotificationDisplayed:(SCAppNotification *)arg1 withSystem:(_Bool)arg2;
- (void)logNotificationOpened:(SCAppNotification *)arg1 inApp:(_Bool)arg2;
- (void)logOnboardingExit:(SCLagunaOnboardingSessionInfo *)arg1 exitSource:(unsigned long long)arg2;
- (void)logOnboardingPageChange:(SCLagunaOnboardingSessionInfo *)arg1;
- (void)logOnboardingStart:(SCLagunaOnboardingSessionInfo *)arg1;
- (void)logRealTimeFirmwareUpdateFailureWithDeviceID:(NSString *)arg1 updateSessionID:(NSString *)arg2 firmwareVersion:(id <SCSpectaclesFirmwareVersion>)arg3 failureReason:(NSString *)arg4 updateIsActive:(_Bool)arg5;
- (void)logRealTimeFirmwareUpdateSuccessWithDeviceID:(NSString *)arg1 updateSessionID:(NSString *)arg2 newFirmwareVersion:(id <SCSpectaclesFirmwareVersion>)arg3 downloadDurationInMs:(long long)arg4 transferDurationInMs:(long long)arg5 updateDurationInMs:(long long)arg6 updateIsActive:(_Bool)arg7;
- (void)logSettingsUserAddedSpectacles;
- (void)logSettingsUserConnectDeviceFailure:(SCSpectaclesDevice *)arg1 failureReason:(long long)arg2;
- (void)logSettingsUserConnectDeviceSuccess:(SCSpectaclesDevice *)arg1;
- (void)logSettingsUserPressedCheckUpdate:(SCSpectaclesDevice *)arg1;
- (void)logSettingsUserPressedClearContent:(SCSpectaclesDevice *)arg1;
- (void)logSettingsUserPressedConnectDevice:(SCSpectaclesDevice *)arg1;
- (void)logSettingsUserPressedForgetDevice:(SCSpectaclesDevice *)arg1;
- (void)logSettingsUserPressedManageDevice:(SCSpectaclesDevice *)arg1;
- (void)logSettingsUserPressedRestartDevice:(SCSpectaclesDevice *)arg1;
- (void)logSettingsUserPressedSaveToMemories:(SCSpectaclesDevice *)arg1;
- (void)logSettingsUserPressedSaveToMemoriesAndCameraRoll:(SCSpectaclesDevice *)arg1;
- (void)logSettingsUserPressedUnpairDevice:(SCSpectaclesDevice *)arg1;
- (void)logSettingsUserRenamedDeviceCancel:(SCSpectaclesDevice *)arg1;
- (void)logSettingsUserRenamedDeviceOpen:(SCSpectaclesDevice *)arg1;
- (void)logSettingsUserRenamedDeviceSuccess:(SCSpectaclesDevice *)arg1;
- (void)logSettingsUserVisitedCommerceWebsiteWithNumDevices:(long long)arg1 deviceState:(long long)arg2;
- (void)logSettingsUserVisitedGettingStartedPage;
- (void)logSettingsUserVisitedNeedHelpPage;
- (void)logSpectaclesConnectionFailureForUpdate:(SCSpectaclesConnectionInfo *)arg1 failureReason:(NSString *)arg2;
- (void)logSpectaclesConnectionStartForUpdate:(SCSpectaclesConnectionInfo *)arg1;
- (void)logSpectaclesConnectionSuccessForUpdate:(SCSpectaclesConnectionInfo *)arg1;
- (void)logUserEnterSettingsPageWithNumDevices:(long long)arg1 deviceState:(long long)arg2;
- (void)logUserExitSettingsPageWithNumDevices:(long long)arg1 deviceState:(long long)arg2;
@end

