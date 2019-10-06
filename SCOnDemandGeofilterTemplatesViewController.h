//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCOnDemandGeofilterBaseLeftSwipableViewController.h"

#import "SCHeaderDataSource-Protocol.h"
#import "SCHeaderDelegate-Protocol.h"
#import "SCOnDemandGeofilterCollectionViewCellDelegate-Protocol.h"
#import "SCOnDemandGeofilterDataControllerListener-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSIndexPath, NSString, SCHeader, SCLoadingIndicatorView, SCOnDemandGeofilterBlurredBackgroundView, SCOnDemandGeofilterCollectionViewLayout, SCOnDemandGeofilterDraftsEmptyStateView, SOJUUnlockablesOndemandAssetDraftList, SOJUUnlockablesOndemandTemplateCategory, UICollectionView, UIImageView;
@protocol SCOnDemandGeofilterSessionProtocol;

@interface SCOnDemandGeofilterTemplatesViewController : SCOnDemandGeofilterBaseLeftSwipableViewController <SCHeaderDataSource, SCHeaderDelegate, UICollectionViewDelegate, UICollectionViewDataSource, SCOnDemandGeofilterDataControllerListener, SCOnDemandGeofilterCollectionViewCellDelegate>
{
    id <SCOnDemandGeofilterSessionProtocol> _geofilterSession;
    SOJUUnlockablesOndemandTemplateCategory *_category;
    SOJUUnlockablesOndemandAssetDraftList *_assetDraftList;
    SCOnDemandGeofilterBlurredBackgroundView *_blurredBackgroundView;
    SCHeader *_header;
    UIImageView *_headerBGImageView;
    UICollectionView *_geofiltersCollectionView;
    NSIndexPath *_selectedIndexPath;
    SCOnDemandGeofilterCollectionViewLayout *_layout;
    unsigned long long _layoutType;
    unsigned long long _pickerType;
    SCOnDemandGeofilterDraftsEmptyStateView *_draftsEmptyStateView;
    _Bool _enableAssetDrafts;
    _Bool _loadHFCategory;
    SCLoadingIndicatorView *_loadingIndicator;
    _Bool _fromReviewView;
    _Bool _enableV11Theme;
}

- (void).cxx_destruct;
- (void)_deleteAssetDraft:(id)arg1;
- (void)_fetchHFTemplates;
- (void)_handleResponseWithTemplates:(id)arg1 productType:(long long)arg2 filterType:(unsigned long long)arg3 success:(_Bool)arg4;
- (void)_hideLoadingSpinner;
- (void)_presentDeleteActionSheet:(id)arg1;
- (void)_reloadDraftsCollectionView;
- (void)_showLoadingSpinner;
- (id)backgroundColorForHeader;
- (void)beginCellMoving:(id)arg1 forCell:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)dataController:(id)arg1 didFetchAssetDraftList:(id)arg2 success:(_Bool)arg3;
- (void)dataController:(id)arg1 didFetchOnDemandGeofilterTemplates:(id)arg2 productType:(long long)arg3 filterType:(unsigned long long)arg4 success:(_Bool)arg5;
@property(nonatomic) _Bool enableV11Theme; // @synthesize enableV11Theme=_enableV11Theme;
- (id)filterBitmojiTemplates:(id)arg1;
- (id)filterBitmojiTemplatesIfBitmojiAbsent:(id)arg1;
@property(nonatomic) _Bool fromReviewView; // @synthesize fromReviewView=_fromReviewView;
- (void)geofilterCellLoaded:(_Bool)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)initWithAssetDraftList:(id)arg1 andGeofilterSession:(id)arg2;
- (id)initWithHomeFilterCategory:(id)arg1 andGeofilterSession:(id)arg2;
- (id)initWithTemplateCategory:(id)arg1 andGeofilterSession:(id)arg2;
- (void)leftButtonPressed;
- (void)leftSwipeSucceed;
- (void)scrollViewDidScroll:(id)arg1;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
