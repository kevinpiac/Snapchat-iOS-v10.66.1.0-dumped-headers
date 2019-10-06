//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIGestureRecognizer;
@protocol SCManiphestTicketCreator;

@protocol SCBlackCameraDetector <NSObject>
- (void)capturePreviewDidBecomeVisible:(_Bool)arg1;
- (id)initWithTicketCreator:(id <SCManiphestTicketCreator>)arg1;
- (void)onCameraViewVisible:(_Bool)arg1;
- (void)onCameraViewVisibleWithTouch:(UIGestureRecognizer *)arg1;
- (void)sessionDidCallStartRunning;
- (void)sessionDidCallStopRunning;
- (void)sessionDidChangeIsRunning:(_Bool)arg1;
- (void)sessionDidCommitConfiguration;
- (void)sessionDidRecreate;
- (void)sessionRuntimeError;
- (void)sessionWillCallStartRunning;
- (void)sessionWillCallStopRunning;
- (void)sessionWillCommitConfiguration;
- (void)sessionWillRecreate;
@end
