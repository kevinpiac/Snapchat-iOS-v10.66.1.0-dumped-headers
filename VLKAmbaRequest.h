//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class VLKAuthRequest, VLKFirmwareUpdateUploadRequest, VLKLogRequest, VLKMediaRequest;

@interface VLKAmbaRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) VLKAuthRequest *authRequest; // @dynamic authRequest;
@property(retain, nonatomic) VLKFirmwareUpdateUploadRequest *fwUpdateUploadRequest; // @dynamic fwUpdateUploadRequest;
@property(nonatomic) _Bool hasAuthRequest; // @dynamic hasAuthRequest;
@property(nonatomic) _Bool hasFwUpdateUploadRequest; // @dynamic hasFwUpdateUploadRequest;
@property(nonatomic) _Bool hasLogRequest; // @dynamic hasLogRequest;
@property(nonatomic) _Bool hasMediaRequest; // @dynamic hasMediaRequest;
@property(nonatomic) _Bool hasWifiSharingRequest; // @dynamic hasWifiSharingRequest;
@property(retain, nonatomic) VLKLogRequest *logRequest; // @dynamic logRequest;
@property(retain, nonatomic) VLKMediaRequest *mediaRequest; // @dynamic mediaRequest;
@property(nonatomic) _Bool wifiSharingRequest; // @dynamic wifiSharingRequest;

@end
