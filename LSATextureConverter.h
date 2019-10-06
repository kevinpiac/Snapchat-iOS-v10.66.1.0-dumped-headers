//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface LSATextureConverter : NSObject
{
    struct unique_ptr<LS::RGB2NV21Convertor, std::__1::default_delete<LS::RGB2NV21Convertor>> _rgb2NV21Convertor;
    struct unique_ptr<LS::NV212RGBConvertor, std::__1::default_delete<LS::NV212RGBConvertor>> _nv212rgbConvertor;
    struct CGSize _textureSize;
    long long _yuvFormat;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)convertRGBTexture:(id)arg1 Y:(id *)arg2 UV:(id *)arg3;
- (void)convertY:(id)arg1 UV:(id)arg2 toRGB:(id *)arg3;
- (id)getRGBTextureFromYTexture:(int)arg1 UVTexture:(int)arg2 size:(struct CGSize)arg3;
- (id)getYUVTextureFromRgbTexture:(int)arg1 size:(struct CGSize)arg2;
- (id)initWithYUVFormat:(long long)arg1;
- (void)prepareConvertorsForInputSize:(struct CGSize)arg1;

@end

