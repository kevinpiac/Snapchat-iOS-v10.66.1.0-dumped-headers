//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TCV3CognacSessionDelegate-Protocol.h"

@interface TCV3CognacSessionDelegateCppProxy : NSObject <TCV3CognacSessionDelegate>
{
    struct Handle<std::__1::shared_ptr<talkcorev3::CognacSessionDelegate>, std::__1::shared_ptr<talkcorev3::CognacSessionDelegate>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getConversationCtx;
- (id)initWithCpp:(const shared_ptr_f42f8736 *)arg1;
- (void)onConnectivityChanged;
- (void)onMessage:(id)arg1 message:(id)arg2;
- (void)onStateChanged;
- (void)refreshAuth:(id)arg1;

@end

