//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinating-Protocol.h"
#import "SCDataCoordinatorListener-Protocol.h"

@class NSString, SCChatActionMenuViewModelDataRequest, SCChatActionMenuViewModelFactory, SCChatActiveConversationData, SCDataCoordinatorListenerAnnouncer, SCQueuePerformer;

@interface SCChatActionMenuDataCoordinator : NSObject <SCDataCoordinating, SCDataCoordinatorListener>
{
    SCChatActiveConversationData *_activeConversationData;
    SCChatActionMenuViewModelDataRequest *_activeDataRequest;
    SCChatActionMenuViewModelFactory *_viewModelFactory;
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
    SCQueuePerformer *_performer;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (void)_announceDataCoordinatorUpdateWithDataRequest:(id)arg1;
- (void)_resetDataCoordinatorAndAnnounce;
- (void)addDataUpdateListener:(id)arg1;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)handleDataRequest:(id)arg1;
- (id)initWithViewModelFactory:(id)arg1;
- (void)removeDataUpdateListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

