//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSSet, SCExperimentManager, SCFilterCarouselLoggingParameters, SCSmartCarouselStackingManager, SCSmartCarouselSwipeOrder;
@protocol SCPreviewFilterVisualNamesProvider, SCSmartCarouselFilterArrangerDelegate, SCSmartCarouselFilterArrangerSwipeStateDataSource;

@interface SCSmartCarouselFilterArranger : NSObject
{
    NSMutableArray *_currentFilters;
    NSMutableDictionary *_configDict;
    SCSmartCarouselSwipeOrder *_allFilters;
    _Bool _isFromGallery;
    _Bool _didSetSwipeDirectionForGeofilters;
    SCExperimentManager *_experimentManager;
    NSSet *_multiStackableGeofilterCarouselGroupNames;
    _Bool _mediaFiltersDisabled;
    id <SCSmartCarouselFilterArrangerDelegate> _delegate;
    id <SCSmartCarouselFilterArrangerSwipeStateDataSource> _swipeStateDataSource;
    SCFilterCarouselLoggingParameters *_loggingParameters;
    id <SCPreviewFilterVisualNamesProvider> _filterVisualNamesProvider;
    SCSmartCarouselStackingManager *_stackingManager;
}

- (void).cxx_destruct;
- (_Bool)_canAddFilter:(id)arg1 config:(id)arg2;
- (_Bool)_canStackGeofilterItem:(id)arg1 withGeofilterItem:(id)arg2;
- (void)_insertCurrentItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)_shouldDisableItem:(id)arg1;
- (void)addOrUpdateFilterName:(id)arg1 config:(id)arg2 type:(long long)arg3;
- (id)allFilters;
- (id)autoStackedItemForFilterName:(id)arg1;
- (_Bool)canStackMoreFilters;
- (id)configForFilterName:(id)arg1;
- (_Bool)containsAnyFilterName:(id)arg1;
- (_Bool)containsFilterName:(id)arg1;
- (long long)currentFilterCount;
- (long long)currentIndexOfFilterItem:(id)arg1;
- (long long)currentIndexOfFilterName:(id)arg1;
@property(nonatomic) __weak id <SCSmartCarouselFilterArrangerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didSetSwipeDirectionForGeofilters;
- (id)filterItemAtIndex:(long long)arg1;
@property(retain, nonatomic) id <SCPreviewFilterVisualNamesProvider> filterVisualNamesProvider; // @synthesize filterVisualNamesProvider=_filterVisualNamesProvider;
- (_Bool)hasManuallyStackedFilterWithMediaCommands;
- (_Bool)hasSpectaclesLensFilter;
- (_Bool)hasSpectaclesLensFilterStacked;
- (id)initWithFilterNamesProvider:(id)arg1 fromGallery:(_Bool)arg2 experimentManager:(id)arg3 carouselGroupConfigParser:(id)arg4;
- (_Bool)isSwipeDirectionForGeofiltersSet;
- (long long)logIndexFromFilterName:(id)arg1;
@property(copy, nonatomic) SCFilterCarouselLoggingParameters *loggingParameters; // @synthesize loggingParameters=_loggingParameters;
@property(nonatomic) _Bool mediaFiltersDisabled; // @synthesize mediaFiltersDisabled=_mediaFiltersDisabled;
- (id)namesForCurrentFiltersWithMediaCommands;
- (id)namesForStackedFiltersWithMediaCommands;
- (void)recoverToInitialState;
- (void)reloadFromSwipeOrderWithExtraConstraint:(CDUnknownBlockType)arg1;
- (void)removeFilterName:(id)arg1 filterType:(long long)arg2;
@property(nonatomic) __weak id <SCSmartCarouselFilterArrangerSwipeStateDataSource> swipeStateDataSource; // @synthesize swipeStateDataSource=_swipeStateDataSource;
- (void)stackFilterItem:(id)arg1;
- (id)stackedFilterWithRemoveableEffectFilter;
@property(readonly, nonatomic) SCSmartCarouselStackingManager *stackingManager; // @synthesize stackingManager=_stackingManager;
- (_Bool)stacksOrIsMediaFilter:(id)arg1;
- (void)swipeStateChanged;
- (long long)totalFilterCount;
- (void)unstackFilter:(id)arg1;
- (long long)unstackToSingleSwipe;
- (void)updateCurrentFilterItemWithBackgroundFilterType:(long long)arg1 hasBackgroundFilter:(_Bool)arg2;
- (id)visualFilterNames;

@end
