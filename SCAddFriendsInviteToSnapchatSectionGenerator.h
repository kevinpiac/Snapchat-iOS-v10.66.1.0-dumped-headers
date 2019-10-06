//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAddFriendsCollectionViewSectionGenerating-Protocol.h"
#import "SCAddFriendsSearchResultSectionDescriptorGenerating-Protocol.h"

@class NSString, SCInviteFriendStateTracker, SCLazy, SCUserSession;
@protocol SCImageDownloading;

@interface SCAddFriendsInviteToSnapchatSectionGenerator : NSObject <SCAddFriendsCollectionViewSectionGenerating, SCAddFriendsSearchResultSectionDescriptorGenerating>
{
    SCLazy *_snapchattersDataTracker;
    SCLazy *_nonSnapchattersDataFetcher;
    SCInviteFriendStateTracker *_inviteFriendStateTracker;
    SCLazy *_snapchattersDataFetcher;
    SCLazy *_userInfoProvider;
    id <SCImageDownloading> _imageDownloader;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (id)_createActionHandlerForSection:(id)arg1;
- (id)_sectionDataProviderForSectionType:(id)arg1;
- (id)_sectionInsetsForSectionType:(id)arg1;
- (id)initWithSnapchattersDataTracker:(id)arg1 nonSnapchattersDataFetcher:(id)arg2 snapchattersDataFetcher:(id)arg3 userInfoProvider:(id)arg4 inviteFriendStateTracker:(id)arg5 imageDownloader:(id)arg6 userSession:(id)arg7;
- (id)sectionDescriptorForSectionType:(id)arg1 queryText:(id)arg2;
- (id)sectionForSectionType:(id)arg1 actionHandler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

