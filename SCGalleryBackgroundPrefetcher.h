//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBackgroundPrefetchProtocol-Protocol.h"

@class NSString, SCUserSession;

@interface SCGalleryBackgroundPrefetcher : NSObject <SCBackgroundPrefetchProtocol>
{
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)_debugNotifyTitle:(id)arg1 body:(id)arg2;
- (void)backgroundPrefetchMediaWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithUserSession:(id)arg1;
- (id)name;
- (unsigned long long)prefetchIntervalInSeconds;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

