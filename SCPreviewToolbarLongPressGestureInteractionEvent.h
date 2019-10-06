//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCFeatureInteractionEvent-Protocol.h"

@class NSString, SCPreviewToolBarButtonItem, SCPreviewToolbarLongPressGestureRecognizer;

@interface SCPreviewToolbarLongPressGestureInteractionEvent : NSObject <SCFeatureInteractionEvent>
{
    SCPreviewToolbarLongPressGestureRecognizer *_gestureRecognizer;
    SCPreviewToolBarButtonItem *_item;
}

+ (id)createWithGesture:(id)arg1 toolbarItem:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) SCPreviewToolbarLongPressGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
- (id)initWithGesture:(id)arg1 toolbarItem:(id)arg2;
@property(readonly, nonatomic) SCPreviewToolBarButtonItem *item; // @synthesize item=_item;
- (unsigned long long)processEventForFeature:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
