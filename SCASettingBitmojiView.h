//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCASettingBitmojiView : SCAUserTrackedEvent
{
    NSNumber *isBitmojiLinked;
    long long source;
    long long bitmojiAvatarBuilderType;
    NSString *profileSessionId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getBitmojiAvatarBuilderType;
- (id)getEventName;
- (long long)getEventQoS;
- (_Bool)getIsBitmojiLinked;
- (double)getPerUserSamplingRate;
- (id)getProfileSessionId;
- (long long)getSource;
- (id)init;
- (void)setBitmojiAvatarBuilderType:(long long)arg1;
- (void)setIsBitmojiLinked:(_Bool)arg1;
- (void)setProfileSessionId:(id)arg1;
- (void)setSource:(long long)arg1;

@end

