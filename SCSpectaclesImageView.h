//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

@interface SCSpectaclesImageView : UIImageView
{
    _Bool _cutOutNotch;
}

- (void)_commonInit;
@property(nonatomic) _Bool cutOutNotch; // @synthesize cutOutNotch=_cutOutNotch;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithImage:(id)arg1;
- (void)layoutSubviews;
- (void)updateMask;

@end

