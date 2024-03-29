//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDate, NSError, NSString, SCSpectaclesCalibration, SCSpectaclesDevice, SCSpectaclesPairingDeviceInformation, SCSpectaclesSensorStore, SCSpectaclesTransferSession;
@protocol NSCoding;

@protocol SCSpectaclesEventListener <NSObject>

@optional
- (void)spectaclesDevice:(SCSpectaclesDevice *)arg1 didCompletedScheduledUpdateWithUserInfo:(id <NSCoding>)arg2 error:(NSError *)arg3;
- (void)spectaclesDevice:(SCSpectaclesDevice *)arg1 didFetchFirmwareUpdateDigest:(NSString *)arg2;
- (void)spectaclesDevice:(SCSpectaclesDevice *)arg1 didReceiveClientId:(NSString *)arg2 requestAuthzCode:(_Bool)arg3;
- (void)spectaclesDevice:(SCSpectaclesDevice *)arg1 didReceiveCloudUploadEvent:(unsigned long long)arg2;
- (void)spectaclesDevice:(SCSpectaclesDevice *)arg1 didReceiveLastCloudUploadTime:(NSDate *)arg2;
- (void)spectaclesDevice:(SCSpectaclesDevice *)arg1 didReceiveShareWifiCredentialsResponseStatus:(unsigned long long)arg2;
- (void)spectaclesDevice:(SCSpectaclesDevice *)arg1 didReceiveWifiAPList:(NSArray *)arg2;
- (void)spectaclesDevice:(SCSpectaclesDevice *)arg1 didUnpairWithReason:(unsigned long long)arg2;
- (void)spectaclesDevice:(SCSpectaclesDevice *)arg1 didUpdateInfo:(unsigned long long)arg2;
- (void)spectaclesDevice:(SCSpectaclesDevice *)arg1 onAlertNotification:(unsigned long long)arg2;
- (void)spectaclesDevice:(SCSpectaclesDevice *)arg1 onDeviceLogsUpdate:(unsigned long long)arg2;
- (void)spectaclesDevice:(SCSpectaclesDevice *)arg1 onFirmwareUpdate:(unsigned long long)arg2 progress:(float)arg3;
- (void)spectaclesDeviceDidPair:(SCSpectaclesDevice *)arg1;
- (void)spectaclesDeviceDidUpdateContentList:(SCSpectaclesDevice *)arg1;
- (void)spectaclesDeviceDidUpdateState:(SCSpectaclesDevice *)arg1;
- (void)spectaclesOnBluetoothStateUpdate:(long long)arg1;
- (void)spectaclesOnDeviceForgotten:(SCSpectaclesDevice *)arg1;
- (void)spectaclesOnPairingStateUpdate:(unsigned long long)arg1 deviceInformation:(SCSpectaclesPairingDeviceInformation *)arg2;
- (void)spectaclesSensorStore:(SCSpectaclesSensorStore *)arg1 didAddCalibration:(SCSpectaclesCalibration *)arg2;
- (void)spectaclesTransferSession:(SCSpectaclesTransferSession *)arg1 onTransferUpdate:(unsigned long long)arg2;
@end

