//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SCMTDeviceData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) float batteryLevel; // @dynamic batteryLevel;
@property(nonatomic) _Bool devicePluggedIn; // @dynamic devicePluggedIn;
@property(nonatomic) _Bool headphoneOutput; // @dynamic headphoneOutput;
@property(nonatomic) _Bool isBackgrounded; // @dynamic isBackgrounded;
@property(nonatomic) _Bool isOtherAudioPlaying; // @dynamic isOtherAudioPlaying;
@property(copy, nonatomic) NSString *wifiSsid; // @dynamic wifiSsid;

@end

