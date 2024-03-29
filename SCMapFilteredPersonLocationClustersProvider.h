//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapPersonLocationsListener-Protocol.h"
#import "SCMapPersonLocationsProviding-Protocol.h"

@class NSDictionary, NSString, SCMapPersonLocationsListenerAnnouncer;
@protocol SCMapPersonLocationsProviding;

@interface SCMapFilteredPersonLocationClustersProvider : NSObject <SCMapPersonLocationsListener, SCMapPersonLocationsProviding>
{
    id <SCMapPersonLocationsProviding> _basePersonClustersProvider;
    CDUnknownBlockType _filter;
    SCMapPersonLocationsListenerAnnouncer *_announcer;
    NSDictionary *_personLocationsByUserId;
    NSDictionary *_personLocationClustersByUserId;
}

- (void).cxx_destruct;
- (id)_filteredClusterForCluster:(id)arg1;
- (void)_updateWithPersonLocationClusters:(id)arg1;
- (id)allPersonLocationClusters;
- (id)allPersonLocations;
- (id)announcer;
- (id)initWithBasePersonLocationClustersProvider:(id)arg1 filter:(CDUnknownBlockType)arg2;
- (id)personLocationClusterForUserId:(id)arg1;
- (id)personLocationForUserId:(id)arg1;
- (void)personLocationsProviderDidUpdate:(id)arg1;
- (void)setFilter:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

