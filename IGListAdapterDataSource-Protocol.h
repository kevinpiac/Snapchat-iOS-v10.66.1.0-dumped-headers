//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGListAdapter, IGListSectionController, NSArray, UIView;

@protocol IGListAdapterDataSource <NSObject>
- (UIView *)emptyViewForListAdapter:(IGListAdapter *)arg1;
- (IGListSectionController *)listAdapter:(IGListAdapter *)arg1 sectionControllerForObject:(id)arg2;
- (NSArray *)objectsForListAdapter:(IGListAdapter *)arg1;
@end

