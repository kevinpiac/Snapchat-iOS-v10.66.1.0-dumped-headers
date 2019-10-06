//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSearchV2UserInfoProviding-Protocol.h"

@class NSString, SCLazy, SCQueuePerformer, User;
@protocol SCLocationProvider;

@interface SCSearchV2UserInfoProvider : NSObject <SCSearchV2UserInfoProviding>
{
    User *_user;
    SCLazy *_bitmojiAvatarProvider;
    id <SCLocationProvider> _locationProvider;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (void)getCurrentUserInfoWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithUser:(id)arg1 bitmojiAvatarProvider:(id)arg2 locationProvider:(id)arg3;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

