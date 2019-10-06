//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCMiniProfileSectionController.h"

#import "SCMiniProfileOptionRowControllerDelegate-Protocol.h"

@class NSString;
@protocol SCGroupMiniProfileOptionsSectionControllerDelegate;

@interface SCGroupMiniProfileOptionsSectionController : SCMiniProfileSectionController <SCMiniProfileOptionRowControllerDelegate>
{
    id <SCGroupMiniProfileOptionsSectionControllerDelegate> _delegate;
    NSString *_groupId;
    _Bool _hidesActionButtons;
}

- (void).cxx_destruct;
- (long long)_optionFromRowIndex:(long long)arg1;
- (id)initWithDelegate:(id)arg1 groupId:(id)arg2 hidesActionButtons:(_Bool)arg3;
- (long long)numberOfRows;
- (void)optionRowControllerDidSelect:(id)arg1;
- (id)rowControllerAtIndex:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

