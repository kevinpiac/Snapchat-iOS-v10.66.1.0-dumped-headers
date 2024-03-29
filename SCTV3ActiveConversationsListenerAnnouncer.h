//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTV3ActiveConversationsListener-Protocol.h"

@class NSString;

@interface SCTV3ActiveConversationsListenerAnnouncer : NSObject <SCTV3ActiveConversationsListener>
{
    struct mutex _mutex;
    struct shared_ptr<std::__1::vector<__weak id<SCTV3ActiveConversationsListener>, std::__1::allocator<__weak id<SCTV3ActiveConversationsListener>>>> _listeners;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)addListener:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)onActiveConversationsChanged;
- (void)removeListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

