//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCPNSceneIntRequest;
@protocol SCSIBackendRequest, SCSIResultsListener;

@protocol SCSIResultsBackend <NSObject>
- (void)addListener:(id <SCSIResultsListener>)arg1;
- (id <SCSIBackendRequest>)backendRequestForProtoRequest:(SCPNSceneIntRequest *)arg1;
- (void)performRequest:(id <SCSIBackendRequest>)arg1 snapToken:(NSString *)arg2;
- (void)removeListener:(id <SCSIResultsListener>)arg1;
@end

