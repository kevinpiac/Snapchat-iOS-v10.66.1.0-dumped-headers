//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCImageProcessLensCommandListener-Protocol.h"

@class SCLens;
@protocol SCFeatureSpectaclesLensFilterInPreviewDelegate;

@protocol SCFeatureSpectaclesLensFilterInPreview <SCImageProcessLensCommandListener>
@property(readonly, nonatomic) SCLens *appliedLens;
- (void)applyLensIfNeeded;
@property(nonatomic) __weak id <SCFeatureSpectaclesLensFilterInPreviewDelegate> delegate;
@property(nonatomic) _Bool isTransitioningBetweenFilters;
@end
