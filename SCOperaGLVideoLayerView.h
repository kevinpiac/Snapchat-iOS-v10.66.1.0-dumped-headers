//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCOperaLayerView-Protocol.h"

@class NSString, SCCAEAGLView;

@interface SCOperaGLVideoLayerView : UIView <SCOperaLayerView>
{
    SCCAEAGLView *_glVideoView;
}

+ (id)layerViewWithFrame:(struct CGRect)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) SCCAEAGLView *glVideoView; // @synthesize glVideoView=_glVideoView;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

