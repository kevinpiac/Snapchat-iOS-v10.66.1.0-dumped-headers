//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNetworkConnectivityListener-Protocol.h"
#import "SCSpectaclesResponseMonitor-Protocol.h"
#import "SCSpectaclesSsidEventListener-Protocol.h"

@class NSNumber, NSString, SCNetworkConnectivityAnnouncer, SCSpectaclesRequestMessage, SCSpectaclesSsidScanner, SCWeakTimer;
@protocol SCPerforming, SCSpectaclesWifiMonitorDelegate;

@interface SCSpectaclesWifiMonitor : NSObject <SCSpectaclesSsidEventListener, SCNetworkConnectivityListener, SCSpectaclesResponseMonitor>
{
    _Bool _areSpectaclesConnectingToWiFi;
    NSNumber *_wifiFrequency;
    id <SCPerforming> _performer;
    id <SCSpectaclesWifiMonitorDelegate> _delegate;
    NSString *_ssid;
    NSString *_ipAddress;
    SCSpectaclesSsidScanner *_ssidScanner;
    SCNetworkConnectivityAnnouncer *_reachability;
    SCWeakTimer *_wifiStateTimer;
    SCSpectaclesRequestMessage *_outstandingWifiStartRequest;
    long long _state;
}

- (void).cxx_destruct;
- (void)_reset;
- (void)_transitionToState:(long long)arg1;
@property(nonatomic) _Bool areSpectaclesConnectingToWiFi; // @synthesize areSpectaclesConnectingToWiFi=_areSpectaclesConnectingToWiFi;
- (void)bootAndConnectWifiWithSsid:(id)arg1 ssidPassword:(id)arg2 countryCode:(id)arg3;
- (void)cancelWifiConnection;
- (void)connectToWifiWithSsid:(id)arg1 password:(id)arg2;
@property(nonatomic) __weak id <SCSpectaclesWifiMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleResponse:(id)arg1;
- (id)initWithPerformer:(id)arg1 ssidScanner:(id)arg2 connectivityAnnouncer:(id)arg3 delegate:(id)arg4;
@property(copy, nonatomic) NSString *ipAddress; // @synthesize ipAddress=_ipAddress;
- (void)networkConnectivityStatusDidChange:(long long)arg1;
@property(retain, nonatomic) SCSpectaclesRequestMessage *outstandingWifiStartRequest; // @synthesize outstandingWifiStartRequest=_outstandingWifiStartRequest;
@property(retain, nonatomic) id <SCPerforming> performer; // @synthesize performer=_performer;
@property(retain, nonatomic) SCNetworkConnectivityAnnouncer *reachability; // @synthesize reachability=_reachability;
- (void)reset;
- (long long)responseMonitorState;
@property(copy, nonatomic) NSString *ssid; // @synthesize ssid=_ssid;
@property(retain, nonatomic) SCSpectaclesSsidScanner *ssidScanner; // @synthesize ssidScanner=_ssidScanner;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSNumber *wifiFrequency; // @synthesize wifiFrequency=_wifiFrequency;
@property(retain, nonatomic) SCWeakTimer *wifiStateTimer; // @synthesize wifiStateTimer=_wifiStateTimer;
- (_Bool)wifiBooted;
- (void)wifiScannerDidUpdateWifiSsid:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

