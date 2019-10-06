//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SVGRenderer;

@interface SVGDocumentView : UIView
{
    NSString *_artworkPath;
}

+ (Class)layerClass;
+ (void)makeSureLoaded;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *artworkPath; // @synthesize artworkPath=_artworkPath;
@property(nonatomic) _Bool beTransparent;
- (id)copyFillColor;
- (void)drawRect:(struct CGRect)arg1;
- (id)findRenderableObject:(struct CGPoint)arg1;
@property(retain, nonatomic) SVGRenderer *renderer;
- (id)renderingLayer;

@end

