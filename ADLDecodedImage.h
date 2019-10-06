//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface ADLDecodedImage : NSObject
{
    int _planeYPixelStride;
    int _planeCbPixelStride;
    int _planeCrPixelStride;
    int _planeYRowStride;
    int _planeCbRowStride;
    int _planeCrRowStride;
    int _width;
    int _height;
    NSData *_planeY;
    NSData *_planeCb;
    NSData *_planeCr;
    long long _timestamp;
}

+ (id)DecodedImageWithPlaneY:(id)arg1 planeCb:(id)arg2 planeCr:(id)arg3 planeYPixelStride:(int)arg4 planeCbPixelStride:(int)arg5 planeCrPixelStride:(int)arg6 planeYRowStride:(int)arg7 planeCbRowStride:(int)arg8 planeCrRowStride:(int)arg9 width:(int)arg10 height:(int)arg11 timestamp:(long long)arg12;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) int height; // @synthesize height=_height;
- (id)initWithPlaneY:(id)arg1 planeCb:(id)arg2 planeCr:(id)arg3 planeYPixelStride:(int)arg4 planeCbPixelStride:(int)arg5 planeCrPixelStride:(int)arg6 planeYRowStride:(int)arg7 planeCbRowStride:(int)arg8 planeCrRowStride:(int)arg9 width:(int)arg10 height:(int)arg11 timestamp:(long long)arg12;
@property(readonly, nonatomic) NSData *planeCb; // @synthesize planeCb=_planeCb;
@property(readonly, nonatomic) int planeCbPixelStride; // @synthesize planeCbPixelStride=_planeCbPixelStride;
@property(readonly, nonatomic) int planeCbRowStride; // @synthesize planeCbRowStride=_planeCbRowStride;
@property(readonly, nonatomic) NSData *planeCr; // @synthesize planeCr=_planeCr;
@property(readonly, nonatomic) int planeCrPixelStride; // @synthesize planeCrPixelStride=_planeCrPixelStride;
@property(readonly, nonatomic) int planeCrRowStride; // @synthesize planeCrRowStride=_planeCrRowStride;
@property(readonly, nonatomic) NSData *planeY; // @synthesize planeY=_planeY;
@property(readonly, nonatomic) int planeYPixelStride; // @synthesize planeYPixelStride=_planeYPixelStride;
@property(readonly, nonatomic) int planeYRowStride; // @synthesize planeYRowStride=_planeYRowStride;
@property(readonly, nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) int width; // @synthesize width=_width;

@end

