//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MediaDataSource-Protocol.h"
#import "NSCoding-Protocol.h"
#import "SCMediaOwnerProtocol-Protocol.h"

@class Media, NSData, NSNumber, NSString, NSURL;

@interface SCChunkInteractionZoneItem : NSObject <MediaDataSource, NSCoding, SCMediaOwnerProtocol>
{
    NSData *_itemIconImageDataToSave;
    NSString *_iconImageId;
    long long _attachmentType;
    Media *_iconImageMedia;
    NSURL *_url;
    long long _deepLinkFallbackType;
    NSURL *_deepLinkUri;
    NSNumber *_deepLinkFallbackAppId;
    NSURL *_deepLinkFallbackWebUrl;
    NSString *_title;
    NSString *_subtitle;
}

+ (long long)_attachmentTypeFromAttachmentTypeString:(id)arg1;
+ (long long)_deepLinkFallbackTypeFromString:(id)arg1;
- (void).cxx_destruct;
- (void)_generateDeepLinkAttachment:(id)arg1;
- (void)_generateWebviewAttachment:(id)arg1;
@property(readonly, nonatomic) long long attachmentType; // @synthesize attachmentType=_attachmentType;
- (id)cacheMediaIds;
- (id)decryptData:(id)arg1 forMedia:(id)arg2;
@property(readonly, nonatomic) NSNumber *deepLinkFallbackAppId; // @synthesize deepLinkFallbackAppId=_deepLinkFallbackAppId;
@property(readonly, nonatomic) long long deepLinkFallbackType; // @synthesize deepLinkFallbackType=_deepLinkFallbackType;
@property(readonly, copy, nonatomic) NSURL *deepLinkFallbackWebUrl; // @synthesize deepLinkFallbackWebUrl=_deepLinkFallbackWebUrl;
@property(readonly, copy, nonatomic) NSURL *deepLinkUri; // @synthesize deepLinkUri=_deepLinkUri;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)encrypt;
- (id)encryptionDictionaryForMedia:(id)arg1;
@property(readonly, nonatomic) Media *iconImageMedia; // @synthesize iconImageMedia=_iconImageMedia;
- (_Bool)imageMediaExistsInCache;
- (id)initWithCoder:(id)arg1;
- (id)initWithJsonDictionary:(id)arg1 chunkDictionary:(id)arg2;
- (id)mediaIdForMedia:(id)arg1;
- (_Bool)needsAuthToFetch;
- (_Bool)persist;
- (id)requestContexts;
- (void)saveMediaToCache;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

