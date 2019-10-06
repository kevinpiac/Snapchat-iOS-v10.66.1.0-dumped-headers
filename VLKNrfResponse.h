//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, VLKAmbaFsStatus, VLKHardwareVersion, VLKNrfAuthResponse, VLKNrfBackgroundUpdateResponse, VLKNrfBatteryInfo, VLKNrfDebugReport, VLKNrfDiffUpdateResponse, VLKNrfEventLogData, VLKNrfFirmwareVersionInfo, VLKNrfTemperatureReport;

@interface VLKNrfResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool ambaCrashed; // @dynamic ambaCrashed;
@property(retain, nonatomic) VLKAmbaFsStatus *ambaFsStatus; // @dynamic ambaFsStatus;
@property(retain, nonatomic) VLKNrfBatteryInfo *batteryInfo; // @dynamic batteryInfo;
@property(nonatomic) int batteryLevel; // @dynamic batteryLevel;
@property(nonatomic) int bluetoothClassicEvent; // @dynamic bluetoothClassicEvent;
@property(nonatomic) _Bool contentCleared; // @dynamic contentCleared;
@property(retain, nonatomic) VLKNrfDebugReport *debugReport; // @dynamic debugReport;
@property(nonatomic) int deviceColor; // @dynamic deviceColor;
@property(copy, nonatomic) NSString *errorMessage; // @dynamic errorMessage;
@property(copy, nonatomic) NSString *firmwareVersion; // @dynamic firmwareVersion;
@property(retain, nonatomic) VLKNrfFirmwareVersionInfo *firmwareVersionInfo; // @dynamic firmwareVersionInfo;
@property(copy, nonatomic) NSData *gapAddress; // @dynamic gapAddress;
@property(retain, nonatomic) VLKHardwareVersion *hardwareVersion; // @dynamic hardwareVersion;
@property(nonatomic) _Bool hasAmbaCrashed; // @dynamic hasAmbaCrashed;
@property(nonatomic) _Bool hasAmbaFsStatus; // @dynamic hasAmbaFsStatus;
@property(nonatomic) _Bool hasBatteryInfo; // @dynamic hasBatteryInfo;
@property(nonatomic) _Bool hasBatteryLevel; // @dynamic hasBatteryLevel;
@property(nonatomic) _Bool hasBluetoothClassicEvent; // @dynamic hasBluetoothClassicEvent;
@property(nonatomic) _Bool hasContentCleared; // @dynamic hasContentCleared;
@property(nonatomic) _Bool hasDebugReport; // @dynamic hasDebugReport;
@property(nonatomic) _Bool hasDeviceColor; // @dynamic hasDeviceColor;
@property(nonatomic) _Bool hasErrorMessage; // @dynamic hasErrorMessage;
@property(nonatomic) _Bool hasFirmwareVersion; // @dynamic hasFirmwareVersion;
@property(nonatomic) _Bool hasFirmwareVersionInfo; // @dynamic hasFirmwareVersionInfo;
@property(nonatomic) _Bool hasGapAddress; // @dynamic hasGapAddress;
@property(nonatomic) _Bool hasHardwareVersion; // @dynamic hasHardwareVersion;
@property(nonatomic) _Bool hasHighTempState; // @dynamic hasHighTempState;
@property(nonatomic) _Bool hasIpAddress; // @dynamic hasIpAddress;
@property(nonatomic) _Bool hasLatestMediaType; // @dynamic hasLatestMediaType;
@property(nonatomic) _Bool hasLogMessage; // @dynamic hasLogMessage;
@property(nonatomic) _Bool hasMacAddress; // @dynamic hasMacAddress;
@property(nonatomic) _Bool hasMediaCount; // @dynamic hasMediaCount;
@property(nonatomic) _Bool hasMediaUpdated; // @dynamic hasMediaUpdated;
@property(nonatomic) _Bool hasNrfAuthResponse; // @dynamic hasNrfAuthResponse;
@property(nonatomic) _Bool hasNrfBackgroundUpdateResponse; // @dynamic hasNrfBackgroundUpdateResponse;
@property(nonatomic) _Bool hasNrfChargerState; // @dynamic hasNrfChargerState;
@property(nonatomic) _Bool hasNrfDiffUpdateResponse; // @dynamic hasNrfDiffUpdateResponse;
@property(nonatomic) _Bool hasNrfError; // @dynamic hasNrfError;
@property(nonatomic) _Bool hasNrfEventLogData; // @dynamic hasNrfEventLogData;
@property(nonatomic) _Bool hasPhotoCount; // @dynamic hasPhotoCount;
@property(nonatomic) _Bool hasSawBackupPairingConfirmationTap; // @dynamic hasSawBackupPairingConfirmationTap;
@property(nonatomic) _Bool hasSerialNumber; // @dynamic hasSerialNumber;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) _Bool hasStoragePercent; // @dynamic hasStoragePercent;
@property(nonatomic) _Bool hasTemperatureReport; // @dynamic hasTemperatureReport;
@property(nonatomic) _Bool hasVideoCount; // @dynamic hasVideoCount;
@property(nonatomic) _Bool hasVideoRecordingHasStarted; // @dynamic hasVideoRecordingHasStarted;
@property(nonatomic) _Bool hasWifiName; // @dynamic hasWifiName;
@property(nonatomic) _Bool hasWifiRateLimitingActive; // @dynamic hasWifiRateLimitingActive;
@property(nonatomic) _Bool hasWifiRequestResult; // @dynamic hasWifiRequestResult;
@property(nonatomic) _Bool hasWifiState; // @dynamic hasWifiState;
@property(nonatomic) int highTempState; // @dynamic highTempState;
@property(copy, nonatomic) NSString *ipAddress; // @dynamic ipAddress;
@property(nonatomic) int latestMediaType; // @dynamic latestMediaType;
@property(copy, nonatomic) NSData *logMessage; // @dynamic logMessage;
@property(copy, nonatomic) NSData *macAddress; // @dynamic macAddress;
@property(nonatomic) int mediaCount; // @dynamic mediaCount;
@property(nonatomic) _Bool mediaUpdated; // @dynamic mediaUpdated;
@property(retain, nonatomic) VLKNrfAuthResponse *nrfAuthResponse; // @dynamic nrfAuthResponse;
@property(retain, nonatomic) VLKNrfBackgroundUpdateResponse *nrfBackgroundUpdateResponse; // @dynamic nrfBackgroundUpdateResponse;
@property(nonatomic) int nrfChargerState; // @dynamic nrfChargerState;
@property(retain, nonatomic) VLKNrfDiffUpdateResponse *nrfDiffUpdateResponse; // @dynamic nrfDiffUpdateResponse;
@property(nonatomic) int nrfError; // @dynamic nrfError;
@property(retain, nonatomic) VLKNrfEventLogData *nrfEventLogData; // @dynamic nrfEventLogData;
@property(nonatomic) int photoCount; // @dynamic photoCount;
@property(nonatomic) _Bool sawBackupPairingConfirmationTap; // @dynamic sawBackupPairingConfirmationTap;
@property(copy, nonatomic) NSString *serialNumber; // @dynamic serialNumber;
@property(nonatomic) int status; // @dynamic status;
@property(nonatomic) int storagePercent; // @dynamic storagePercent;
@property(retain, nonatomic) VLKNrfTemperatureReport *temperatureReport; // @dynamic temperatureReport;
@property(nonatomic) int videoCount; // @dynamic videoCount;
@property(nonatomic) _Bool videoRecordingHasStarted; // @dynamic videoRecordingHasStarted;
@property(copy, nonatomic) NSString *wifiName; // @dynamic wifiName;
@property(nonatomic) _Bool wifiRateLimitingActive; // @dynamic wifiRateLimitingActive;
@property(nonatomic) int wifiRequestResult; // @dynamic wifiRequestResult;
@property(nonatomic) int wifiState; // @dynamic wifiState;

@end

