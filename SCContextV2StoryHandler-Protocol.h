//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCContextV2Session, SCR2StoryCard, SCStoryManifest, UIView, UIViewController;

@protocol SCContextV2StoryHandler <NSObject>
- (void)playStoriesForUsername:(NSString *)arg1 baseView:(UIView *)arg2 baseViewController:(UIViewController *)arg3 contextSession:(SCContextV2Session *)arg4;
- (void)playStoryWithManifest:(SCStoryManifest *)arg1 baseView:(UIView *)arg2 baseViewController:(UIViewController *)arg3 contextSession:(SCContextV2Session *)arg4;
- (void)playStoryWithStoryCard:(SCR2StoryCard *)arg1 baseView:(UIView *)arg2 baseViewController:(UIViewController *)arg3 contextSession:(SCContextV2Session *)arg4;
@end

