//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGListAdapter, IGListSectionController, UICollectionViewCell;

@protocol IGListDisplayDelegate <NSObject>
- (void)listAdapter:(IGListAdapter *)arg1 didEndDisplayingSectionController:(IGListSectionController *)arg2;
- (void)listAdapter:(IGListAdapter *)arg1 didEndDisplayingSectionController:(IGListSectionController *)arg2 cell:(UICollectionViewCell *)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(IGListAdapter *)arg1 willDisplaySectionController:(IGListSectionController *)arg2;
- (void)listAdapter:(IGListAdapter *)arg1 willDisplaySectionController:(IGListSectionController *)arg2 cell:(UICollectionViewCell *)arg3 atIndex:(long long)arg4;
@end

