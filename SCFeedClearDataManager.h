//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCFeedClearDataManaging-Protocol.h"

@class NSString, SCPreferences;
@protocol SCPerforming;

@interface SCFeedClearDataManager : NSObject <SCFeedClearDataManaging>
{
    SCPreferences *_userPreferences;
    id <SCPerforming> _performer;
    unsigned long long _syncedSources;
}

- (void).cxx_destruct;
- (void)_handleFeedClearDataRequest:(id)arg1;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (id)initWithUserPreferences:(id)arg1 performer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

