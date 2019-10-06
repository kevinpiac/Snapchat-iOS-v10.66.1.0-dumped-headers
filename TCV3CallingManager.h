//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TCV3CallingManager : NSObject
{
    struct Handle<std::__1::shared_ptr<talkcorev3::CallingManager>, std::__1::shared_ptr<talkcorev3::CallingManager>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)applyRemoteState:(id)arg1 senderUsername:(id)arg2 isLockScreen:(_Bool)arg3;
- (void)dismissCall;
- (id)getPublishersForNotification:(id)arg1;
- (id)initWithCpp:(const shared_ptr_890eee60 *)arg1;
- (long long)processNotification:(id)arg1 senderUsername:(id)arg2 isLockScreen:(_Bool)arg3;
- (long long)processRingingTimeout:(id)arg1;
- (void)startCall:(long long)arg1;
- (void)updateMuteStatus:(_Bool)arg1;
- (void)updatePublishedMedia:(long long)arg1;

@end

