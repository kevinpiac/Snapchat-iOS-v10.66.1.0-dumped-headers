//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, SCAdResponseAdDataV2, SCOperaPlaylistItem, SCOperaPlaylistItemGroup, SCOperaViewController;
@protocol SCOperaPlaylistItemController;

@protocol SCOperaPlaylistAdTrackProtocol <NSObject>
- (long long)adPositionForItem:(SCOperaPlaylistItem *)arg1;
- (unsigned long long)adProductTypeForItem:(SCOperaPlaylistItem *)arg1;
- (NSString *)adRequestClientIdForGroup:(SCOperaPlaylistItemGroup *)arg1;
- (NSString *)adRequestClientIdForItem:(SCOperaPlaylistItem *)arg1;
- (SCAdResponseAdDataV2 *)adResponseForGroup:(SCOperaPlaylistItemGroup *)arg1;
- (SCAdResponseAdDataV2 *)adResponseForItem:(SCOperaPlaylistItem *)arg1;
- (NSString *)adSessionId;
- (long long)adSnapIndexForItem:(SCOperaPlaylistItem *)arg1;
- (NSDictionary *)adViewContextForItem:(SCOperaPlaylistItem *)arg1;
- (NSDictionary *)adViewContextForSkippedGroup:(SCOperaPlaylistItemGroup *)arg1;
- (NSDictionary *)adViewContextForSkippedItem:(SCOperaPlaylistItem *)arg1 aroundItem:(SCOperaPlaylistItem *)arg2 pageLeft:(_Bool)arg3;
- (_Bool)isNofillAdGroup:(SCOperaPlaylistItemGroup *)arg1;
- (_Bool)isNofillAdItem:(SCOperaPlaylistItem *)arg1;
- (_Bool)isNofillUnskippableAdItem:(SCOperaPlaylistItem *)arg1;
- (void)logAdSkipWithAdGroup:(SCOperaPlaylistItemGroup *)arg1;
- (void)logAdSkipWithAdItem:(SCOperaPlaylistItem *)arg1 aroundItem:(SCOperaPlaylistItem *)arg2 pageLeft:(_Bool)arg3;
- (void)setOperaViewController:(SCOperaViewController *)arg1;
- (void)setPlaylistItemController:(id <SCOperaPlaylistItemController>)arg1;
- (SCOperaPlaylistItemGroup *)skippedAdGroupAroundGroup:(SCOperaPlaylistItemGroup *)arg1 pagedLeft:(_Bool)arg2;
- (SCOperaPlaylistItem *)skippedItemAroundItem:(SCOperaPlaylistItem *)arg1 pageLeft:(_Bool)arg2;
- (unsigned long long)topSnapBackgroundTypeForAdItem:(SCOperaPlaylistItem *)arg1;
- (long long)totalAdCountForItem:(SCOperaPlaylistItem *)arg1;
- (double)totalTopSnapsMediaDurationInSecForAdGroup:(SCOperaPlaylistItemGroup *)arg1;

@optional
- (long long)editionEntrySnapIndexForItem:(SCOperaPlaylistItem *)arg1;
@end

