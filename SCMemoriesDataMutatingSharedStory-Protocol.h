//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CLLocation, NSArray, NSData, NSDate, NSString, SCCloudSyncTriggerUserContext, SCLensSnap3DAssetMetadata, SCOverlayFormat, SOJUGallerySnapOverlay, SOJUSnapCreatorAttribution, UIImage;
@protocol SCGalleryEntry, SCPreviewVideoProvider;

@protocol SCMemoriesDataMutatingSharedStory <NSObject>
- (void)addShareSnaps:(NSArray *)arg1 sharedPHAsset:(NSArray *)arg2 photoAssetMediaURLs:(NSArray *)arg3 photoAssetOrientations:(NSArray *)arg4 sharedEntry:(id <SCGalleryEntry>)arg5 userContext:(SCCloudSyncTriggerUserContext *)arg6 completionHandler:(void (^)(_Bool, NSError *))arg7;
- (void)autosaveSharedMultiSnapWithVideoUrls:(NSArray *)arg1 sojuMediaType:(long long)arg2 servletMediaFormat:(NSString *)arg3 source:(unsigned long long)arg4 creatorUserId:(NSString *)arg5 sharedSnapId:(NSString *)arg6 externalId:(NSString *)arg7 cameraRollId:(NSString *)arg8 attribution:(NSArray *)arg9 title:(NSString *)arg10 createTimeOfFirstSnap:(NSDate *)arg11 timeRanges:(NSArray *)arg12 orientation:(long long)arg13 overlayFormats:(NSArray *)arg14 overlays:(NSArray *)arg15 location:(CLLocation *)arg16 isPrivate:(_Bool)arg17 entrySource:(long long)arg18 saveSource:(unsigned long long)arg19 isInfiniteDuration:(_Bool)arg20 isFromSavedMetadata:(_Bool)arg21 cameraFrontFacing:(_Bool)arg22 creatorAttribution:(SOJUSnapCreatorAttribution *)arg23 userContext:(SCCloudSyncTriggerUserContext *)arg24 completionHandler:(void (^)(id <SCGalleryEntry>, NSArray *, _Bool, NSError *))arg25;
- (void)saveSharedImageSnap:(UIImage *)arg1 sojuMediaType:(long long)arg2 servletMediaFormat:(NSString *)arg3 source:(unsigned long long)arg4 creatorUserId:(NSString *)arg5 sharedSnapId:(NSString *)arg6 externalId:(NSString *)arg7 cameraRollId:(NSString *)arg8 attribution:(NSArray *)arg9 title:(NSString *)arg10 captureTimeUtc:(NSDate *)arg11 createTimeUtc:(NSDate *)arg12 orientation:(long long)arg13 duration:(double)arg14 overlayFormat:(SCOverlayFormat *)arg15 overlay:(SOJUGallerySnapOverlay *)arg16 location:(CLLocation *)arg17 isPrivate:(_Bool)arg18 entrySource:(long long)arg19 saveSource:(unsigned long long)arg20 isInfiniteDuration:(_Bool)arg21 isFromSavedMetadata:(_Bool)arg22 cameraFrontFacing:(_Bool)arg23 creatorAttribution:(SOJUSnapCreatorAttribution *)arg24 snap3DAssetMetadata:(SCLensSnap3DAssetMetadata *)arg25 userContext:(SCCloudSyncTriggerUserContext *)arg26 completionHandler:(void (^)(id <SCGallerySnap>, NSString *, _Bool, NSError *))arg27;
- (void)saveSharedVideoSnap:(NSData *)arg1 videoProvider:(id <SCPreviewVideoProvider>)arg2 sojuMediaType:(long long)arg3 servletMediaFormat:(NSString *)arg4 source:(unsigned long long)arg5 creatorUserId:(NSString *)arg6 sharedSnapId:(NSString *)arg7 externalId:(NSString *)arg8 cameraRollId:(NSString *)arg9 attribution:(NSArray *)arg10 title:(NSString *)arg11 captureTimeUtc:(NSDate *)arg12 createTimeUtc:(NSDate *)arg13 orientation:(long long)arg14 overlayFormat:(SCOverlayFormat *)arg15 overlay:(SOJUGallerySnapOverlay *)arg16 location:(CLLocation *)arg17 isPrivate:(_Bool)arg18 entrySource:(long long)arg19 saveSource:(unsigned long long)arg20 isInfiniteDuration:(_Bool)arg21 isFromSavedMetadata:(_Bool)arg22 cameraFrontFacing:(_Bool)arg23 creatorAttribution:(SOJUSnapCreatorAttribution *)arg24 userContext:(SCCloudSyncTriggerUserContext *)arg25 completionHandler:(void (^)(id <SCGallerySnap>, NSString *, _Bool, NSError *))arg26;
@end

