//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCDataCoordinating-Protocol.h"
#import "SCDataCoordinatorListener-Protocol.h"

@class NSArray, NSSet;

@protocol SCFriendsFeedDataCoordinating <SCDataCoordinating, SCDataCoordinatorListener>
- (NSSet *)consumableConversationIds;
- (NSArray *)friendsFeedItems;
@end
