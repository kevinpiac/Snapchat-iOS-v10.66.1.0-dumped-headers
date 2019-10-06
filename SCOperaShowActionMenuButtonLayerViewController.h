//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "SCOperaEventListener-Protocol.h"
#import "SCOperaFadeTransitionCompatibleViewController-Protocol.h"
#import "SCOperaShowActionMenuButtonLayerViewDelegate-Protocol.h"

@class NSString, SCOperaShowActionMenuButtonLayerView;

@interface SCOperaShowActionMenuButtonLayerViewController : SCOperaLayerViewController <SCOperaShowActionMenuButtonLayerViewDelegate, SCOperaFadeTransitionCompatibleViewController, SCOperaEventListener>
{
    SCOperaShowActionMenuButtonLayerView *_layerView;
}

- (void).cxx_destruct;
- (void)_sendShowActionMenuButtonSizeUpdate;
- (void)didReceiveUpdateProperties:(id)arg1;
- (id)fadingViewsForFadeTransition;
- (id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3;
- (void)loadView;
- (id)movingViewsForFadeTransition;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (void)resume;
- (void)showActionMenuButtonPressed:(id)arg1;
- (void)teardown;
- (void)updateViewWithHorizontalPageOffset:(double)arg1 isCurrentPage:(_Bool)arg2;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
