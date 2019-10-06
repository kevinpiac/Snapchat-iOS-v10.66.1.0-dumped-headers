//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCLocationPermissionObserver-Protocol.h"
#import "SCLocationSharingPreferencesListener-Protocol.h"
#import "SCMapStatusFetcherListener-Protocol.h"
#import "SCNetworkConnectivityListener-Protocol.h"

@class NSString, SCEmbeddedMapView, SCFriendLocationSnapshotMapView, SCLRUCache, SCProfileEmbeddedMapViewContainer, SCProfileMapViewModel, SCUserSession;
@protocol SCEmbeddedStaticMapGenerator;

@interface SCProfileMapView : UIView <SCLocationSharingPreferencesListener, SCLocationPermissionObserver, SCMapStatusFetcherListener, SCNetworkConnectivityListener>
{
    SCUserSession *_userSession;
    SCFriendLocationSnapshotMapView *_snapshotView;
    SCEmbeddedMapView *_embeddedMapView;
    UIView *_embeddedMapScreenshot;
    id <SCEmbeddedStaticMapGenerator> _embeddedStaticMapGenerator;
    _Bool _currentUserGhostModeStatus;
    long long _lastNetworkConnectivityStatus;
    SCProfileMapViewModel *_mapViewModel;
    SCLRUCache *_snapshotCache;
    SCProfileEmbeddedMapViewContainer *_embeddedMapViewContainer;
}

- (void).cxx_destruct;
- (id)_getOrCreateEmbeddedMapWithViewModel:(id)arg1;
- (void)_loadEmbeddedMapViewWithPersonLocation:(id)arg1;
- (void)_setupEmbeddedMapViewWithViewModel:(id)arg1;
- (void)_setupSnapshotViewWithViewModel:(id)arg1;
- (void)_setupViewsWithViewModel:(id)arg1;
@property(retain, nonatomic) SCProfileEmbeddedMapViewContainer *embeddedMapViewContainer; // @synthesize embeddedMapViewContainer=_embeddedMapViewContainer;
- (id)initWithFrame:(struct CGRect)arg1 userSession:(id)arg2;
- (void)layoutSubviews;
- (id)locationPermissionObserverUserId;
- (void)locationSharingPreferencesUpdated:(id)arg1;
- (void)mapStatusFetcherDidLoadMyStatus:(id)arg1;
@property(retain, nonatomic) SCProfileMapViewModel *mapViewModel; // @synthesize mapViewModel=_mapViewModel;
- (void)networkConnectivityStatusDidChange:(long long)arg1;
- (void)onLocationPermissionStatusChange:(unsigned long long)arg1;
@property(retain, nonatomic) SCLRUCache *snapshotCache; // @synthesize snapshotCache=_snapshotCache;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

