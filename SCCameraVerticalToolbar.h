//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCFeature.h"

#import "SCCameraGestureResponder-Protocol.h"
#import "SCCameraToolbarButtonDelegate-Protocol.h"
#import "SCCaptureWorkflowTransitionAnimatableFeature-Protocol.h"
#import "SCFeatureCameraToolbar-Protocol.h"
#import "SCManagedCapturerListener-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, SCCameraOverlayView, SCCameraToolbarButton, SCCameraVerticalToolbarSplitter, SCDisposableObserverLifecycle, SCFeatureReference, SCLazy, SCNavigationBarButtonItem, SCUserSession, UIView;
@protocol SCCapturer, SCFeatureCameraToolbarDelegate;

@interface SCCameraVerticalToolbar : SCFeature <SCManagedCapturerListener, SCCameraToolbarButtonDelegate, SCFeatureCameraToolbar, SCCameraGestureResponder, SCCaptureWorkflowTransitionAnimatableFeature>
{
    _Bool _lazyLoadingFinished;
    _Bool _areAllItemsHidden;
    id <SCCapturer> _capturer;
    SCUserSession *_userSession;
    SCFeatureReference *_cameraUserActionLogger;
    NSMutableArray *_lazyLoadItems;
    NSMutableDictionary *_lazyLoadItemsInfo;
    NSMutableArray *_alwaysShowButtons;
    NSMutableArray *_topBarButtons;
    NSMutableArray *_bottomBarButtons;
    NSMutableDictionary *_allButtons;
    NSMutableDictionary *_buttonObserverLifecycles;
    SCDisposableObserverLifecycle *_appLifecycle;
    SCDisposableObserverLifecycle *_vcLifecycle;
    SCDisposableObserverLifecycle *_mainCameraVCLifecycle;
    SCCameraToolbarButton *_currentSelectedCollapsableButton;
    SCCameraOverlayView *_containerView;
    SCLazy *_toolbarBackgroundView;
    SCLazy *_toolbarView;
    SCNavigationBarButtonItem *_passthroughButtonItem;
    long long _cameraViewType;
    unsigned long long _dropdownTapCount;
    _Bool _introAnimationInProgress;
    _Bool _introAnimationShouldStop;
    _Bool _expanded;
    id <SCFeatureCameraToolbarDelegate> _delegate;
    SCCameraVerticalToolbarSplitter *_topBarSplitter;
    SCCameraVerticalToolbarSplitter *_bottomBarSplitter;
    SCCameraToolbarButton *_expandButton;
    SCCameraToolbarButton *_collapseButton;
    SCCameraToolbarButton *_expandAndCollapseButton;
}

- (void).cxx_destruct;
- (void)_addToolbarItem:(id)arg1;
- (void)_cameraToolbarItemDidChangeSelected:(id)arg1;
- (void)_createAndSetupView:(id)arg1;
- (_Bool)_depthCaptureSupported;
- (void)_lazyLoadExpandedItems;
- (void)_onCameraToolbarButtonTap:(id)arg1;
- (double)_positionButtons:(id)arg1 startingAtY:(double)arg2 margin:(double)arg3;
- (double)_positionView:(id)arg1 atY:(double)arg2 margin:(double)arg3;
- (void)_prepareForUITest;
- (void)_rotateExpandAndCollapseButtonClockwise:(_Bool)arg1;
- (void)_setupToolbarItemsWithFeatures:(id)arg1;
- (_Bool)_shouldShowIntroAnimation:(long long)arg1 withActivationMethod:(unsigned long long)arg2;
- (void)_startBounceIntroAnimation;
- (void)_startRotateAnimationWithIcons:(id)arg1 sequence:(long long)arg2;
- (void)_startRotateIntroAnimation;
- (double)_toolBarViewYOffset;
- (void)_updateAlpha;
- (void)_updateBottomBarSplitter;
- (void)_updateExpandAndCollapseButton;
- (void)_updateFeatureButtonsAlpha;
- (void)_updateLayout;
- (void)_updateSelectedTopButtonTitleAlpha;
- (void)_updateTopBarSplitter;
- (void)_updateTopBarSplitterAlpha;
- (void)_updateWithAnimated:(_Bool)arg1 duration:(double)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)accessibilityElements;
- (void)activate;
- (void)addToolbarItem:(id)arg1;
@property(retain, nonatomic) SCCameraVerticalToolbarSplitter *bottomBarSplitter; // @synthesize bottomBarSplitter=_bottomBarSplitter;
- (_Bool)cameraToolbarButtonCanChangeSelected:(id)arg1;
@property(retain, nonatomic) SCCameraToolbarButton *collapseButton; // @synthesize collapseButton=_collapseButton;
- (void)collapseToolbarAnimated:(_Bool)arg1;
- (void)collapseToolbarAnimated:(_Bool)arg1 isSelectionChanged:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)configureWithView:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <SCFeatureCameraToolbarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SCCameraToolbarButton *expandAndCollapseButton; // @synthesize expandAndCollapseButton=_expandAndCollapseButton;
@property(retain, nonatomic) SCCameraToolbarButton *expandButton; // @synthesize expandButton=_expandButton;
- (void)expandToolbarAnimated:(_Bool)arg1;
- (void)expandToolbarAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleLongPressGesture:(id)arg1;
- (void)hideToolbarItem:(id)arg1 animated:(_Bool)arg2;
- (id)initWithCapturer:(id)arg1 features:(id)arg2 applicationLifecycleEvents:(id)arg3 viewControllerLifecycleEvents:(id)arg4 mainCameraViewControllerLifecycleEvents:(id)arg5 cameraViewType:(long long)arg6 userSession:(id)arg7 cameraUserActionLogger:(id)arg8;
@property(readonly, nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
- (_Bool)isItemHidden:(id)arg1;
- (void)managedCapturer:(id)arg1 didCancelRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3;
- (void)managedCapturer:(id)arg1 didFailRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3 error:(id)arg4;
- (void)managedCapturer:(id)arg1 didFinishRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3 recordedVideo:(id)arg4;
- (void)managedCapturer:(id)arg1 didGetError:(id)arg2 forType:(long long)arg3 session:(CDStruct_4565c1ff)arg4;
- (void)managedCapturer:(id)arg1 willBeginVideoRecording:(id)arg2;
@property(readonly, nonatomic) SCNavigationBarButtonItem *passthroughButtonItem;
- (void)reloadToolbar:(_Bool)arg1;
- (void)removeToolbarItem:(id)arg1;
- (void)resetMetrics;
- (void)setAllItemsHidden:(_Bool)arg1 includingAlwaysShowItems:(_Bool)arg2 animated:(_Bool)arg3;
- (void)setToolbarItem:(id)arg1 selected:(_Bool)arg2;
@property(retain, nonatomic) SCCameraVerticalToolbarSplitter *topBarSplitter; // @synthesize topBarSplitter=_topBarSplitter;
- (_Bool)shouldBlockTouchAtPoint:(struct CGPoint)arg1;
- (void)showToolbarItem:(id)arg1 animated:(_Bool)arg2;
- (void)startAnimation:(CDUnknownBlockType)arg1;
- (void)startIntroAnimationWithActivationMethod:(unsigned long long)arg1;
- (void)stopIntroAnimation;
@property(readonly, nonatomic) UIView *toolbarView;
- (void)transitionWithNavigationItemView:(id)arg1;
- (void)updateToolbarPositionAnimated:(_Bool)arg1 duration:(double)arg2;
- (id)usageMetrics;
- (id)viewForToolbarItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

