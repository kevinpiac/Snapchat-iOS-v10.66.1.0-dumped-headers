//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionable-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "SCSectionDataProviding-Protocol.h"
#import "SCStoriesModelUpdateListener-Protocol.h"

@class NSString, SCContainerCellViewModel, SCEventListenerAnnouncer, SCImpalaBusinessProfileHandler, SCScopedAccess, SCUserSession;
@protocol NSCopying, SCActionHandling, SCCanceling, SCEventAnnouncing, SCImageDownloading, SCPerforming, SCSectionDataProvidingDelegate;

@interface SCMyUnifiedProfileSnapProSectionDataProvider : NSObject <SCStoriesModelUpdateListener, SCEventListener, SCSectionDataProviding, SCActionable>
{
    SCUserSession *_userSession;
    SCScopedAccess *_scopedStories;
    id <SCImageDownloading> _imageDownloader;
    SCEventListenerAnnouncer *_eventAnnouncer;
    id <SCEventAnnouncing> _actionHandlerEventAnnouncer;
    SCImpalaBusinessProfileHandler *_handler;
    id <SCCanceling> _observer;
    id <SCCanceling> _storyObserver;
    SCContainerCellViewModel *_mainCellViewModel;
    SCContainerCellViewModel *_carouselCellViewModel;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    id <SCPerforming> _updateQueuePerformer;
    NSObject<NSCopying> *_sectionDataModel;
    id <SCActionHandling> _actionHandler;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_reload;
- (void)_setHandler:(id)arg1;
- (void)_updateCarouselCellViewModelForHandler:(id)arg1;
- (void)_updateCarouselCellViewModelIfNeeded:(id)arg1;
- (void)_updateMainCellViewModelForHandler:(id)arg1;
- (void)_updateMainCellViewModelIfNeeded:(id)arg1;
- (void)_updatePendingBusinessSnapsForHandler:(id)arg1;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void)addListener:(id)arg1;
- (id)configurationBlocksByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (id)contentCellClassesByReuseIdentifier;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void)dealloc;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (id)initWithUserSession:(id)arg1 imageDownloader:(id)arg2;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (void)removeListener:(id)arg1;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
- (void)storiesModelDidUpdateWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

