//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNMessagingFetchConversationCallback-Protocol.h"

@interface SCArroyoFetchConversationCallback : NSObject <SCNMessagingFetchConversationCallback>
{
    CDUnknownBlockType _successCallback;
    CDUnknownBlockType _failureCallback;
}

- (void).cxx_destruct;
- (id)initWithSuccessHandler:(CDUnknownBlockType)arg1 failureHandler:(CDUnknownBlockType)arg2;
- (void)onError:(long long)arg1;
- (void)onFetchConversationComplete:(id)arg1;

@end

