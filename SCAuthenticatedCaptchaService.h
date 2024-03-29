//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCGetCaptchaResponseParser, SCSessionRequestManager, SCSolveCaptchaResponseParser;

@interface SCAuthenticatedCaptchaService : NSObject
{
    SCSessionRequestManager *_requestManager;
    SCGetCaptchaResponseParser *_getCaptchaResponseParser;
    SCSolveCaptchaResponseParser *_solveCaptchaResponseParser;
}

- (void).cxx_destruct;
- (void)getCaptchaSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (id)initWithRequestManager:(id)arg1;
- (void)solveCaptchaWithId:(id)arg1 solution:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;

@end

