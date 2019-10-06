//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCSearchCollectionViewCell.h"

#import "SCActionable-Protocol.h"
#import "SCDiscoverFeedCollectionViewCellAnimating-Protocol.h"
#import "SCDiscoverFeedStoryTileWithCoverImageConfigurable-Protocol.h"
#import "SCDiscoverFeedTileOperaBaseViewProviding-Protocol.h"
#import "SCDiscoverFeedWhiteSpaceTileGestureHandling-Protocol.h"
#import "SCEventAnnouncing-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "SCViewModelConfigurable-Protocol.h"
#import "SCViewportConfigurable-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SCDiscoverFeedCollectionViewCellTapHandler, SCDiscoverFeedWhiteSpaceHeadlineView, SCDiscoverFeedWhiteSpaceProfileRowView, SCDiscoverFeedWhiteSpaceShowThumbnailView, SCEventListenerAnnouncer, SCLazy, UIView;
@protocol SCActionHandling, SCDiscoverFeedWhiteSpaceGestureCoordinating, SCImageDownloading;

@interface SCDiscoverFeedWhiteSpaceShowCell : SCSearchCollectionViewCell <UIGestureRecognizerDelegate, SCEventAnnouncing, SCEventListener, SCViewModelConfigurable, SCActionable, SCViewportConfigurable, SCDiscoverFeedStoryTileWithCoverImageConfigurable, SCDiscoverFeedCollectionViewCellAnimating, SCDiscoverFeedTileOperaBaseViewProviding, SCDiscoverFeedWhiteSpaceTileGestureHandling>
{
    UIView *_thumbnailAndHeadlineViewContainer;
    UIView *_thumbnailRoundedCornerContainer;
    SCDiscoverFeedWhiteSpaceShowThumbnailView *_showThumbnailView;
    SCDiscoverFeedWhiteSpaceHeadlineView *_headlineView;
    SCDiscoverFeedWhiteSpaceProfileRowView *_profileRowView;
    SCLazy *_postViewLayerLazy;
    SCLazy *_subscriptionIconViewLazy;
    SCLazy *_debugViewLazy;
    UIView *_thumbnailUpperArea;
    UIView *_thumbnailLowerArea;
    SCDiscoverFeedCollectionViewCellTapHandler *_thumbnailUpperHalfTapHandler;
    SCDiscoverFeedCollectionViewCellTapHandler *_thumbnailLowerHalfTapHandler;
    SCDiscoverFeedCollectionViewCellTapHandler *_thumbnailAndHeadlineTapHandler;
    SCDiscoverFeedCollectionViewCellTapHandler *_profileRowViewTapHandler;
    SCEventListenerAnnouncer *_eventAnnouncer;
    id <SCActionHandling> _actionHandler;
    id _viewModel;
    id <SCImageDownloading> _imageDownloader;
    id <SCDiscoverFeedWhiteSpaceGestureCoordinating> _gestureCoordinator;
    struct CGRect _viewportFrame;
}

+ (id)announcerIdentifier;
+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (void)_handleDebugGesture:(id)arg1;
- (void)_viewModelDidUpdate;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void)addListener:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
@property(retain, nonatomic) id <SCDiscoverFeedWhiteSpaceGestureCoordinating> gestureCoordinator; // @synthesize gestureCoordinator=_gestureCoordinator;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)operaBaseView;
- (void)removeListener:(id)arg1;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) struct CGRect viewportFrame; // @synthesize viewportFrame=_viewportFrame;
- (_Bool)shouldAnimateOnTap;
- (_Bool)shouldShowBackgroundView;
- (id)storyCoverImage;
- (void)viewportDidUpdateViewportFrame:(struct CGRect)arg1 dragging:(_Bool)arg2 decelerating:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

