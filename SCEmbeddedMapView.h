//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCLocationPermissionObserver-Protocol.h"
#import "SCMapLoadingStateListener-Protocol.h"
#import "SCMapLoadingTrackerDelegate-Protocol.h"
#import "SCMapPersonLocationsListener-Protocol.h"
#import "SCXRenderLayerDelegate-Protocol.h"

@class CLLocation, NSSet, NSString, SCDisposableObserver, SCEmbeddedMapGiveAccessErrorView, SCEmbeddedMapViewLoggingSession, SCEmbeddedMapViewOptions, SCExperimentManager, SCFeatureSettingsManager, SCMapBasePersonLocationsProvider, SCMapBitmojiLayerController, SCMapDefaultPersonLocationStringsProvider, SCMapFilteredPersonLocationClustersProvider, SCMapLoadingTracker, SCMapPinSpriteManager, SCMapServerService, SCMapSnapTokenService, SCMapTimeAndWeatherController, SCMapTimeAndWeatherView, SCMapZoomAwarePersonLocationClustersProvider, SCXBitmojiLayer, SCXRenderLayer, SCXRenderLayerOptions;
@protocol SCDownloadableContentManaging, SCEmbeddedMapViewDelegate, SCLocationProvider, SCLocationSharingPreferencesProvider, SCMapConfiguration, SCMapCustomGLRenderer, SCMapGestures, SCMapInstance, SCMapLoadingState, SCMapPeopleFriendsProvider, SCMapPeopleGroupsProvider, SCMapStatusViewedStateProvider, SCMapViewport, SCMapViewportMetadataProvider, SCXBitmojiAvatarGeneratorProtocol, SCXGameStateProvider;

@interface SCEmbeddedMapView : UIView <SCMapLoadingStateListener, SCXRenderLayerDelegate, SCMapLoadingTrackerDelegate, SCLocationPermissionObserver, SCMapPersonLocationsListener>
{
    NSString *_currentUserId;
    id <SCDownloadableContentManaging> _downloadableContentManager;
    SCExperimentManager *_experimentManager;
    SCFeatureSettingsManager *_featureSettingsManager;
    id <SCLocationProvider> _locationProvider;
    SCMapBasePersonLocationsProvider *_mapBasePersonLocationsProvider;
    id <SCXBitmojiAvatarGeneratorProtocol> _mapBitmojiAvatarGenerator;
    id <SCXGameStateProvider> _mapGameStateProvider;
    id <SCMapPeopleFriendsProvider> _mapPeopleFriendsProvider;
    id <SCMapPeopleGroupsProvider> _mapPeopleGroupsProvider;
    SCMapServerService *_mapServerService;
    SCMapSnapTokenService *_mapSnapTokenService;
    SCXRenderLayerOptions *_renderLayerOptions;
    id <SCLocationSharingPreferencesProvider> _sharingPreferencesProvider;
    id <SCMapStatusViewedStateProvider> _statusViewedStateProvider;
    id <SCMapViewportMetadataProvider> _viewportMetadataProvider;
    CLLocation *_lastUserLocation;
    SCDisposableObserver *_preferencesObserver;
    UIView<SCMapInstance> *_mapView;
    id <SCMapCustomGLRenderer> _mapCustomGLRenderer;
    id <SCMapLoadingState> _mapLoadingState;
    SCEmbeddedMapGiveAccessErrorView *_errorView;
    _Bool _canShowGhostModeAvatar;
    id <SCMapConfiguration> _mapConfiguration;
    id <SCMapViewport> _mapViewport;
    id <SCMapGestures> _mapGestures;
    NSSet *_visibleUserIds;
    id <SCEmbeddedMapViewDelegate> _delegate;
    SCEmbeddedMapViewOptions *_options;
    SCEmbeddedMapViewLoggingSession *_loggingSession;
    SCXBitmojiLayer *_bitmojiLayer;
    SCMapBitmojiLayerController *_bitmojiLayerController;
    SCXRenderLayer *_renderLayer;
    SCMapPinSpriteManager *_pinSpriteManager;
    SCMapTimeAndWeatherView *_timeAndWeatherView;
    SCMapTimeAndWeatherController *_timeAndWeatherController;
    SCMapLoadingTracker *_loadingTracker;
    SCMapZoomAwarePersonLocationClustersProvider *_zoomAwareClustersProvider;
    SCMapFilteredPersonLocationClustersProvider *_filteredClustersProvider;
    SCMapDefaultPersonLocationStringsProvider *_stringsProvider;
}

