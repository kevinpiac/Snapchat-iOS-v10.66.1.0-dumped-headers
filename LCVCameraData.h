//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface LCVCameraData : NSObject
{
    int width;
    int height;
    float principalPointX;
    float principalPointY;
    double focalLength;
    NSMutableArray *leftCameraExtrinsics;
    NSMutableArray *rightCameraExtrinsics;
}

+ (id)cameraDataWithProto:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double focalLength; // @synthesize focalLength;
@property(nonatomic) int height; // @synthesize height;
- (id)init;
@property(retain, nonatomic) NSMutableArray *leftCameraExtrinsics; // @synthesize leftCameraExtrinsics;
@property(nonatomic) float principalPointX; // @synthesize principalPointX;
@property(nonatomic) float principalPointY; // @synthesize principalPointY;
@property(retain, nonatomic) NSMutableArray *rightCameraExtrinsics; // @synthesize rightCameraExtrinsics;
@property(nonatomic) int width; // @synthesize width;

@end

