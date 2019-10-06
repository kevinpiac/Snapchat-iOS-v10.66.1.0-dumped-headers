//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCMTPointOfInterest, SCMTPointOfInterestSizeEquation, SCXAnimation, SCXGLTextureInfo, SCXLabelTextureInfo, SCXSprite;

@interface SCXThumbnailViewState : NSObject
{
    SCXAnimation *_opacityAnimation;
    SCXAnimation *_loadingSpinnerOpacityAnimation;
    SCXAnimation *_scaleAnimation;
    SCXAnimation *_collapseTransitionAnimation;
    _Bool _thumbnailHidden;
    _Bool _isCollapsed;
    float _modelOpacity;
    float _modelScale;
    float _loadingSpinnerModelOpacity;
    int _renderType;
    SCXGLTextureInfo *_thumbTexture;
    SCXGLTextureInfo *_emojiTexture;
    SCXLabelTextureInfo *_labelTexture;
    SCMTPointOfInterest *_poi;
    SCMTPointOfInterestSizeEquation *_sizeEquation;
    SCXSprite *_calloutSprite;
    struct CGPoint _anchorPoint;
}

- (void).cxx_destruct;
- (struct CGRect)_boundingBoxForWidth:(float)arg1 includeLabel:(_Bool)arg2 mapViewport:(id)arg3 view:(id)arg4;
- (float)_collapsedStateScaling;
- (float)_getUnscaledWidthForMaxPoiWidth:(float)arg1;
- (struct CGRect)_rectForLabelAtCenter:(struct CGPoint)arg1 thumbWidth:(float)arg2;
- (_Bool)_rectIntersects:(struct CGRect)arg1 withView:(id)arg2;
- (void)_tryEnd:(id *)arg1 now:(double)arg2;
- (void)addLoadingSpinnerOpacityAnimation:(id)arg1;
- (void)addOpacityAnimation:(id)arg1;
- (void)addScaleAnimation:(id)arg1;
@property(nonatomic) struct CGPoint anchorPoint; // @synthesize anchorPoint=_anchorPoint;
- (struct CGRect)boundingBoxForThumbnailInMapViewport:(id)arg1 view:(id)arg2;
- (struct CGRect)boundingBoxInMapViewport:(id)arg1 view:(id)arg2;
@property(nonatomic) __weak SCXSprite *calloutSprite; // @synthesize calloutSprite=_calloutSprite;
- (struct CGPoint)centerOfThumbnailForWidth:(float)arg1 mapViewport:(id)arg2 view:(id)arg3;
@property(retain, nonatomic) SCXGLTextureInfo *emojiTexture; // @synthesize emojiTexture=_emojiTexture;
- (void)endCompletedAnimations;
- (float)getCollapseTransitionProgress;
- (float)getLabelPresentationOpacity;
- (float)getLoadingSpinnerPresentationOpacity;
- (float)getPresentationOpacity;
- (float)getPresentationScale;
- (float)getPresentationWidthForMaxPoiWidth:(float)arg1;
- (float)getRenderWidthRatio;
- (float)getThumbHeightFromThumbWidth:(float)arg1;
- (_Bool)hasOutstandingAnimations;
- (id)initWithPointOfInterest:(id)arg1;
@property(nonatomic) _Bool isCollapsed; // @synthesize isCollapsed=_isCollapsed;
- (_Bool)isVisibleInMapViewport:(id)arg1 view:(id)arg2;
@property(retain, nonatomic) SCXLabelTextureInfo *labelTexture; // @synthesize labelTexture=_labelTexture;
@property float loadingSpinnerModelOpacity; // @synthesize loadingSpinnerModelOpacity=_loadingSpinnerModelOpacity;
@property float modelOpacity; // @synthesize modelOpacity=_modelOpacity;
@property float modelScale; // @synthesize modelScale=_modelScale;
@property(retain, nonatomic) SCMTPointOfInterest *poi; // @synthesize poi=_poi;
@property(nonatomic) int renderType; // @synthesize renderType=_renderType;
- (float)screenPointModelWidthAtZoom:(float)arg1;
- (float)screenPointPresentationWidthAtZoom:(float)arg1;
@property(retain, nonatomic) SCMTPointOfInterestSizeEquation *sizeEquation; // @synthesize sizeEquation=_sizeEquation;
@property(retain, nonatomic) SCXGLTextureInfo *thumbTexture; // @synthesize thumbTexture=_thumbTexture;
@property _Bool thumbnailHidden; // @synthesize thumbnailHidden=_thumbnailHidden;
- (_Bool)tapHitAtPoint:(struct CGPoint)arg1 mapViewport:(id)arg2 view:(id)arg3;
- (_Bool)thumbOrLabelIntersectMapViewport:(id)arg1 view:(id)arg2;
- (void)transitionToCollapsedState:(_Bool)arg1;
- (struct CGRect)unscaledBoundingBoxInMapViewport:(id)arg1 view:(id)arg2;
- (struct CGRect)unscaledCollapsedBoundingBoxWithoutLabelInMapViewport:(id)arg1 view:(id)arg2;
- (struct CGRect)unscaledUncollapsedBoundingBoxWithoutLabelInMapViewport:(id)arg1 view:(id)arg2;

@end
