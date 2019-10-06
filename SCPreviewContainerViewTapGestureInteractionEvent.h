//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCFeatureInteractionEvent-Protocol.h"

@class NSString, UIGestureRecognizer;

@interface SCPreviewContainerViewTapGestureInteractionEvent : NSObject <SCFeatureInteractionEvent>
{
    UIGestureRecognizer *_gestureRecognizer;
}

+ (id)createWithGestureRecognizer:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
- (id)initWithGestureRecognizer:(id)arg1;
- (unsigned long long)processEventForFeature:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
