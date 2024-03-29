//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCameraUserStatus-Protocol.h"

@class NSString, User;

@interface SCCameraUserStatusImpl : NSObject <SCCameraUserStatus>
{
    User *_user;
}

- (void).cxx_destruct;
- (id)initWithUser:(id)arg1;
- (_Bool)isFirstUseLens;
- (_Bool)isFirstUseScan;
- (_Bool)isUserLoggedIn;
- (void)logHasSeenLens;
- (void)logHasSeenScan;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

