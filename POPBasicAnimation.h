//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "POPPropertyAnimation.h"

@class CAMediaTimingFunction;

@interface POPBasicAnimation : POPPropertyAnimation
{
}

+ (id)animation;
+ (id)animationWithPropertyNamed:(id)arg1;
+ (id)defaultAnimation;
+ (id)easeInAnimation;
+ (id)easeInEaseOutAnimation;
+ (id)easeOutAnimation;
+ (id)linearAnimation;
- (void)_appendDescription:(id)arg1 debug:(_Bool)arg2;
- (void)_initState;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) double duration;
- (id)init;
@property(retain, nonatomic) CAMediaTimingFunction *timingFunction;

@end

