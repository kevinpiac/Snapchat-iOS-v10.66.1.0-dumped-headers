//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface SCDrawingPaletteModel : NSObject
{
    NSArray *_paletteSwitchIcons;
    NSDictionary *_gradientColorsForPaletteTypes;
    long long _numPalettes;
    unsigned long long _colorPickerVersion;
    unsigned long long _currentPaletteType;
}

+ (id)createWithColorPickerVersion:(unsigned long long)arg1;
+ (id)paletteIdFromType:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)_createGradientColorsForPaletteType:(unsigned long long)arg1;
- (id)_gradientColorsForPaletteType:(unsigned long long)arg1;
- (id)_paletteIconForPaletteType:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long colorPickerVersion; // @synthesize colorPickerVersion=_colorPickerVersion;
@property(nonatomic) unsigned long long currentPaletteType; // @synthesize currentPaletteType=_currentPaletteType;
- (id)gradientColorsForCurrentPalette;
- (id)initWithColorPickerVersion:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long nextPaletteType;
- (id)paletteIconForCurrentPalette;
- (void)togglePalette;

@end

