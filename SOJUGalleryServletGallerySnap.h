//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUGalleryServletGallerySnap-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUCoordinate, SOJUGalleryMultiSnapSegment, SOJUGalleryServletSensorBlob, SOJUGallerySnapSource, SOJUStoryFrame;

@interface SOJUGalleryServletGallerySnap : NSObject <SOJUGalleryServletGallerySnap>
{
    NSString *_snapId;
    NSNumber *_defunct;
    NSString *_mediaId;
    NSString *_encryption;
    NSNumber *_mediaType;
    NSString *_overlay;
    NSNumber *_createTime;
    NSNumber *_orientation;
    NSNumber *_overlayOrientation;
    SOJUCoordinate *_location;
    NSString *_timeZone;
    NSNumber *_temperature;
    NSNumber *_speed;
    NSNumber *_battery;
    NSNumber *_width;
    NSNumber *_height;
    NSNumber *_duration;
    NSNumber *_size;
    NSString *_mediaDownloadUrl;
    NSString *_hdMediaDownloadUrl;
    NSNumber *_hdMediaStatus;
    NSString *_overlayDownloadUrl;
    NSNumber *_hasOverlayImage;
    NSString *_thumbnailDownloadUrl;
    NSNumber *_hasThumbnail;
    NSString *_tags;
    NSNumber *_tagsVersion;
    NSNumber *_cameraHardwareMountingDegrees;
    NSNumber *_cameraFrontFacing;
    SOJUGallerySnapSource *_source;
    SOJUStoryFrame *_framing;
    NSNumber *_statusCode;
    NSNumber *_contentScore;
    NSString *_deviceId;
    NSNumber *_isInfiniteDurationDeprecated;
    NSString *_miniThumbnailBytes;
    NSString *_thumbnailRedirectUrlDeprecated;
    NSNumber *_infiniteDuration;
    NSString *_thumbnailRedirectUri;
    NSString *_overlayRedirectUri;
    NSString *_mediaRedirectUri;
    NSString *_hdMediaRedirectUri;
    NSNumber *_gzippedOverlay;
    NSNumber *_thumbnailSize;
    NSNumber *_overlayImageSize;
    NSNumber *_hdMediaSize;
    NSNumber *_captureTime;
    NSString *_mediaFormat;
    SOJUGalleryMultiSnapSegment *_multiSnapSegment;
    NSString *_multiSnapGroupId;
    SOJUGalleryServletSensorBlob *_sensorBlob;
    NSArray *_toolVersions;
    NSString *_spectaclesMetadataUrl;
    NSNumber *_hasSpectaclesMetadata;
    NSString *_spectaclesMetadataRedirectUri;
    NSNumber *_hasDepthEffectDeprecated;
    NSArray *_mediaAttributes;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *battery; // @synthesize battery=_battery;
- (double)batteryValue;
@property(readonly, copy, nonatomic) NSNumber *cameraFrontFacing; // @synthesize cameraFrontFacing=_cameraFrontFacing;
- (_Bool)cameraFrontFacingValue;
@property(readonly, copy, nonatomic) NSNumber *cameraHardwareMountingDegrees; // @synthesize cameraHardwareMountingDegrees=_cameraHardwareMountingDegrees;
- (long long)cameraHardwareMountingDegreesEnum;
- (int)cameraHardwareMountingDegreesValue;
@property(readonly, copy, nonatomic) NSNumber *captureTime; // @synthesize captureTime=_captureTime;
- (long long)captureTimeValue;
@property(readonly, copy, nonatomic) NSNumber *contentScore; // @synthesize contentScore=_contentScore;
- (double)contentScoreValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSNumber *createTime; // @synthesize createTime=_createTime;
- (long long)createTimeValue;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *defunct; // @synthesize defunct=_defunct;
- (_Bool)defunctValue;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(readonly, copy, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
- (double)durationValue;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *encryption; // @synthesize encryption=_encryption;
@property(readonly, copy, nonatomic) SOJUStoryFrame *framing; // @synthesize framing=_framing;
@property(readonly, copy, nonatomic) NSNumber *gzippedOverlay; // @synthesize gzippedOverlay=_gzippedOverlay;
- (_Bool)gzippedOverlayValue;
@property(readonly, copy, nonatomic) NSNumber *hasDepthEffectDeprecated; // @synthesize hasDepthEffectDeprecated=_hasDepthEffectDeprecated;
- (_Bool)hasDepthEffectDeprecatedValue;
@property(readonly, copy, nonatomic) NSNumber *hasOverlayImage; // @synthesize hasOverlayImage=_hasOverlayImage;
- (_Bool)hasOverlayImageValue;
@property(readonly, copy, nonatomic) NSNumber *hasSpectaclesMetadata; // @synthesize hasSpectaclesMetadata=_hasSpectaclesMetadata;
- (_Bool)hasSpectaclesMetadataValue;
@property(readonly, copy, nonatomic) NSNumber *hasThumbnail; // @synthesize hasThumbnail=_hasThumbnail;
- (_Bool)hasThumbnailValue;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *hdMediaDownloadUrl; // @synthesize hdMediaDownloadUrl=_hdMediaDownloadUrl;
@property(readonly, copy, nonatomic) NSString *hdMediaRedirectUri; // @synthesize hdMediaRedirectUri=_hdMediaRedirectUri;
@property(readonly, copy, nonatomic) NSNumber *hdMediaSize; // @synthesize hdMediaSize=_hdMediaSize;
- (long long)hdMediaSizeValue;
@property(readonly, copy, nonatomic) NSNumber *hdMediaStatus; // @synthesize hdMediaStatus=_hdMediaStatus;
- (long long)hdMediaStatusEnum;
- (int)hdMediaStatusValue;
@property(readonly, copy, nonatomic) NSNumber *height; // @synthesize height=_height;
- (int)heightValue;
@property(readonly, copy, nonatomic) NSNumber *infiniteDuration; // @synthesize infiniteDuration=_infiniteDuration;
- (_Bool)infiniteDurationValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithSnapId:(id)arg1 defunct:(id)arg2 mediaId:(id)arg3 encryption:(id)arg4 mediaType:(id)arg5 overlay:(id)arg6 createTime:(id)arg7 orientation:(id)arg8 overlayOrientation:(id)arg9 location:(id)arg10 timeZone:(id)arg11 temperature:(id)arg12 speed:(id)arg13 battery:(id)arg14 width:(id)arg15 height:(id)arg16 duration:(id)arg17 size:(id)arg18 mediaDownloadUrl:(id)arg19 hdMediaDownloadUrl:(id)arg20 hdMediaStatus:(id)arg21 overlayDownloadUrl:(id)arg22 hasOverlayImage:(id)arg23 thumbnailDownloadUrl:(id)arg24 hasThumbnail:(id)arg25 tags:(id)arg26 tagsVersion:(id)arg27 cameraHardwareMountingDegrees:(id)arg28 cameraFrontFacing:(id)arg29 source:(id)arg30 framing:(id)arg31 statusCode:(id)arg32 contentScore:(id)arg33 deviceId:(id)arg34 isInfiniteDurationDeprecated:(id)arg35 miniThumbnailBytes:(id)arg36 thumbnailRedirectUrlDeprecated:(id)arg37 infiniteDuration:(id)arg38 thumbnailRedirectUri:(id)arg39 overlayRedirectUri:(id)arg40 mediaRedirectUri:(id)arg41 hdMediaRedirectUri:(id)arg42 gzippedOverlay:(id)arg43 thumbnailSize:(id)arg44 overlayImageSize:(id)arg45 hdMediaSize:(id)arg46 captureTime:(id)arg47 mediaFormat:(id)arg48 multiSnapSegment:(id)arg49 multiSnapGroupId:(id)arg50 sensorBlob:(id)arg51 toolVersions:(id)arg52 spectaclesMetadataUrl:(id)arg53 hasSpectaclesMetadata:(id)arg54 spectaclesMetadataRedirectUri:(id)arg55 hasDepthEffectDeprecated:(id)arg56 mediaAttributes:(id)arg57;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *isInfiniteDurationDeprecated; // @synthesize isInfiniteDurationDeprecated=_isInfiniteDurationDeprecated;
- (_Bool)isInfiniteDurationDeprecatedValue;
@property(readonly, copy, nonatomic) SOJUCoordinate *location; // @synthesize location=_location;
@property(readonly, copy, nonatomic) NSArray *mediaAttributes; // @synthesize mediaAttributes=_mediaAttributes;
@property(readonly, copy, nonatomic) NSString *mediaDownloadUrl; // @synthesize mediaDownloadUrl=_mediaDownloadUrl;
@property(readonly, copy, nonatomic) NSString *mediaFormat; // @synthesize mediaFormat=_mediaFormat;
- (long long)mediaFormatEnum;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(readonly, copy, nonatomic) NSString *mediaRedirectUri; // @synthesize mediaRedirectUri=_mediaRedirectUri;
@property(readonly, copy, nonatomic) NSNumber *mediaType; // @synthesize mediaType=_mediaType;
- (long long)mediaTypeEnum;
- (int)mediaTypeValue;
@property(readonly, copy, nonatomic) NSString *miniThumbnailBytes; // @synthesize miniThumbnailBytes=_miniThumbnailBytes;
@property(readonly, copy, nonatomic) NSString *multiSnapGroupId; // @synthesize multiSnapGroupId=_multiSnapGroupId;
@property(readonly, copy, nonatomic) SOJUGalleryMultiSnapSegment *multiSnapSegment; // @synthesize multiSnapSegment=_multiSnapSegment;
@property(readonly, copy, nonatomic) NSNumber *orientation; // @synthesize orientation=_orientation;
- (long long)orientationEnum;
- (int)orientationValue;
@property(readonly, copy, nonatomic) NSString *overlay; // @synthesize overlay=_overlay;
@property(readonly, copy, nonatomic) NSString *overlayDownloadUrl; // @synthesize overlayDownloadUrl=_overlayDownloadUrl;
@property(readonly, copy, nonatomic) NSNumber *overlayImageSize; // @synthesize overlayImageSize=_overlayImageSize;
- (long long)overlayImageSizeValue;
@property(readonly, copy, nonatomic) NSNumber *overlayOrientation; // @synthesize overlayOrientation=_overlayOrientation;
- (long long)overlayOrientationEnum;
- (int)overlayOrientationValue;
@property(readonly, copy, nonatomic) NSString *overlayRedirectUri; // @synthesize overlayRedirectUri=_overlayRedirectUri;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) SOJUGalleryServletSensorBlob *sensorBlob; // @synthesize sensorBlob=_sensorBlob;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSNumber *size; // @synthesize size=_size;
- (long long)sizeValue;
@property(readonly, copy, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;
@property(readonly, copy, nonatomic) SOJUGallerySnapSource *source; // @synthesize source=_source;
@property(readonly, copy, nonatomic) NSString *spectaclesMetadataRedirectUri; // @synthesize spectaclesMetadataRedirectUri=_spectaclesMetadataRedirectUri;
@property(readonly, copy, nonatomic) NSString *spectaclesMetadataUrl; // @synthesize spectaclesMetadataUrl=_spectaclesMetadataUrl;
@property(readonly, copy, nonatomic) NSNumber *speed; // @synthesize speed=_speed;
- (double)speedValue;
@property(readonly, copy, nonatomic) NSNumber *statusCode; // @synthesize statusCode=_statusCode;
- (long long)statusCodeEnum;
- (int)statusCodeValue;
@property(readonly, copy, nonatomic) NSString *tags; // @synthesize tags=_tags;
@property(readonly, copy, nonatomic) NSNumber *tagsVersion; // @synthesize tagsVersion=_tagsVersion;
- (int)tagsVersionValue;
@property(readonly, copy, nonatomic) NSNumber *temperature; // @synthesize temperature=_temperature;
- (double)temperatureValue;
@property(readonly, copy, nonatomic) NSString *thumbnailDownloadUrl; // @synthesize thumbnailDownloadUrl=_thumbnailDownloadUrl;
@property(readonly, copy, nonatomic) NSString *thumbnailRedirectUri; // @synthesize thumbnailRedirectUri=_thumbnailRedirectUri;
@property(readonly, copy, nonatomic) NSString *thumbnailRedirectUrlDeprecated; // @synthesize thumbnailRedirectUrlDeprecated=_thumbnailRedirectUrlDeprecated;
@property(readonly, copy, nonatomic) NSNumber *thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
- (long long)thumbnailSizeValue;
@property(readonly, copy, nonatomic) NSString *timeZone; // @synthesize timeZone=_timeZone;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSArray *toolVersions; // @synthesize toolVersions=_toolVersions;
@property(readonly, copy, nonatomic) NSNumber *width; // @synthesize width=_width;
- (int)widthValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
