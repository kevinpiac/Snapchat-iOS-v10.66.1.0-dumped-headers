//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSIndexSet, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, UIImage;
@protocol FLAnimatedImageGenerating, FLAnimatedImageGeneratingRequest, OS_dispatch_queue;

@interface FLAnimatedImage : NSObject
{
    _Bool _runningPendingIndexing;
    UIImage *_posterImage;
    unsigned long long _loopCount;
    NSDictionary *_delayTimesForIndexes;
    unsigned long long _frameCount;
    unsigned long long _frameCacheSizeMax;
    NSData *_data;
    unsigned long long _frameCacheSizeOptimal;
    unsigned long long _frameCacheSizeMaxInternal;
    unsigned long long _requestedFrameIndex;
    unsigned long long _posterImageFrameIndex;
    NSMutableDictionary *_cachedFramesForIndexes;
    NSMutableIndexSet *_cachedFrameIndexes;
    NSMutableIndexSet *_requestedFrameIndexes;
    NSIndexSet *_allFramesIndexSet;
    unsigned long long _memoryWarningCount;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSArray *_animationImages;
    id <FLAnimatedImageGenerating> _imageGenerating;
    struct CGImageSource *_imageSource;
    FLAnimatedImage *_weakProxy;
    NSMutableArray *_pendingIndexes;
    id <FLAnimatedImageGeneratingRequest> _imageGeneratingRequest;
    struct CGSize _size;
}

+ (void)initialize;
+ (id)predrawnImageFromImage:(id)arg1;
+ (struct CGSize)sizeForImage:(id)arg1;
- (void).cxx_destruct;
- (void)addFrameIndexesToCache:(id)arg1;
- (void)addFrameToCache:(unsigned long long)arg1;
@property(readonly, nonatomic) NSIndexSet *allFramesIndexSet; // @synthesize allFramesIndexSet=_allFramesIndexSet;
@property(readonly, copy, nonatomic) NSArray *animationImages; // @synthesize animationImages=_animationImages;
@property(readonly, nonatomic) NSMutableIndexSet *cachedFrameIndexes; // @synthesize cachedFrameIndexes=_cachedFrameIndexes;
@property(readonly, nonatomic) NSMutableDictionary *cachedFramesForIndexes; // @synthesize cachedFramesForIndexes=_cachedFramesForIndexes;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (void)dealloc;
@property(readonly, nonatomic) NSDictionary *delayTimesForIndexes; // @synthesize delayTimesForIndexes=_delayTimesForIndexes;
- (id)description;
- (void)didReceiveMemoryWarning:(id)arg1;
@property(readonly, nonatomic) unsigned long long frameCacheSizeCurrent;
@property(nonatomic) unsigned long long frameCacheSizeMax; // @synthesize frameCacheSizeMax=_frameCacheSizeMax;
@property(nonatomic) unsigned long long frameCacheSizeMaxInternal; // @synthesize frameCacheSizeMaxInternal=_frameCacheSizeMaxInternal;
@property(readonly, nonatomic) unsigned long long frameCacheSizeOptimal; // @synthesize frameCacheSizeOptimal=_frameCacheSizeOptimal;
@property(readonly, nonatomic) unsigned long long frameCount; // @synthesize frameCount=_frameCount;
- (id)frameIndexesToCache;
- (void)growFrameCacheSizeAfterMemoryWarning:(id)arg1;
@property(readonly, nonatomic) id <FLAnimatedImageGenerating> imageGenerating; // @synthesize imageGenerating=_imageGenerating;
@property(retain, nonatomic) id <FLAnimatedImageGeneratingRequest> imageGeneratingRequest; // @synthesize imageGeneratingRequest=_imageGeneratingRequest;
- (id)imageLazilyCachedAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) struct CGImageSource *imageSource; // @synthesize imageSource=_imageSource;
- (id)initWithAnimatedGIFData:(id)arg1;
- (id)initWithAnimationImages:(id)arg1 timeInterval:(double)arg2;
- (id)initWithImageGenerating:(id)arg1 timeInterval:(double)arg2;
@property(readonly, nonatomic) unsigned long long loopCount; // @synthesize loopCount=_loopCount;
@property(nonatomic) unsigned long long memoryWarningCount; // @synthesize memoryWarningCount=_memoryWarningCount;
@property(retain, nonatomic) NSMutableArray *pendingIndexes; // @synthesize pendingIndexes=_pendingIndexes;
@property(readonly, nonatomic) UIImage *posterImage; // @synthesize posterImage=_posterImage;
@property(readonly, nonatomic) unsigned long long posterImageFrameIndex; // @synthesize posterImageFrameIndex=_posterImageFrameIndex;
- (void)predrawnImageAtIndex:(unsigned long long)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)purgeFrameCacheIfNeeded;
@property(nonatomic) unsigned long long requestedFrameIndex; // @synthesize requestedFrameIndex=_requestedFrameIndex;
@property(readonly, nonatomic) NSMutableIndexSet *requestedFrameIndexes; // @synthesize requestedFrameIndexes=_requestedFrameIndexes;
- (void)resetFrameCacheSizeMaxInternal;
@property(nonatomic) _Bool runningPendingIndexing; // @synthesize runningPendingIndexing=_runningPendingIndexing;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) FLAnimatedImage *weakProxy; // @synthesize weakProxy=_weakProxy;

@end

