//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCBlackCameraDetectorDelegate-Protocol.h"

@class NSError;

@protocol SCCaptureSessionFixerProtocol <SCBlackCameraDetectorDelegate>
- (void)applicationDidBecomeActive;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)managedCaptureSessionRunningDidChange:(_Bool)arg1;
- (void)onSessionStartRunning;
- (void)onSessionStopRunning;
- (void)sessionRuntimeError:(NSError *)arg1;
@end

