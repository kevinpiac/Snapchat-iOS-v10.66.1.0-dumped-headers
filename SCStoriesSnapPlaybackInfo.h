//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCStoriesSnapAdInfo, SCStoriesSnapAttributes, SCStoriesSnapAudioStitchInfo, SCStoriesSnapCaptureInfo, SCStoriesSnapContextHintInfo, SCStoriesSnapIdentifiers, SCStoriesSnapLensInfo, SCStoriesSnapLoggingInfo, SCStoriesSnapMedia, SCStoriesSnapRenderInfo, SCStoriesSnapRepostAttribution, SCStoriesSnapSource, SCStoriesSnapTimeInfo, SCStoriesSnapUnlockablesInfo, SCStoriesSnapViewStatus, SCStoriesThumbnailMedia;

@interface SCStoriesSnapPlaybackInfo : NSObject <NSCopying>
{
    NSString *_serverId;
    NSString *_clientId;
    NSString *_publicationId;
    SCStoriesSnapIdentifiers *_auxIds;
    NSString *_creatorUserId;
    NSString *_creatorUsername;
    SCStoriesSnapViewStatus *_viewStatus;
    SCStoriesSnapTimeInfo *_timeInfo;
    SCStoriesSnapMedia *_media;
    SCStoriesThumbnailMedia *_thumbnail;
    SCStoriesSnapCaptureInfo *_captureInfo;
    SCStoriesSnapRenderInfo *_renderInfo;
    SCStoriesSnapAttributes *_attributes;
    SCStoriesSnapAdInfo *_adInfo;
    SCStoriesSnapContextHintInfo *_contextHintInfo;
    SCStoriesSnapLensInfo *_lensInfo;
    SCStoriesSnapUnlockablesInfo *_unlockablesInfo;
    SCStoriesSnapAudioStitchInfo *_audioStitchInfo;
    NSString *_creatorDisplayName;
    SCStoriesSnapRepostAttribution *_repostAttribution;
    SCStoriesSnapLoggingInfo *_loggingInfo;
    SCStoriesSnapSource *_source;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCStoriesSnapAdInfo *adInfo; // @synthesize adInfo=_adInfo;
@property(readonly, copy, nonatomic) SCStoriesSnapAttributes *attributes; // @synthesize attributes=_attributes;
@property(readonly, copy, nonatomic) SCStoriesSnapAudioStitchInfo *audioStitchInfo; // @synthesize audioStitchInfo=_audioStitchInfo;
@property(readonly, copy, nonatomic) SCStoriesSnapIdentifiers *auxIds; // @synthesize auxIds=_auxIds;
@property(readonly, copy, nonatomic) SCStoriesSnapCaptureInfo *captureInfo; // @synthesize captureInfo=_captureInfo;
@property(readonly, copy, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(readonly, copy, nonatomic) SCStoriesSnapContextHintInfo *contextHintInfo; // @synthesize contextHintInfo=_contextHintInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *creatorDisplayName; // @synthesize creatorDisplayName=_creatorDisplayName;
@property(readonly, copy, nonatomic) NSString *creatorUserId; // @synthesize creatorUserId=_creatorUserId;
@property(readonly, copy, nonatomic) NSString *creatorUsername; // @synthesize creatorUsername=_creatorUsername;
- (unsigned long long)hash;
- (id)initWithServerId:(id)arg1 clientId:(id)arg2 publicationId:(id)arg3 auxIds:(id)arg4 creatorUserId:(id)arg5 creatorUsername:(id)arg6 viewStatus:(id)arg7 timeInfo:(id)arg8 media:(id)arg9 thumbnail:(id)arg10 captureInfo:(id)arg11 renderInfo:(id)arg12 attributes:(id)arg13 adInfo:(id)arg14 contextHintInfo:(id)arg15 lensInfo:(id)arg16 unlockablesInfo:(id)arg17 audioStitchInfo:(id)arg18 creatorDisplayName:(id)arg19 repostAttribution:(id)arg20 loggingInfo:(id)arg21 source:(id)arg22;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCStoriesSnapLensInfo *lensInfo; // @synthesize lensInfo=_lensInfo;
@property(readonly, copy, nonatomic) SCStoriesSnapLoggingInfo *loggingInfo; // @synthesize loggingInfo=_loggingInfo;
@property(readonly, copy, nonatomic) SCStoriesSnapMedia *media; // @synthesize media=_media;
@property(readonly, copy, nonatomic) NSString *publicationId; // @synthesize publicationId=_publicationId;
@property(readonly, copy, nonatomic) SCStoriesSnapRenderInfo *renderInfo; // @synthesize renderInfo=_renderInfo;
@property(readonly, copy, nonatomic) SCStoriesSnapRepostAttribution *repostAttribution; // @synthesize repostAttribution=_repostAttribution;
@property(readonly, copy, nonatomic) NSString *serverId; // @synthesize serverId=_serverId;
@property(readonly, copy, nonatomic) SCStoriesSnapSource *source; // @synthesize source=_source;
@property(readonly, copy, nonatomic) SCStoriesThumbnailMedia *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(readonly, copy, nonatomic) SCStoriesSnapTimeInfo *timeInfo; // @synthesize timeInfo=_timeInfo;
@property(readonly, copy, nonatomic) SCStoriesSnapUnlockablesInfo *unlockablesInfo; // @synthesize unlockablesInfo=_unlockablesInfo;
@property(readonly, copy, nonatomic) SCStoriesSnapViewStatus *viewStatus; // @synthesize viewStatus=_viewStatus;
- (id)xLogObjectInfo;

@end

