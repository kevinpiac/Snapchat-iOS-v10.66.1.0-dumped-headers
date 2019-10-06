//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, SCImageProcessPixelRequest, SCImageProcessQueue, SCQueuePerformer;

@interface SCImageProcessMultiPixelSession : NSObject
{
    SCImageProcessQueue *_queue;
    NSArray *_commands;
    NSArray *_images;
    NSArray *_presentationTimes;
    struct CGAffineTransform _viewportTransform;
    SCImageProcessPixelRequest *_request;
    _Bool _stopped;
    NSMutableArray *_processedArray;
    SCQueuePerformer *_performer;
    CDUnknownBlockType _completion;
    _Bool _useTransparentBackground;
}

- (void).cxx_destruct;
- (void)_processImageAtIndex:(long long)arg1;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 images:(id)arg2 presentationTimes:(id)arg3 commands:(id)arg4 viewportTransform:(struct CGAffineTransform)arg5;
- (void)runWithCompletion:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool useTransparentBackground; // @synthesize useTransparentBackground=_useTransparentBackground;
- (void)stopRunning;

@end
