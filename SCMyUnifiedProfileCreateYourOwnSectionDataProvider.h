//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOnDemandGeofilterDataControllerListener-Protocol.h"
#import "SCSectionDataProviding-Protocol.h"

@class NSArray, NSString, SCEventListenerAnnouncer, SCUserSession;
@protocol NSCopying, SCPerforming, SCSectionDataProvidingDelegate;

@interface SCMyUnifiedProfileCreateYourOwnSectionDataProvider : NSObject <SCOnDemandGeofilterDataControllerListener, SCSectionDataProviding>
{
    SCUserSession *_userSession;
    SCEventListenerAnnouncer *_eventAnnouncer;
    NSArray *_sectionItems;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    id <SCPerforming> _updateQueuePerformer;
    NSObject<NSCopying> *_sectionDataModel;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (id)_SCMyUnifiedProfileCreateYourOwnSectionItem;
- (id)_cellViewModels;
- (id)_contentViewModelForIndexPathItem:(long long)arg1;
- (id)_createSectionItems;
- (id)_reuseIdentifierForIndexPathItem:(long long)arg1;
- (void)_updateSectionItems;
- (void)addListener:(id)arg1;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (id)contentCellClassesByReuseIdentifier;
- (void)dataController:(id)arg1 didFinishHomeFilterCreate:(id)arg2 errorDescription:(id)arg3;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (id)initWithUserSession:(id)arg1;
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
