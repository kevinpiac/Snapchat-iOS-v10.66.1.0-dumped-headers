//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUcoAppliedImageContainer-Protocol.h"

@class NSArray, NSData, NSDate, NSMutableArray, NSNumber, NSString, NSURL, SCBatchCaptureConfiguration, SCCameraDeepLinkMetadata, SCCroppingState, SCDepthPhotoAuxiliaryData, SCDiscoverMediaBlob, SCDrawingMetadata, SCFuture, SCImageProcessLensCommandSpectaclesMetadata, SCInfoStickerDataProvider, SCLensConfiguration, SCLensSnap3DAssetMetadata, SCManagedFrameHealthChecker, SCMultiSnapConfiguration, SCPreviewSnapchatGalleryConfiguration, SCQuickStickerImage, SCReplyParameters, SOJUGalleryCropping, UIImage, UIView;
@protocol SCLensRemoteAssetsUploadOperation, SCPreviewFilterDataProvider, SCPreviewVideoProvider, SCSnapSendPreparer;

@interface SCPreviewConfiguration : NSObject <SCUcoAppliedImageContainer>
{
    _Bool _handsFree;
    _Bool _committed;
    NSMutableArray *_listeners;
    unsigned long long _modifiedKeys;
    _Bool _isFromSnapRecovery;
    _Bool _audioPresentInVideo;
    _Bool _audioEnabled;
    _Bool _fromFrontFacingCamera;
    _Bool _fromStoryReply;
    _Bool _withZooming;
    _Bool _savingDisabled;
    _Bool _savingToSnapchatGalleryDisabled;
    _Bool _flashOn;
    _Bool _lowLightBoostEnabledBeforeCapture;
    _Bool _isSnappablesSnap;
    _Bool _hasSpectaclesLens;
    _Bool _enableRotationalPreview;
    _Bool _fromMischief;
    _Bool _scanInPreviewEnabled;
    SCBatchCaptureConfiguration *_batchCaptureConfiguration;
    UIImage *_ucoAppliedImage;
    unsigned long long _mediaType;
    double _mediaAspectRatio;
    long long _mediaOrientation;
    UIImage *_placeholderImage;
    UIView *_placeholderView;
    UIImage *_spectaclesStereoImage;
    UIImage *_fullScreenImage;
    SCFuture *_fullScreenImageFuture;
    CDUnknownBlockType _snapSaverImageProvider;
    SCFuture *_depthPhotoDataFuture;
    SCDepthPhotoAuxiliaryData *_depthPhotoData;
    SCLensSnap3DAssetMetadata *_snap3DAssetMetadata;
    SCFuture *_recordedVideoFuture;
    id <SCPreviewVideoProvider> _videoProvider;
    id <SCPreviewVideoProvider> _stylizedVideoProvider;
    UIImage *_videoOverlayImage;
    UIImage *_videoFirstFrameImage;
    UIImage *_videoThumbnailImage;
    NSString *_audioFilterStyleId;
    unsigned long long _videoPlaybackQuality;
    long long _snapPageSource;
    long long _snapSource;
    long long _cameraFlipsWhileRecording;
    long long _captureSource;
    SCCroppingState *_croppingState;
    SOJUGalleryCropping *_serverGalleryCropping;
    NSArray *_captionsState;
    SCDrawingMetadata *_drawingMetadata;
    NSArray *_stickersState;
    id <SCPreviewFilterDataProvider> _filterDataProvider;
    SCInfoStickerDataProvider *_infoStickerDataProvider;
    SCReplyParameters *_replyParameters;
    SCDiscoverMediaBlob *_discoverSharedMessageBlob;
    long long _lowLightStatus;
    long long _cameraMode;
    long long _gridModeState;
    NSNumber *_magicMomentFrameTime;
    SCLensConfiguration *_liveCameraLensConfiguration;
    NSData *_snappablesData;
    id <SCLensRemoteAssetsUploadOperation> _lensAssetsUploadOperation;
    long long _faceCount;
    SCFuture *_snappablesDataFuture;
    SCFuture *_lensAssetsUploadOperationFuture;
    SCLensConfiguration *_previewLensConfiguration;
    UIImage *_previewLensAppliedImage;
    UIImage *_autoCreativeAppliedImage;
    NSArray *_recordingMetadata;
    NSArray *_recordingDeviceMotionData;
    NSArray *_recordingRawAccelerometerData;
    NSArray *_recordingRawGyroData;
    SCImageProcessLensCommandSpectaclesMetadata *_spectaclesMetadata;
    SCPreviewSnapchatGalleryConfiguration *_snapchatGalleryConfiguration;
    NSURL *_shareURL;
    NSDate *_creationTime;
    UIImage *_contextFilteredImage;
    UIImage *_stylizedImage;
    NSString *_snapCraftStyleId;
    NSString *_snapAttachmentUrl;
    NSString *_shazamSongTitle;
    NSString *_shazamArtistName;
    long long _shazamSource;
    SCMultiSnapConfiguration *_multiSnapConfiguration;
    id <SCSnapSendPreparer> _snapSendPreparer;
    NSNumber *_bounceVideoOffset;
    NSString *_captureSessionID;
    SCManagedFrameHealthChecker *_frameHealthChecker;
    SCCameraDeepLinkMetadata *_deepLinkMetadata;
    SCQuickStickerImage *_quickStickerImage;
    NSString *_prefilledChatMessageInSendTo;
    NSString *_gameId;
    struct CGSize _mediaSize;
    struct CGPoint _quickStickerCenter;
}

