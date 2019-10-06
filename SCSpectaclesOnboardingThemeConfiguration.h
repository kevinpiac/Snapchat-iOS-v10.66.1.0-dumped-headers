//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIFont;

@interface SCSpectaclesOnboardingThemeConfiguration : NSObject
{
    _Bool _isNewportTheme;
    UIColor *_controllerBackgroundColor;
    UIColor *_descriptionLabelsTextColor;
    UIFont *_primaryTextFont;
    UIFont *_secondaryTextFont;
    UIColor *_learnMoreButtonBorderColor;
    UIColor *_learnMoreButtonBackgroundColor;
    UIColor *_learnMoreButtonTitleColor;
    UIFont *_learnMoreButtonTitleFont;
    UIColor *_doneButtonBorderColor;
    UIColor *_doneButtonBackgroundColor;
    UIColor *_doneButtonTitleColor;
    UIFont *_doneButtonTitleFont;
}

+ (id)newportCarbonOnboardingThemeConfig;
+ (id)newportMineralOnboardingThemeConfig;
+ (id)yellowOnboardingThemeConfig;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *controllerBackgroundColor; // @synthesize controllerBackgroundColor=_controllerBackgroundColor;
@property(retain, nonatomic) UIColor *descriptionLabelsTextColor; // @synthesize descriptionLabelsTextColor=_descriptionLabelsTextColor;
@property(retain, nonatomic) UIColor *doneButtonBackgroundColor; // @synthesize doneButtonBackgroundColor=_doneButtonBackgroundColor;
@property(retain, nonatomic) UIColor *doneButtonBorderColor; // @synthesize doneButtonBorderColor=_doneButtonBorderColor;
@property(retain, nonatomic) UIColor *doneButtonTitleColor; // @synthesize doneButtonTitleColor=_doneButtonTitleColor;
@property(retain, nonatomic) UIFont *doneButtonTitleFont; // @synthesize doneButtonTitleFont=_doneButtonTitleFont;
@property(nonatomic) _Bool isNewportTheme; // @synthesize isNewportTheme=_isNewportTheme;
@property(retain, nonatomic) UIColor *learnMoreButtonBackgroundColor; // @synthesize learnMoreButtonBackgroundColor=_learnMoreButtonBackgroundColor;
@property(retain, nonatomic) UIColor *learnMoreButtonBorderColor; // @synthesize learnMoreButtonBorderColor=_learnMoreButtonBorderColor;
@property(retain, nonatomic) UIColor *learnMoreButtonTitleColor; // @synthesize learnMoreButtonTitleColor=_learnMoreButtonTitleColor;
@property(retain, nonatomic) UIFont *learnMoreButtonTitleFont; // @synthesize learnMoreButtonTitleFont=_learnMoreButtonTitleFont;
@property(retain, nonatomic) UIFont *primaryTextFont; // @synthesize primaryTextFont=_primaryTextFont;
@property(retain, nonatomic) UIFont *secondaryTextFont; // @synthesize secondaryTextFont=_secondaryTextFont;

@end

