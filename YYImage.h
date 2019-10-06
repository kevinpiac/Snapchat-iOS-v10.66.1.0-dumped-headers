//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImage.h>

#import "YYAnimatedImage-Protocol.h"

@class NSArray, NSData, NSObject, NSString, YYImageDecoder;
@protocol OS_dispatch_semaphore;

@interface YYImage : UIImage <YYAnimatedImage>
{
    YYImageDecoder *_decoder;
    NSArray *_preloadedFrames;
    NSObject<OS_dispatch_semaphore> *_preloadedLock;
    unsigned long long _bytesPerFrame;
    double _animatedTotalDuration;
    _Bool _preloadAllAnimatedImageFrames;
    unsigned long long _animatedImageType;
    unsigned long long _animatedImageMemorySize;
}

+ (id)imageNamed:(id)arg1;
+ (id)imageWithContentsOfFile:(id)arg1;
+ (id)imageWithData:(id)arg1;
+ (id)imageWithData:(id)arg1 scale:(double)arg2;
+ (id)sc_imageWithData:(id)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (unsigned long long)animatedImageBytesPerFrame;
@property(readonly, nonatomic) NSData *animatedImageData;
- (double)animatedImageDurationAtIndex:(unsigned long long)arg1;
- (id)animatedImageFrameAtIndex:(unsigned long long)arg1;
- (unsigned long long)animatedImageFrameCount;
- (unsigned long long)animatedImageLoopCount;
@property(readonly, nonatomic) unsigned long long animatedImageMemorySize; // @synthesize animatedImageMemorySize=_animatedImageMemorySize;
@property(readonly, nonatomic) unsigned long long animatedImageType; // @synthesize animatedImageType=_animatedImageType;
- (long long)animatedIndexAtTime:(double)arg1;
@property(readonly, nonatomic) double animatedTotalDuration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 scale:(double)arg2;
@property(nonatomic) _Bool preloadAllAnimatedImageFrames; // @synthesize preloadAllAnimatedImageFrames=_preloadAllAnimatedImageFrames;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

