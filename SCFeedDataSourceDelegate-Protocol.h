//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGListIndexPathResult, NSArray;

@protocol SCFeedDataSourceDelegate <NSObject>
- (void)didFetchViewModels:(NSArray *)arg1;
- (void)didReceiveNewUnreadContent;
- (_Bool)friendsFeedViewHasAppeared;
- (void)reloadInitialItems;
- (void)reloadItemsForResult:(IGListIndexPathResult *)arg1 viewModels:(NSArray *)arg2;
- (unsigned long long)sectionForFeedItems;
- (_Bool)shouldStopViewModelUpdates;
@end

