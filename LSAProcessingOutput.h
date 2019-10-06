//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LSATexture, LSAYUVTexture;

@interface LSAProcessingOutput : NSObject
{
    LSATexture *_rgbaTexture;
    LSAYUVTexture *_yuvTexture;
}

- (void).cxx_destruct;
- (id)initWithRGBATexture:(id)arg1 YUVTexture:(id)arg2;
@property(readonly, nonatomic) LSATexture *rgbaTexture; // @synthesize rgbaTexture=_rgbaTexture;
@property(readonly, nonatomic) LSAYUVTexture *yuvTexture; // @synthesize yuvTexture=_yuvTexture;

@end
