//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCFeature.h"

#import "SCPreviewFeatureHelpLabel-Protocol.h"

@class NSString, SCPreviewConfiguration, SCPreviewHelpLabel, SCPreviewView, UILabel;
@protocol SCPreviewTooltipProvider;

@interface SCPreviewFeatureHelpLabelImpl : SCFeature <SCPreviewFeatureHelpLabel>
{
    struct CGRect _containerViewBounds;
    SCPreviewHelpLabel *_previewHelpLabel;
    SCPreviewConfiguration *_configuration;
    id <SCPreviewTooltipProvider> _tooltipProvider;
    SCPreviewView *_previewView;
}

- (void).cxx_destruct;
- (void)_setupWithContainerViewBounds:(struct CGRect)arg1;
- (void)activate;
- (void)configureWithView:(id)arg1;
@property(readonly, nonatomic) UILabel *helpLabel;
- (void)hideWithAnimation:(_Bool)arg1;
- (id)initWithConfiguration:(id)arg1 tooltipProvider:(id)arg2;
@property(nonatomic) __weak SCPreviewView *previewView; // @synthesize previewView=_previewView;
- (void)setAlpha:(double)arg1;
- (void)setTransformScale:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
