//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TCV3PresenceServiceDelegate-Protocol.h"

@interface TCV3PresenceServiceDelegateCppProxy : NSObject <TCV3PresenceServiceDelegate>
{
    struct Handle<std::__1::shared_ptr<talkcorev3::PresenceServiceDelegate>, std::__1::shared_ptr<talkcorev3::PresenceServiceDelegate>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getParticipants:(id)arg1;
- (id)initWithCpp:(const shared_ptr_a60f1bfa *)arg1;
- (void)notifyActiveConversationsChanged;
- (void)sendPresenceMessage:(id)arg1;

@end

