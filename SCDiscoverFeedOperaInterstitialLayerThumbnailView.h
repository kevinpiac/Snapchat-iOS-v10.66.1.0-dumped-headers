//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCDiscoverFeedStoryCollectionViewCell.h"

#import "SCOperaInterstitialLayerThumbnailViewPlayable-Protocol.h"

@interface SCDiscoverFeedOperaInterstitialLayerThumbnailView : SCDiscoverFeedStoryCollectionViewCell <SCOperaInterstitialLayerThumbnailViewPlayable>
{
    unsigned long long _interstitialType;
}

@property(nonatomic) unsigned long long interstitialType; // @synthesize interstitialType=_interstitialType;
- (void)layoutSubviews;
- (void)pause;
- (void)play;

@end

