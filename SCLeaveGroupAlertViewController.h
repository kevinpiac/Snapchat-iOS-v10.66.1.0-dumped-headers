//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLeaveGroupAlertDelegate-Protocol.h"

@class NSString, SCLazy;

@interface SCLeaveGroupAlertViewController : NSObject <SCLeaveGroupAlertDelegate>
{
    SCLazy *_leaveGroupAlertView;
    SCLazy *_groupsDataMutator;
    SCLazy *_groupsDataFetcher;
}

- (void).cxx_destruct;
- (void)_didPressLeaveGroupButtonForGroup:(id)arg1 inAlertFlow:(id)arg2;
- (void)didPressLeaveGroup:(id)arg1;
- (id)init;
- (void)presentLeaveGroupAlertViewForGroupId:(id)arg1 inAlertFlow:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

