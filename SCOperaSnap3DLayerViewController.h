//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "LSAEffectComponentListener-Protocol.h"
#import "SCLensDataFetcherListener-Protocol.h"
#import "SCOperaEventListener-Protocol.h"
#import "SCOperaFadeTransitionCompatibleViewController-Protocol.h"
#import "SCOperaPinchGestureCompatibleViewController-Protocol.h"
#import "SCOperaRotatingLayerPinchControllerDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class CADisplayLink, CIContext, LSAComponentManager, NSMutableSet, NSString, SCFrameableContainerView, SCLens, SCLensRemoteAssetsInGalleryHandler, SCLensSnap3DAssetMetadata, SCLensSnap3DManiphestAdapter, SCOperaRotatingLayerPinchController, SCOperaRotatingViewTransformManipulator, SCOperaSnap3DLayerView, SCPreviewSnap3DRemoteAssetsProvider, SCQueuePerformer, SCTimeProvider, SCUserSession, UIView;
@protocol SCLensByIdRetrievable, SCLensUnlockerProtocol;

@interface SCOperaSnap3DLayerViewController : SCOperaLayerViewController <LSAEffectComponentListener, SCLensDataFetcherListener, SCTraceEnabled, SCOperaRotatingLayerPinchControllerDelegate, SCOperaEventListener, SCOperaPinchGestureCompatibleViewController, SCOperaFadeTransitionCompatibleViewController>
{
    SCOperaSnap3DLayerView *_layerView;
    SCOperaRotatingViewTransformManipulator *_rotatingViewManipulator;
    SCOperaRotatingLayerPinchController *_pinchController;
    SCFrameableContainerView *_containerView;
    LSAComponentManager *_componentManager;
    CADisplayLink *_displayLink;
    SCUserSession *_userSession;
    SCTimeProvider *_currentDateProvider;
    SCLensSnap3DManiphestAdapter *_maniphestAdapter;
    SCPreviewSnap3DRemoteAssetsProvider *_remoteAssetsProvider;
    id <SCLensByIdRetrievable> _lensByIdRetrievable;
    SCQueuePerformer *_lensProviderQueuePerformer;
    SCQueuePerformer *_componentManagerSetupPerformer;
    id <SCLensUnlockerProtocol> _lensUnlocker;
    SCLensSnap3DAssetMetadata *_snap3DAssetMetadata;
    SCLensRemoteAssetsInGalleryHandler *_lensRemoteAssetsInGalleryHandler;
    struct __CVBuffer *_inputPixelBuffer;
    SCLens *_activeLens;
    NSMutableSet *_assetIdsToFetch;
    CIContext *_ciContext;
    struct mutex _pixelBufferMutex;
    _Bool _isClearingLensResources;
    struct mutex _lensCoreClearingMutex;
    double _loadStartTime;
    UIView *_pinchGestureTarget;
}

+ (id)_registeredEventsForOperaSession;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_activateLens:(id)arg1;
- (void)_becomeActiveSnap3DVC;
- (void)_clearLensCoreResources;
- (_Bool)_computeInputPixelBufferFromImage:(id)arg1;
- (void)_fallbackToImageDisplay;
- (void)_fetchLens:(id)arg1 withUserSession:(id)arg2;
- (void)_fetchLensAssetsFromCacheIfAvailableWithCompletion:(CDUnknownBlockType)arg1;
- (id)_getAssetIdsToFetch;
- (id)_getLensUnlocker:(id)arg1;
- (id)_getSnappableMessage;
- (_Bool)_isFromMemories;
- (id)_lensIdFromMetadata;
- (void)_prefetchLensAssetsIfNecessary;
- (void)_prepareLensCoreBeforeRendering;
- (void)_processPixelBufferAndRender;
- (void)_render;
- (void)_resignActiveSnap3DVC;
- (void)_setUpActiveLens;
- (void)_setupDisplayLinkAndStartRendering;
- (void)_setupLensCoreComponentsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setupPinchController;
- (void)_setupRenderingWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateLoadingViewWithAssetId:(id)arg1 error:(id)arg2;
- (void)didReceiveUpdateProperties:(id)arg1;
- (void)effectComponent:(id)arg1 loadPersistentStoreForEffectWithId:(id)arg2;
- (id)fadingViewsForFadeTransition;
- (id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3 userSession:(id)arg4 snap3DAssetMetadata:(id)arg5 lensRemoteAssetsInGalleryHandler:(id)arg6;
- (_Bool)isRecyclable;
- (void)lensDataFetcher:(id)arg1 didFinishLoadingContentForAsset:(id)arg2 content:(id)arg3 error:(id)arg4;
- (void)lensDataFetcher:(id)arg1 didFinishLoadingContentForLens:(id)arg2 contentPath:(id)arg3 error:(id)arg4;
- (void)lensDataFetcher:(id)arg1 didFinishLoadingFilterOverlayImageForLens:(id)arg2 imagePath:(id)arg3 error:(id)arg4;
- (void)lensDataFetcher:(id)arg1 didFinishLoadingImageForLens:(id)arg2 image:(id)arg3 error:(id)arg4;
- (void)lensDataFetcher:(id)arg1 willStartLoadingAsset:(id)arg2;
- (void)lensDataFetcher:(id)arg1 willStartLoadingContentForLens:(id)arg2;
- (void)lensDataFetcher:(id)arg1 willStartLoadingFilterOverlayImagePathForLens:(id)arg2;
- (void)lensDataFetcher:(id)arg1 willStartLoadingImageForLens:(id)arg2;
- (void)loadView;
- (id)movingViewsForFadeTransition;
- (void)operaRotatingLayerPinchController:(id)arg1 didFinishPinchWithScale:(double)arg2;
- (void)operaRotatingLayerPinchController:(id)arg1 updateTransformWithScale:(double)arg2;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
@property(nonatomic) __weak UIView *pinchGestureTarget; // @synthesize pinchGestureTarget=_pinchGestureTarget;
- (void)teardown;
- (void)updateViewWithHorizontalPageOffset:(double)arg1 isCurrentPage:(_Bool)arg2;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
- (void)viewDidFullyAppear;
- (void)viewDidFullyDisappear;
- (void)viewWillFullyAppear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

