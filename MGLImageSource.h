//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MGLSource.h"

@class NSURL, UIImage;

@interface MGLImageSource : MGLSource
{
    UIImage *_image;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *URL;
- (id)attributionHTMLString;
@property(nonatomic) struct MGLCoordinateQuad coordinates;
- (id)description;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)initWithIdentifier:(id)arg1 coordinateQuad:(struct MGLCoordinateQuad)arg2;
- (id)initWithIdentifier:(id)arg1 coordinateQuad:(struct MGLCoordinateQuad)arg2 URL:(id)arg3;
- (id)initWithIdentifier:(id)arg1 coordinateQuad:(struct MGLCoordinateQuad)arg2 image:(id)arg3;
@property(readonly, nonatomic) struct ImageSource *rawSource;

@end

