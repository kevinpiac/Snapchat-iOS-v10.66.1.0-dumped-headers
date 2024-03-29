//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensCarouselPresenterProtocol-Protocol.h"
#import "SCLensDataProviderListener-Protocol.h"
#import "SCLensLifecycleListener-Protocol.h"
#import "SCLensUIUpdateListener-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSOrderedSet, NSString, SCLens, SCLensLayoutProvider, UICollectionView;
@protocol SCLensCarouselPresenterDelegate, SCLensDataProviderProtocol, SCLensUsageTrackerProtocol;

@interface SCLensCarouselPresenter : NSObject <SCTraceEnabled, SCLensCarouselPresenterProtocol, SCLensUIUpdateListener, SCLensDataProviderListener, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, SCLensLifecycleListener>
{
    CDUnknownBlockType _collectionViewInitializationBlock;
    UICollectionView *_lensCollectionView;
    SCLensLayoutProvider *_layoutProvider;
    id <SCLensDataProviderProtocol> _lensDataProvider;
    id <SCLensCarouselPresenterDelegate> _delegate;
    id <SCLensUsageTrackerProtocol> _lensUsageTracker;
    _Bool _lensesActive;
    _Bool _hasLeftCarousel;
    SCLens *_selectedLens;
    NSString *_lensIdToRestore;
    NSOrderedSet *_lensIndicesCache;
    double _createYourOwnToolTipViewAlpha;
    NSArray *_lenses;
}

- (void).cxx_destruct;
- (void)_adjustLensCellPositionAndScale:(id)arg1 atIndex:(long long)arg2;
- (struct CGPoint)_collectionViewCenterPoint;
- (void)_configureCell:(id)arg1 forIndex:(long long)arg2;
- (id)_defaultSelectedLens;
- (double)_distanceFromCenterToCenterOfCell:(id)arg1;
- (void)_fillIconAsynchronouslyForCell:(id)arg1 lens:(id)arg2 forIndex:(long long)arg3;
- (void)_fillIconForCell:(id)arg1 lens:(id)arg2 forIndex:(long long)arg3;
- (void)_fillIconSynchronously:(id)arg1 forCell:(id)arg2 lens:(id)arg3;
- (long long)_indexOfLensById:(id)arg1;
- (id)_lensWithIndex:(long long)arg1;
- (void)_metricsForOriginalCell:(id)arg1 outAlpha:(double *)arg2 outScale:(double *)arg3;
- (double)_offsetForCell:(id)arg1 currentScale:(double)arg2 maximumScale:(double)arg3;
- (double)_scaleForCell:(id)arg1 maximumScale:(double)arg2;
- (unsigned long long)_selectLensWithId:(id)arg1 animated:(_Bool)arg2;
- (long long)_statusForLens:(id)arg1;
- (unsigned long long)_updateCurrentLensesSelection;
- (void)adjustLenseViewCollectionVisibleCellsScale;
- (id)cellAtIndex:(long long)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (unsigned long long)currentSelectedLensIndex;
- (void)didEndDisplayingLens:(id)arg1;
- (void)didHideLenses;
- (void)didLoadResourcesForLensWithId:(id)arg1;
- (void)didSelectLens:(id)arg1;
- (void)didTurnOffLensWithId:(id)arg1;
- (void)didTurnOnLensWithId:(id)arg1;
- (void)didUpdateActiveLensOrder:(id)arg1;
- (unsigned long long)indexOfItemToSnapForPoint:(struct CGPoint)arg1 layout:(id)arg2;
- (id)initWithLensCollectionViewBlock:(CDUnknownBlockType)arg1 layoutProvider:(id)arg2 lensDataProvider:(id)arg3 lensUsageTracker:(id)arg4 delegate:(id)arg5;
- (id)lensCollectionView;
- (void)lensDataProvider:(id)arg1 didUpdateAllLenses:(id)arg2 requiresAnimation:(_Bool)arg3;
- (void)lensDataProvider:(id)arg1 didUpdateLens:(id)arg2 contentUpdateType:(long long)arg3;
- (id)lensFromCurrentArrayByLensId:(id)arg1;
@property(readonly, nonatomic) NSArray *lenses; // @synthesize lenses=_lenses;
- (struct CGPoint)pointForTargetContentOffset:(struct CGPoint)arg1;
- (void)reloadCellWithLens:(id)arg1;
- (void)scrollLensesCollectionToItem:(unsigned long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)selectLensAccordingScrollViewContentOffset:(id)arg1;
- (void)selectLensAtIndex:(unsigned long long)arg1;
- (void)selectLensAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)selectLensToTheLeftAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)selectLensToTheRightAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)selectLensWithId:(id)arg1 animated:(_Bool)arg2;
- (id)selectedLens;
- (void)setLensIdToRestore:(id)arg1;
- (void)setLenses:(id)arg1;
- (void)updateCurrentLensesSelection;
- (void)updateLensesList:(id)arg1;
- (void)willDisplayLens:(id)arg1;
- (void)willShowLenses;
- (void)willTurnOffLensWithId:(id)arg1;
- (void)willTurnOnLensWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

