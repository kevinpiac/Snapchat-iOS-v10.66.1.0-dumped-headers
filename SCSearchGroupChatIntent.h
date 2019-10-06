//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSearchIntent-Protocol.h"

@class NSString, SCSearchCellController;

@interface SCSearchGroupChatIntent : NSObject <SCSearchIntent>
{
    NSString *_groupId;
    SCSearchCellController *_cellController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak SCSearchCellController *cellController; // @synthesize cellController=_cellController;
@property(readonly, copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (id)initWithGroupId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
