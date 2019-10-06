//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAStorySnapShareSend : SCAUserTrackedEvent
{
    NSNumber *recipientCount;
    long long mediaType;
    long long storyTypeSpecific;
    long long sendSource;
    long long entryEvent;
    long long viewSource;
    NSString *storySnapId;
    NSString *posterId;
    NSString *ghost_poster_id;
    NSString *trackingId;
    NSString *filterVenueId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getEntryEvent;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getFilterVenueId;
- (id)getGhost_poster_id;
- (long long)getMediaType;
- (double)getPerUserSamplingRate;
- (id)getPosterId;
- (long long)getRecipientCount;
- (long long)getSendSource;
- (id)getStorySnapId;
- (long long)getStoryTypeSpecific;
- (id)getTrackingId;
- (long long)getViewSource;
- (id)init;
- (void)setEntryEvent:(long long)arg1;
- (void)setFilterVenueId:(id)arg1;
- (void)setGhost_poster_id:(id)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setPosterId:(id)arg1;
- (void)setRecipientCount:(long long)arg1;
- (void)setSendSource:(long long)arg1;
- (void)setStorySnapId:(id)arg1;
- (void)setStoryTypeSpecific:(long long)arg1;
- (void)setTrackingId:(id)arg1;
- (void)setViewSource:(long long)arg1;

@end
