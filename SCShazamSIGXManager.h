//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCQueuePerformer;

@interface SCShazamSIGXManager : NSObject
{
    SCQueuePerformer *_performer;
    struct SHAZAM_SIGX *_sigx;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_completeRequest:(id)arg1 withSucceeded:(_Bool)arg2 cancelled:(_Bool)arg3 sig:(id)arg4 error:(id)arg5 completionQueue:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (_Bool)_extract:(id)arg1 sig:(id *)arg2 error:(id *)arg3;
- (void)_setup;
- (void)dealloc;
- (id)init;
- (void)submitRequest:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

