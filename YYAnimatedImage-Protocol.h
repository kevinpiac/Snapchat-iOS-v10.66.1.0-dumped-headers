//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIImage;

@protocol YYAnimatedImage <NSObject>
- (unsigned long long)animatedImageBytesPerFrame;
- (double)animatedImageDurationAtIndex:(unsigned long long)arg1;
- (UIImage *)animatedImageFrameAtIndex:(unsigned long long)arg1;
- (unsigned long long)animatedImageFrameCount;
- (unsigned long long)animatedImageLoopCount;

@optional
- (struct CGRect)animatedImageContentsRectAtIndex:(unsigned long long)arg1;
@end

