//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol SCPerforming;

@interface SCVideoFrameRawDataCollector : NSObject
{
    id <SCPerforming> _performer;
    long long _collectedFrameNum;
    _Bool _isRawDataCollectionSuccessful;
    NSURL *_rawDataURL;
}

+ (id)generateVideoFrameRawDataArrayWithRawDataURL:(id)arg1;
- (void).cxx_destruct;
- (void)collectVideoFrameRawDataWithImageBuffer:(struct __CVBuffer *)arg1 frameNum:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)drainFrameDataCollectionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithPerformer:(id)arg1;
- (void)prepareForCollectingVideoFrameRawDataWithRawDataURL:(id)arg1;

@end

