//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStickerPickerLayoutSource-Protocol.h"
#import "SCStickerPickerMenuDataSource-Protocol.h"
#import "SCStickerPickerV2IconsDataSource-Protocol.h"

@class NSArray, NSString, SCStickerSuperCategory, SCUserSession;
@protocol SCBitmojiAvatarBuilderRouterDelegate;

@interface SCBitmojiStickerDataProvider : NSObject <SCStickerPickerLayoutSource, SCStickerPickerMenuDataSource, SCStickerPickerV2IconsDataSource>
{
    SCUserSession *_userSession;
    id <SCBitmojiAvatarBuilderRouterDelegate> _bitmojiAvatarBuilderRouterDelegate;
    NSArray *_avatarIds;
    SCStickerSuperCategory *_bitmojiSuperCategory;
}

- (void).cxx_destruct;
- (void)_generateBitmojiStickers;
- (id)_superCategoryForBitmojiPackages:(id)arg1;
- (_Bool)areStickerPacksLoaded;
- (id)avatarIdForSearch;
- (void)dealloc;
- (unsigned long long)findStickerSuperCategory:(long long)arg1;
- (id)friendmojiIdForSearch;
- (id)iconImageForPackage:(id)arg1 selected:(_Bool)arg2;
- (id)initWithAvatarIds:(id)arg1 userSession:(id)arg2 bitmojiAvatarBuilderRouterDelegate:(id)arg3;
- (id)layoutSource;
- (long long)numberOfCategoriesInSuperCategory:(long long)arg1;
- (long long)numberOfColumnsForSuperCategoryType:(long long)arg1;
- (long long)numberOfSuperCategories;
- (long long)numberOfSuperCategoriesInStickerPickerMenu:(id)arg1;
- (_Bool)reloadStickersWithAvatars:(id)arg1;
- (id)stickerCategoryForIndexPath:(id)arg1;
- (id)stickerPickerMenu:(id)arg1 emptyStateViewForIndexPath:(id)arg2 frame:(struct CGRect)arg3 sourceType:(unsigned long long)arg4;
- (long long)stickerPickerMenu:(id)arg1 numberOfCategoriesInSuperCategory:(long long)arg2;
- (void)stickerPickerMenu:(id)arg1 prefetchCategoryForIndexPath:(id)arg2;
- (_Bool)stickerPickerMenu:(id)arg1 shouldDisplayEmptyStateForIndexPath:(id)arg2 sourceType:(unsigned long long)arg3;
- (id)stickerPickerMenu:(id)arg1 stickerCategoryForIndexPath:(id)arg2;
- (id)stickerPickerMenu:(id)arg1 stickerSuperCategoryForIndex:(long long)arg2;
- (_Bool)stickerPickerMenuHasSuperCategoryType:(long long)arg1;
- (_Bool)stickerPickerMenuHasSuperCategoryType:(long long)arg1 atIndex:(id)arg2;
- (void)stickerPickerMenuStartPrefetching;
- (void)stickerPickerMenuStopPrefetching;
- (id)stickerSuperCategoryForIndex:(long long)arg1;
- (long long)superCategoryTypeAtIndexPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