+ (double)maxPreviewImagePixelSize;
+ (double)maxScanPreviewImagePixelSize;
- (void).cxx_destruct;
- (_Bool)_shouldUpdateKeyWithName:(id)arg1;
- (void)addOnCommitListener:(CDUnknownBlockType)arg1 forChangesToKeys:(unsigned long long)arg2;
@property(nonatomic) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(copy, nonatomic) NSString *audioFilterStyleId; // @synthesize audioFilterStyleId=_audioFilterStyleId;
@property(nonatomic) _Bool audioPresentInVideo; // @synthesize audioPresentInVideo=_audioPresentInVideo;
@property(retain, nonatomic) UIImage *autoCreativeAppliedImage; // @synthesize autoCreativeAppliedImage=_autoCreativeAppliedImage;
- (id)availableVideoProvider;
@property(retain, nonatomic) SCBatchCaptureConfiguration *batchCaptureConfiguration; // @synthesize batchCaptureConfiguration=_batchCaptureConfiguration;
@property(retain, nonatomic) NSNumber *bounceVideoOffset; // @synthesize bounceVideoOffset=_bounceVideoOffset;
@property(nonatomic) long long cameraFlipsWhileRecording; // @synthesize cameraFlipsWhileRecording=_cameraFlipsWhileRecording;
@property(nonatomic) long long cameraMode; // @synthesize cameraMode=_cameraMode;
@property(retain, nonatomic) NSArray *captionsState; // @synthesize captionsState=_captionsState;
@property(copy, nonatomic) NSString *captureSessionID; // @synthesize captureSessionID=_captureSessionID;
@property(nonatomic) long long captureSource; // @synthesize captureSource=_captureSource;
- (void)commit;
@property(retain, nonatomic) UIImage *contextFilteredImage; // @synthesize contextFilteredImage=_contextFilteredImage;
@property(retain, nonatomic) NSDate *creationTime; // @synthesize creationTime=_creationTime;
@property(retain, nonatomic) SCCroppingState *croppingState; // @synthesize croppingState=_croppingState;
- (id)currentFullScreenImage;
@property(retain, nonatomic) SCCameraDeepLinkMetadata *deepLinkMetadata; // @synthesize deepLinkMetadata=_deepLinkMetadata;
@property(retain, nonatomic) SCDepthPhotoAuxiliaryData *depthPhotoData; // @synthesize depthPhotoData=_depthPhotoData;
@property(retain, nonatomic) SCFuture *depthPhotoDataFuture; // @synthesize depthPhotoDataFuture=_depthPhotoDataFuture;
@property(retain, nonatomic) SCDiscoverMediaBlob *discoverSharedMessageBlob; // @synthesize discoverSharedMessageBlob=_discoverSharedMessageBlob;
@property(retain, nonatomic) SCDrawingMetadata *drawingMetadata; // @synthesize drawingMetadata=_drawingMetadata;
@property(nonatomic) _Bool enableRotationalPreview; // @synthesize enableRotationalPreview=_enableRotationalPreview;
@property(nonatomic) long long faceCount; // @synthesize faceCount=_faceCount;
@property(retain, nonatomic) id <SCPreviewFilterDataProvider> filterDataProvider; // @synthesize filterDataProvider=_filterDataProvider;
@property(nonatomic) _Bool flashOn; // @synthesize flashOn=_flashOn;
- (void)forceUpdateMultiSnapConfiguration:(id)arg1;
@property(retain, nonatomic) SCManagedFrameHealthChecker *frameHealthChecker; // @synthesize frameHealthChecker=_frameHealthChecker;
@property(nonatomic) _Bool fromFrontFacingCamera; // @synthesize fromFrontFacingCamera=_fromFrontFacingCamera;
@property(nonatomic) _Bool fromMischief; // @synthesize fromMischief=_fromMischief;
@property(nonatomic) _Bool fromStoryReply; // @synthesize fromStoryReply=_fromStoryReply;
@property(retain, nonatomic) UIImage *fullScreenImage; // @synthesize fullScreenImage=_fullScreenImage;
- (id)fullScreenImageForOverlay:(long long)arg1;
@property(retain, nonatomic) SCFuture *fullScreenImageFuture; // @synthesize fullScreenImageFuture=_fullScreenImageFuture;
@property(copy, nonatomic) NSString *gameId; // @synthesize gameId=_gameId;
@property(nonatomic) long long gridModeState; // @synthesize gridModeState=_gridModeState;
@property(nonatomic) _Bool handsFree;
- (_Bool)hasSavedBounceState;
@property(nonatomic) _Bool hasSpectaclesLens; // @synthesize hasSpectaclesLens=_hasSpectaclesLens;
@property(retain, nonatomic) SCInfoStickerDataProvider *infoStickerDataProvider; // @synthesize infoStickerDataProvider=_infoStickerDataProvider;
- (id)init;
- (_Bool)isBatchCapture;
- (_Bool)isCommitted;
@property(nonatomic) _Bool isFromSnapRecovery; // @synthesize isFromSnapRecovery=_isFromSnapRecovery;
- (_Bool)isImageSnap;
- (_Bool)isOpenedFromMemoriesTabInMediaDrawer;
- (_Bool)isQuickSend;
- (_Bool)isSnap3D;
- (_Bool)isSnapCreatedByPhoneCameraMomentAgo;
- (_Bool)isSnapFramed;
- (_Bool)isSnapFromCamera;
- (_Bool)isSnapFromCameraRollItem;
- (_Bool)isSnapFromDiscover;
- (_Bool)isSnapFromKhaleesi;
- (_Bool)isSnapFromScreenshot;
- (_Bool)isSnapFromSnapchatGallery;
- (_Bool)isSnapFromiOSPhoto;
- (_Bool)isSnapWithLens;
@property(nonatomic) _Bool isSnappablesSnap; // @synthesize isSnappablesSnap=_isSnappablesSnap;
- (_Bool)isVideoSnap;
@property(retain, nonatomic) id <SCLensRemoteAssetsUploadOperation> lensAssetsUploadOperation; // @synthesize lensAssetsUploadOperation=_lensAssetsUploadOperation;
@property(retain, nonatomic) SCFuture *lensAssetsUploadOperationFuture; // @synthesize lensAssetsUploadOperationFuture=_lensAssetsUploadOperationFuture;
@property(retain, nonatomic) SCLensConfiguration *liveCameraLensConfiguration; // @synthesize liveCameraLensConfiguration=_liveCameraLensConfiguration;
@property(nonatomic) _Bool lowLightBoostEnabledBeforeCapture; // @synthesize lowLightBoostEnabledBeforeCapture=_lowLightBoostEnabledBeforeCapture;
@property(nonatomic) long long lowLightStatus; // @synthesize lowLightStatus=_lowLightStatus;
@property(retain, nonatomic) NSNumber *magicMomentFrameTime; // @synthesize magicMomentFrameTime=_magicMomentFrameTime;
@property(nonatomic) double mediaAspectRatio; // @synthesize mediaAspectRatio=_mediaAspectRatio;
@property(nonatomic) long long mediaOrientation; // @synthesize mediaOrientation=_mediaOrientation;
@property(nonatomic) struct CGSize mediaSize; // @synthesize mediaSize=_mediaSize;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) SCMultiSnapConfiguration *multiSnapConfiguration; // @synthesize multiSnapConfiguration=_multiSnapConfiguration;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain, nonatomic) UIView *placeholderView; // @synthesize placeholderView=_placeholderView;
@property(retain, nonatomic) NSString *prefilledChatMessageInSendTo; // @synthesize prefilledChatMessageInSendTo=_prefilledChatMessageInSendTo;
@property(retain, nonatomic) UIImage *previewLensAppliedImage; // @synthesize previewLensAppliedImage=_previewLensAppliedImage;
@property(retain, nonatomic) SCLensConfiguration *previewLensConfiguration; // @synthesize previewLensConfiguration=_previewLensConfiguration;
- (long long)productMediaType;
@property(nonatomic) struct CGPoint quickStickerCenter; // @synthesize quickStickerCenter=_quickStickerCenter;
@property(retain, nonatomic) SCQuickStickerImage *quickStickerImage; // @synthesize quickStickerImage=_quickStickerImage;
@property(retain, nonatomic) SCFuture *recordedVideoFuture; // @synthesize recordedVideoFuture=_recordedVideoFuture;
@property(retain, nonatomic) NSArray *recordingDeviceMotionData; // @synthesize recordingDeviceMotionData=_recordingDeviceMotionData;
@property(retain, nonatomic) NSArray *recordingMetadata; // @synthesize recordingMetadata=_recordingMetadata;
@property(retain, nonatomic) NSArray *recordingRawAccelerometerData; // @synthesize recordingRawAccelerometerData=_recordingRawAccelerometerData;
@property(retain, nonatomic) NSArray *recordingRawGyroData; // @synthesize recordingRawGyroData=_recordingRawGyroData;
@property(retain, nonatomic) SCReplyParameters *replyParameters; // @synthesize replyParameters=_replyParameters;
@property(nonatomic) _Bool savingDisabled; // @synthesize savingDisabled=_savingDisabled;
@property(nonatomic) _Bool savingToSnapchatGalleryDisabled; // @synthesize savingToSnapchatGalleryDisabled=_savingToSnapchatGalleryDisabled;
@property(nonatomic) _Bool scanInPreviewEnabled; // @synthesize scanInPreviewEnabled=_scanInPreviewEnabled;
@property(retain, nonatomic) SOJUGalleryCropping *serverGalleryCropping; // @synthesize serverGalleryCropping=_serverGalleryCropping;
@property(copy, nonatomic) NSURL *shareURL; // @synthesize shareURL=_shareURL;
@property(copy, nonatomic) NSString *shazamArtistName; // @synthesize shazamArtistName=_shazamArtistName;
@property(copy, nonatomic) NSString *shazamSongTitle; // @synthesize shazamSongTitle=_shazamSongTitle;
@property(nonatomic) long long shazamSource; // @synthesize shazamSource=_shazamSource;
@property(retain, nonatomic) SCLensSnap3DAssetMetadata *snap3DAssetMetadata; // @synthesize snap3DAssetMetadata=_snap3DAssetMetadata;
@property(copy, nonatomic) NSString *snapAttachmentUrl; // @synthesize snapAttachmentUrl=_snapAttachmentUrl;
@property(copy, nonatomic) NSString *snapCraftStyleId; // @synthesize snapCraftStyleId=_snapCraftStyleId;
@property(nonatomic) long long snapPageSource; // @synthesize snapPageSource=_snapPageSource;
@property(copy, nonatomic) CDUnknownBlockType snapSaverImageProvider; // @synthesize snapSaverImageProvider=_snapSaverImageProvider;
@property(nonatomic) __weak id <SCSnapSendPreparer> snapSendPreparer; // @synthesize snapSendPreparer=_snapSendPreparer;
@property(nonatomic) long long snapSource; // @synthesize snapSource=_snapSource;
@property(retain, nonatomic) SCPreviewSnapchatGalleryConfiguration *snapchatGalleryConfiguration; // @synthesize snapchatGalleryConfiguration=_snapchatGalleryConfiguration;
@property(copy, nonatomic) NSData *snappablesData; // @synthesize snappablesData=_snappablesData;
@property(retain, nonatomic) SCFuture *snappablesDataFuture; // @synthesize snappablesDataFuture=_snappablesDataFuture;
@property(retain, nonatomic) SCImageProcessLensCommandSpectaclesMetadata *spectaclesMetadata; // @synthesize spectaclesMetadata=_spectaclesMetadata;
@property(retain, nonatomic) UIImage *spectaclesStereoImage; // @synthesize spectaclesStereoImage=_spectaclesStereoImage;
@property(copy, nonatomic) NSArray *stickersState; // @synthesize stickersState=_stickersState;
@property(retain, nonatomic) UIImage *stylizedImage; // @synthesize stylizedImage=_stylizedImage;
@property(retain, nonatomic) id <SCPreviewVideoProvider> stylizedVideoProvider; // @synthesize stylizedVideoProvider=_stylizedVideoProvider;
@property(retain, nonatomic) UIImage *ucoAppliedImage; // @synthesize ucoAppliedImage=_ucoAppliedImage;
@property(retain, nonatomic) UIImage *videoFirstFrameImage; // @synthesize videoFirstFrameImage=_videoFirstFrameImage;
@property(retain, nonatomic) UIImage *videoOverlayImage; // @synthesize videoOverlayImage=_videoOverlayImage;
@property(nonatomic) unsigned long long videoPlaybackQuality; // @synthesize videoPlaybackQuality=_videoPlaybackQuality;
@property(retain, nonatomic) id <SCPreviewVideoProvider> videoProvider; // @synthesize videoProvider=_videoProvider;
@property(retain, nonatomic) UIImage *videoThumbnailImage; // @synthesize videoThumbnailImage=_videoThumbnailImage;
@property(nonatomic) _Bool withZooming; // @synthesize withZooming=_withZooming;
- (_Bool)shouldDisplayTrackingObjectTooltipFromSnapConfiguration;
- (_Bool)shouldShowMultiSnapView;
- (_Bool)shouldShowToolbarTimer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
