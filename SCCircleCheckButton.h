//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class SCLoadingIndicatorView;

@interface SCCircleCheckButton : UIButton
{
    SCLoadingIndicatorView *_loadingIndicator;
}

- (void).cxx_destruct;
- (id)initWithRadius:(double)arg1 shadowRadius:(double)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)startLoading;
- (void)stopLoading;

@end

