//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCContextAwareThrottleRequest-Protocol.h"

@class NSString;

@interface SCContextAwareSnapCreationThrottleRequest : NSObject <SCContextAwareThrottleRequest>
{
    NSString *_requestID;
}

- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)requestID;
- (_Bool)shouldThrottle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
