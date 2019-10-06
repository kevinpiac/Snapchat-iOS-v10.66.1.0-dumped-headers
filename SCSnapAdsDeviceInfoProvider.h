//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnapAdsDeviceAdapter-Protocol.h"

@class NSString;

@interface SCSnapAdsDeviceInfoProvider : NSObject <SCSnapAdsDeviceAdapter>
{
    struct CGSize _screenSize;
}

- (id)getCarrierMCCAndMNC;
- (id)getCarrierName;
- (long long)getConnectionClassType;
- (id)getConnectivity;
- (long long)getConnectivityType;
- (id)getDeviceLanguage;
- (id)getDeviceModel;
- (id)getDownloadBandwidthBytesPerSecond;
- (id)getOSVersion;
- (double)getScreenHeightInPixels;
- (double)getScreenWidthInPixels;
- (id)init;
- (_Bool)isDeviceAudible;
- (_Bool)isTablet;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
