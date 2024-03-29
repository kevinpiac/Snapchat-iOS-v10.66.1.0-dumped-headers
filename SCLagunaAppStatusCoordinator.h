//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCGalleryLagunaWifiControllerEventListener-Protocol.h"
#import "SCLagunaFirmwareUpdateEventListener-Protocol.h"
#import "SCLocationObserver-Protocol.h"
#import "SCSpectaclesEventListener-Protocol.h"

@class NSMutableDictionary, NSString, SCLagunaAppStatusListenerAnnouncer, SCLagunaModule, SCUserSession;
@protocol SCLagunaManiphestAdapter, SCNotificationManager;

@interface SCLagunaAppStatusCoordinator : NSObject <SCSpectaclesEventListener, SCLagunaFirmwareUpdateEventListener, SCGalleryLagunaWifiControllerEventListener, SCLocationObserver>
{
    _Bool _hasSeenTransferStatusInMemories;
    _Bool _lagunaMemoriesOnScreen;
    _Bool _lagunaSettingsOnScreen;
    _Bool _needToDisplayBluetoothErrorAlert;
    _Bool _hasSeenBluetoothErrorAlert;
    _Bool _hasSeenFirmwareUpdateRequiredAlert;
    _Bool _needToDisplayUnpairedAlert;
    _Bool _hasSetCountryCode;
    _Bool _downloadingGPSAlmanac;
    SCUserSession *_userSession;
    id <SCNotificationManager> _notificationManager;
    id <SCLagunaManiphestAdapter> _maniphestAdapter;
    SCLagunaModule *_lagunaModule;
    SCLagunaAppStatusListenerAnnouncer *_announcer;
    NSMutableDictionary *_deviceStates;
}

