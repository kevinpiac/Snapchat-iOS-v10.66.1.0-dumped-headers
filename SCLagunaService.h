//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCSessionRequestManager;

@interface SCLagunaService : NSObject
{
    SCSessionRequestManager *_requestManager;
}

- (void).cxx_destruct;
- (id)initWithRequestManager:(id)arg1;
- (void)updateUserAcceptedTermsOfUseForSpectacles:(_Bool)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;

@end

