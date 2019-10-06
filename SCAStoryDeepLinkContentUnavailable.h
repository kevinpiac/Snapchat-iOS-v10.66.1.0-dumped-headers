//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSString;

@interface SCAStoryDeepLinkContentUnavailable : SCAUserTrackedEvent
{
    long long denyReason;
    long long storyType;
    NSString *posterId;
    NSString *ghost_poster_id;
    NSString *geoFence;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getDenyReason;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getGeoFence;
- (id)getGhost_poster_id;
- (double)getPerUserSamplingRate;
- (id)getPosterId;
- (long long)getStoryType;
- (id)init;
- (void)setDenyReason:(long long)arg1;
- (void)setGeoFence:(id)arg1;
- (void)setGhost_poster_id:(id)arg1;
- (void)setPosterId:(id)arg1;
- (void)setStoryType:(long long)arg1;

@end
