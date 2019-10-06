//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCDataCoordinating-Protocol.h"
#import "SCUpdateAnnouncing-Protocol.h"

@class SCFriendsFeedSyncMetadata;
@protocol SCFriendsFeedPaginationDelegate;

@protocol SCFriendsFeedLoadingStatusManaging <SCUpdateAnnouncing, SCDataCoordinating>
@property(nonatomic) double lastTimeFeedSuccessfullySyncedWithServer;
@property(nonatomic) long long loadingStatus;
@property(nonatomic) __weak id <SCFriendsFeedPaginationDelegate> paginationDelegate;
- (SCFriendsFeedSyncMetadata *)syncMetadata;
@end

