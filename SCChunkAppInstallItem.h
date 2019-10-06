//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCChunkItem.h"

#import "MediaDataSource-Protocol.h"

@class Media, NSData, NSDictionary, NSNumber, NSString;

@interface SCChunkAppInstallItem : SCChunkItem <MediaDataSource>
{
    NSData *_appIconImageDataToSave;
    _Bool _includesVideo;
    _Bool _isAppIconImageOptional;
    NSNumber *_appId;
    NSDictionary *_storeParams;
    NSString *_appTitle;
    Media *_appIconImageMedia;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) Media *appIconImageMedia; // @synthesize appIconImageMedia=_appIconImageMedia;
@property(readonly, nonatomic) NSNumber *appId; // @synthesize appId=_appId;
@property(readonly, copy, nonatomic) NSString *appTitle; // @synthesize appTitle=_appTitle;
- (id)cacheMediaIds;
- (id)decryptData:(id)arg1 forMedia:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)encrypt;
- (id)encryptionDictionaryForMedia:(id)arg1;
- (void)ensureNonNilMediaObjects;
- (id)extractImageDataForMediaKey:(id)arg1 appInstallProperties:(id)arg2 chunkDictionary:(id)arg3;
- (_Bool)imageMediaExistsInCache;
@property(readonly, nonatomic) _Bool includesVideo; // @synthesize includesVideo=_includesVideo;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 chunkDictionary:(id)arg2;
@property(readonly, nonatomic) _Bool isAppIconImageOptional; // @synthesize isAppIconImageOptional=_isAppIconImageOptional;
- (id)mediaIdForMedia:(id)arg1;
- (_Bool)needsAuthToFetch;
- (_Bool)persist;
- (id)requestContexts;
- (void)saveMediaToCache;
@property(readonly, copy, nonatomic) NSDictionary *storeParams; // @synthesize storeParams=_storeParams;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

