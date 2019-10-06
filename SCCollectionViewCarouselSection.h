//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCActionable-Protocol.h"
#import "SCCollectionViewSection-Protocol.h"
#import "SCCollectionViewSectionDataProvidingSchedulable-Protocol.h"
#import "SCCollectionViewSectionLayoutProvidingDataSource-Protocol.h"
#import "SCContainerCollectionViewCellDelegate-Protocol.h"
#import "SCEventAnnouncing-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "SCScrollToEndDetectorDelegate-Protocol.h"
#import "SCSectionDataProvidingDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"

@class NSArray, NSDictionary, NSString, SCCollectionViewCarouselSectionConfiguration, SCCollectionViewSectionDataProvidingScheduler, SCCollectionViewSectionUpdateModel, SCEventListenerAnnouncer, SCScrollToEndDetector, SCSectionKitHeaderModel, UICollectionView;
@protocol SCActionHandling, SCCollectionViewSectionDelegate, SCCollectionViewSectionLayoutProviding, SCCollectionViewSectionSupplementaryViewProviding><SCCollectionViewSupplementaryViewModelsConfigurable, SCPerforming, SCSearchIntentHandler, SCSectionDataProviding;

@interface SCCollectionViewCarouselSection : NSObject <SCActionHandling, SCSectionDataProvidingDelegate, UICollectionViewDataSource, SCContainerCollectionViewCellDelegate, SCEventListener, SCScrollToEndDetectorDelegate, SCCollectionViewSectionDataProvidingSchedulable, SCCollectionViewSection, SCEventAnnouncing, SCActionable, SCCollectionViewSectionLayoutProvidingDataSource>
{
    SCEventListenerAnnouncer *_eventAnnouncer;
    id <SCPerforming> _sectionDataUpdatePerformer;
    id <SCCollectionViewSectionSupplementaryViewProviding><SCCollectionViewSupplementaryViewModelsConfigurable> _supplementaryViewProvider;
    SCScrollToEndDetector *_scrollToEndDetector;
    NSString *_containerCellReuseIdentifier;
    SCCollectionViewCarouselSectionConfiguration *_carouselSectionConfiguration;
    NSArray *_containerCellViewModels;
    NSDictionary *_reuseCellClassesByIdentifiers;
    NSDictionary *_configurationBlockByIdentifiers;
    double _minimumInteritemSpacing;
    double _lastHeightFromLayoutCalculator;
    CDUnknownBlockType _modelCanUpdateComparator;
    SCSectionKitHeaderModel *_sectionHeaderModel;
    long long _experimentalPagingMode;
    _Bool _enableRTLSupportCollectionViewCell;
    UICollectionView *_carouselCollectionView;
    _Bool _shouldResetCarouselContentOffset;
    _Bool _bounces;
    _Bool _scrollEnabled;
    SCCollectionViewSectionUpdateModel *_sectionUpdateModel;
    id <SCCollectionViewSectionDelegate> _delegate;
    id <SCSearchIntentHandler> _intentHandler_DEPRECATED;
    long long _dataLoadingStatus;
    id <SCActionHandling> _actionHandler;
    id <SCSectionDataProviding> _sectionDataProvider;
    id <SCCollectionViewSectionLayoutProviding> _layoutCalculator;
    SCCollectionViewSectionDataProvidingScheduler *_dataProvidingScheduler;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_announceActionEventWithIndexPath:(id)arg1 actionModel:(id)arg2;
- (void)_announceCellWillDisplayEventWithIsDragging:(_Bool)arg1 isDecelerating:(_Bool)arg2 indexPath:(id)arg3 viewModel:(id)arg4 eventTime:(double)arg5;
- (void)_announceScrollEvent:(id)arg1 forVisibleCells:(id)arg2 extraData:(id)arg3;
- (id)_configuration;
- (_Bool)_heightUpdatedFromLayoutCalculator;
- (_Bool)_heightUpdatedWithContainerCellViewModels:(id)arg1 existingContainerCellViewModels:(id)arg2;
- (CDUnknownBlockType)_modelCanUpdateComparator;
- (void)_performBatchUpdateWithCollectionView:(id)arg1 cellViewModels:(id)arg2 modelCanUpdateComparator:(CDUnknownBlockType)arg3;
- (void)_performSectionDataProviderUpdateWithHeaderModel:(id)arg1 contentDataModel:(id)arg2;
- (void)_reloadSection;
- (void)_reloadSupplementaryViewModels:(id)arg1;
- (void)_resetConfiguration;
- (void)_resetScroll;
- (void)_setSectionDataModelFromConfiguration;
- (_Bool)_shouldReloadSectionWithCellViewModels:(id)arg1;
- (void)_updateDataLoadingStatus:(long long)arg1;
- (void)_updateSectionDataModel;
- (void)_updateSectionWithIndexPaths:(id)arg1 containerCellViewModels:(id)arg2 numberOfItemsBySection:(id)arg3;
- (void)_updateWithCellViewModels:(id)arg1 supplementaryViewModels:(id)arg2 shouldReloadSection:(_Bool)arg3 hasSupplementaryViewModelsChanged:(_Bool)arg4 insertIndexSet:(id)arg5 deleteIndexSet:(id)arg6 reloadIndexSet:(id)arg7 updateListIndices:(id)arg8;
- (void)_updateWithConfiguration;
- (void)_updateWithSectionDataProvider;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void)addListener:(id)arg1;
- (void)applyConfiguration:(id)arg1;
@property(nonatomic) _Bool bounces; // @synthesize bounces=_bounces;
- (id)cellForItemAtIndexInSection:(unsigned long long)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 atIndexInSection:(unsigned long long)arg3;
- (void)collectionViewDidEndDisplayingCell:(id)arg1 atIndexInSection:(unsigned long long)arg2;
- (struct UIEdgeInsets)containerCollectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)containerCollectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)containerCollectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)containerCollectionViewDidEndDecelerating:(id)arg1;
- (void)containerCollectionViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)containerCollectionViewDidScroll:(id)arg1;
- (void)containerCollectionViewWillBeginDragging:(id)arg1;
@property(nonatomic) long long dataLoadingStatus; // @synthesize dataLoadingStatus=_dataLoadingStatus;
@property(retain, nonatomic) SCCollectionViewSectionDataProvidingScheduler *dataProvidingScheduler; // @synthesize dataProvidingScheduler=_dataProvidingScheduler;
@property(nonatomic) __weak id <SCCollectionViewSectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (long long)experimentalPagingMode;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithSupplementaryViewProvider:(id)arg1;
- (id)initWithSupplementaryViewProvider:(id)arg1 containerCellReuseIdentifier:(id)arg2 enableRTLSupportCollectionViewCell:(_Bool)arg3;
- (id)initWithSupplementaryViewProvider:(id)arg1 enableRTLSupportCollectionViewCell:(_Bool)arg2;
@property(nonatomic) __weak id <SCSearchIntentHandler> intentHandler_DEPRECATED; // @synthesize intentHandler_DEPRECATED=_intentHandler_DEPRECATED;
@property(retain, nonatomic) id <SCCollectionViewSectionLayoutProviding> layoutCalculator; // @synthesize layoutCalculator=_layoutCalculator;
- (double)minimumSectionInteritemSpacing;
- (unsigned long long)numberOfCellsInSection;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)removeListener:(id)arg1;
- (id)reuseCellClassesByIdentifiers;
@property(nonatomic) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
- (void)scrollToEndDetector:(id)arg1 scrollViewWillReachEnd:(id)arg2;
@property(retain, nonatomic) id <SCSectionDataProviding> sectionDataProvider; // @synthesize sectionDataProvider=_sectionDataProvider;
- (void)sectionDataProviderDidUpdateViewModels:(id)arg1;
- (id)sectionInsets;
@property(copy, nonatomic) SCCollectionViewSectionUpdateModel *sectionUpdateModel; // @synthesize sectionUpdateModel=_sectionUpdateModel;
@property(nonatomic) _Bool shouldResetCarouselContentOffset; // @synthesize shouldResetCarouselContentOffset=_shouldResetCarouselContentOffset;
- (void)setUp;
- (void)shouldUpdateDataModelsFromDataProviding;
- (struct CGSize)sizeForItemAtIndex:(unsigned long long)arg1 width:(double)arg2;
- (struct CGSize)sizeForItemAtIndexInSection:(unsigned long long)arg1 withWidth:(double)arg2;
- (id)supplementaryViewProvider;
- (void)tearDown;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

