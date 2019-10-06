//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCFeature.h"

#import "SCCloudSyncStatusListener-Protocol.h"
#import "SCFeatureAuxiliaryContentInPreview-Protocol.h"
#import "SCNetworkConnectivityListener-Protocol.h"

@class NSMutableArray, NSString, NSTimer, SCAuxiliaryContentToastView, SCFeatureReference, SCFriendsPageOnboardingView, SCNewportFiltersTooltip, SCPreviewConfiguration, SCPreviewView, SCSpectaclesAuxiliaryContentStore, SCUserSession;
@protocol SCGallerySnap, SCObserving;

@interface SCFeatureAuxiliaryContentInPreviewImpl : SCFeature <SCCloudSyncStatusListener, SCNetworkConnectivityListener, SCFeatureAuxiliaryContentInPreview>
{
    _Bool _depthPreparationEnabled;
    _Bool _featureActivated;
    _Bool _loadingAvailability;
    _Bool _loadingContent;
    _Bool _didLoadAfterEnabled;
    _Bool _selectivelySyncing;
    _Bool _backupOnCellular;
    _Bool _backingUpNow;
    _Bool _travelModeEnabled;
    unsigned long long _availability;
    long long _networkConnectivityStatus;
    id <SCObserving> _backupOnCellularObserveContext;
    SCAuxiliaryContentToastView *_toastView;
    SCNewportFiltersTooltip *_tooltip;
    SCFriendsPageOnboardingView *_onboardingView;
    NSMutableArray *_completionHandlers;
    SCUserSession *_userSession;
    SCPreviewConfiguration *_configuration;
    SCFeatureReference *_swipeFilters;
    SCFeatureReference *_magicMomentInPreview;
    SCPreviewView *_previewView;
    NSTimer *_progressTimer;
    double _startProgressTime;
    double _estimatedProgressTime;
    id <SCObserving> _profileObserveContext;
}

- (void).cxx_destruct;
- (void)_beginSyncing;
- (_Bool)_canMakeSyncingProgress;
- (id)_fetchGallerySnap;
- (void)_hideFilterOverlayView;
- (void)_hideToast;
- (void)_observeNetworkSettings;
- (void)_pollAvailability;
- (void)_setupToastView;
- (void)_setupTooltipIfNeeded;
- (void)_showErrorToast;
- (void)_showFinishedToast;
- (void)_showProcessingToast;
- (void)_showSyncingToast;
- (void)_showToastAlert;
- (void)_showTooltip;
- (void)_showTooltipIfNeeded;
- (void)_startProgress;
- (void)_stopProgress;
- (void)_timerFired:(id)arg1;
- (void)activate;
@property(readonly, nonatomic) __weak SCSpectaclesAuxiliaryContentStore *auxiliaryContentStore;
@property(nonatomic) unsigned long long availability; // @synthesize availability=_availability;
- (void)backUpNow;
@property(readonly, nonatomic) _Bool backupOnCellular; // @synthesize backupOnCellular=_backupOnCellular;
@property(readonly, nonatomic) id <SCObserving> backupOnCellularObserveContext; // @synthesize backupOnCellularObserveContext=_backupOnCellularObserveContext;
- (void)cloudSync:(id)arg1 didChangeStatus:(unsigned long long)arg2 isBackingUpNow:(_Bool)arg3 mayUpload:(_Bool)arg4 requiresUpgrade:(_Bool)arg5;
- (void)cloudSync:(id)arg1 didUpdateProgressForEntryId:(id)arg2 progress:(float)arg3;
@property(readonly, nonatomic) NSMutableArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(readonly, nonatomic) __weak SCPreviewConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)configureWithView:(id)arg1;
- (void)deactivate;
- (void)dealloc;
@property(nonatomic, getter=didLoadAfterEnabled) _Bool didLoadAfterEnabled; // @synthesize didLoadAfterEnabled=_didLoadAfterEnabled;
- (id)entry;
@property(readonly, nonatomic) double estimatedProgressTime; // @synthesize estimatedProgressTime=_estimatedProgressTime;
- (void)hideTooltip;
- (id)initWithUserSession:(id)arg1 previewConfiguration:(id)arg2 swipeFilters:(id)arg3 magicMoment:(id)arg4;
@property(readonly, nonatomic, getter=isBackingUpNow) _Bool backingUpNow; // @synthesize backingUpNow=_backingUpNow;
@property(nonatomic, getter=isDepthPreparationEnabled) _Bool depthPreparationEnabled; // @synthesize depthPreparationEnabled=_depthPreparationEnabled;
- (_Bool)isFailedEntry;
@property(readonly, nonatomic, getter=isFeatureActivated) _Bool featureActivated; // @synthesize featureActivated=_featureActivated;
@property(nonatomic, getter=isLoadingAvailability) _Bool loadingAvailability; // @synthesize loadingAvailability=_loadingAvailability;
@property(nonatomic, getter=isLoadingContent) _Bool loadingContent; // @synthesize loadingContent=_loadingContent;
- (void)loadAvailability;
- (void)loadContent;
- (void)loadContentWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) SCFeatureReference *magicMomentInPreview; // @synthesize magicMomentInPreview=_magicMomentInPreview;
@property(readonly, nonatomic) long long networkConnectivityStatus; // @synthesize networkConnectivityStatus=_networkConnectivityStatus;
- (void)networkConnectivityStatusDidChange:(long long)arg1;
@property(retain, nonatomic) SCFriendsPageOnboardingView *onboardingView; // @synthesize onboardingView=_onboardingView;
@property(readonly, nonatomic) __weak SCPreviewView *previewView; // @synthesize previewView=_previewView;
@property(readonly, nonatomic) id <SCObserving> profileObserveContext; // @synthesize profileObserveContext=_profileObserveContext;
@property(retain, nonatomic) NSTimer *progressTimer; // @synthesize progressTimer=_progressTimer;
@property(readonly, nonatomic) long long promptFilterType;
- (void)reloadFilters;
@property(readonly, nonatomic) _Bool selectivelySyncing; // @synthesize selectivelySyncing=_selectivelySyncing;
@property(retain, nonatomic) SCNewportFiltersTooltip *tooltip; // @synthesize tooltip=_tooltip;
@property(readonly, nonatomic) __weak id <SCGallerySnap> snap;
@property(readonly, nonatomic) double startProgressTime; // @synthesize startProgressTime=_startProgressTime;
@property(readonly, nonatomic) SCFeatureReference *swipeFilters; // @synthesize swipeFilters=_swipeFilters;
@property(readonly, nonatomic) SCAuxiliaryContentToastView *toastView; // @synthesize toastView=_toastView;
@property(readonly, nonatomic) _Bool travelModeEnabled; // @synthesize travelModeEnabled=_travelModeEnabled;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
