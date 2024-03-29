//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCASpectaclesTrackedEvent.h"

@class NSNumber;

@interface SCASpectaclesContextNotificationEventBase : SCASpectaclesTrackedEvent
{
    NSNumber *numFriendsSelected;
    long long ledColor;
    long long friendsCollectionType;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getFriendsCollectionType;
- (long long)getLedColor;
- (double)getNumFriendsSelected;
- (double)getPerUserSamplingRate;
- (id)init;
- (void)setFriendsCollectionType:(long long)arg1;
- (void)setLedColor:(long long)arg1;
- (void)setNumFriendsSelected:(double)arg1;

@end

