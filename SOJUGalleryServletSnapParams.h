//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUGalleryServletSnapParams-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUCoordinate, SOJUGalleryMultiSnapSegment, SOJUGalleryServletSensorBlob, SOJUGallerySnapSource, SOJUStoryFrame;

@interface SOJUGalleryServletSnapParams : NSObject <SOJUGalleryServletSnapParams>
{
    NSString *_snapId;
    NSString *_sojuCopyFromSnapId;
    NSString *_mediaId;
    NSString *_encryption;
    NSString *_mediaMd5hash;
    NSString *_mediaPhotoDnaHash;
    NSNumber *_mediaType;
    NSString *_overlay;
    NSString *_overlayImageMd5hash;
    NSString *_thumbnailMd5hash;
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
    NSNumber *_backlogIndex;
    NSNumber *_backlogTotal;
    NSNumber *_cameraHardwareMountingDegrees;
    NSNumber *_cameraFrontFacing;
    SOJUGallerySnapSource *_source;
    SOJUStoryFrame *_framing;
    NSNumber *_contentScore;
    NSString *_deviceId;
    NSNumber *_customStickerPresent;
    NSNumber *_isInfiniteDurationDeprecated;
    NSString *_miniThumbnailBytes;
    NSNumber *_infiniteDuration;
    NSNumber *_thumbnailSize;
    NSNumber *_overlayImageSize;
    NSNumber *_captureTime;
    NSString *_mediaFormat;
    NSString *_mediaTranscoderVersion;
    NSNumber *_mediaFormatProvided;
    SOJUGalleryMultiSnapSegment *_multiSnapSegment;
    NSString *_multiSnapGroupId;
    SOJUGalleryServletSensorBlob *_sensorBlob;
    NSArray *_toolVersions;
    NSArray *_mediaAttributes;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *backlogIndex; // @synthesize backlogIndex=_backlogIndex;
- (int)backlogIndexValue;
@property(readonly, copy, nonatomic) NSNumber *backlogTotal; // @synthesize backlogTotal=_backlogTotal;
- (int)backlogTotalValue;
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
@property(readonly, copy, nonatomic) NSNumber *customStickerPresent; // @synthesize customStickerPresent=_customStickerPresent;
- (_Bool)customStickerPresentValue;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(readonly, copy, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
- (double)durationValue;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *encryption; // @synthesize encryption=_encryption;
@property(readonly, copy, nonatomic) SOJUStoryFrame *framing; // @synthesize framing=_framing;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSNumber *height; // @synthesize height=_height;
- (int)heightValue;
@property(readonly, copy, nonatomic) NSNumber *infiniteDuration; // @synthesize infiniteDuration=_infiniteDuration;
- (_Bool)infiniteDurationValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithSnapId:(id)arg1 sojuCopyFromSnapId:(id)arg2 mediaId:(id)arg3 encryption:(id)arg4 mediaMd5hash:(id)arg5 mediaPhotoDnaHash:(id)arg6 mediaType:(id)arg7 overlay:(id)arg8 overlayImageMd5hash:(id)arg9 thumbnailMd5hash:(id)arg10 createTime:(id)arg11 orientation:(id)arg12 overlayOrientation:(id)arg13 location:(id)arg14 timeZone:(id)arg15 temperature:(id)arg16 speed:(id)arg17 battery:(id)arg18 width:(id)arg19 height:(id)arg20 duration:(id)arg21 size:(id)arg22 backlogIndex:(id)arg23 backlogTotal:(id)arg24 cameraHardwareMountingDegrees:(id)arg25 cameraFrontFacing:(id)arg26 source:(id)arg27 framing:(id)arg28 contentScore:(id)arg29 deviceId:(id)arg30 customStickerPresent:(id)arg31 isInfiniteDurationDeprecated:(id)arg32 miniThumbnailBytes:(id)arg33 infiniteDuration:(id)arg34 thumbnailSize:(id)arg35 overlayImageSize:(id)arg36 captureTime:(id)arg37 mediaFormat:(id)arg38 mediaTranscoderVersion:(id)arg39 mediaFormatProvided:(id)arg40 multiSnapSegment:(id)arg41 multiSnapGroupId:(id)arg42 sensorBlob:(id)arg43 toolVersions:(id)arg44 mediaAttributes:(id)arg45;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *isInfiniteDurationDeprecated; // @synthesize isInfiniteDurationDeprecated=_isInfiniteDurationDeprecated;
- (_Bool)isInfiniteDurationDeprecatedValue;
@property(readonly, copy, nonatomic) SOJUCoordinate *location; // @synthesize location=_location;
@property(readonly, copy, nonatomic) NSArray *mediaAttributes; // @synthesize mediaAttributes=_mediaAttributes;
@property(readonly, copy, nonatomic) NSString *mediaFormat; // @synthesize mediaFormat=_mediaFormat;
- (long long)mediaFormatEnum;
@property(readonly, copy, nonatomic) NSNumber *mediaFormatProvided; // @synthesize mediaFormatProvided=_mediaFormatProvided;
- (_Bool)mediaFormatProvidedValue;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(readonly, copy, nonatomic) NSString *mediaMd5hash; // @synthesize mediaMd5hash=_mediaMd5hash;
@property(readonly, copy, nonatomic) NSString *mediaPhotoDnaHash; // @synthesize mediaPhotoDnaHash=_mediaPhotoDnaHash;
@property(readonly, copy, nonatomic) NSString *mediaTranscoderVersion; // @synthesize mediaTranscoderVersion=_mediaTranscoderVersion;
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
@property(readonly, copy, nonatomic) NSString *overlayImageMd5hash; // @synthesize overlayImageMd5hash=_overlayImageMd5hash;
@property(readonly, copy, nonatomic) NSNumber *overlayImageSize; // @synthesize overlayImageSize=_overlayImageSize;
- (long long)overlayImageSizeValue;
@property(readonly, copy, nonatomic) NSNumber *overlayOrientation; // @synthesize overlayOrientation=_overlayOrientation;
- (long long)overlayOrientationEnum;
- (int)overlayOrientationValue;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) SOJUGalleryServletSensorBlob *sensorBlob; // @synthesize sensorBlob=_sensorBlob;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSNumber *size; // @synthesize size=_size;
- (long long)sizeValue;
@property(readonly, copy, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;
@property(readonly, copy, nonatomic) NSString *sojuCopyFromSnapId; // @synthesize sojuCopyFromSnapId=_sojuCopyFromSnapId;
@property(readonly, copy, nonatomic) SOJUGallerySnapSource *source; // @synthesize source=_source;
@property(readonly, copy, nonatomic) NSNumber *speed; // @synthesize speed=_speed;
- (double)speedValue;
@property(readonly, copy, nonatomic) NSNumber *temperature; // @synthesize temperature=_temperature;
- (double)temperatureValue;
@property(readonly, copy, nonatomic) NSString *thumbnailMd5hash; // @synthesize thumbnailMd5hash=_thumbnailMd5hash;
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
