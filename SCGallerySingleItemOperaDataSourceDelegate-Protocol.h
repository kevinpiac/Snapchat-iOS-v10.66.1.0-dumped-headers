//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString;
@protocol SCGalleryItem, SCGallerySingleItemOperaDataSource, SCGallerySnap;

@protocol SCGallerySingleItemOperaDataSourceDelegate <NSObject>
- (NSString *)initialPresentSnapIdForSingleDataSource:(id <SCGallerySingleItemOperaDataSource>)arg1;
- (_Bool)isFirstItemInPlaylist:(id <SCGallerySingleItemOperaDataSource>)arg1;
- (void)requestCallbackWhenViewModelConnectionIsStable:(void (^)(void))arg1;
- (void)singleDataSource:(id <SCGallerySingleItemOperaDataSource>)arg1 didChangeContentWithinGalleryItem:(id <SCGalleryItem>)arg2 hasSnapsToPresent:(_Bool)arg3;
- (void)singleDataSource:(id <SCGallerySingleItemOperaDataSource>)arg1 didSwitchToNewGalleryItem:(id <SCGalleryItem>)arg2;
- (void)singleDataSource:(id <SCGallerySingleItemOperaDataSource>)arg1 reportFailToPreparePageWithPageId:(NSString *)arg2 layerType:(unsigned long long)arg3 error:(NSError *)arg4;
- (void)singleDataSource:(id <SCGallerySingleItemOperaDataSource>)arg1 willRemoveCurrentSnap:(id <SCGallerySnap>)arg2;
@end

