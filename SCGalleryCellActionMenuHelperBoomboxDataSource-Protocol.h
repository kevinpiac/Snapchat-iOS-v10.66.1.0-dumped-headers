//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCGalleryCellActionMenuHelper;
@protocol SCGalleryItem, SCGallerySnap;

@protocol SCGalleryCellActionMenuHelperBoomboxDataSource <NSObject>
- (void)galleryCellActionMenuHelper:(SCGalleryCellActionMenuHelper *)arg1 fetchSnapsForItem:(id <SCGalleryItem>)arg2 sourceSnap:(id <SCGallerySnap>)arg3 completionHandler:(void (^)(id <SCGallerySnap>, NSArray *))arg4;
@end

