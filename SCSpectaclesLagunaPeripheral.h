//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSpectaclesBleStreamDelegate-Protocol.h"
#import "SCSpectaclesMessageBufferDelegate-Protocol.h"
#import "SCSpectaclesPeripheral-Protocol.h"

@class CBPeripheral, NSMutableArray, NSNumber, NSString, SCSpectaclesBleStream, SCSpectaclesECBPacketEncryptor, SCSpectaclesMessageBuffer;
@protocol SCPerforming, SCSpectaclesPeripheralDelegate;

@interface SCSpectaclesLagunaPeripheral : NSObject <SCSpectaclesBleStreamDelegate, SCSpectaclesMessageBufferDelegate, SCSpectaclesPeripheral>
{
    id <SCSpectaclesPeripheralDelegate> _delegate;
    id <SCPerforming> _performer;
    CBPeripheral *_peripheral;
    NSNumber *_RSSI;
    SCSpectaclesMessageBuffer *_messageBuffer;
    SCSpectaclesBleStream *_stream;
    NSMutableArray *_requests;
    long long _previousRequestCount;
    SCSpectaclesECBPacketEncryptor *_encryptor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *RSSI; // @synthesize RSSI=_RSSI;
- (void)_handleEncryptionResponseData:(id)arg1;
- (void)_handleNrfResponseData:(id)arg1;
@property(nonatomic) __weak id <SCSpectaclesPeripheralDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SCSpectaclesECBPacketEncryptor *encryptor; // @synthesize encryptor=_encryptor;
- (id)initWithPeripheral:(id)arg1 delegate:(id)arg2;
@property(retain, nonatomic) SCSpectaclesMessageBuffer *messageBuffer; // @synthesize messageBuffer=_messageBuffer;
- (void)messageBufferReceivedData:(id)arg1 messageType:(unsigned long long)arg2;
- (void)openStream;
@property(retain, nonatomic) id <SCPerforming> performer; // @synthesize performer=_performer;
@property(retain, nonatomic) CBPeripheral *peripheral; // @synthesize peripheral=_peripheral;
- (void)peripheral:(id)arg1 didReadRSSI:(id)arg2 error:(id)arg3;
@property(nonatomic) long long previousRequestCount; // @synthesize previousRequestCount=_previousRequestCount;
@property(retain, nonatomic) NSMutableArray *requests; // @synthesize requests=_requests;
- (void)sendEncryptionRequest:(id)arg1;
- (void)sendRequest:(id)arg1;
@property(retain, nonatomic) SCSpectaclesBleStream *stream; // @synthesize stream=_stream;
- (void)setupEncryptionWithKey:(id)arg1;
- (void)streamDidError:(id)arg1;
- (void)streamDidOpen;
- (void)streamDidReadData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
