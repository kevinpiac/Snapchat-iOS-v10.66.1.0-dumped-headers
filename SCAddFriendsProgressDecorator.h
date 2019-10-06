//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAddFriendsViewModelsDecorating-Protocol.h"

@class NSOperationQueue, NSPointerArray, NSString, SCAddFriendsProgressViewModel, SCDisposableObserverLifecycle;

@interface SCAddFriendsProgressDecorator : NSObject <SCAddFriendsViewModelsDecorating>
{
    SCDisposableObserverLifecycle *_subscriptions;
    SCAddFriendsProgressViewModel *_progressViewModel;
    NSOperationQueue *_observerQueue;
    NSPointerArray *_listeners;
}

- (void).cxx_destruct;
- (void)_friendingProgressUpdatedWithViewModel:(id)arg1;
- (_Bool)_shouldDecorateContainerViewModels:(id)arg1;
- (void)addDecorationListener:(id)arg1;
- (id)decorateContainerViewModels:(id)arg1;
- (id)decoratingCellClasses;
- (id)initWithObservableProgressViewModels:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
