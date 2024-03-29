//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, SCStickerSearchDatabase;
@protocol OS_dispatch_queue;

@interface SCChatStickerSearch : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SCStickerSearchDatabase *_searchDatabase;
    NSMutableSet *_publishedContextualStickerPackIds;
    NSMutableSet *_publishedSnapchatStickerPackIds;
}

+ (id)_mergeSearchResultsWithStickers:(id)arg1 emojis:(id)arg2;
+ (id)localeURL;
+ (id)shared;
- (void).cxx_destruct;
- (id)_buildSOJUStickersFromStickerIdSet:(id)arg1;
- (id)_buildSOJUStickersFromStickerIds:(id)arg1;
- (void)_fetchStickerSearchMetadataWithSearchPack:(id)arg1;
- (void)_retryFetchingMetadataWithSearchPack:(id)arg1;
- (void)addActiveContextualPackId:(id)arg1;
- (void)addActiveSnapchatPackId:(id)arg1;
- (void)getAllTagsWithPrefix:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getFrequentTags:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)init;
- (void)resetContextualPacks;
- (void)resetSnapchatPacks;
- (void)searchStickersWithText:(id)arg1 stickerTarget:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateWithSearchPack:(id)arg1;

@end

