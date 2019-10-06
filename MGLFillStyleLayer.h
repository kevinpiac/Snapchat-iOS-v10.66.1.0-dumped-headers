//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MGLVectorStyleLayer.h"

@class MGLStyleValue;

@interface MGLFillStyleLayer : MGLVectorStyleLayer
{
}

@property(retain, nonatomic) MGLStyleValue *fillAntialias;
@property(retain, nonatomic) MGLStyleValue *fillColor;
@property(nonatomic) struct MGLTransition fillColorTransition;
@property(retain, nonatomic) MGLStyleValue *fillOpacity;
@property(nonatomic) struct MGLTransition fillOpacityTransition;
@property(retain, nonatomic) MGLStyleValue *fillOutlineColor;
@property(nonatomic) struct MGLTransition fillOutlineColorTransition;
@property(retain, nonatomic) MGLStyleValue *fillPattern;
@property(nonatomic) struct MGLTransition fillPatternTransition;
@property(retain, nonatomic) MGLStyleValue *fillTranslate;
@property(retain, nonatomic) MGLStyleValue *fillTranslateAnchor;
@property(retain, nonatomic) MGLStyleValue *fillTranslation;
@property(retain, nonatomic) MGLStyleValue *fillTranslationAnchor;
@property(nonatomic) struct MGLTransition fillTranslationTransition;
- (id)initWithIdentifier:(id)arg1 source:(id)arg2;
@property(retain, nonatomic, getter=isFillAntialiased) MGLStyleValue *fillAntialiased;
- (id)predicate;
@property(readonly, nonatomic) struct FillLayer *rawLayer;
- (void)setPredicate:(id)arg1;
- (void)setSourceLayerIdentifier:(id)arg1;
- (id)sourceIdentifier;
- (id)sourceLayerIdentifier;

@end

