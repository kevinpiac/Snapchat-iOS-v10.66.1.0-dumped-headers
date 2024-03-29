//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAStorySnapSave : SCAUserTrackedEvent
{
    NSNumber *caption;
    NSNumber *camera;
    NSNumber *drawing;
    NSNumber *flash;
    NSNumber *snapTime;
    NSNumber *snapIndexCount;
    NSNumber *snapIndexPos;
    NSNumber *withGallery;
    long long filterType;
    long long source;
    long long mediaType;
    long long storyType;
    long long filterVisual;
    long long filterInfo;
    long long lensSource;
    long long storyTypeSpecific;
    NSString *filter;
    NSString *geoFence;
    NSString *sponsor;
    NSString *posterId;
    NSString *ghost_poster_id;
    NSString *storySnapId;
    NSString *filterGeofence;
    NSString *filterSponsor;
    NSString *filterLensId;
    NSString *lensOptionId;
    NSString *groupStoryId;
    NSString *profileSessionId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getCamera;
- (long long)getCaption;
- (_Bool)getDrawing;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getFilter;
- (id)getFilterGeofence;
- (long long)getFilterInfo;
- (id)getFilterLensId;
- (id)getFilterSponsor;
- (long long)getFilterType;
- (long long)getFilterVisual;
- (_Bool)getFlash;
- (id)getGeoFence;
- (id)getGhost_poster_id;
- (id)getGroupStoryId;
- (id)getLensOptionId;
- (long long)getLensSource;
- (long long)getMediaType;
- (double)getPerUserSamplingRate;
- (id)getPosterId;
- (id)getProfileSessionId;
- (long long)getSnapIndexCount;
- (long long)getSnapIndexPos;
- (double)getSnapTime;
- (long long)getSource;
- (id)getSponsor;
- (id)getStorySnapId;
- (long long)getStoryType;
- (long long)getStoryTypeSpecific;
- (_Bool)getWithGallery;
- (id)init;
- (void)setCamera:(long long)arg1;
- (void)setCaption:(long long)arg1;
- (void)setDrawing:(_Bool)arg1;
- (void)setFilter:(id)arg1;
- (void)setFilterGeofence:(id)arg1;
- (void)setFilterInfo:(long long)arg1;
- (void)setFilterLensId:(id)arg1;
- (void)setFilterSponsor:(id)arg1;
- (void)setFilterType:(long long)arg1;
- (void)setFilterVisual:(long long)arg1;
- (void)setFlash:(_Bool)arg1;
- (void)setGeoFence:(id)arg1;
- (void)setGhost_poster_id:(id)arg1;
- (void)setGroupStoryId:(id)arg1;
- (void)setLensOptionId:(id)arg1;
- (void)setLensSource:(long long)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setPosterId:(id)arg1;
- (void)setProfileSessionId:(id)arg1;
- (void)setSnapIndexCount:(long long)arg1;
- (void)setSnapIndexPos:(long long)arg1;
- (void)setSnapTime:(double)arg1;
- (void)setSource:(long long)arg1;
- (void)setSponsor:(id)arg1;
- (void)setStorySnapId:(id)arg1;
- (void)setStoryType:(long long)arg1;
- (void)setStoryTypeSpecific:(long long)arg1;
- (void)setWithGallery:(_Bool)arg1;

@end

