//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCStoryChromeViewModel, UILabel;

@interface SCMediaStoryChromeView : UIView
{
    UILabel *_chromeTitleLabel;
    UILabel *_chromeSubtitleLabel;
    _Bool _hidePosterName;
    SCStoryChromeViewModel *_storyChromeViewModel;
}

- (void).cxx_destruct;
- (void)_initChromeLabels;
- (void)_updateLabels;
@property(nonatomic) _Bool hidePosterName; // @synthesize hidePosterName=_hidePosterName;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) SCStoryChromeViewModel *storyChromeViewModel; // @synthesize storyChromeViewModel=_storyChromeViewModel;

@end

