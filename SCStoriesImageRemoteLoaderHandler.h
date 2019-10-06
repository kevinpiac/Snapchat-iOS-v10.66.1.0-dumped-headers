//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCStoriesThumbnailInfo;
@protocol OS_dispatch_queue;

@interface SCStoriesImageRemoteLoaderHandler : NSObject
{
    SCStoriesThumbnailInfo *_thumbnailInfo;
    NSObject<OS_dispatch_queue> *_completionQueue;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
- (id)initWithThumbnailInfo:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(readonly, copy, nonatomic) SCStoriesThumbnailInfo *thumbnailInfo; // @synthesize thumbnailInfo=_thumbnailInfo;

@end

