//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class SCCreativeToolsFontManager, SCFeature, SCLazy, SCPreviewConfiguration, SCPreviewExporter, SCSmartCarouselFilterArranger, SCSnapCommonLoggingParameters, SCUnlockableGeoFilterTracker, SCUserSession;
@protocol SCActiveVideoPathsProvider, SCAudioFiltersTooltipProvider, SCAutoCreativeManager, SCChatMessageActionHandling, SCFeatureAuxiliaryContentInPreview, SCFeatureFilterAttachment, SCFeatureImagePlayback, SCFeatureLensChallengeStickerOnPreview, SCFeatureLensInPreview, SCFeatureLensSmartUnlock, SCFeatureMagicMomentInPreview, SCFeatureMagicTools, SCFeatureSendToSwipeNavigation, SCFeatureSnapCrop, SCFeatureSnapRecoveryPersistence, SCFeatureSpectaclesLensFilterInPreview, SCFeatureSwipeFilters, SCFeatureSwipeOffUcoInMemoriesPreview, SCFeatureVideoPlayback, SCFeatureWidenedFOV, SCFilterViewGenerator, SCGeoFilterLogger, SCMediaPackageManaging, SCMediaPackagePreviewAdapting, SCPostCaptureLensComponentManagerPool, SCPreviewFeatureAlignment, SCPreviewFeatureAnimatedTooltip, SCPreviewFeatureAudioPlayback, SCPreviewFeatureBatchCapture, SCPreviewFeatureBounce, SCPreviewFeatureCaption, SCPreviewFeatureCommerceAttachment, SCPreviewFeatureContextImageClassifier, SCPreviewFeatureDrawing, SCPreviewFeatureGroupSticker, SCPreviewFeatureHelpLabel, SCPreviewFeatureInfoSticker, SCPreviewFeatureLensProcessing, SCPreviewFeatureMultiSnap, SCPreviewFeatureMuteSwitch, SCPreviewFeatureOverlayComposition, SCPreviewFeatureSaveSendPrompt, SCPreviewFeatureSnap3D, SCPreviewFeatureSnapWatermark, SCPreviewFeatureSnaptracks, SCPreviewFeatureStickerContainer, SCPreviewFeatureStickerRecommendation, SCPreviewFeatureSwipeDownDismiss, SCPreviewFeatureTimer, SCPreviewFeatureTrashCan, SCPreviewFeatureUserTagging, SCPreviewFeatureWebAttachment, SCPreviewLogging, SCPreviewTooltipProvider, SCSmartSwipeFilterViewLogger, SCUploadMediaManaging, SCVenueFilterTooltipProvider;

