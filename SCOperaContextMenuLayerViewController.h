//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "SCOperaArrowDisplayable-Protocol.h"
#import "SCPageNameLogging-Protocol.h"

@class NSString, SCOperaContextMenuLayerView, UIView;
@protocol SCContextPresenting;

@interface SCOperaContextMenuLayerViewController : SCOperaLayerViewController <SCOperaArrowDisplayable, SCPageNameLogging>
{
    SCOperaContextMenuLayerView *_layerView;
    id <SCContextPresenting> _contextMenuController;
    _Bool _pageability;
    _Bool _isLayerViewFaded;
    _Bool _isLayerViewSuppressed;
    _Bool _presenterWantsCTAHidden;
    UIView *_swipeUpGestureView;
    UIView *_header;
}

- (void).cxx_destruct;
- (_Bool)_isContextMenuPresented;
- (void)_setLayerVisible:(_Bool)arg1;
- (void)_setOperaUIPreparedForContentPresented:(_Bool)arg1;
- (void)_updateLayerVisibility;
- (id)currentViewParameters;
- (void)didReceiveUpdateProperties:(id)arg1;
@property(readonly, nonatomic) UIView *header; // @synthesize header=_header;
- (_Bool)isRecyclable;
- (void)loadView;
- (id)pageViewName;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (void)prepareOperaUIForShowingSwipeUpContent;
- (void)prepareOperaUIForSwipeUpContentDismissed;
@property(nonatomic) _Bool presenterWantsCTAHidden; // @synthesize presenterWantsCTAHidden=_presenterWantsCTAHidden;
- (void)requestNativeVolumeUI:(_Bool)arg1;
- (void)resume;
- (void)resumePlaybackIfNecessary;
- (void)setPageability:(long long)arg1;
@property(nonatomic) __weak UIView *swipeUpGestureView; // @synthesize swipeUpGestureView=_swipeUpGestureView;
- (void)teardown;
- (void)updateViewWithHorizontalPageOffset:(double)arg1 isCurrentPage:(_Bool)arg2;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
- (void)viewWillFullyAppear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

