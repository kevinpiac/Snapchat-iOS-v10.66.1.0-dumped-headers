//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol SCSoundEffects
- (_Bool)isRingingForBestFriend:(_Bool *)arg1 isIncoming:(_Bool *)arg2 isVibrating:(_Bool *)arg3;
- (NSString *)lockRingingWithLabel:(NSString *)arg1;
- (void)playSound:(unsigned long long)arg1;
- (void)ringForBestFriend:(_Bool)arg1 incoming:(_Bool)arg2;
- (void)stopRinging;
- (void)unlockRingingWithToken:(NSString *)arg1;
- (void)vibrateOnce;
@end

