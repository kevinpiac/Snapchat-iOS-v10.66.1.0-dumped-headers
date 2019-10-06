//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "SCOperaEventListener-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SCOperaArrowLayerView, UITapGestureRecognizer;

@interface SCOperaArrowLayerViewController : SCOperaLayerViewController <SCOperaEventListener, UIGestureRecognizerDelegate>
{
    SCOperaArrowLayerView *_layerView;
    UITapGestureRecognizer *_tapGesture;
    double _layerViewTouchHeight;
    _Bool _disableSwipeUp;
}

+ (id)_registeredEventsForOperaSession;
- (void).cxx_destruct;
- (void)_didTap:(id)arg1;
- (void)_setupTapGesture;
- (void)didReceiveUpdateProperties:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)loadView;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (void)teardown;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
- (void)viewDidFullyAppear;
- (void)viewDidFullyDisappear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

