//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCTraceEnabled-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SCExperimentManager, SCGrowingButton, SCLazy, UICollectionView, UIImageView;
@protocol SCImageDownloading;

@interface SCDiscoverFeedView : UIView <UIGestureRecognizerDelegate, SCTraceEnabled>
{
    SCGrowingButton *_scrollToTopButton;
    SCLazy *_getStartedViewLazy;
    SCLazy *_floatingPivotsViewLazy;
    SCExperimentManager *_experimentManager;
    _Bool _isAnimatingFloatingPivots;
    UICollectionView *_contentCollectionView;
    UIImageView *_scrollShadowView;
    double _cardBackgroundTopInset;
    id <SCImageDownloading> _imageDownloader;
}

- (void).cxx_destruct;
- (void)_addGetStartCoverView:(id)arg1;
- (void)_initializeFloatingPivotsViewIfNecessary:(id)arg1;
- (void)_scrollToTop;
@property(nonatomic) double cardBackgroundTopInset; // @synthesize cardBackgroundTopInset=_cardBackgroundTopInset;
@property(readonly, nonatomic) UICollectionView *contentCollectionView; // @synthesize contentCollectionView=_contentCollectionView;
- (void)didTap:(id)arg1;
- (void)fadeInFloatingPivotsView:(id)arg1;
- (void)fadeInScrollToTopButton;
- (void)fadeOutFloatingPivotsView;
- (void)fadeOutScrollToTopButton;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (struct CGRect)getStartedViewFrame;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
- (id)initWithDefaultCollectionViewLayout:(id)arg1 experimentManager:(id)arg2;
- (_Bool)isGetStartedOverlayActive;
- (void)layoutSubviews;
- (void)removeGetStartedOverlay;
@property(readonly, nonatomic) UIImageView *scrollShadowView; // @synthesize scrollShadowView=_scrollShadowView;
- (void)showGetStartedOverlayForSectionHeaderIndexPath:(id)arg1 actionHandler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

