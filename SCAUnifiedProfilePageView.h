//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUnifiedProfileBaseEvent.h"

@class NSNumber, NSString;

@interface SCAUnifiedProfilePageView : SCAUnifiedProfileBaseEvent
{
    NSNumber *hasBitmojiInstalled;
    NSString *sourcePageType;
    NSString *correspondentUsername;
    NSString *ghost_correspondent_username;
    NSString *groupId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getCorrespondentUsername;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getGhost_correspondent_username;
- (id)getGroupId;
- (_Bool)getHasBitmojiInstalled;
- (double)getPerUserSamplingRate;
- (id)getSourcePageType;
- (void)setCorrespondentUsername:(id)arg1;
- (void)setGhost_correspondent_username:(id)arg1;
- (void)setGroupId:(id)arg1;
- (void)setHasBitmojiInstalled:(_Bool)arg1;
- (void)setSourcePageType:(id)arg1;

@end

