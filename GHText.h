//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GHRenderableObject.h"

#import "GHPathDescription-Protocol.h"

@class NSArray, NSString;

@interface GHText : GHRenderableObject <GHPathDescription>
{
    struct __CTFontDescriptor *_fontDescriptor;
    struct __CTFont *_fontRef;
    NSArray *_children;
    NSArray *_contents;
    NSString *_fillDescription;
    NSString *_strokeDescription;
    double _strokeWidth;
}

- (void).cxx_destruct;
- (void)addGlyphsToArray:(id)arg1 withSVGContext:(id)arg2;
- (unsigned long long)calculatedHash;
@property(readonly, nonatomic) NSArray *children; // @synthesize children=_children;
- (_Bool)cleanLineEndings;
@property(readonly, nonatomic) NSArray *contents; // @synthesize contents=_contents;
- (void)dealloc;
@property(readonly, nonatomic) NSString *fillDescription; // @synthesize fillDescription=_fillDescription;
@property(readonly, nonatomic) struct __CTFontDescriptor *fontDescriptor; // @synthesize fontDescriptor=_fontDescriptor;
@property(readonly, nonatomic) struct __CTFont *fontRef; // @synthesize fontRef=_fontRef;
- (struct CGRect)getBoundingBoxWithSVGContext:(id)arg1;
- (unsigned int)getClippingTypeWithSVGContext:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)renderIntoContext:(struct CGContext *)arg1 withSVGContext:(id)arg2;
- (void)setupFontDescriptorWithBaseDescriptor:(struct __CTFontDescriptor *)arg1 andBaseFont:(struct __CTFont *)arg2;
@property(readonly, nonatomic) NSString *strokeDescription; // @synthesize strokeDescription=_strokeDescription;
@property(readonly, nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

