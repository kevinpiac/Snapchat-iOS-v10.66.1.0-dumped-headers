//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCUploadLocationAutoRefillBuffer;
@protocol SCPerforming, SCRequestManager;

@interface SCBoltUploadManager : NSObject
{
    id <SCPerforming> _performer;
    SCUploadLocationAutoRefillBuffer *_uploadLocationBuffer;
    id <SCRequestManager> _requestManager;
}

- (void).cxx_destruct;
- (id)initWithPerformer:(id)arg1 uploadLocationsProvider:(id)arg2 requestManager:(id)arg3;
- (void)uploadWithData:(id)arg1 callbackPerformer:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;

@end
