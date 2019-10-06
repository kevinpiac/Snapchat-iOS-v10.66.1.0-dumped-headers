//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCHeaderDataSource-Protocol.h"

@class NSString, SCHeader, SCHeaderViewModel, SCSearchNavigationBar, SCSearchNavigationBarViewModel;
@protocol SCAddFriendsScrollAnimatorDataProviding;

@interface SCAddFriendsScrollAnimatorDataCoordinator : NSObject <SCHeaderDataSource>
{
    id <SCAddFriendsScrollAnimatorDataProviding> _dataProvider;
    SCHeader *_headerView;
    SCSearchNavigationBar *_searchBar;
    SCHeaderViewModel *_headerViewModel;
    SCSearchNavigationBarViewModel *_searchBarViewModel;
}

- (void).cxx_destruct;
- (void)_updateHeaderView;
- (void)_updateSearchBar;
- (id)backgroundColorForHeader;
- (id)fontForHeader:(id)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)initWithHeaderView:(id)arg1 searchBar:(id)arg2 dataProvider:(id)arg3;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
