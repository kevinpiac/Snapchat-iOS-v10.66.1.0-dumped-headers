//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCContextV2ImpalaHandler-Protocol.h"

@class NSString, SCUserSession;

@interface SCContextV2ImpalaHandler : NSObject <SCContextV2ImpalaHandler>
{
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (id)initWithUserSession:(id)arg1;
- (_Bool)isSubscribedToImpalaProfileID:(id)arg1;
- (void)reportImpalaProfileID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setSubscribed:(_Bool)arg1 toProfileID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)shareImpalaProfileID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