+ (_Bool)_isDeviceHighTemperature:(id)arg1;
+ (_Bool)_isDeviceLowBattery:(id)arg1;
+ (_Bool)_isDeviceLowStorageSpace:(id)arg1;
+ (_Bool)_isDeviceLowTemperature:(id)arg1;
+ (_Bool)_isFirmwareUpdateState:(long long)arg1;
+ (_Bool)_isIdleState:(long long)arg1;
+ (_Bool)_isItAnAlertState:(long long)arg1;
+ (_Bool)_isTransferState:(long long)arg1;
+ (_Bool)_isWifiBootState:(long long)arg1;
+ (long long)analyticsStateFromDeviceState:(long long)arg1;
- (void).cxx_destruct;
- (void)_announceNeedsToUpdateStateForDevice:(id)arg1;
- (void)_announcePressedLearnMoreForBluetoothOverloadError;
- (void)_announceStatusCoordinatorBluetoothTurnedOff;
- (void)_announceStatusCoordinatorBluetoothTurnedOn;
- (void)_announceStatusCoordinatorNumberOfDevicesUpdated;
- (void)_checkForMissingImuForContent:(id)arg1;
- (void)_checkIfNeedToDisplayBluetoothErrorAlert;
- (void)_checkIfNeedToDisplayFirmwareUpdateRequiredAlert;
- (void)_checkIfNeedToDisplayUnpairedAlert;
- (void)_checkIfStateNeedsToDisappear;
- (void)_clearAlertStateForAllDevices;
- (void)_clearAlertStateForDevice:(id)arg1;
- (id)_connectedDevices;
- (double)_delayTimeForState:(long long)arg1;
- (id)_deviceStateForDevice:(id)arg1;
- (void)_downloadGPSAlmanacWithCompletion:(CDUnknownBlockType)arg1;
- (id)_getHdSessionAnalyticsInfoWithTransferSession:(id)arg1 device:(id)arg2;
- (id)_gpsAlmanacData;
- (long long)_idleStateForDevice:(id)arg1;
- (void)_initializeStateForDevice:(id)arg1;
- (id)_logStringForLagunaState:(long long)arg1;
- (unsigned long long)_numberOfUntransferredContent;
- (id)_pairedDevices;
- (void)_refreshStateForDevice:(id)arg1;
- (void)_setCountryCodeIfNecessary;
- (void)_setNewDeviceState:(id)arg1 forDevice:(id)arg2;
- (_Bool)_shouldDismissAlertForDeviceStateUpdate:(id)arg1;
- (void)_transitionToIdleStateForDevice:(id)arg1;
- (void)_tryTransitionDevice:(id)arg1 withNewState:(id)arg2;
- (void)_tryTransitionDevice:(id)arg1 withNewState:(id)arg2 alertStateTimedOut:(_Bool)arg3;
- (void)_updateGPSAlmanacIfNeededForDevice:(id)arg1;
- (void)addListener:(id)arg1;
@property(retain, nonatomic) SCLagunaAppStatusListenerAnnouncer *announcer; // @synthesize announcer=_announcer;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (id)connectedDeviceAtIndex:(long long)arg1;
- (id)deviceAtIndex:(long long)arg1;
@property(retain, nonatomic) NSMutableDictionary *deviceStates; // @synthesize deviceStates=_deviceStates;
- (id)expandedStatusDescriptionForDevice:(id)arg1;
- (void)galleryLagunaWifiControllerDidUpdateState:(long long)arg1 device:(id)arg2;
- (id)getCurrentHdSessionAnalyticsInfo;
@property(nonatomic) _Bool hasSeenBluetoothErrorAlert; // @synthesize hasSeenBluetoothErrorAlert=_hasSeenBluetoothErrorAlert;
@property(nonatomic) _Bool hasSeenFirmwareUpdateRequiredAlert; // @synthesize hasSeenFirmwareUpdateRequiredAlert=_hasSeenFirmwareUpdateRequiredAlert;
@property(readonly, nonatomic) _Bool hasSeenTransferStatusInMemories; // @synthesize hasSeenTransferStatusInMemories=_hasSeenTransferStatusInMemories;
@property(nonatomic) _Bool hasSetCountryCode; // @synthesize hasSetCountryCode=_hasSetCountryCode;
- (long long)indexOfConnectedDevice:(id)arg1;
- (long long)indexOfDevice:(id)arg1;
- (id)initWithUserSession:(id)arg1 lagunaModule:(id)arg2 maniphestAdapter:(id)arg3 notificationManager:(id)arg4;
- (_Bool)isBluetoothOn;
- (_Bool)isDeviceTransferring:(id)arg1;
- (_Bool)isDeviceUpdating:(id)arg1;
@property(nonatomic, getter=isDownloadingGPSAlmanac) _Bool downloadingGPSAlmanac; // @synthesize downloadingGPSAlmanac=_downloadingGPSAlmanac;
@property(nonatomic, getter=isLagunaMemoriesOnScreen) _Bool lagunaMemoriesOnScreen; // @synthesize lagunaMemoriesOnScreen=_lagunaMemoriesOnScreen;
@property(nonatomic, getter=isLagunaSettingsOnScreen) _Bool lagunaSettingsOnScreen; // @synthesize lagunaSettingsOnScreen=_lagunaSettingsOnScreen;
- (_Bool)isUserTriggeredStateForDevice:(id)arg1;
@property(nonatomic) __weak SCLagunaModule *lagunaModule; // @synthesize lagunaModule=_lagunaModule;
- (void)lagunaOnFirmwareUpdateEvent:(unsigned long long)arg1 device:(id)arg2;
- (void)lagunaOnFirmwareUpdateForDevice:(id)arg1 changedState:(unsigned long long)arg2 progress:(float)arg3;
- (void)lagunaOnFirmwareUpdateForDevice:(id)arg1 failedFromState:(unsigned long long)arg2;
- (void)lagunaOnNewFirmwareVersionFetched;
- (id)locationObserverDispatchQueue;
- (id)locationObserverIdentifier;
- (_Bool)locationObserverWantsActiveLocationMonitoring;
@property(retain, nonatomic) id <SCLagunaManiphestAdapter> maniphestAdapter; // @synthesize maniphestAdapter=_maniphestAdapter;
- (void)mockDeviceGotUnpaired;
- (void)mockSpectaclesErrorStateFirmwareCrash;
- (void)mockSpectaclesErrorStateHighTemp;
- (void)mockSpectaclesErrorStateLowBattery;
- (void)mockSpectaclesErrorStateLowTemp;
- (void)mockSpectaclesErrorStateStorageFull;
@property(nonatomic) _Bool needToDisplayBluetoothErrorAlert; // @synthesize needToDisplayBluetoothErrorAlert=_needToDisplayBluetoothErrorAlert;
@property(nonatomic) _Bool needToDisplayUnpairedAlert; // @synthesize needToDisplayUnpairedAlert=_needToDisplayUnpairedAlert;
@property(nonatomic) __weak id <SCNotificationManager> notificationManager; // @synthesize notificationManager=_notificationManager;
- (long long)numberOfConnectedDevices;
- (long long)numberOfDevices;
- (long long)numberOfPairedDevices;
- (void)onLocationUpdate:(id)arg1;
- (id)pairedDeviceAtIndex:(long long)arg1;
- (void)removeListener:(id)arg1;
@property(nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void)showLagunaRestartErrorAlertView;
- (void)showLagunaUnpairedErrorAlertView;
- (void)spectaclesDevice:(id)arg1 didUnpairWithReason:(unsigned long long)arg2;
- (void)spectaclesDevice:(id)arg1 didUpdateInfo:(unsigned long long)arg2;
- (void)spectaclesDevice:(id)arg1 onAlertNotification:(unsigned long long)arg2;
- (void)spectaclesDevice:(id)arg1 onDeviceLogsUpdate:(unsigned long long)arg2;
- (void)spectaclesDeviceDidPair:(id)arg1;
- (void)spectaclesDeviceDidUpdateState:(id)arg1;
- (void)spectaclesOnBluetoothStateUpdate:(long long)arg1;
- (void)spectaclesOnDeviceForgotten:(id)arg1;
- (void)spectaclesTransferSession:(id)arg1 onTransferUpdate:(unsigned long long)arg2;
- (id)statusForDevice:(id)arg1;
- (void)tappedOnLagunaStatusBarWithDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

