//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCFeature.h"

@class SCPreviewConfiguration, SCPreviewView;
@protocol SCAutoCreativeManager, SCFeatureSnapCrop, SCLensInPreviewTooltipsProvider, SCPreviewFeatureAnimatedTooltip, SCPreviewFeatureBounce, SCPreviewTooltipProvider;

@interface SCPreviewFeatureTooltip : SCFeature
{
    SCPreviewConfiguration *_configuration;
    id <SCPreviewTooltipProvider> _tooltipProvider;
    id <SCLensInPreviewTooltipsProvider> _lensInPreviewTooltipProvider;
    id <SCPreviewFeatureAnimatedTooltip> _animatedTooltipFeature;
    id <SCFeatureSnapCrop> _snapCropFeature;
    id <SCPreviewFeatureBounce> _bounceFeature;
    id <SCAutoCreativeManager> _autoCreativeTooltipFeature;
    SCPreviewView *_previewView;
}

- (void).cxx_destruct;
- (_Bool)_isBounceVideoAvailable;
- (void)activate;
@property(nonatomic) __weak id <SCPreviewFeatureAnimatedTooltip> animatedTooltipFeature; // @synthesize animatedTooltipFeature=_animatedTooltipFeature;
@property(nonatomic) __weak id <SCAutoCreativeManager> autoCreativeTooltipFeature; // @synthesize autoCreativeTooltipFeature=_autoCreativeTooltipFeature;
@property(nonatomic) __weak id <SCPreviewFeatureBounce> bounceFeature; // @synthesize bounceFeature=_bounceFeature;
@property(nonatomic) __weak SCPreviewConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)configureWithView:(id)arg1;
- (id)initWithConfiguration:(id)arg1 tooltipProvider:(id)arg2 lensInPreviewTooltipProvider:(id)arg3 animatedTooltipFeature:(id)arg4 bounceFeature:(id)arg5 snapCropFeature:(id)arg6 autoCreativeTooltipFeature:(id)arg7;
@property(retain, nonatomic) id <SCLensInPreviewTooltipsProvider> lensInPreviewTooltipProvider; // @synthesize lensInPreviewTooltipProvider=_lensInPreviewTooltipProvider;
@property(nonatomic) __weak SCPreviewView *previewView; // @synthesize previewView=_previewView;
@property(nonatomic) __weak id <SCFeatureSnapCrop> snapCropFeature; // @synthesize snapCropFeature=_snapCropFeature;
@property(retain, nonatomic) id <SCPreviewTooltipProvider> tooltipProvider; // @synthesize tooltipProvider=_tooltipProvider;

@end

