//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCLoadingIndicatorView, SCMapFloatingActionButton, UIImageView, UILabel;

@interface SCEmbeddedMapGiveAccessErrorView : UIView
{
    UIImageView *_staticWorldBackgroundImageView;
    SCMapFloatingActionButton *_allowButton;
    UILabel *_titleLabel;
    SCLoadingIndicatorView *_loadingIndicatorView;
    unsigned long long _state;
}

- (void).cxx_destruct;
- (void)_setLabelsHidden:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;

@end

