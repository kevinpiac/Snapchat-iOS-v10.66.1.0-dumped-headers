//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class SCAppNotification;

@protocol SCTalkViewControllerProtocol
- (_Bool)callInProgress;
- (void)setChatSource:(long long)arg1;
- (void)setSourceNotification:(SCAppNotification *)arg1;
- (void)showCallEndDialog:(void (^)(_Bool))arg1;
- (void)startCall:(unsigned long long)arg1;
@end
