//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GCDAsyncUdpSocketDelegate-Protocol.h"

@class GCDAsyncUdpSocket, NSString;

@interface SCPerfMetricUdpHandler : NSObject <GCDAsyncUdpSocketDelegate>
{
    NSString *_host;
    long long _port;
    GCDAsyncUdpSocket *_udp;
}

- (void).cxx_destruct;
- (id)initWithHost:(id)arg1 port:(long long)arg2 queue:(id)arg3;
- (void)send:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

