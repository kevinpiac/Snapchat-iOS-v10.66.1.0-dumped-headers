//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber;

@interface SCAMapStoryExternalShare : SCAUserTrackedEvent
{
    NSNumber *mapSessionId;
    long long source;
    long long storyType;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getMapSessionId;
- (double)getPerUserSamplingRate;
- (long long)getSource;
- (long long)getStoryType;
- (id)init;
- (void)setMapSessionId:(long long)arg1;
- (void)setSource:(long long)arg1;
- (void)setStoryType:(long long)arg1;

@end

