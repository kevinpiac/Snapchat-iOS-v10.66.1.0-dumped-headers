//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADLServiceListener-Protocol.h"

@interface ADLServiceListenerCppProxy : NSObject <ADLServiceListener>
{
    struct Handle<std::__1::shared_ptr<addlive::ServiceListener>, std::__1::shared_ptr<addlive::ServiceListener>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCpp:(const shared_ptr_5fdff3df *)arg1;
- (void)onConnectionLost:(id)arg1;
- (void)onMediaStreamEvent:(id)arg1;
- (void)onMediaTransportTypeChanged:(id)arg1;
- (void)onMessage:(id)arg1;
- (void)onSessionReconnected:(id)arg1;
- (void)onSpeechActivity:(id)arg1;
- (void)onUserEvent:(id)arg1;

@end

