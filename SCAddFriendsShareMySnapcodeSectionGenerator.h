//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAddFriendsCollectionViewSectionGenerating-Protocol.h"
#import "SCAddFriendsSearchResultSectionDescriptorGenerating-Protocol.h"

@class NSString, SCLazy;

@interface SCAddFriendsShareMySnapcodeSectionGenerator : NSObject <SCAddFriendsCollectionViewSectionGenerating, SCAddFriendsSearchResultSectionDescriptorGenerating>
{
    SCLazy *_snapchattersDataFetcher;
    SCLazy *_userInfoProvider;
    SCLazy *_snapchattersDataTracker;
}

- (void).cxx_destruct;
- (id)initWithSnapchattersDataFetcher:(id)arg1 snapchattersDataTracker:(id)arg2 userInfoProvider:(id)arg3;
- (id)sectionDescriptorForSectionType:(id)arg1 queryText:(id)arg2;
- (id)sectionForSectionType:(id)arg1 actionHandler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

