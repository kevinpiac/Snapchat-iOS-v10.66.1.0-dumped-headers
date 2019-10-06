//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCOverlayFilterView.h"

@class NSArray, NSNumberFormatter, NSTimer, SCSpeed, UIImageView, UILabel, UIView;

@interface SCSpeedFilterView : SCOverlayFilterView
{
    UILabel *_warningSlugView;
    NSTimer *_warningSlugFadeoutTimer;
    _Bool _previouslyShowing;
    unsigned short _zeroCharacter;
    SCSpeed *_speed;
    unsigned long long _speedUnit;
    NSNumberFormatter *_numberFormatter;
    UILabel *_snapAndDriveWarning;
    UIView *_speedView;
    UIImageView *_decimal;
    UIImageView *_unit;
    NSArray *_digits;
}

- (void).cxx_destruct;
- (void)_fadeoutWarningSlug:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) UIImageView *decimal; // @synthesize decimal=_decimal;
@property(retain, nonatomic) NSArray *digits; // @synthesize digits=_digits;
- (id)displayName;
- (void)drawScreenshotImageInCurrentContextWithRect:(struct CGRect)arg1;
- (void)fadeOutSnapAndDriveWarning;
- (id)imageForNumber:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 config:(id)arg2 userSession:(id)arg3;
@property(retain, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
@property(nonatomic) _Bool previouslyShowing; // @synthesize previouslyShowing=_previouslyShowing;
- (void)resetDigitImageViews;
- (void)setDisplayed:(_Bool)arg1;
@property(retain, nonatomic) UILabel *snapAndDriveWarning; // @synthesize snapAndDriveWarning=_snapAndDriveWarning;
@property(retain, nonatomic) SCSpeed *speed; // @synthesize speed=_speed;
- (void)setSpeedToDisplay;
@property(nonatomic) unsigned long long speedUnit; // @synthesize speedUnit=_speedUnit;
@property(retain, nonatomic) UIView *speedView; // @synthesize speedView=_speedView;
@property(retain, nonatomic) UIImageView *unit; // @synthesize unit=_unit;
@property(nonatomic) unsigned short zeroCharacter; // @synthesize zeroCharacter=_zeroCharacter;
- (_Bool)shouldRespondToTap:(id)arg1;
- (void)tap:(id)arg1;
- (void)updateConfig:(id)arg1;

@end
