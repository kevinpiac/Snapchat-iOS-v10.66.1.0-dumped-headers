//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCSpectaclesDevice;

@protocol SCLagunaHomeWifiManagerEventListener <NSObject>

@optional
- (void)lagunaOnShareWifiCredentialsUpdate:(unsigned long long)arg1 device:(SCSpectaclesDevice *)arg2 wifiSsid:(NSString *)arg3;
- (void)lagunaOnWifiAPListUpdate:(SCSpectaclesDevice *)arg1;
@end

