//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCFeature.h"

#import "SCPreviewFeatureTrashCan-Protocol.h"
#import "SCPreviewGestureResponder-Protocol.h"

@class NSString, SCPreviewToolBarButtonItem, SCPreviewView;

@interface SCPreviewFeatureTrashCanImpl : SCFeature <SCPreviewFeatureTrashCan, SCPreviewGestureResponder>
{
    SCPreviewView *_previewView;
    SCPreviewToolBarButtonItem *_toolbarButtonItem;
}

- (void).cxx_destruct;
- (void)configureWithView:(id)arg1;
- (id)createTrashCanToolBarButtonItemWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)didTouchContainerView:(id)arg1 currentTouchTarget:(id)arg2 deleteAnimationCompletion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

