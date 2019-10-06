//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCOnDemandGeofilterBaseLeftSwipableViewController.h"

#import "SCHeaderDataSource-Protocol.h"
#import "SCHeaderDelegate-Protocol.h"
#import "TTTAttributedLabelDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSString, SCHeader, SCOnDemandGeoProductSelectionSubview, SCOnDemandGeofilterBlurredBackgroundView, UIImageView, UIScrollView;

@interface SCOnDemandGeoProductSelectionViewController : SCOnDemandGeofilterBaseLeftSwipableViewController <SCHeaderDelegate, SCHeaderDataSource, TTTAttributedLabelDelegate, UIScrollViewDelegate>
{
    SCOnDemandGeofilterBlurredBackgroundView *_blurredBackgroundView;
    SCHeader *_header;
    UIImageView *_headerBGImageView;
    UIScrollView *_scrollView;
    SCOnDemandGeoProductSelectionSubview *_draftView;
    SCOnDemandGeoProductSelectionSubview *_filterView;
    SCOnDemandGeoProductSelectionSubview *_lensView;
}

- (void).cxx_destruct;
- (void)_cleanUpSessionLineItem;
- (void)_initiateIAPPayment:(id)arg1;
- (void)_presentDirectlyToCreativeStudio;
- (void)_presentWebViewWithUrl:(id)arg1 title:(id)arg2;
- (void)_proceedToOccasionsWithProductType:(long long)arg1;
- (double)_topLayoutOriginY;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (id)backgroundColorForHeader;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (void)leftButtonPressed;
- (void)leftSwipeCancelled;
- (void)leftSwipePrepare;
- (void)leftSwipeSucceed;
- (void)rightButtonPressed;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tapDraftButton:(id)arg1;
- (void)tapFilterButton:(id)arg1;
- (void)tapLensButton:(id)arg1;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)viewModelForDraft:(id)arg1;
- (id)viewModelForFilter;
- (id)viewModelForLens;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
