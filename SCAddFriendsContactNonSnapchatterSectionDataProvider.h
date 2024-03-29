//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAddFriendsSnapchatterCollectionCellViewModelProvider-Protocol.h"
#import "SCInviteFriendStateListener-Protocol.h"
#import "SCSectionDataProviding-Protocol.h"
#import "SCSnapchattersDataRequestListener-Protocol.h"

@class NSArray, NSString, SCBehaviorSubject, SCEventListenerAnnouncer, SCInviteFriendStateTracker, SCLazy;
@protocol NSCopying, SCImageDownloading, SCPerforming, SCSectionDataProvidingDelegate;

@interface SCAddFriendsContactNonSnapchatterSectionDataProvider : NSObject <SCInviteFriendStateListener, SCSnapchattersDataRequestListener, SCSectionDataProviding, SCAddFriendsSnapchatterCollectionCellViewModelProvider>
{
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCLazy *_dataProvider;
    id <SCImageDownloading> _imageDownloader;
    NSArray *_contactNonSnapchatters;
    SCInviteFriendStateTracker *_stateTracker;
    CDUnknownBlockType _viewModelGenerator;
    CDUnknownBlockType _displayFilter;
    SCLazy *_snapchattersDataTracker;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    NSObject<NSCopying> *_sectionDataModel;
    id <SCPerforming> _updateQueuePerformer;
    SCBehaviorSubject *_containerCellViewModelsSubject;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_configureCollectionViewCell:(id)arg1;
- (id)_containerCellViewModelForIndex:(unsigned long long)arg1;
- (void)_rankNonSnapchatters:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_reloadViewForStateChange;
- (void)_setNonSnapchatters:(id)arg1;
- (void)_updateContactNonSnaphcatters:(id)arg1;
- (void)_updateSectionDataModel;
- (void)addListener:(id)arg1;
- (id)configurationBlocksByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
@property(readonly) SCBehaviorSubject *containerCellViewModelsSubject; // @synthesize containerCellViewModelsSubject=_containerCellViewModelsSubject;
- (id)contentCellClassesByReuseIdentifier;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void)didEndFetchingFriendDeeplinkForPhoneNumber:(id)arg1 deeplink:(id)arg2 success:(_Bool)arg3;
- (void)didEndInvitingFriendWithPhoneNumber:(id)arg1 success:(_Bool)arg2;
- (void)didEndSnapchattersContactDataRequest:(id)arg1 withResult:(id)arg2;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartFetchingFriendDeeplinkForPhoneNumber:(id)arg1;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (id)initWithDataProvider:(id)arg1 snapchattersDataTracker:(id)arg2 imageDownloader:(id)arg3 stateTracker:(id)arg4 viewModelGenerator:(CDUnknownBlockType)arg5 displayFilter:(CDUnknownBlockType)arg6;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (void)removeListener:(id)arg1;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
- (void)tearDown;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

