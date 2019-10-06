//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString, SCCloudSyncTriggerUserContext;

@protocol SCMemoriesDataMutatingStory <NSObject>
- (void)createStoryWithSnaps:(NSArray *)arg1 photoAssets:(NSArray *)arg2 photoAssetMediaURLs:(NSArray *)arg3 photoAssetOrientations:(NSArray *)arg4 storyDisplayName:(NSString *)arg5 isPrivate:(_Bool)arg6 userContext:(SCCloudSyncTriggerUserContext *)arg7 completionHandler:(void (^)(id <SCGalleryEntry>, NSArray *, _Bool, NSError *))arg8;
- (void)saveStoryWithId:(NSString *)arg1 storyDisplayName:(NSString *)arg2 entrySource:(long long)arg3 storySnaps:(NSArray *)arg4 isPrivate:(_Bool)arg5 isFromSavedMetadataMap:(NSDictionary *)arg6 userContext:(SCCloudSyncTriggerUserContext *)arg7 completionHandler:(void (^)(id <SCGalleryEntry>, NSArray *, _Bool, NSError *))arg8;
@end
