//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIVisualEffectView.h>

#import "SCComposerContentViewProviding-Protocol.h"

@class NSString;

@interface SCComposerBlurView : UIVisualEffectView <SCComposerContentViewProviding>
{
}

+ (void)bindAttributes:(id)arg1;
- (_Bool)_setStyle:(long long)arg1 animator:(id)arg2;
- (id)contentViewForInsertingComposerChildren;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)requiresShapeLayerForBorderRadius;
- (_Bool)willEnqueueIntoComposerPool;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
