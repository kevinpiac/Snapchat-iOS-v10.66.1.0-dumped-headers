//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNContentManagerWriteStream-Protocol.h"

@class AVAssetResourceLoadingRequest, NSData, NSString, SCNContentManagerCancelableId;
@protocol SCPerforming;

@interface SCResourceLoaderCMWriteStream : NSObject <SCNContentManagerWriteStream>
{
    AVAssetResourceLoadingRequest *_loadingRequest;
    NSData *_firstChunk;
    NSString *_mediaId;
    unsigned long long _contentLength;
    CDUnknownBlockType _completion;
    id <SCPerforming> _queue;
    _Bool _initialized;
    unsigned long long _bytesReceived;
    int _state;
    SCNContentManagerCancelableId *_cancelableId;
}

- (void).cxx_destruct;
- (void)_finishRequestAndCallback;
- (void)_handleBytes:(long long)arg1 dataBytes:(id)arg2;
- (void)_handleError:(long long)arg1 message:(id)arg2;
- (_Bool)_isWriteStreamInProgress;
- (void)_putBytesHelper:(long long)arg1 dataBytes:(id)arg2;
- (void)_updateBytesReceievedWithLength:(unsigned long long)arg1;
- (void)cancelForContentResult:(id)arg1 playerCanceled:(_Bool)arg2;
- (id)debugDescription;
- (void)free;
- (void)initStreamForContentResult:(id)arg1;
- (id)initWithLoadingRequest:(id)arg1 firstChunk:(id)arg2 mediaId:(id)arg3 contentLength:(unsigned long long)arg4 queue:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)putBytes:(long long)arg1 dataBytes:(id)arg2;
- (void)setError:(long long)arg1 message:(id)arg2;

@end
