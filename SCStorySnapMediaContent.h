//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStorySnapMediaContent-Protocol.h"

@class NSData, NSDate, NSNumber, NSString, SOJUAudioStitch;

@interface SCStorySnapMediaContent : NSObject <SCStorySnapMediaContent>
{
    _Bool _overlayPresent;
    _Bool _operaShouldUseFraming;
    NSString *_storySnapId;
    NSDate *_storyTimestamp;
    NSDate *_storyExpirationDate;
    long long _mediaType;
    NSString *_mediaId;
    NSString *_mediaKey;
    NSString *_mediaIv;
    NSString *_storyCacheMediaId;
    NSString *_captionText;
    NSString *_attachmentUrl;
    NSString *_venueId;
    NSNumber *_captionScreenPosition;
    NSNumber *_captionOrientation;
    NSString *_operaDisplayName;
    NSString *_operaDisplaySubTitle;
    NSData *_contextHint;
    SOJUAudioStitch *_audioStitch;
    long long _loadState;
    NSData *_lensMetadata;
}

+ (id)createWithSearchDynamicStorySnap:(id)arg1;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (id)mediaIdForCacheId:(id)arg1;
- (void).cxx_destruct;
- (id)_dataToImage:(id)arg1;
- (void)_fetchDataFromCacheWithMediaCategory:(long long)arg1 completionQueue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_generateAndSaveVideoThumbnailWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)_isMediaInCacheForType:(long long)arg1;
- (void)_saveUnzippedDataToDisk:(id)arg1 overlayData:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (long long)_thumbnailCacheItemType;
- (void)_unzipMediaDataWithCompletion:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)_videoExistsOnDisk;
- (id)allCacheIds;
@property(readonly, copy, nonatomic) NSString *attachmentUrl; // @synthesize attachmentUrl=_attachmentUrl;
@property(readonly, copy, nonatomic) SOJUAudioStitch *audioStitch; // @synthesize audioStitch=_audioStitch;
- (id)cacheIdForCacheItemType:(long long)arg1;
@property(readonly, copy, nonatomic) NSNumber *captionOrientation; // @synthesize captionOrientation=_captionOrientation;
@property(readonly, copy, nonatomic) NSNumber *captionScreenPosition; // @synthesize captionScreenPosition=_captionScreenPosition;
@property(readonly, copy, nonatomic) NSString *captionText; // @synthesize captionText=_captionText;
- (_Bool)containsSpectacles;
- (_Bool)containsVideo;
@property(readonly, copy, nonatomic) NSData *contextHint; // @synthesize contextHint=_contextHint;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)deleteMediaFromCache;
- (void)deleteVideoFileIfNecessary;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (void)fetchImageFromCacheWithMediaCategory:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)fileManager;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStorySnapId:(id)arg1 storyTimestamp:(id)arg2 storyExpirationDate:(id)arg3 mediaType:(long long)arg4 mediaId:(id)arg5 mediaKey:(id)arg6 mediaIv:(id)arg7 storyCacheMediaId:(id)arg8 captionText:(id)arg9 attachmentUrl:(id)arg10 venueId:(id)arg11 captionScreenPosition:(id)arg12 captionOrientation:(id)arg13 overlayPresent:(_Bool)arg14 operaShouldUseFraming:(_Bool)arg15 operaDisplayName:(id)arg16 operaDisplaySubTitle:(id)arg17 contextHint:(id)arg18 audioStitch:(id)arg19 loadState:(long long)arg20 lensMetadata:(id)arg21;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isMediaLoadedInCache;
- (_Bool)isMediaReadyToDisplay;
@property(readonly, copy, nonatomic) NSData *lensMetadata; // @synthesize lensMetadata=_lensMetadata;
@property(readonly, nonatomic) long long loadState; // @synthesize loadState=_loadState;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(readonly, copy, nonatomic) NSString *mediaIv; // @synthesize mediaIv=_mediaIv;
@property(readonly, copy, nonatomic) NSString *mediaKey; // @synthesize mediaKey=_mediaKey;
@property(readonly, nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, copy, nonatomic) NSString *operaDisplayName; // @synthesize operaDisplayName=_operaDisplayName;
@property(readonly, copy, nonatomic) NSString *operaDisplaySubTitle; // @synthesize operaDisplaySubTitle=_operaDisplaySubTitle;
@property(readonly, nonatomic) _Bool operaShouldUseFraming; // @synthesize operaShouldUseFraming=_operaShouldUseFraming;
- (void)overlayImageWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool overlayPresent; // @synthesize overlayPresent=_overlayPresent;
- (_Bool)preferFasterCoding;
- (void)saveDataToCache:(id)arg1 mediaCategory:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)saveDataWithCacheItemType:(id)arg1 mediaCategory:(long long)arg2;
- (void)setBool:(_Bool)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *storyCacheMediaId; // @synthesize storyCacheMediaId=_storyCacheMediaId;
@property(readonly, copy, nonatomic) NSDate *storyExpirationDate; // @synthesize storyExpirationDate=_storyExpirationDate;
@property(readonly, copy, nonatomic) NSString *storySnapId; // @synthesize storySnapId=_storySnapId;
@property(readonly, copy, nonatomic) NSDate *storyTimestamp; // @synthesize storyTimestamp=_storyTimestamp;
- (void)thumbnailImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)unarchiveBundleWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSString *venueId; // @synthesize venueId=_venueId;
- (id)videoFilename;
- (id)videoURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