@protocol SCPreviewResources
@property(readonly, nonatomic) id <SCActiveVideoPathsProvider> activeVideoPathsProvider;
@property(readonly, nonatomic) id <SCPreviewFeatureAlignment> alignmentFeature;
@property(readonly, nonatomic) id <SCPreviewFeatureAnimatedTooltip> animatedTooltipFeature;
@property(readonly, nonatomic) id <SCAudioFiltersTooltipProvider> audioFiltersTooltipProvider;
@property(readonly, nonatomic) id <SCPreviewFeatureAudioPlayback> audioPlayback;
@property(readonly, nonatomic) id <SCAutoCreativeManager> autoCreativeAutoApplyFeature;
@property(readonly, nonatomic) id <SCAutoCreativeManager> autoCreativeMagicWandFeature;
@property(readonly, nonatomic) id <SCAutoCreativeManager> autoCreativeTooltipFeature;
@property(readonly, nonatomic) id <SCFeatureAuxiliaryContentInPreview> auxiliaryContentInPreview;
@property(readonly, nonatomic) SCFeature<SCPreviewFeatureBatchCapture> *batchCapture;
@property(readonly, nonatomic) id <SCPreviewFeatureBounce> bounceFeature;
@property(readonly, nonatomic) id <SCPreviewFeatureCaption> captionFeature;
@property(readonly, nonatomic) id <SCChatMessageActionHandling> chatMessageActionHandler;
@property(readonly, nonatomic) SCFeature<SCPreviewFeatureCommerceAttachment> *commerceAttachment;
@property(readonly, nonatomic) SCSnapCommonLoggingParameters *commonLoggingParameters;
@property(readonly, nonatomic) SCPreviewConfiguration *configuration;
@property(readonly, nonatomic) id <SCPreviewFeatureContextImageClassifier> contextImageClassifier;
@property(readonly, nonatomic) SCLazy *customStoriesDataFetcher;
@property(readonly, nonatomic) SCLazy *customStoriesDataMutator;
@property(readonly, nonatomic) id <SCPreviewFeatureDrawing> drawingFeature;
@property(readonly, nonatomic) SCPreviewExporter *exporter;
@property(readonly, nonatomic) id <SCFeatureFilterAttachment> filterAttachment;
@property(readonly, nonatomic) id <SCFilterViewGenerator> filterViewGenerator;
@property(readonly, nonatomic) SCCreativeToolsFontManager *fontManager;
@property(readonly, nonatomic) id <SCGeoFilterLogger> geofilterLogger;
@property(readonly, nonatomic) id <SCPreviewFeatureGroupSticker> groupStickerFeature;
@property(readonly, nonatomic) id <SCPreviewFeatureHelpLabel> helpLabelFeature;
- (void)hotReloadFeatures;
@property(readonly, nonatomic) id <SCFeatureImagePlayback> imagePlayback;
@property(readonly, nonatomic) id <SCPreviewFeatureInfoSticker> infoStickerFeature;
@property(readonly, nonatomic) id <SCFeatureLensChallengeStickerOnPreview> lensChallengesSticker;
@property(readonly, nonatomic) id <SCPostCaptureLensComponentManagerPool> lensComponentManagerPool;
@property(readonly, nonatomic) id <SCFeatureLensInPreview> lensInPreview;
@property(readonly, nonatomic) id <SCPreviewFeatureLensProcessing> lensProcessing;
@property(readonly, nonatomic) SCFeature<SCFeatureLensSmartUnlock> *lensSmartUnlock;
@property(readonly, nonatomic) id <SCFeatureMagicMomentInPreview> magicMomentInPreview;
@property(readonly, nonatomic) id <SCFeatureMagicTools> magicToolsFeature;
@property(readonly, nonatomic) id <SCMediaPackageManaging> mediaPackageManager;
@property(readonly, nonatomic) id <SCMediaPackagePreviewAdapting> mediaPackagePreviewAdapter;
@property(readonly, nonatomic) SCLazy *memoriesServices;
@property(readonly, nonatomic) id <SCPreviewFeatureMultiSnap> multiSnap;
@property(readonly, nonatomic) id <SCPreviewFeatureMuteSwitch> muteSwitch;
@property(readonly, nonatomic) SCLazy *ourStoriesDescriptionDataCoordinator;
@property(readonly, nonatomic) id <SCPreviewFeatureOverlayComposition> overlayComposition;
@property(readonly, nonatomic) SCLazy *postableStoriesProvider;
@property(retain, nonatomic) id <SCPreviewLogging> previewLogger;
@property(readonly, nonatomic) id <SCPreviewTooltipProvider> previewTooltipProvider;
@property(readonly, nonatomic) id <SCPreviewFeatureSaveSendPrompt> saveSendPromptFeature;
@property(readonly, nonatomic) SCFeature<SCFeatureSendToSwipeNavigation> *sendToSwipeNavigationFeature;
@property(readonly, nonatomic) _Bool shouldIncludePromptFilterView;
@property(readonly, nonatomic) SCSmartCarouselFilterArranger *smartCarouselFilterArranger;
@property(readonly, nonatomic) _Bool smartFiltersOrVisualFiltersEnabled;
@property(readonly, nonatomic) id <SCSmartSwipeFilterViewLogger> smartSwipeFilterViewLogger;
@property(readonly, nonatomic) id <SCPreviewFeatureSnap3D> snap3DFeature;
@property(readonly, nonatomic) id <SCFeatureSnapCrop> snapCrop;
@property(readonly, nonatomic) id <SCFeatureSnapRecoveryPersistence> snapRecoveryPersistence;
@property(readonly, nonatomic) id <SCPreviewFeatureSnapWatermark> snapWatermark;
@property(readonly, nonatomic) id <SCPreviewFeatureSnaptracks> snaptracksFeature;
@property(readonly, nonatomic) id <SCFeatureSpectaclesLensFilterInPreview> spectaclesLensFilterInPreview;
@property(readonly, nonatomic) id <SCPreviewFeatureStickerContainer> stickerContainer;
@property(readonly, nonatomic) id <SCPreviewFeatureStickerRecommendation> stickerRecommendationFeature;
@property(readonly, nonatomic) id <SCPreviewFeatureSwipeDownDismiss> swipeDownDismissFeature;
@property(readonly, nonatomic) SCFeature<SCFeatureSwipeFilters> *swipeFilters;
@property(readonly, nonatomic) id <SCPreviewFeatureTimer> timerFeature;
@property(readonly, nonatomic) id <SCPreviewFeatureTrashCan> trashCanFeature;
@property(readonly, nonatomic) SCFeature<SCFeatureSwipeOffUcoInMemoriesPreview> *ucoSwipeOffInMemories;
@property(readonly, nonatomic) SCUnlockableGeoFilterTracker *unlockableGeoFilterTracker;
@property(readonly, nonatomic) id <SCUploadMediaManaging> uploadMediaManager;
@property(readonly, nonatomic) SCUserSession *userSession;
@property(readonly, nonatomic) id <SCPreviewFeatureUserTagging> userTaggingFeature;
@property(readonly, nonatomic) id <SCVenueFilterTooltipProvider> venueFilterTooltipProvider;
@property(readonly, nonatomic) id <SCFeatureVideoPlayback> videoPlayback;
@property(readonly, nonatomic) id <SCPreviewFeatureWebAttachment> webAttachment;
@property(readonly, nonatomic) SCFeature<SCFeatureWidenedFOV> *widenedFOV;
@end

