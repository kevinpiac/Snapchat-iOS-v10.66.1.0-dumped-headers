//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCXSprite.h"

@interface SCXAnimatableTextureSprite : SCXSprite
{
    SCXSprite *_animationSprite;
}

- (void).cxx_destruct;
- (void)animateToLocationInterpolator:(CDUnknownBlockType)arg1 duration:(double)arg2 interpolation:(CDUnknownBlockType)arg3 mapViewport:(id)arg4 completion:(CDUnknownBlockType)arg5;
@property(readonly, nonatomic) SCXSprite *animationSprite; // @synthesize animationSprite=_animationSprite;
- (id)init;
- (void)setLocationInterpolator:(CDUnknownBlockType)arg1;
- (void)setZIndex:(id)arg1;

@end
