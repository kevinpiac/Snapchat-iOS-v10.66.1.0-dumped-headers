//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSNumber, NSString, SCSpectaclesAncsNotificationRule, SCSpectaclesContextNotificationAnimation;
@protocol SCSpectaclesFirmwareVersion;

@protocol SCSpectaclesRequestProvider <NSObject>
+ (id)addAncsNotificationRule:(SCSpectaclesAncsNotificationRule *)arg1;
+ (id)ambaWatchdogKick;
+ (id)authzCode:(NSString *)arg1 codeVerifier:(NSString *)arg2 redirectUri:(NSString *)arg3;
+ (id)clearAllContent;
+ (id)clearCrashReport;
+ (id)connectWifiTo:(NSString *)arg1 password:(NSString *)arg2;
+ (id)contextNotificationWithAnimation:(SCSpectaclesContextNotificationAnimation *)arg1;
+ (id)deviceInfoInitialEnableHevc:(_Bool)arg1;
+ (id)deviceInfoInitialEnableHevc:(_Bool)arg1 enableLocation:(NSNumber *)arg2 enableBurstMode:(NSNumber *)arg3 burstFps:(long long)arg4;
+ (id)deviceInfoUpdate;
+ (id)deviceInfoUpdateLowBattery;
+ (id)deviceLeftBatteryStatus;
+ (id)deviceMinimalInfoRequest;
+ (id)deviceNameUpdateRequest:(NSString *)arg1;
+ (id)deviceReset;
+ (id)deviceRightBatteryStatus;
+ (id)exchangeKey:(NSData *)arg1 nonce:(NSData *)arg2;
+ (id)exchangeNonce:(NSData *)arg1;
+ (id)firmwareApplyPatch;
+ (id)firmwareFlashUpdate;
+ (id)firmwareGetDigest;
+ (id)firmwareGetScheduledUpdateStatus;
+ (id)firmwareRevertBinary;
+ (id)firmwareScheduleUpdate:(double)arg1 windowLength:(double)arg2 targetVersion:(id <SCSpectaclesFirmwareVersion>)arg3 targetDigest:(NSString *)arg4;
+ (id)getClientId;
+ (id)getLastCloudUploadTime;
+ (id)getWifiApList;
+ (id)pairingTimerKick;
+ (id)peerBondStatus;
+ (id)prepShippingState;
+ (id)removeAllAncsNotificationRules;
+ (id)requestCrashReport;
+ (id)serialNumberRequest;
+ (id)setAncsNotificationsEnabled:(_Bool)arg1;
+ (id)setLocationEnabled:(_Bool)arg1;
+ (id)setWifiApList:(NSArray *)arg1;
+ (id)turnBluetoothOff;
+ (id)turnBluetoothOn:(NSString *)arg1 name:(NSString *)arg2;
+ (id)turnWiFiOff;
+ (id)turnWiFiOn:(NSString *)arg1 ssidPassword:(NSString *)arg2 countryCode:(NSString *)arg3;
+ (id)unpair;
+ (id)userAssociationRequest:(NSString *)arg1;
+ (id)verifyPeer:(NSData *)arg1 tag:(NSData *)arg2;
+ (id)wifiStateRequest;
@end

