//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCChunkItem.h"

#import "MediaDataSource-Protocol.h"

@class Media, NSData, NSNumber, NSString, NSURL;

@interface SCChunkDeepLinkAttachmentItem : SCChunkItem <MediaDataSource>
{
    NSData *_appIconImageDataToSave;
    NSString *_uri;
    NSNumber *_appId;
    NSString *_appTitle;
    Media *_appIconImageMedia;
    Media *_inAppBackgroundImageMedia;
    NSURL *_webviewFallbackUrl;
    long long _deepLinkFallbackType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) Media *appIconImageMedia; // @synthesize appIconImageMedia=_appIconImageMedia;
@property(readonly, copy, nonatomic) NSNumber *appId; // @synthesize appId=_appId;
@property(readonly, copy, nonatomic) NSString *appTitle; // @synthesize appTitle=_appTitle;
- (id)cacheMediaIds;
- (id)decryptData:(id)arg1 forMedia:(id)arg2;
@property(readonly, nonatomic) long long deepLinkFallbackType; // @synthesize deepLinkFallbackType=_deepLinkFallbackType;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)encrypt;
- (id)encryptionDictionaryForMedia:(id)arg1;
- (void)ensureNonNilMediaObjects;
- (id)extractImageDataForMediaKey:(id)arg1 deepLinkAttachmentProperties:(id)arg2 chunkDictionary:(id)arg3;
- (_Bool)imageMediaExistsInCache;
@property(readonly, nonatomic) Media *inAppBackgroundImageMedia; // @synthesize inAppBackgroundImageMedia=_inAppBackgroundImageMedia;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 chunkDictionary:(id)arg2;
- (id)mediaIdForMedia:(id)arg1;
- (_Bool)needsAuthToFetch;
- (_Bool)persist;
- (id)requestContexts;
- (void)saveMediaToCache;
@property(readonly, copy, nonatomic) NSString *uri; // @synthesize uri=_uri;
@property(readonly, copy, nonatomic) NSURL *webviewFallbackUrl; // @synthesize webviewFallbackUrl=_webviewFallbackUrl;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
