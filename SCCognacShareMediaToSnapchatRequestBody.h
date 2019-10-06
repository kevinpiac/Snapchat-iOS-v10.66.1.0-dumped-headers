//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString, UIImage;

@interface SCCognacShareMediaToSnapchatRequestBody : NSObject
{
    _Bool _animated;
    NSString *_mediaId;
    UIImage *_stickerImage;
    NSData *_stickerImageData;
    double _width;
    double _height;
    double _centerX;
    double _centerY;
    double _rotation;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(nonatomic) double centerX; // @synthesize centerX=_centerX;
@property(nonatomic) double centerY; // @synthesize centerY=_centerY;
@property(nonatomic) double height; // @synthesize height=_height;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(copy, nonatomic) UIImage *stickerImage; // @synthesize stickerImage=_stickerImage;
@property(copy, nonatomic) NSData *stickerImageData; // @synthesize stickerImageData=_stickerImageData;
@property(nonatomic) double width; // @synthesize width=_width;

@end
