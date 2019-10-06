//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSendToDelegate-Protocol.h"
#import "SCSendToNavigationDelegate-Protocol.h"

@class IMPBusinessProfile, NSString, SCUserSession;

@interface SCImpalaPublicProfileSendToDelegate : NSObject <SCSendToDelegate, SCSendToNavigationDelegate>
{
    IMPBusinessProfile *_businessProfile;
    CDUnknownBlockType _callback;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)dismissSendViewController:(id)arg1;
- (id)initWithUserSession:(id)arg1 businessProfile:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)sendViewController:(id)arg1 sendToRecipients:(id)arg2 storiesPostingConfig:(id)arg3 businessIds:(id)arg4 mischiefs:(id)arg5 businessProfiles:(id)arg6 appStories:(id)arg7 gallery:(_Bool)arg8 inviteRecipientShown:(long long)arg9 additionalText:(id)arg10;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

