//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSDictionary;

@interface SCLSIImageData : SCComposerMarshallableObject
{
    NSDictionary *_img;
    double _width;
    double _height;
}

- (void).cxx_destruct;
@property(nonatomic) double height; // @synthesize height=_height;
@property(copy, nonatomic) NSDictionary *img; // @synthesize img=_img;
- (id)initWithImg:(id)arg1 width:(double)arg2 height:(double)arg3;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
@property(nonatomic) double width; // @synthesize width=_width;

@end

