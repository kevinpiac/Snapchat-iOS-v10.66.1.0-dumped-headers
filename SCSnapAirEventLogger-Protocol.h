//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol SCSnapAirEventLogger
+ (void)logShakeErrorEvent:(NSString *)arg1 message:(NSString *)arg2 failStep:(long long)arg3 isV2:(_Bool)arg4 isAutoShake:(_Bool)arg5;
+ (void)logShakeSendEvent:(NSString *)arg1 retryCount:(long long)arg2 isV2:(_Bool)arg3 isAutoShake:(_Bool)arg4;
+ (void)logShakeUploadEvent:(NSString *)arg1 retryCout:(long long)arg2 totalFileSize:(long long)arg3 individualFileSize:(NSString *)arg4 isV2:(_Bool)arg5 isAutoShake:(_Bool)arg6;
@end

