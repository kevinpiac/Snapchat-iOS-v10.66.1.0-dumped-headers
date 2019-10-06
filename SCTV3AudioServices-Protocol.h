//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SCTV3AudioServices <NSObject>
- (id)lockRingingWithLabel:(NSString *)arg1;
- (void)playSound:(unsigned long long)arg1;
- (_Bool)shouldIgnoreVolumeChanges;
- (void)startRingingInConvoId:(NSString *)arg1 incoming:(_Bool)arg2;
- (void)stopRingingInConvoId:(NSString *)arg1;
- (void)unlockRingingWithToken:(id)arg1;
- (void)updateAudioSessionConfiguration:(unsigned long long)arg1 proximitySensor:(_Bool)arg2 completion:(void (^)(void))arg3;
@end

