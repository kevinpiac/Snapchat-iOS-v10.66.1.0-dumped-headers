//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCSnapchattersDataTracking-Protocol.h"

@class NSSet;
@protocol SCPostRegAddFriendsTrackingDelegate;

@protocol SCPostRegAddFriendsTracking <SCSnapchattersDataTracking>
@property(readonly, nonatomic) NSSet *addedSnapchatterIds;
@property(readonly, nonatomic) NSSet *addedSnapchatters;
@property(nonatomic) __weak id <SCPostRegAddFriendsTrackingDelegate> postRegAddFriendsTrackingDelegate;
@end
