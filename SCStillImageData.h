//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, SCDepthPhotoAuxiliaryData, UIImage;

@interface SCStillImageData : NSObject
{
    UIImage *_image;
    NSDictionary *_metadata;
    SCDepthPhotoAuxiliaryData *_depthPhotoData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SCDepthPhotoAuxiliaryData *depthPhotoData; // @synthesize depthPhotoData=_depthPhotoData;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)initWithImage:(id)arg1 metadata:(id)arg2;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;

@end

