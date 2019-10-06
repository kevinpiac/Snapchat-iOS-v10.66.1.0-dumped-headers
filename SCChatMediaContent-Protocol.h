//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSData, NSNumber, NSString, SCBoltContentObject, SOJUMediaUrl, SOJUSnapMetadata;

@protocol SCChatMediaContent <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *broadcastActionText;
@property(readonly, copy, nonatomic) NSString *broadcastMediaUrl;
@property(readonly, copy, nonatomic) NSString *broadcastSecondaryText;
@property(readonly, copy, nonatomic) NSString *broadcastUrl;
@property(readonly, copy, nonatomic) SCBoltContentObject *contentObject;
@property(readonly, copy, nonatomic) NSString *creatorAttribution;
@property(readonly, copy, nonatomic) SOJUMediaUrl *directDownloadMediaUrl;
@property(readonly, copy, nonatomic) SOJUMediaUrl *directUploadMediaUrl;
@property(readonly, copy, nonatomic) NSNumber *duration;
@property(readonly, copy, nonatomic) NSNumber *height;
@property(readonly, nonatomic) _Bool hidesBroadcastTimer;
@property(readonly, nonatomic) _Bool isBroadcast;
@property(readonly, nonatomic) _Bool isCustomSticker;
@property(readonly, nonatomic) _Bool isInfiniteDuration;
@property(readonly, nonatomic) _Bool isZipped;
@property(readonly, copy, nonatomic) NSString *iv;
@property(readonly, copy, nonatomic) NSString *key;
@property(readonly, copy, nonatomic) NSString *mediaId;
@property(readonly, nonatomic) long long mediaLoadState;
@property(readonly, nonatomic) long long mediaType;
@property(readonly, nonatomic) long long mediaUploadState;
@property(readonly, copy, nonatomic) NSString *mediaUrl;
@property(readonly, copy, nonatomic) NSData *miniThumbnailData;
@property(readonly, copy, nonatomic) NSArray *snapAttachments;
@property(readonly, copy, nonatomic) SOJUSnapMetadata *snapMetadata;
@property(readonly, copy, nonatomic) NSString *sourceId;
@property(readonly, copy, nonatomic) NSString *venueId;
@property(readonly, copy, nonatomic) NSNumber *width;
@end

