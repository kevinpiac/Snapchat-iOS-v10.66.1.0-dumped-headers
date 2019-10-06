//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, UIImage;
@protocol FLAnimatedImageGeneratingRequest, OS_dispatch_queue;

@protocol FLAnimatedImageGenerating <NSObject>
@property(readonly, nonatomic) unsigned long long count;
- (UIImage *)imageAtIndex:(unsigned long long)arg1;

@optional
- (id <FLAnimatedImageGeneratingRequest>)imageAtIndex:(unsigned long long)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 resultHandler:(void (^)(UIImage *, _Bool))arg3;
@end

