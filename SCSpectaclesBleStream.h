//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CBPeripheralDelegate-Protocol.h"

@class CBPeripheral, CBUUID, NSMutableData, NSString;
@protocol SCSpectaclesBleStreamDelegate;

@interface SCSpectaclesBleStream : NSObject <CBPeripheralDelegate>
{
    _Bool _streamIsOpen;
    _Bool _hasSpaceAvailable;
    CBPeripheral *_peripheral;
    id <SCSpectaclesBleStreamDelegate> _delegate;
    CBUUID *_serviceUUID;
    CBUUID *_txCharacteristicUUID;
    CBUUID *_rxCharacteristicUUID;
    NSMutableData *_writeBuffer;
}

- (void).cxx_destruct;
- (void)_sendGenericError;
- (void)_writeNextPacket;
@property(nonatomic) __weak id <SCSpectaclesBleStreamDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool hasSpaceAvailable; // @synthesize hasSpaceAvailable=_hasSpaceAvailable;
- (id)initWithPeripheral:(id)arg1 serviceUUID:(id)arg2 txCharacteristicUUID:(id)arg3 rxCharacteristicUUID:(id)arg4 delegate:(id)arg5;
- (void)open;
@property(retain, nonatomic) CBPeripheral *peripheral; // @synthesize peripheral=_peripheral;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)peripheral:(id)arg1 didReadRSSI:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
@property(retain, nonatomic) CBUUID *rxCharacteristicUUID; // @synthesize rxCharacteristicUUID=_rxCharacteristicUUID;
@property(retain, nonatomic) CBUUID *serviceUUID; // @synthesize serviceUUID=_serviceUUID;
@property(nonatomic) _Bool streamIsOpen; // @synthesize streamIsOpen=_streamIsOpen;
@property(retain, nonatomic) CBUUID *txCharacteristicUUID; // @synthesize txCharacteristicUUID=_txCharacteristicUUID;
@property(retain, nonatomic) NSMutableData *writeBuffer; // @synthesize writeBuffer=_writeBuffer;
- (void)writeData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

