//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProxy.h>

@protocol SCChatMessageReleaser;

@interface SCChatMessageReleaserProxy : NSProxy
{
    id <SCChatMessageReleaser> _v3Releaser;
    id <SCChatMessageReleaser> _arroyoReleaser;
    _Bool _isArroyoConversation;
}

- (void).cxx_destruct;
- (id)_activeMessageReleaser;
- (Class)class;
- (_Bool)conformsToProtocol:(id)arg1;
- (id)debugDescription;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithV3MessageRelease:(id)arg1 arroyoMessageReleaser:(id)arg2;
- (_Bool)isKindOfClass:(Class)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;

@end

