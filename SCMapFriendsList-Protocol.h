//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray;
@protocol SCMapFriendsListDelegate;

@protocol SCMapFriendsList
@property(nonatomic) __weak id <SCMapFriendsListDelegate> delegate;
@property(copy, nonatomic) NSArray *selectedFriendIds;
@property(nonatomic) _Bool shouldDisableDoneButtonForNoSelection;
@end
