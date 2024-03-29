//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnapAirEventLogger-Protocol.h"

@interface SCSnapchatEventLogger : NSObject <SCSnapAirEventLogger>
{
}

+ (id)buildBlizzardShakeMeta:(id)arg1 isV2:(_Bool)arg2;
+ (void)logBlizzardShakePromptClickedEvent:(long long)arg1;
+ (void)logBlizzardShakeToReportDataPurge:(long long)arg1;
+ (void)logBlizzardShakeToReportSettingsEnable:(_Bool)arg1;
+ (void)logInSettingReportCancelledEvent:(id)arg1 screenName:(id)arg2;
+ (void)logInSettingReportCreateEvent:(id)arg1 screenName:(id)arg2 topicName:(id)arg3 screenShotAdded:(_Bool)arg4;
+ (void)logInSettingSupportExitEvent:(long long)arg1;
+ (void)logInSettingSupportItemClickedEvent:(long long)arg1;
+ (void)logODPShakeAutoEvent:(id)arg1 recipientEmail:(id)arg2 jiraFeatureTeam:(id)arg3;
+ (void)logShakeCancelEvent:(id)arg1 isV2:(_Bool)arg2 source:(long long)arg3;
+ (void)logShakeCreateEvent:(id)arg1 fromFeature:(id)arg2 isVideo:(_Bool)arg3 isV2:(_Bool)arg4;
+ (void)logShakeErrorEvent:(id)arg1 message:(id)arg2 failStep:(long long)arg3 isV2:(_Bool)arg4 isAutoShake:(_Bool)arg5;
+ (void)logShakeSendEvent:(id)arg1 retryCount:(long long)arg2 isV2:(_Bool)arg3 isAutoShake:(_Bool)arg4;
+ (void)logShakeStartEvent:(id)arg1 isV2:(_Bool)arg2;
+ (void)logShakeUploadEvent:(id)arg1 retryCout:(long long)arg2 totalFileSize:(long long)arg3 individualFileSize:(id)arg4 isV2:(_Bool)arg5 isAutoShake:(_Bool)arg6;
+ (long long)translateErrorStep:(long long)arg1;

@end

