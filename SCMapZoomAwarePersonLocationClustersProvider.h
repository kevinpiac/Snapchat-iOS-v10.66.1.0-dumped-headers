//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapConfigurationListener-Protocol.h"
#import "SCMapPersonLocationsListener-Protocol.h"
#import "SCMapPersonLocationsProviding-Protocol.h"
#import "SCMapViewportListener-Protocol.h"
#import "SCXClustererDelegate-Protocol.h"

@class NSDictionary, NSSet, NSString, SCMapPersonLocationsListenerAnnouncer, SCXClusterer;
@protocol SCMapPersonLocationsProviding, SCMapViewport;

@interface SCMapZoomAwarePersonLocationClustersProvider : NSObject <SCMapConfigurationListener, SCMapPersonLocationsListener, SCMapViewportListener, SCXClustererDelegate, SCMapPersonLocationsProviding>
{
    id <SCMapPersonLocationsProviding> _basePersonLocationClustersProvider;
    double _mapMaximumZoomLevel;
    id <SCMapViewport> _mapViewport;
    double _minimumBitmojiWidth;
    double _maximumBitmojiWidth;
    SCMapPersonLocationsListenerAnnouncer *_announcer;
    double _lastZoomLevel;
    NSSet *_originalPersonLocationClusters;
    NSDictionary *_personLocationClustersByUserId;
    NSDictionary *_personLocationsByUserId;
    SCXClusterer *_crowdClusterer;
    SCXClusterer *_overlapClusterer;
}

- (void).cxx_destruct;
- (struct SCMapCoordinateBounds)_coordinateBoundsForCluster:(id)arg1;
- (CDUnknownBlockType)_newCrowdClustererZoomLevelWhereSlippyDistanceMeets;
- (CDUnknownBlockType)_newOverlapClustererZoomLevelWhereSlippyDistanceMeets;
- (id)_personLocationsForCrowdCluster:(id)arg1;
- (void)_updateClustersIfZoomLevelChanged;
- (void)_updateWithPersonLocationClusters:(id)arg1;
- (id)allPersonLocationClusters;
- (id)allPersonLocations;
- (id)announcer;
- (void)clustererDidUpdateClusters:(id)arg1;
@property(retain, nonatomic) SCXClusterer *crowdClusterer; // @synthesize crowdClusterer=_crowdClusterer;
- (id)initWithBasePersonLocationClustersProvider:(id)arg1 mapConfiguration:(id)arg2 mapViewport:(id)arg3 minimumBitmojiWidth:(double)arg4 maximumBitmojiWidth:(double)arg5;
- (void)mapConfigurationDidUpdate:(id)arg1;
- (void)mapViewport:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapViewportIsChanging:(id)arg1;
@property(retain, nonatomic) SCXClusterer *overlapClusterer; // @synthesize overlapClusterer=_overlapClusterer;
- (id)personLocationClusterForUserId:(id)arg1;
- (id)personLocationForUserId:(id)arg1;
- (void)personLocationsProviderDidUpdate:(id)arg1;
- (void)setMinimumBitmojiWidth:(double)arg1 maximumBitmojiWidth:(double)arg2;
- (double)zoomLevelWithLeastOverlapForUserId:(id)arg1 mapViewSize:(struct CGSize)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

