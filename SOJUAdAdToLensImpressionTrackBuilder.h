//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SOJUAdCommonSnapAdImpressionTrack;

@interface SOJUAdAdToLensImpressionTrackBuilder : NSObject
{
    SOJUAdCommonSnapAdImpressionTrack *_commonSnapAdImpression;
    NSArray *_adToLensCarouselImpressions;
}

+ (id)withJUAdAdToLensImpressionTrack:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setAdToLensCarouselImpressions:(id)arg1;
- (id)setCommonSnapAdImpression:(id)arg1;

@end

