//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class SCCloudSyncTriggerUserContext;
@protocol SCGalleryProfile, SCGallerySnap, SCGallerySnapDetail;

@protocol SCCloudUploadOptionalMediaSnapshot <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) id <SCGallerySnapDetail> detailPlaceholder;
@property(readonly, copy, nonatomic) id <SCGalleryProfile> profile;
@property(readonly, copy, nonatomic) id <SCGallerySnap> snapPlaceholder;
@property(readonly, copy, nonatomic) SCCloudSyncTriggerUserContext *userContext;
@end