+ (void)bindAttributes:(id)arg1;
- (void).cxx_destruct;
- (struct UIEdgeInsets)_defaultEdgeInsetsForUserId:(id)arg1;
- (void)_handleFriendLocationsModeDidChange:(unsigned long long)arg1;
- (void)_onLocationSharingPreferencesChanged:(id)arg1;
- (_Bool)_showsLocalTimeAndWeather;
- (void)_updateErrorView;
- (void)_updateErrorViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateRenderLayerShowsHeatmap:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateRenderLayerShowsPois:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateSpriteManagerWithLatestFriendLocationsIfNeeded;
@property(retain, nonatomic) SCXBitmojiLayer *bitmojiLayer; // @synthesize bitmojiLayer=_bitmojiLayer;
@property(retain, nonatomic) SCMapBitmojiLayerController *bitmojiLayerController; // @synthesize bitmojiLayerController=_bitmojiLayerController;
@property(nonatomic) _Bool canShowGhostModeAvatar; // @synthesize canShowGhostModeAvatar=_canShowGhostModeAvatar;
- (void)centerCameraOnUserId:(id)arg1 zoomLevel:(double)arg2 animated:(_Bool)arg3;
- (void)centerCameraOnUserId:(id)arg1 zoomLevel:(double)arg2 edgeInsets:(struct UIEdgeInsets)arg3 animated:(_Bool)arg4;
- (void)centerCameraOnVisiblePersonsAnimated:(_Bool)arg1;
- (void)centerCameraOnVisiblePersonsWithEdgeInsets:(struct UIEdgeInsets)arg1 animated:(_Bool)arg2;
- (_Bool)composer_setPinPosition:(id)arg1;
- (_Bool)composer_setViewport:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <SCEmbeddedMapViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didMoveToWindow;
@property(retain, nonatomic) SCMapFilteredPersonLocationClustersProvider *filteredClustersProvider; // @synthesize filteredClustersProvider=_filteredClustersProvider;
- (id)initWithFrame:(struct CGRect)arg1 currentUserId:(id)arg2 downloadableContentManager:(id)arg3 experimentManager:(id)arg4 featureSettingsManager:(id)arg5 locationProvider:(id)arg6 loggingSession:(id)arg7 mapBasePersonLocationsProvider:(id)arg8 mapBitmojiAvatarGenerator:(id)arg9 mapGameStateProvider:(id)arg10 mapInstanceProvider:(id)arg11 mapPeopleFriendsProvider:(id)arg12 mapPeopleGroupsProvider:(id)arg13 mapServerService:(id)arg14 mapSnapTokenService:(id)arg15 renderLayerOptions:(id)arg16 sharingPreferencesProvider:(id)arg17 statusViewedStateProvider:(id)arg18;
- (id)initWithFrame:(struct CGRect)arg1 userSession:(id)arg2 loggingSession:(id)arg3;
- (void)layoutSubviews;
@property(retain, nonatomic) SCMapLoadingTracker *loadingTracker; // @synthesize loadingTracker=_loadingTracker;
- (id)locationPermissionObserverUserId;
@property(retain, nonatomic) SCEmbeddedMapViewLoggingSession *loggingSession; // @synthesize loggingSession=_loggingSession;
@property(readonly, nonatomic) id <SCMapConfiguration> mapConfiguration; // @synthesize mapConfiguration=_mapConfiguration;
@property(readonly, nonatomic) id <SCMapGestures> mapGestures; // @synthesize mapGestures=_mapGestures;
- (void)mapLoadingState:(id)arg1 didFailLoadingWithError:(id)arg2;
- (void)mapLoadingStateDidFinishLoading:(id)arg1;
- (void)mapLoadingStateDidFinishLoadingStyle:(id)arg1;
- (void)mapLoadingStateDidFinishRenderingFrame:(id)arg1 fullyRendered:(_Bool)arg2;
- (void)mapLoadingTrackerDidFinishLoading:(id)arg1;
- (void)mapLoadingTrackerDidLoadEnoughForDisplay:(id)arg1;
- (void)mapLoadingTrackerDidTimeout:(id)arg1;
@property(readonly, nonatomic) id <SCMapViewport> mapViewport; // @synthesize mapViewport=_mapViewport;
- (void)onLocationPermissionStatusChange:(unsigned long long)arg1;
@property(copy, nonatomic) SCEmbeddedMapViewOptions *options; // @synthesize options=_options;
- (void)personLocationsProviderDidUpdate:(id)arg1;
@property(retain, nonatomic) SCMapPinSpriteManager *pinSpriteManager; // @synthesize pinSpriteManager=_pinSpriteManager;
@property(retain, nonatomic) SCXRenderLayer *renderLayer; // @synthesize renderLayer=_renderLayer;
@property(retain, nonatomic) SCMapDefaultPersonLocationStringsProvider *stringsProvider; // @synthesize stringsProvider=_stringsProvider;
@property(retain, nonatomic) SCMapTimeAndWeatherController *timeAndWeatherController; // @synthesize timeAndWeatherController=_timeAndWeatherController;
@property(retain, nonatomic) SCMapTimeAndWeatherView *timeAndWeatherView; // @synthesize timeAndWeatherView=_timeAndWeatherView;
- (void)setTintColor:(id)arg1;
@property(copy, nonatomic) NSSet *visibleUserIds; // @synthesize visibleUserIds=_visibleUserIds;
@property(retain, nonatomic) SCMapZoomAwarePersonLocationClustersProvider *zoomAwareClustersProvider; // @synthesize zoomAwareClustersProvider=_zoomAwareClustersProvider;
- (id)viewportMetadataProvider;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

