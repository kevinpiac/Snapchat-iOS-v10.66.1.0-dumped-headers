//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUnlockablesAuthProvider-Protocol.h"
#import "SCUnlockablesExperimentProvider-Protocol.h"
#import "SCUnlockablesSnapScoreProvider-Protocol.h"

@class NSData, NSDate, SCULUserExperiments;

@interface SCGtqUserData : NSObject <SCUnlockablesAuthProvider, SCUnlockablesExperimentProvider, SCUnlockablesSnapScoreProvider>
{
}

@property(readonly, nonatomic) NSDate *authInfoTimestamp;
@property(readonly, nonatomic) NSData *encryptedUserData;
@property(readonly, nonatomic) SCULUserExperiments *experiments;
@property(readonly, nonatomic) _Bool isAuthInfoExpired;
@property(readonly, nonatomic) unsigned long long snapScore;

@end

