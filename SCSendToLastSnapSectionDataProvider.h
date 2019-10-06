//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCEventListener-Protocol.h"
#import "SCSectionDataProviding-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "SCUserSelectionListener-Protocol.h"

@class NSString, SCEventListenerAnnouncer, SCSendToLatencyMetricLogger, SCUserSession;
@protocol NSCopying, SCPerforming, SCSectionDataProvidingDelegate, SCUserSelectionManaging;

@interface SCSendToLastSnapSectionDataProvider : NSObject <SCUserSelectionListener, SCEventListener, SCTraceEnabled, SCSectionDataProviding>
{
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCUserSession *_userSession;
    id <SCUserSelectionManaging> _selectionStateManager;
    SCSendToLatencyMetricLogger *_latencyLogger;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    id <SCPerforming> _updateQueuePerformer;
    NSObject<NSCopying> *_sectionDataModel;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)addListener:(id)arg1;
- (id)configurationBlocksByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (id)contentCellClassesByReuseIdentifier;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)didUpdateWithIdentifier:(id)arg1 selectedItems:(id)arg2 deselectedItems:(id)arg3;
- (id)initWithUserSession:(id)arg1 selectionStateManager:(id)arg2 latencyLogger:(id)arg3;
- (double)minimumInteritemSpacing;
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
