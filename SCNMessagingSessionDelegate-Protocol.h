//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol SCNGrpcAuthContextDelegate;

@protocol SCNMessagingSessionDelegate
- (id <SCNGrpcAuthContextDelegate>)getAuthContextDelegate;
- (void)onConnectionStateChanged:(long long)arg1;
@end
