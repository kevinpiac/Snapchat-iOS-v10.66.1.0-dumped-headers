//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString, UIImage;

@interface SCQuickStickerImage : NSObject <NSCopying>
{
    unsigned long long _subtype;
    UIImage *_defaultImage_image;
    NSString *_customizedImage_imageId;
    UIImage *_customizedImage_image;
    NSData *_customizedImage_imageData;
    double _customizedImage_centerX;
    double _customizedImage_centerY;
    double _customizedImage_rotation;
}

+ (id)customizedImageWithImageId:(id)arg1 image:(id)arg2 imageData:(id)arg3 centerX:(double)arg4 centerY:(double)arg5 rotation:(double)arg6;
+ (id)defaultImageWithImage:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchDefaultImage:(CDUnknownBlockType)arg1 customizedImage:(CDUnknownBlockType)arg2;

@end

