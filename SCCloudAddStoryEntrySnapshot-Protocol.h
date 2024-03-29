//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, SCCloudSyncTriggerUserContext;
@protocol SCGalleryEntry, SCGalleryProfile;

@protocol SCCloudAddStoryEntrySnapshot <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSDictionary *dataVaultEncryption;
@property(readonly, copy, nonatomic) NSArray *detailPlaceholders;
@property(readonly, copy, nonatomic) NSDictionary *duplicatedSnapIds;
@property(readonly, copy, nonatomic) id <SCGalleryEntry> entryPlaceholder;
@property(readonly, copy, nonatomic) NSArray *miniThumbnailPlaceholders;
@property(readonly, copy, nonatomic) id <SCGalleryProfile> profile;
@property(readonly, copy, nonatomic) NSArray *snapPlaceholders;
@property(readonly, copy, nonatomic) SCCloudSyncTriggerUserContext *userContext;
@end

