//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionable-Protocol.h"
#import "SCPostRegAddFriendsSearchSectionCreating-Protocol.h"
#import "SCSnapchattersDataRequestListener-Protocol.h"

@class NSString, SCBehaviorSubject, SCExperimentManager, SCInviteFriendStateTracker, SCLazy, SCObservable, SCPreferences;
@protocol SCActionHandling, SCImageDownloading, SCLegacyItemDownloading, SCSnapchattersDataSearching;

@interface SCAddFriendsInRegSearchSectionCreator : NSObject <SCSnapchattersDataRequestListener, SCPostRegAddFriendsSearchSectionCreating, SCActionable>
{
    SCLazy *_snapchattersDataFetcher;
    SCLazy *_snapchattersDataTracker;
    SCLazy *_nonSnapchattersDataFetcher;
    SCInviteFriendStateTracker *_inviteFriendStateTracker;
    id <SCSnapchattersDataSearching> _snapchattersDataSearcher;
    id <SCActionHandling> _actionHandler;
    SCLazy *_suggestionRankingCoordinator;
    SCLazy *_viewedIncomingFriendsTracker;
    id <SCImageDownloading> _imageDownloader;
    id <SCLegacyItemDownloading> _labelInfoProvider;
    SCLazy *_userInfoProvider;
    double _displayTimestamp;
    SCExperimentManager *_experimentManager;
    SCPreferences *_userPreferences;
    long long _placement;
    SCLazy *_addFriendsViewModelsDecorator;
    SCLazy *_collectionCellViewModelGenerator;
    SCBehaviorSubject *_observableTotalNumberOfItems;
}

- (void).cxx_destruct;
- (void)_notify:(id)arg1;
- (void)_updateNumberOfItems;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void)didEndSnapchattersContactDataRequest:(id)arg1 withResult:(id)arg2;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (id)initWithSnapchattersDataFetcher:(id)arg1 snapchattersDataSearcher:(id)arg2 snapchattersDataTracker:(id)arg3 nonSnapchattersDataFetcher:(id)arg4 inviteFriendStateTracker:(id)arg5 actionHandler:(id)arg6 suggestionRankingCoordinator:(id)arg7 viewedIncomingFriendsTracker:(id)arg8 imageDownloader:(id)arg9 labelInfoProvider:(id)arg10 userInfoProvider:(id)arg11 displayTimestamp:(double)arg12 userSession:(id)arg13 placement:(long long)arg14 addFriendsViewModelsDecorator:(id)arg15 collectionCellViewModelGenerator:(id)arg16;
@property(readonly, nonatomic) SCObservable *observableTotalNumberOfItems; // @synthesize observableTotalNumberOfItems=_observableTotalNumberOfItems;
- (id)sectionForDescriptor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

