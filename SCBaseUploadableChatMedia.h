//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "SCChatMediaContentProvider-Protocol.h"
#import "SCRenderableMedia-Protocol.h"
#import "SCUploadableMedia-Protocol.h"

@class NSData, NSMutableArray, NSString, NSURL;

@interface SCBaseUploadableChatMedia : NSObject <SCUploadableMedia, SCRenderableMedia, SCChatMediaContentProvider, NSCoding>
{
    NSData *_mediaData;
    NSMutableArray *_processingCompletionBlocks;
    NSMutableArray *_uploadCompletionBlocks;
    _Bool _mediaInfiniteDuration;
    _Bool _shouldUseChatV3Cache;
    _Bool _shouldUseMediaCache;
    _Bool _smartShareable;
    NSString *_mediaID;
    NSString *_key;
    NSString *_iv;
    double _mediaDuration;
    long long _mediaWidth;
    long long _mediaHeight;
    NSURL *_attachedURL;
    NSString *_snapAttachmentUrl;
    NSString *_venueId;
    NSString *_creatorAttribution;
    NSData *_miniThumbnailData;
    unsigned long long _uploadMediaType;
    long long _uploadState;
}

- (void).cxx_destruct;
- (void)_bqUploadWithEncryptedData:(id)arg1 withSuccess:(CDUnknownBlockType)arg2 withFailure:(CDUnknownBlockType)arg3;
- (void)_handleMediaDataLost;
- (_Bool)_isPsychomantis;
- (_Bool)_isVideoLaguna;
- (id)_persistentStorageKey;
- (void)_saveDataToMediaCache:(id)arg1 encryptedData:(id)arg2;
- (void)_setMediaData:(id)arg1;
- (void)_transitionToState:(long long)arg1;
- (void)_upload;
@property(retain) NSURL *attachedURL; // @synthesize attachedURL=_attachedURL;
- (id)bodyType;
- (id)chatIV;
- (id)chatKey;
- (id)chatMediaID;
@property(copy) NSString *creatorAttribution; // @synthesize creatorAttribution=_creatorAttribution;
- (void)didUploadChatMedia;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)groupIdToMediaIdDownloadUrlMap;
- (double)height;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1;
- (id)initWithID:(id)arg1 key:(id)arg2 iv:(id)arg3;
- (_Bool)isInfiniteDuration;
- (_Bool)isZipped;
@property(readonly, copy, nonatomic) NSString *iv; // @synthesize iv=_iv;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
- (long long)mediaContentType;
- (void)mediaData:(CDUnknownBlockType)arg1;
@property double mediaDuration; // @synthesize mediaDuration=_mediaDuration;
@property long long mediaHeight; // @synthesize mediaHeight=_mediaHeight;
@property(readonly, copy, nonatomic) NSString *mediaID; // @synthesize mediaID=_mediaID;
@property _Bool mediaInfiniteDuration; // @synthesize mediaInfiniteDuration=_mediaInfiniteDuration;
- (long long)mediaType;
@property long long mediaWidth; // @synthesize mediaWidth=_mediaWidth;
@property(copy) NSData *miniThumbnailData; // @synthesize miniThumbnailData=_miniThumbnailData;
- (_Bool)needsToBeUploaded;
- (void)prepareDataToUploadForMediaId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)prepareMedia:(CDUnknownBlockType)arg1;
- (id)sendParameters;
- (void)setDataToUpload:(id)arg1;
@property(nonatomic) _Bool shouldUseChatV3Cache; // @synthesize shouldUseChatV3Cache=_shouldUseChatV3Cache;
@property(nonatomic) _Bool shouldUseMediaCache; // @synthesize shouldUseMediaCache=_shouldUseMediaCache;
@property(retain) NSString *snapAttachmentUrl; // @synthesize snapAttachmentUrl=_snapAttachmentUrl;
@property unsigned long long uploadMediaType; // @synthesize uploadMediaType=_uploadMediaType;
@property long long uploadState; // @synthesize uploadState=_uploadState;
@property(retain) NSString *venueId; // @synthesize venueId=_venueId;
@property(readonly, nonatomic) _Bool smartShareable; // @synthesize smartShareable=_smartShareable;
- (id)snapMetadata;
- (void)thumbnailMediaData:(CDUnknownBlockType)arg1;
- (void)transitionToUploadedState;
- (void)upload:(CDUnknownBlockType)arg1;
- (id)uploadableChatMediaDatastore;
- (double)width;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

