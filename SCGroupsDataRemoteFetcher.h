//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCGroupsDataRemoteFetching-Protocol.h"

@class SCSessionRequestManager;
@protocol SCGroupManager;

@interface SCGroupsDataRemoteFetcher : NSObject <SCGroupsDataRemoteFetching>
{
    id <SCGroupManager> _groupManager;
    SCSessionRequestManager *_requestManager;
}

- (void).cxx_destruct;
- (void)_handleGroupsResponse:(id)arg1;
- (void)fetchGroupsFromServer:(CDUnknownBlockType)arg1;
- (id)initWithGroupManager:(id)arg1 requestManager:(id)arg2;

@end

