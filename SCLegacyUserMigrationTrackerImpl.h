//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLegacyUserMigrationTracker-Protocol.h"

@class NSString, SCLazy;

@interface SCLegacyUserMigrationTrackerImpl : NSObject <SCLegacyUserMigrationTracker>
{
    SCLazy *_userPreferences;
}

- (void).cxx_destruct;
- (_Bool)didMigrateForProvider:(id)arg1;
- (id)initWithUserPreferences:(id)arg1;
- (void)setDidMigrateForProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

