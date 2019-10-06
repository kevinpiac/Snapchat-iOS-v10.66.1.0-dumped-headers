//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SCGallerySnap, SCGallerySnapDetail, SCGallerySnapMiniThumbnail;

@interface SCCloudSyncAddSnapEntityBuilder : NSObject
{
    NSString *_duplicateFromSnapId;
    id <SCGallerySnap> _snap;
    id <SCGallerySnapDetail> _detail;
    id <SCGallerySnapMiniThumbnail> _miniThumbnail;
}

+ (id)withCloudSyncAddSnapEntity:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setDetail:(id)arg1;
- (id)setDuplicateFromSnapId:(id)arg1;
- (id)setMiniThumbnail:(id)arg1;
- (id)setSnap:(id)arg1;

@end

