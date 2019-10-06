//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMutableArray, NSURL, SCSentinel;
@protocol SCCloudFSFileEntity, SCPerforming;

@interface SCCloudFSFileDownloadRequestGroup : NSObject
{
    id <SCCloudFSFileEntity> _entity;
    NSURL *_cacheURL;
    id <SCPerforming> _performer;
    NSMutableArray *_requests;
    CDUnknownBlockType _resultHandler;
    CDUnknownBlockType _progressHandler;
    SCSentinel *_sentinel;
    _Bool _completed;
    unsigned long long _status;
    NSError *_error;
}

- (void).cxx_destruct;
- (void)_addRequest:(id)arg1;
- (void)_createDirectoriesIfNeededAtURL:(id)arg1;
- (id)_entityDownloadRequestWithMediaScenePath:(CDStruct_bac8f6e9)arg1;
- (void)_performWithRepresentations:(id)arg1 status:(unsigned long long)arg2 error:(id)arg3;
- (void)addRequest:(id)arg1 mediaScenePath:(CDStruct_bac8f6e9)arg2;
- (id)initWithEntity:(id)arg1 cacheURL:(id)arg2 performer:(id)arg3 progressHandler:(CDUnknownBlockType)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (void)removeRequest:(id)arg1;

@end

