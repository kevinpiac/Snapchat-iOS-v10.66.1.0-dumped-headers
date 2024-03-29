//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatMediaContentProvider-Protocol.h"

@class NSData, NSString;
@protocol SCChatRenderingMessage;

@interface SCChatMediaSavingSnap : NSObject <SCChatMediaContentProvider>
{
    id <SCChatRenderingMessage> _message;
    NSData *_rawMediaData;
}

- (void).cxx_destruct;
- (id)chatIV;
- (id)chatKey;
- (id)chatMediaID;
- (id)creatorAttribution;
- (double)duration;
- (id)groupIdToMediaIdDownloadUrlMap;
- (double)height;
- (id)initWithMessage:(id)arg1 mediaData:(id)arg2;
- (_Bool)isInfiniteDuration;
- (_Bool)isZipped;
- (long long)mediaContentType;
- (id)miniThumbnailData;
- (_Bool)needsToBeUploaded;
- (void)prepareDataToUploadForMediaId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)snapAttachmentUrl;
- (id)snapMetadata;
- (id)venueId;
- (double)width;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

