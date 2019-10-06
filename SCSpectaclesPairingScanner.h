//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSpectaclesCBCentralManagerEventListener-Protocol.h"

@class CBPeripheral, NSArray, NSMutableDictionary, NSMutableSet, NSString, SCQueuePerformer, SCSpectaclesCBCentralManager, SCSpectaclesPairingCandidateCode;
@protocol SCSpectaclesPairingScannerDelegate, SCSpectaclesTweaksConfigProvider;

@interface SCSpectaclesPairingScanner : NSObject <SCSpectaclesCBCentralManagerEventListener>
{
    _Bool _restrictRSSIForFactory;
    _Bool _shouldFilterRSSI;
    double _ambientData;
    NSArray *_candidateCodes;
    id <SCSpectaclesTweaksConfigProvider> _tweaksConfigProvider;
    NSString *_requiredPeripheralName;
    SCSpectaclesCBCentralManager *_centralManager;
    SCQueuePerformer *_performer;
    NSMutableDictionary *_seenPeripherals;
    NSMutableSet *_peripheralsToIgnore;
    long long _state;
    id <SCSpectaclesPairingScannerDelegate> _delegate;
    CBPeripheral *_candidatePeripheral;
    SCSpectaclesPairingCandidateCode *_recognizedCandidateCode;
}

+ (_Bool)_shouldConsiderAdvertisement:(id)arg1 RSSI:(id)arg2;
- (void).cxx_destruct;
- (void)_emitPeripheralDiscoveryEvents:(id)arg1 advertisementData:(id)arg2 RSSI:(id)arg3;
- (void)_handlePeripheralDiscovery:(id)arg1 advertisementData:(id)arg2 RSSI:(id)arg3;
- (void)_logAdvertisement:(id)arg1 advertisementData:(id)arg2 RSSI:(id)arg3;
- (long long)_minimumRSSI;
- (_Bool)_shouldConnectToPeripheral:(id)arg1 advertisement:(id)arg2 RSSI:(id)arg3;
- (_Bool)_shouldGrowSnapcode:(id)arg1 advertisementData:(id)arg2 RSSI:(id)arg3;
- (void)_transitionToState:(long long)arg1;
@property(nonatomic) double ambientData; // @synthesize ambientData=_ambientData;
- (void)cancelSearchForNewDevices;
@property(retain, nonatomic) NSArray *candidateCodes; // @synthesize candidateCodes=_candidateCodes;
@property(retain, nonatomic) CBPeripheral *candidatePeripheral; // @synthesize candidatePeripheral=_candidatePeripheral;
@property(retain, nonatomic) SCSpectaclesCBCentralManager *centralManager; // @synthesize centralManager=_centralManager;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <SCSpectaclesPairingScannerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)finishSearchForNewDevices;
- (id)initWithCentralManager:(id)arg1 performer:(id)arg2 delegate:(id)arg3 tweaksConfigProvider:(id)arg4;
@property(retain, nonatomic) SCQueuePerformer *performer; // @synthesize performer=_performer;
@property(retain, nonatomic) NSMutableSet *peripheralsToIgnore; // @synthesize peripheralsToIgnore=_peripheralsToIgnore;
@property(retain, nonatomic) SCSpectaclesPairingCandidateCode *recognizedCandidateCode; // @synthesize recognizedCandidateCode=_recognizedCandidateCode;
@property(copy, nonatomic) NSString *requiredPeripheralName; // @synthesize requiredPeripheralName=_requiredPeripheralName;
@property(nonatomic) _Bool restrictRSSIForFactory; // @synthesize restrictRSSIForFactory=_restrictRSSIForFactory;
@property(retain, nonatomic) NSMutableDictionary *seenPeripherals; // @synthesize seenPeripherals=_seenPeripherals;
@property(nonatomic) _Bool shouldFilterRSSI; // @synthesize shouldFilterRSSI=_shouldFilterRSSI;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void)startSearchForNewDevices:(_Bool)arg1;
@property(readonly, nonatomic) id <SCSpectaclesTweaksConfigProvider> tweaksConfigProvider; // @synthesize tweaksConfigProvider=_tweaksConfigProvider;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

