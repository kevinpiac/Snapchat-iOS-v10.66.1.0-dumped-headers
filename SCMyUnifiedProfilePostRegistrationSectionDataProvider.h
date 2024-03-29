//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSectionDataProviding-Protocol.h"
#import "SCUpdateListener-Protocol.h"

@class NSDictionary, NSString, SCEventListenerAnnouncer, SCMyUnifiedProfilePostRegistrationStateManager, SCUserSession;
@protocol NSCopying, SCPerforming, SCSectionDataProvidingDelegate;

@interface SCMyUnifiedProfilePostRegistrationSectionDataProvider : NSObject <SCUpdateListener, SCSectionDataProviding>
{
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCMyUnifiedProfilePostRegistrationStateManager *_postRegistrationStateManager;
    SCUserSession *_userSession;
    NSString *_postRegistrationItem;
    NSDictionary *_cardTitle;
    NSDictionary *_cardSubtitle;
    _Bool _hasInitializedViewModel;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    id <SCPerforming> _updateQueuePerformer;
    NSObject<NSCopying> *_sectionDataModel;
    SCEventListenerAnnouncer *_lifecycleAnnouncer;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_asyncAnnounceSectionWillAppearOnScreen;
- (id)_containterCellViewModel;
- (void)_setPostRegistrationItem;
- (void)_setupCardTitle;
- (void)_updateSectionDataModel;
- (void)addListener:(id)arg1;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (id)contentCellClassesByReuseIdentifier;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (id)initWithPostRegistrationStateManager:(id)arg1 userSession:(id)arg2;
@property(retain, nonatomic) SCEventListenerAnnouncer *lifecycleAnnouncer; // @synthesize lifecycleAnnouncer=_lifecycleAnnouncer;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (void)removeListener:(id)arg1;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

