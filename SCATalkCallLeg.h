//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCATalkCallEventBase.h"

@class NSNumber;

@interface SCATalkCallLeg : SCATalkCallEventBase
{
    NSNumber *filterLensCount;
    NSNumber *selfieModeActivationCount;
    NSNumber *audioDurationSec;
    NSNumber *videoDurationSec;
    NSNumber *muteDurationSec;
    NSNumber *lensActiveDurationSec;
    NSNumber *callLockDurationSec;
    NSNumber *mutedWhilePhoneLockCount;
    NSNumber *speakersWhilePhoneLockCount;
    NSNumber *chatSentCount;
    NSNumber *chatMediaSentCount;
    NSNumber *stickerSentCount;
    NSNumber *recipientMaxCount;
    NSNumber *withStartAndEndPhoneLock;
    NSNumber *withCallUpgradeToAppFromPhoneLock;
    NSNumber *withMediaUpdateToVideoFromPhoneLock;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)getAudioDurationSec;
- (double)getCallLockDurationSec;
- (long long)getChatMediaSentCount;
- (long long)getChatSentCount;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getFilterLensCount;
- (double)getLensActiveDurationSec;
- (double)getMuteDurationSec;
- (long long)getMutedWhilePhoneLockCount;
- (double)getPerUserSamplingRate;
- (long long)getRecipientMaxCount;
- (long long)getSelfieModeActivationCount;
- (long long)getSpeakersWhilePhoneLockCount;
- (long long)getStickerSentCount;
- (double)getVideoDurationSec;
- (_Bool)getWithCallUpgradeToAppFromPhoneLock;
- (_Bool)getWithMediaUpdateToVideoFromPhoneLock;
- (_Bool)getWithStartAndEndPhoneLock;
- (id)initWithCallUUID:(id)arg1 initialMediaType:(long long)arg2 intParams:(id)arg3 floatParams:(id)arg4 correspondentId:(id)arg5;
- (void)setAudioDurationSec:(double)arg1;
- (void)setCallLockDurationSec:(double)arg1;
- (void)setChatMediaSentCount:(long long)arg1;
- (void)setChatSentCount:(long long)arg1;
- (void)setFilterLensCount:(long long)arg1;
- (void)setLensActiveDurationSec:(double)arg1;
- (void)setMuteDurationSec:(double)arg1;
- (void)setMutedWhilePhoneLockCount:(long long)arg1;
- (void)setRecipientMaxCount:(long long)arg1;
- (void)setSelfieModeActivationCount:(long long)arg1;
- (void)setSpeakersWhilePhoneLockCount:(long long)arg1;
- (void)setStickerSentCount:(long long)arg1;
- (void)setVideoDurationSec:(double)arg1;
- (void)setWithCallUpgradeToAppFromPhoneLock:(_Bool)arg1;
- (void)setWithMediaUpdateToVideoFromPhoneLock:(_Bool)arg1;
- (void)setWithStartAndEndPhoneLock:(_Bool)arg1;

@end

