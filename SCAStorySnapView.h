//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAStorySnapViewBase.h"

@class NSNumber, NSString, SCACreativeKitSnapMetadata;

@interface SCAStorySnapView : SCAStorySnapViewBase
{
    NSNumber *viewLocation;
    NSNumber *collectionPos;
    NSNumber *deviceScore;
    NSNumber *viewLocationPos;
    NSNumber *numChatsSent;
    NSNumber *numSnapsSent;
    NSNumber *numSaves;
    NSNumber *numSends;
    long long readState;
    long long bandwidthClass;
    long long viewSource;
    long long playMode;
    long long collectionType;
    long long storyAccessType;
    long long friendshipStatus;
    long long correspondentType;
    long long sendSource;
    long long snapSource;
    NSString *trackingId;
    NSString *sortOrderId;
    NSString *collectionId;
    NSString *mischiefId;
    NSString *rankingModelId;
    NSString *rankingId;
    NSString *serverRankingId;
    NSString *mediaResolution;
    NSString *galleryCollectionCategory;
    NSString *captureSessionId;
    NSString *teamSnapchatStorySnapHash;
    SCACreativeKitSnapMetadata *creativeKitMetadata;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getBandwidthClass;
- (id)getCaptureSessionId;
- (id)getCollectionId;
- (long long)getCollectionPos;
- (long long)getCollectionType;
- (long long)getCorrespondentType;
- (id)getCreativeKitMetadata;
- (long long)getDeviceScore;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getFriendshipStatus;
- (id)getGalleryCollectionCategory;
- (id)getMediaResolution;
- (id)getMischiefId;
- (long long)getNumChatsSent;
- (long long)getNumSaves;
- (long long)getNumSends;
- (long long)getNumSnapsSent;
- (double)getPerUserSamplingRate;
- (long long)getPlayMode;
- (id)getRankingId;
- (id)getRankingModelId;
- (long long)getReadState;
- (long long)getSendSource;
- (id)getServerRankingId;
- (long long)getSnapSource;
- (id)getSortOrderId;
- (long long)getStoryAccessType;
- (id)getTeamSnapchatStorySnapHash;
- (id)getTrackingId;
- (long long)getViewLocation;
- (long long)getViewLocationPos;
- (long long)getViewSource;
- (id)init;
- (void)setBandwidthClass:(long long)arg1;
- (void)setCaptureSessionId:(id)arg1;
- (void)setCollectionId:(id)arg1;
- (void)setCollectionPos:(long long)arg1;
- (void)setCollectionType:(long long)arg1;
- (void)setCorrespondentType:(long long)arg1;
- (void)setCreativeKitMetadata:(id)arg1;
- (void)setDeviceScore:(long long)arg1;
- (void)setFriendshipStatus:(long long)arg1;
- (void)setGalleryCollectionCategory:(id)arg1;
- (void)setMediaResolution:(id)arg1;
- (void)setMischiefId:(id)arg1;
- (void)setNumChatsSent:(long long)arg1;
- (void)setNumSaves:(long long)arg1;
- (void)setNumSends:(long long)arg1;
- (void)setNumSnapsSent:(long long)arg1;
- (void)setPlayMode:(long long)arg1;
- (void)setRankingId:(id)arg1;
- (void)setRankingModelId:(id)arg1;
- (void)setReadState:(long long)arg1;
- (void)setSendSource:(long long)arg1;
- (void)setServerRankingId:(id)arg1;
- (void)setSnapSource:(long long)arg1;
- (void)setSortOrderId:(id)arg1;
- (void)setStoryAccessType:(long long)arg1;
- (void)setTeamSnapchatStorySnapHash:(id)arg1;
- (void)setTrackingId:(id)arg1;
- (void)setViewLocation:(long long)arg1;
- (void)setViewLocationPos:(long long)arg1;
- (void)setViewSource:(long long)arg1;

@end

