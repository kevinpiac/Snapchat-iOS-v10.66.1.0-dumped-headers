//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IMPBusinessProfile, SCImpalaBusinessProfileCardView, SCStoryManifest, UIView;

@protocol SCImpalaBusinessProfileCardViewDelegate <NSObject>
- (void)businessProfileCardView:(SCImpalaBusinessProfileCardView *)arg1 didTapToOpenBusinessProfile:(IMPBusinessProfile *)arg2;
- (void)businessProfileCardView:(SCImpalaBusinessProfileCardView *)arg1 didTapToPlayStoryManifest:(SCStoryManifest *)arg2 sourceView:(UIView *)arg3;
@end

