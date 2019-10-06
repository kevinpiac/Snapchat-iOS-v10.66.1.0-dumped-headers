//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSString;

@interface SCASettingBitmojiEdit : SCAUserTrackedEvent
{
    long long source;
    long long action;
    long long bitmojiAvatarBuilderType;
    NSString *application_list;
    NSString *bitmojiSessionId;
    NSString *profileSessionId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getAction;
- (id)getApplication_list;
- (long long)getBitmojiAvatarBuilderType;
- (id)getBitmojiSessionId;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (id)getProfileSessionId;
- (long long)getSource;
- (id)init;
- (void)setAction:(long long)arg1;
- (void)setApplication_list:(id)arg1;
- (void)setBitmojiAvatarBuilderType:(long long)arg1;
- (void)setBitmojiSessionId:(id)arg1;
- (void)setProfileSessionId:(id)arg1;
- (void)setSource:(long long)arg1;

@end
