//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSpectaclesContentMetadata-Protocol.h"

@class MLBMediaFileMetadata, NSString;

@interface SCSpectaclesMalibuContentMetadata : NSObject <SCSpectaclesContentMetadata>
{
    MLBMediaFileMetadata *_underlyingMalibuProto;
}

- (void).cxx_destruct;
- (id)ambaTemperature;
- (id)ambientLightIntensity;
- (id)batterySoc;
- (id)bleConnected;
- (id)bleUUID;
- (unsigned long long)buttonPressType;
- (unsigned long long)buttonSide;
- (_Bool)charging;
- (unsigned long long)contentType;
@property(readonly, copy) NSString *description;
- (id)droppedFramesVin0;
- (id)droppedFramesVin1;
- (id)endEvIndex;
- (id)firmwareVersion;
- (_Bool)hasCharging;
- (id)initWithMalibuData:(id)arg1;
- (_Bool)isHEVC;
- (id)location;
- (id)multisnapGroupID;
- (id)multisnapIndex;
- (id)nordicLastBootSession;
- (id)nordicTemperature;
- (id)randBytes;
- (id)rawData;
- (id)sensorBeginTemperature;
- (id)sensorCurrentAgc;
- (id)sensorCurrentDgc;
- (id)sensorEndTemperature;
- (unsigned long long)serializedSize;
@property(retain, nonatomic) MLBMediaFileMetadata *underlyingMalibuProto; // @synthesize underlyingMalibuProto=_underlyingMalibuProto;
- (id)snapcodeDetected;
- (id)startEvIndex;
- (id)storagePercentage;
- (id)timeOfCapture;
- (id)userAssociated;
- (id)videoDuration;
- (id)wifiTemperature;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
