//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class SCBitmojiOutfit, SCLoadingIndicatorView, UIImageView;

@interface SCBitmojiOutfitCollectionViewCell : UICollectionViewCell
{
    SCLoadingIndicatorView *_loadingIndicator;
    UIImageView *_outfitView;
    SCBitmojiOutfit *_outfit;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) SCBitmojiOutfit *outfit; // @synthesize outfit=_outfit;
- (void)setOutfitImage:(id)arg1 outfit:(id)arg2;
- (void)startLoading;

@end

