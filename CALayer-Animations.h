//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@interface CALayer (Animations)
- (void)_setDisabledValue:(id)arg1 forKeyPath:(id)arg2;
- (void)addAnimation:(id)arg1 forKey:(id)arg2 didStart:(CDUnknownBlockType)arg3 didComplete:(CDUnknownBlockType)arg4;
- (void)sc_addAnimationWithKeypath:(id)arg1 toValue:(id)arg2;
- (void)sc_freezeAndRemoveAnimations;
- (_Bool)sc_isPaused;
- (void)sc_pause;
- (void)sc_removeAllAnimations;
- (void)sc_resume;
@end

