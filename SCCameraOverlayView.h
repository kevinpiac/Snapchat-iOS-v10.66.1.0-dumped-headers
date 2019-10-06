//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCFeatureContainerView-Protocol.h"
#import "SCLensGestureViewProvider-Protocol.h"
#import "SCLensUserInterfaceDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class CALayer, NSArray, NSString, NSTimer, SCCameraFooterView, SCEffectViewportFragment, SCGrowingButton, SCLongPressAnimationView, SCLongPressGestureRecognizer, SCLongPressParticleAnimationView, SCNavigationBarButtonItem, SCNavigationItemView, SCPreviewTooltipBalloon, UILabel, UIPanGestureRecognizer, UIPinchGestureRecognizer, UISwipeGestureRecognizer, UITapGestureRecognizer;
@protocol SCCameraOverlayDelegate><UIGestureRecognizerDelegate, SCCameraOverlayDelegateWithLensDelegate><UIGestureRecognizerDelegate, SCCameraTimer;

@interface SCCameraOverlayView : UIView <SCTraceEnabled, SCLensUserInterfaceDelegate, SCFeatureContainerView, SCLensGestureViewProvider>
{
    UIView *_galleryIcon;
    _Bool _cameraButtonHidden;
    _Bool _shouldDisplayVideoHelp;
    SCPreviewTooltipBalloon *_profileButtonNewTooltip;
    SCEffectViewportFragment *_effectViewportFragment;
    CALayer *_shadowLayer;
    id <SCCameraOverlayDelegateWithLensDelegate><UIGestureRecognizerDelegate> _delegate;
    UIView<SCCameraTimer> *_cameraTimer;
    SCCameraFooterView *_footerView;
    UIView *_lensGestureView;
    UIView *_helpTapAndHoldScreen;
    NSString *_pendingDeeplinkBitmojiLensId;
    SCNavigationBarButtonItem *_lensNavigationItem;
    UIView *_hovaNavigationLineSeparator;
    NSArray *_UIAutomationUsedElements;
    SCNavigationBarButtonItem *_portraitModeNavigationItem;
    UIView *_liveDisplayContainerView;
    SCNavigationItemView *_cameraAccessoryButtonsView;
    SCGrowingButton *_replyBackButtonLeft;
    SCGrowingButton *_profileButton;
    UILabel *_lensesActivationTooltip;
    UILabel *_longPressToolTip;
    SCLongPressAnimationView *_longPressAnimationView;
    SCLongPressParticleAnimationView *_longPressParticleView;
    NSTimer *_timerForHideProfileTooltip;
    UIView *_hidableViewContainer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    SCLongPressGestureRecognizer *_longPressOnCameraTimerGestureRecognizer;
    SCLongPressGestureRecognizer *_longPressGestureRecognizer;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UISwipeGestureRecognizer *_rightSwipeGestureRecognizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *UIAutomationUsedElements; // @synthesize UIAutomationUsedElements=_UIAutomationUsedElements;
- (void)_addShadowsAsynchronously;
- (double)_cameraTimerBottomOffset;
- (void)_dismissProfileButtonNewToolTip:(_Bool)arg1 delay:(double)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_dismissTooltip:(id)arg1 animated:(_Bool)arg2 delay:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleSwipeOnProfileButtonTooltip:(id)arg1;
- (void)_hideCameraHelpTooltip;
- (void)_hideCameraHelpTooltipWithLogging;
- (void)_insertSublayer:(id)arg1 atIndexInFrontOfLiveDisplay:(unsigned int)arg2;
- (void)_insertSubview:(id)arg1 atIndex:(long long)arg2;
- (id)_makeLensesActiviationTooltip;
- (void)_setShadowsHidden:(_Bool)arg1;
- (void)_showCameraHelpTooltip;
- (void)_updateRoundButtonViewportFragment;
- (void)abortSnapRecordingIfNeeded;
- (id)accessibilityElements;
@property(retain, nonatomic) SCNavigationItemView *cameraAccessoryButtonsView; // @synthesize cameraAccessoryButtonsView=_cameraAccessoryButtonsView;
@property(retain, nonatomic) UIView<SCCameraTimer> *cameraTimer; // @synthesize cameraTimer=_cameraTimer;
@property(readonly, nonatomic) double cameraTimerAndReplyButtonBottomInset;
- (id)cameraTimerCopy;
- (struct CGRect)cameraTimerFrame;
- (struct CGRect)cameraTimerFrameInView:(id)arg1;
- (void)configureCameraAccessoryButtons;
@property(readonly, nonatomic) __weak id <SCCameraOverlayDelegate><UIGestureRecognizerDelegate> delegate;
- (void)didMoveToSuperview;
- (void)didSelectLens;
@property(readonly, nonatomic) SCCameraFooterView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) __weak UIView *helpTapAndHoldScreen; // @synthesize helpTapAndHoldScreen=_helpTapAndHoldScreen;
@property(readonly, nonatomic) UIView *hidableViewContainer; // @synthesize hidableViewContainer=_hidableViewContainer;
- (void)hideLensesActivationTooltipAnimated:(_Bool)arg1;
- (void)hideLongPressAnimationWithSuccess:(_Bool)arg1;
- (void)hideLongPressTooltip;
- (void)hideProfileTooltip;
@property(retain, nonatomic) UIView *hovaNavigationLineSeparator; // @synthesize hovaNavigationLineSeparator=_hovaNavigationLineSeparator;
- (id)initWithDelegate:(id)arg1;
- (struct CGRect)initialCameraTimerFrame;
- (void)insertSubview:(id)arg1 atIndex:(long long)arg2;
- (void)insertSubview:(id)arg1 atIndexInFrontOfLiveDisplay:(long long)arg2;
- (void)interruptButtonTouchesBeforeRecording;
- (_Bool)isAccessibilityElement;
- (_Bool)isCameraHelpTooltipVisible;
- (_Bool)isLensesActivationTooltipVisible;
- (_Bool)isLongPressGestureRecognizer:(id)arg1;
- (_Bool)isLongPressOnCameraTimerGestureRecognizer:(id)arg1;
- (_Bool)isPanGestureRecognizer:(id)arg1;
- (_Bool)isPinchGestureRecognizer:(id)arg1;
- (_Bool)isRightSwipeGestureRecognizer:(id)arg1;
- (_Bool)isSwipeGestureRecognizerForProfileToolTip:(id)arg1;
- (_Bool)isTapGestureRecognizer:(id)arg1;
- (void)layoutSubviews;
- (void)lensCarouselWasHiddenFromLens;
- (void)lensCarouselWasShownFromLens;
@property(retain, nonatomic) UIView *lensGestureView; // @synthesize lensGestureView=_lensGestureView;
@property(retain, nonatomic) SCNavigationBarButtonItem *lensNavigationItem; // @synthesize lensNavigationItem=_lensNavigationItem;
@property(retain, nonatomic) UILabel *lensesActivationTooltip; // @synthesize lensesActivationTooltip=_lensesActivationTooltip;
@property(retain, nonatomic) UIView *liveDisplayContainerView; // @synthesize liveDisplayContainerView=_liveDisplayContainerView;
@property(nonatomic) __weak SCLongPressAnimationView *longPressAnimationView; // @synthesize longPressAnimationView=_longPressAnimationView;
@property(retain, nonatomic) SCLongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) SCLongPressGestureRecognizer *longPressOnCameraTimerGestureRecognizer; // @synthesize longPressOnCameraTimerGestureRecognizer=_longPressOnCameraTimerGestureRecognizer;
@property(nonatomic) __weak SCLongPressParticleAnimationView *longPressParticleView; // @synthesize longPressParticleView=_longPressParticleView;
@property(retain, nonatomic) UILabel *longPressToolTip; // @synthesize longPressToolTip=_longPressToolTip;
- (void)moveLongPressAnimationToPoint:(struct CGPoint)arg1;
- (void)moveLongPressOnCameraTimerGestureRecognizerToLensHierarchy;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(readonly, nonatomic) NSString *pendingDeeplinkBitmojiLensId; // @synthesize pendingDeeplinkBitmojiLensId=_pendingDeeplinkBitmojiLensId;
@property(retain, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer; // @synthesize pinchGestureRecognizer=_pinchGestureRecognizer;
- (_Bool)point:(struct CGPoint)arg1 insideFrame:(struct CGRect)arg2;
- (_Bool)pointInsideAdjustedCameraTimerButton:(struct CGPoint)arg1;
- (_Bool)pointInsideButton:(struct CGPoint)arg1;
- (_Bool)pointInsideCameraButton:(struct CGPoint)arg1;
- (_Bool)pointInsideFooterView:(struct CGPoint)arg1;
- (_Bool)pointInsideReplyButton:(struct CGPoint)arg1;
@property(retain, nonatomic) SCNavigationBarButtonItem *portraitModeNavigationItem; // @synthesize portraitModeNavigationItem=_portraitModeNavigationItem;
@property(retain, nonatomic) SCGrowingButton *profileButton; // @synthesize profileButton=_profileButton;
@property(readonly, nonatomic) SCPreviewTooltipBalloon *profileButtonNewTooltip;
- (void)removeCurrentLensIconFromCameraButton;
@property(retain, nonatomic) SCGrowingButton *replyBackButtonLeft; // @synthesize replyBackButtonLeft=_replyBackButtonLeft;
- (void)resetCameraHelpTooltipVisibility;
- (void)resetCameraTimerAndLeftRightBackButtonsY;
- (void)resetCameraTimerFrame;
- (void)resetLeftRightBackButtonsY:(double)arg1;
- (void)resetTapGestureRecognizers;
- (void)restoreLongPressOnCameraTimerGestureRecognizer;
@property(retain, nonatomic) UISwipeGestureRecognizer *rightSwipeGestureRecognizer; // @synthesize rightSwipeGestureRecognizer=_rightSwipeGestureRecognizer;
- (void)setAccessoryButtonsHidden:(_Bool)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)setActionButtonsHidden:(_Bool)arg1;
- (void)setAllButtonsHidden:(_Bool)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)setAllInterfaceElementsHidden:(_Bool)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)setAlpha:(double)arg1;
- (void)setButtonsForState:(long long)arg1;
- (void)setCameraButtonHidden:(_Bool)arg1;
- (void)setCameraButtonHidden:(_Bool)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)setCameraTimerState:(long long)arg1 animated:(_Bool)arg2;
- (void)setGalleryIcon:(id)arg1;
- (void)setLensesActivationTooltipVisible:(_Bool)arg1 text:(id)arg2 animated:(_Bool)arg3;
- (void)setLensesActive:(_Bool)arg1 appearanceConfiguration:(id)arg2 activationState:(id)arg3;
- (void)setMemoriesGalleryButtonHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setPanGestureRecognizerEnabled:(_Bool)arg1;
- (void)setReplyNavigationHidden:(_Bool)arg1;
- (void)setRightSwipeGestureRecognizerEnabled:(_Bool)arg1;
- (void)setShouldDisplayVideoHelp:(_Bool)arg1;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) NSTimer *timerForHideProfileTooltip; // @synthesize timerForHideProfileTooltip=_timerForHideProfileTooltip;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (_Bool)shouldShowLensHints;
- (_Bool)shouldShowTooltipAndProfileButton:(long long)arg1;
- (void)showLensesActivationTooltip;
- (void)showLensesActivationTooltipWithText:(id)arg1;
- (void)showLongPressAnimationAtPoint:(struct CGPoint)arg1;
- (void)showLongPressTooltip:(id)arg1;
- (void)stopCameraTimerAnimationAndSaveState:(_Bool)arg1;
- (void)throbLongPressView;
- (double)yPositionForNavigationItemControlsInView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

