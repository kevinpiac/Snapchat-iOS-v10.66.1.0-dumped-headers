//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "SCOperaFadeTransitionCompatibleViewController-Protocol.h"
#import "SCOperaInteractionButtonsLayerViewDelegate-Protocol.h"

@class NSString, SCOperaInteractionButtonsLayerView;

@interface SCOperaInteractionButtonsLayerViewController : SCOperaLayerViewController <SCOperaInteractionButtonsLayerViewDelegate, SCOperaFadeTransitionCompatibleViewController>
{
    SCOperaInteractionButtonsLayerView *_layerView;
    _Bool _magicMomentButtonEnabled;
}

- (void).cxx_destruct;
- (void)boomboxButtonPressed:(id)arg1;
- (void)cameraButtonPressed:(id)arg1;
- (id)currentViewParameters;
- (void)didReceiveUpdateProperties:(id)arg1;
- (void)editButtonPressed:(id)arg1;
- (id)fadingViewsForFadeTransition;
- (id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3;
- (void)loadView;
- (void)magicMomentButtonPressed:(id)arg1;
- (id)movingViewsForFadeTransition;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (void)sendButtonPressed:(id)arg1;
- (_Bool)shouldToggleMagicMoment;
- (void)teardown;
- (void)updateViewWithHorizontalPageOffset:(double)arg1 isCurrentPage:(_Bool)arg2;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

