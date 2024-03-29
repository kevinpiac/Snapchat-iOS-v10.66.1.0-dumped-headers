//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCSuggestedFriendStoring-Protocol.h"

@class NSString, SCLazy;

@interface SCComposerPeopleSuggestedFriendStore : NSObject <SCCSuggestedFriendStoring>
{
    SCLazy *_snapchattersDataFetcher;
    SCLazy *_snapchattersDataTracker;
    SCLazy *_snapchattersDataMutator;
}

+ (unsigned int)suggestionPageTypeForContext:(id)arg1;
- (void).cxx_destruct;
- (void)getSuggestedFriendsWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hideSuggestedFriendWithRequest:(id)arg1;
- (id)initWithSnapchattersDataFetcher:(id)arg1 snapchattersDataTracker:(id)arg2 snapchattersDataMutator:(id)arg3;
- (CDUnknownBlockType)onSuggestedFriendsUpdatedWithCallback:(CDUnknownBlockType)arg1;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

