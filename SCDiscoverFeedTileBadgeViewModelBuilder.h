//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, SCDiscoverFeedTileBadgeViewLayoutConfiguration, UIImage;

@interface SCDiscoverFeedTileBadgeViewModelBuilder : NSObject
{
    NSAttributedString *_title;
    UIImage *_icon;
    SCDiscoverFeedTileBadgeViewLayoutConfiguration *_layoutConfig;
}

+ (id)discoverFeedTileBadgeViewModel;
+ (id)discoverFeedTileBadgeViewModelFromExistingDiscoverFeedTileBadgeViewModel:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)withIcon:(id)arg1;
- (id)withLayoutConfig:(id)arg1;
- (id)withTitle:(id)arg1;

@end

