//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinatorListener-Protocol.h"

@class NSString, SCExtensionSharedFile, SCQueuePerformer;
@protocol SCFriendsFeedDataCoordinating;

@interface SCNotificationConsumableConversationIdsRepository : NSObject <SCDataCoordinatorListener>
{
    SCQueuePerformer *_performer;
    SCExtensionSharedFile *_consumableConversationSharedFile;
    id <SCFriendsFeedDataCoordinating> _friendsFeedDataCoordinator;
    NSString *_userId;
}

- (void).cxx_destruct;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (id)initWithFriendsFeedDataCoordinator:(id)arg1 userId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

