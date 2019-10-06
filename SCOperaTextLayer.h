//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaLayer-Protocol.h"

@class NSString, SCOperaPage, UIColor, UIFont;

@interface SCOperaTextLayer : NSObject <SCOperaLayer>
{
    _Bool _includeBackground;
    _Bool _shouldHidelayerViewInFullView;
    SCOperaPage *_page;
    NSString *_text;
    UIFont *_font;
    UIColor *_textColor;
    UIColor *_dropshadowColor;
    double _dropShadowBlurRadius;
    long long _timeBeforeFadeoutMs;
    long long _timeToFadeoutMs;
    double _horizontalMargin;
    double _verticalMargin;
    unsigned long long _verticalAlignment;
    unsigned long long _horizontalAlignment;
    struct CGSize _dropshadowOffset;
}

+ (id)layerWithProperties:(id)arg1 page:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) double dropShadowBlurRadius; // @synthesize dropShadowBlurRadius=_dropShadowBlurRadius;
@property(readonly, nonatomic) UIColor *dropshadowColor; // @synthesize dropshadowColor=_dropshadowColor;
@property(readonly, nonatomic) struct CGSize dropshadowOffset; // @synthesize dropshadowOffset=_dropshadowOffset;
@property(readonly, nonatomic) UIFont *font; // @synthesize font=_font;
@property(readonly, nonatomic) unsigned long long horizontalAlignment; // @synthesize horizontalAlignment=_horizontalAlignment;
@property(readonly, nonatomic) double horizontalMargin; // @synthesize horizontalMargin=_horizontalMargin;
@property(readonly, nonatomic) _Bool includeBackground; // @synthesize includeBackground=_includeBackground;
- (id)initWithProperties:(id)arg1 page:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic) __weak SCOperaPage *page; // @synthesize page=_page;
@property(readonly, nonatomic) _Bool shouldHidelayerViewInFullView; // @synthesize shouldHidelayerViewInFullView=_shouldHidelayerViewInFullView;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, nonatomic) long long timeBeforeFadeoutMs; // @synthesize timeBeforeFadeoutMs=_timeBeforeFadeoutMs;
@property(readonly, nonatomic) long long timeToFadeoutMs; // @synthesize timeToFadeoutMs=_timeToFadeoutMs;
- (unsigned long long)type;
@property(readonly, nonatomic) unsigned long long verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(readonly, nonatomic) double verticalMargin; // @synthesize verticalMargin=_verticalMargin;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

