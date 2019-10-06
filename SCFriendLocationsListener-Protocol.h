//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSSet, SCFriendLocationsDataStore;

@protocol SCFriendLocationsListener <NSObject>

@optional
- (void)friendLocationsDataStore:(SCFriendLocationsDataStore *)arg1 didFailToLoadWithError:(NSError *)arg2;
- (void)friendLocationsDataStoreDidLoad:(SCFriendLocationsDataStore *)arg1;
- (void)friendLocationsDataStoreDidUpdateCurrentUserFriendLocation:(SCFriendLocationsDataStore *)arg1;
- (void)friendLocationsDidChange:(SCFriendLocationsDataStore *)arg1 affectedUserIds:(NSSet *)arg2;
@end
