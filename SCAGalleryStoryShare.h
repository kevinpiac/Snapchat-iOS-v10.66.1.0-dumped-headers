//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAGalleryStoryShare : SCAUserTrackedEvent
{
    NSNumber *withSearch;
    NSNumber *snapCount;
    NSNumber *snapTimeSec;
    NSNumber *snapTimeIsLoop;
    long long snapSource;
    long long galleryContextMenuSource;
    long long storyType;
    long long storyTypeSpecific;
    long long playerVersion;
    long long entryType;
    NSString *entryId;
    NSString *snapsShared;
    NSString *galleryCollectionCategory;
    NSString *galleryCollectionId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEntryId;
- (long long)getEntryType;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getGalleryCollectionCategory;
- (id)getGalleryCollectionId;
- (long long)getGalleryContextMenuSource;
- (double)getPerUserSamplingRate;
- (long long)getPlayerVersion;
- (long long)getSnapCount;
- (long long)getSnapSource;
- (_Bool)getSnapTimeIsLoop;
- (double)getSnapTimeSec;
- (id)getSnapsShared;
- (long long)getStoryType;
- (long long)getStoryTypeSpecific;
- (_Bool)getWithSearch;
- (id)init;
- (void)setEntryId:(id)arg1;
- (void)setEntryType:(long long)arg1;
- (void)setGalleryCollectionCategory:(id)arg1;
- (void)setGalleryCollectionId:(id)arg1;
- (void)setGalleryContextMenuSource:(long long)arg1;
- (void)setPlayerVersion:(long long)arg1;
- (void)setSnapCount:(long long)arg1;
- (void)setSnapSource:(long long)arg1;
- (void)setSnapTimeIsLoop:(_Bool)arg1;
- (void)setSnapTimeSec:(double)arg1;
- (void)setSnapsShared:(id)arg1;
- (void)setStoryType:(long long)arg1;
- (void)setStoryTypeSpecific:(long long)arg1;
- (void)setWithSearch:(_Bool)arg1;

@end

