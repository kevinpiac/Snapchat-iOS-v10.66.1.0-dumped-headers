//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCFeature.h"

#import "SCFeatureLensExplorerSwipeUp-Protocol.h"
#import "SCFeatureLensFeedTooltipDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SCDisposableObserver, SCFeatureReference, SCLazy, SCPreferences, UIGestureRecognizer, UIView;
@protocol SCFeatureCameraUIArbitrator, SCLensUserProvider, SCSwipeViewParentDelegate, UIGestureRecognizerDelegate;

@interface SCFeatureLensExplorerSwipeUpImpl : SCFeature <UIGestureRecognizerDelegate, SCFeatureLensFeedTooltipDelegate, SCFeatureLensExplorerSwipeUp>
{
    SCFeatureReference *_lensFeedFeature;
    SCFeatureReference *_lensCarouselRef;
    UIGestureRecognizer *_panGestureRecognizer;
    SCLazy *_lensExplorerToolTipManager;
    id <SCLensUserProvider> _lensUserProvider;
    SCPreferences *_lensPreferences;
    UIView *_view;
    _Bool _isFeatureActivated;
    _Bool _isEnabledToPresent;
    SCDisposableObserver *_disposableObserver;
    id <UIGestureRecognizerDelegate> _gestureRecognizersDelegate;
    id <SCSwipeViewParentDelegate> _swipeViewParentDelegate;
    id <SCFeatureCameraUIArbitrator> _cameraTooltipArbitrator;
    unsigned long long _tooltipStrict;
}

- (void).cxx_destruct;
- (void)_activateIfNeeded;
- (void)_pan:(id)arg1;
- (void)_toggleTooltipStrictBit:(unsigned long long)arg1 enabled:(_Bool)arg2;
- (void)activate;
- (void)addBeRequiredToFailByGestureRecognizer:(id)arg1;
@property(nonatomic) __weak id <SCFeatureCameraUIArbitrator> cameraTooltipArbitrator; // @synthesize cameraTooltipArbitrator=_cameraTooltipArbitrator;
- (void)configureWithView:(id)arg1;
- (void)didEndRecording;
- (void)didSelectLens:(id)arg1 isSnappable:(_Bool)arg2;
- (void)didStartRecording;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
@property(nonatomic) __weak id <UIGestureRecognizerDelegate> gestureRecognizersDelegate; // @synthesize gestureRecognizersDelegate=_gestureRecognizersDelegate;
- (id)initWithLensFeedFeature:(id)arg1 lensCarousel:(id)arg2 lensPreferences:(id)arg3 lensUserProvider:(id)arg4;
- (_Bool)isPanUpGestureRecognizer:(id)arg1;
- (void)lensFeedFeature:(id)arg1 didRequestTooltipVisible:(_Bool)arg2;
- (id)panGestureRecognizer;
- (void)setCameraUIVisible:(_Bool)arg1 animated:(_Bool)arg2 arbitrator:(id)arg3;
@property(nonatomic) __weak id <SCSwipeViewParentDelegate> swipeViewParentDelegate; // @synthesize swipeViewParentDelegate=_swipeViewParentDelegate;
@property(nonatomic) unsigned long long tooltipStrict; // @synthesize tooltipStrict=_tooltipStrict;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
