//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSearchSectionCreating-Protocol.h"

@class NSString, SCCollectionViewSectionDataProvidingScheduler, SCDiscoverFeedActionHandler, SCDiscoverFeedDataStore, SCDiscoverFeedSectionCollapseCoordinatingManager, SCDiscoverFeedSectionHeaderActionHandler, SCDiscoverFeedSectionViewAllButtonStates, SCLazy, SCScopedAccess, SCUserSession;
@protocol SCActionHandling, SCDiscoverFeedWhiteSpaceGestureCoordinating;

@interface SCDiscoverFeedSectionCreator : NSObject <SCSearchSectionCreating>
{
    SCUserSession *_userSession;
    SCScopedAccess *_sectionExtensionServices;
    SCDiscoverFeedActionHandler *_actionHandler;
    SCDiscoverFeedSectionHeaderActionHandler *_sectionHeaderActionHandler;
    SCDiscoverFeedDataStore *_storiesDataStore;
    SCDiscoverFeedSectionViewAllButtonStates *_sectionViewAllButtonStates;
    id <SCActionHandling> _onboardingNavigationActionHandler;
    SCLazy *_interestSelectionDataCoordinatorLazy;
    SCDiscoverFeedSectionCollapseCoordinatingManager *_coordinatingManager;
    SCScopedAccess *_imageDownloaderAccess;
    SCCollectionViewSectionDataProvidingScheduler *_dataProvidingScheduler;
    id <SCDiscoverFeedWhiteSpaceGestureCoordinating> _gestureCoordinator;
    unsigned long long _prototypeDirection;
    _Bool _hasSeenSwipeTeaching;
}

- (void).cxx_destruct;
- (id)_extensionSectionForDescriptor:(id)arg1;
- (id)initWithUserSession:(id)arg1 sectionExtensionServices:(id)arg2 actionHandler:(id)arg3 sectionHeaderActionHandler:(id)arg4 storiesDataStore:(id)arg5 sectionViewAllButtonStates:(id)arg6 onboardingNavigationActionHandler:(id)arg7 interestSelectionDataCoordinatorLazy:(id)arg8 coordinatingManager:(id)arg9 gestureCoordinator:(id)arg10;
- (id)sectionForDescriptor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

