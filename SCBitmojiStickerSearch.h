//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCFuture;
@protocol SCPerforming, SCStickerSearchDatabase;

@interface SCBitmojiStickerSearch : NSObject
{
    id <SCStickerSearchDatabase> _searchDatabase;
    id <SCPerforming> _performer;
    SCFuture *_libraryFuture;
}

- (void).cxx_destruct;
- (id)_buildSOJUSticker:(id)arg1 library:(id)arg2 stickerTarget:(long long)arg3 avatarIds:(id)arg4 forceFriendmojis:(_Bool)arg5;
- (void)_prepareStickersFromResults:(id)arg1 library:(id)arg2 stickerTarget:(long long)arg3 avatarIds:(id)arg4 forceFriendmojis:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)getAllTagsWithPrefix:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getFrequentTags:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithDatabase:(id)arg1 bitmojiLibrary:(id)arg2;
- (void)searchStickersWithText:(id)arg1 stickerTarget:(long long)arg2 avatarIds:(id)arg3 forceFriendmojis:(_Bool)arg4 completionBlock:(CDUnknownBlockType)arg5;

@end

