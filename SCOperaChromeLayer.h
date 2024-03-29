//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaLayer-Protocol.h"

@class NSArray, NSDictionary, NSString, NSTextAttachment, NSValue, SCOperaPage, UIColor, UIFont;
@protocol SCOperaLabelTextProvider, SCOperaViewProvider;

@interface SCOperaChromeLayer : NSObject <SCOperaLayer>
{
    _Bool _fadesOnDidFullyAppear;
    _Bool _shouldFadeInTextWithDelay;
    _Bool _hasGradient;
    _Bool _hasShadow;
    _Bool _fadeOutOnTransition;
    _Bool _includeInShare;
    _Bool _fadeOutSubtitleOnTransition;
    _Bool _showAvatarBackground;
    _Bool _showAvatarAddControl;
    SCOperaPage *_page;
    NSString *_displayName;
    NSString *_additionalDisplayName;
    NSString *_timestamp;
    NSValue *_timestampUnderlineRange;
    NSTextAttachment *_timestampIcon;
    UIColor *_displayNameColor;
    UIColor *_additionalDisplayNameColor;
    UIColor *_timestampColor;
    NSString *_displayNameIconImageName;
    UIFont *_displayNameFont;
    unsigned long long _hdState;
    NSArray *_gradientAlphaArray;
    double _gradientHeight;
    id <SCOperaViewProvider> _iconViewProvider;
    NSDictionary *_iconViewProviderProperties;
    NSDictionary *_repostCreatorIconViewProviderProperties;
    id <SCOperaLabelTextProvider> _displayNameTextProvider;
    NSDictionary *_displayNameTextProviderProperties;
    NSString *_iconImageKey;
    NSString *_repostCreatorIconImageKey;
    NSString *_iconImageName;
}

+ (id)layerWithProperties:(id)arg1 page:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *additionalDisplayName; // @synthesize additionalDisplayName=_additionalDisplayName;
@property(readonly, nonatomic) UIColor *additionalDisplayNameColor; // @synthesize additionalDisplayNameColor=_additionalDisplayNameColor;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) UIColor *displayNameColor; // @synthesize displayNameColor=_displayNameColor;
@property(readonly, nonatomic) UIFont *displayNameFont; // @synthesize displayNameFont=_displayNameFont;
@property(readonly, copy, nonatomic) NSString *displayNameIconImageName; // @synthesize displayNameIconImageName=_displayNameIconImageName;
@property(readonly, nonatomic) id <SCOperaLabelTextProvider> displayNameTextProvider; // @synthesize displayNameTextProvider=_displayNameTextProvider;
@property(readonly, copy, nonatomic) NSDictionary *displayNameTextProviderProperties; // @synthesize displayNameTextProviderProperties=_displayNameTextProviderProperties;
@property(readonly, nonatomic) _Bool fadeOutOnTransition; // @synthesize fadeOutOnTransition=_fadeOutOnTransition;
@property(readonly, nonatomic) _Bool fadeOutSubtitleOnTransition; // @synthesize fadeOutSubtitleOnTransition=_fadeOutSubtitleOnTransition;
@property(readonly, nonatomic) _Bool fadesOnDidFullyAppear; // @synthesize fadesOnDidFullyAppear=_fadesOnDidFullyAppear;
@property(readonly, copy, nonatomic) NSArray *gradientAlphaArray; // @synthesize gradientAlphaArray=_gradientAlphaArray;
@property(readonly, nonatomic) double gradientHeight; // @synthesize gradientHeight=_gradientHeight;
@property(readonly, nonatomic) _Bool hasGradient; // @synthesize hasGradient=_hasGradient;
@property(readonly, nonatomic) _Bool hasShadow; // @synthesize hasShadow=_hasShadow;
@property(readonly, nonatomic) unsigned long long hdState; // @synthesize hdState=_hdState;
@property(readonly, copy, nonatomic) NSString *iconImageKey; // @synthesize iconImageKey=_iconImageKey;
@property(readonly, copy, nonatomic) NSString *iconImageName; // @synthesize iconImageName=_iconImageName;
@property(readonly, nonatomic) id <SCOperaViewProvider> iconViewProvider; // @synthesize iconViewProvider=_iconViewProvider;
@property(readonly, copy, nonatomic) NSDictionary *iconViewProviderProperties; // @synthesize iconViewProviderProperties=_iconViewProviderProperties;
@property(readonly, nonatomic) _Bool includeInShare; // @synthesize includeInShare=_includeInShare;
- (id)initWithProperties:(id)arg1 page:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic) __weak SCOperaPage *page; // @synthesize page=_page;
@property(readonly, copy, nonatomic) NSString *repostCreatorIconImageKey; // @synthesize repostCreatorIconImageKey=_repostCreatorIconImageKey;
@property(readonly, copy, nonatomic) NSDictionary *repostCreatorIconViewProviderProperties; // @synthesize repostCreatorIconViewProviderProperties=_repostCreatorIconViewProviderProperties;
@property(readonly, nonatomic) _Bool shouldFadeInTextWithDelay; // @synthesize shouldFadeInTextWithDelay=_shouldFadeInTextWithDelay;
@property(readonly) _Bool showAvatarAddControl; // @synthesize showAvatarAddControl=_showAvatarAddControl;
@property(readonly) _Bool showAvatarBackground; // @synthesize showAvatarBackground=_showAvatarBackground;
@property(readonly, copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) UIColor *timestampColor; // @synthesize timestampColor=_timestampColor;
@property(readonly, copy, nonatomic) NSTextAttachment *timestampIcon; // @synthesize timestampIcon=_timestampIcon;
@property(readonly, copy, nonatomic) NSValue *timestampUnderlineRange; // @synthesize timestampUnderlineRange=_timestampUnderlineRange;
- (unsigned long long)type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

