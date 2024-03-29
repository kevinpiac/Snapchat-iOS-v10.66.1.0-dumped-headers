//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCProximityStatus-Protocol.h"

@class NSNotificationCenter, NSString, UIDevice;
@protocol SCProximityDeviceDelegate;

@interface SCProximityDevice : NSObject <SCProximityStatus>
{
    UIDevice *_device;
    NSNotificationCenter *_notificationCenter;
    _Bool _state;
    id <SCProximityDeviceDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_onUIDeviceProximityStateChanged:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
@property(nonatomic) __weak id <SCProximityDeviceDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithDevice:(id)arg1 notificationCenter:(id)arg2;
@property(nonatomic) _Bool state; // @synthesize state=_state;
- (void)updateProximityMonitoringStatus:(_Bool)arg1 performer:(id)arg2 completeHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

