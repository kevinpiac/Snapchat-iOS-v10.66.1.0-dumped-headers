//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCArroyoConversationIdsManager, SCCharmsBlizzardLogger, SCCharmsDataCoordinator, SCLazy, SCProfileChatAttachmentDataStore, SCProfileChatMediaDataStore, SCUserSession;
@protocol SCChatConversationManager, SCGroupManager, SCGroupSnapchatterRepository, SCGroupsDataMutating, SCGroupsDataTracking, SCLegacyItemDownloading, SCStoriesPlaybackDataProviding;

@interface SCGroupUnifiedProfileFactory : NSObject
{
    SCUserSession *_userSession;
    id <SCGroupManager> _groupManager;
    id <SCGroupsDataTracking> _groupsDataTracker;
    id <SCGroupsDataMutating> _groupsDataMutator;
    id <SCGroupSnapchatterRepository> _groupSnapchatterRepository;
    id <SCLegacyItemDownloading> _labelInfoFetcher;
    SCLazy *_snapchattersDataFetcher;
    SCLazy *_snapchattersDataMutator;
    SCLazy *_snapchatterDataTracker;
    SCLazy *_snapchatterPublicInfoFetcher;
    SCLazy *_blockedSnapchatterFetcher;
    SCLazy *_userInfoProvider;
    SCLazy *_storiesDataAccess;
    id <SCStoriesPlaybackDataProviding> _storiesPlaybackDataProvider;
    SCLazy *_storiesMediaCoordinator;
    SCLazy *_myStoriesMediaCoordinator;
    SCLazy *_customStoriesDataFetcher;
    SCLazy *_friendsFeedDataAccess;
    id <SCChatConversationManager> _conversationManager;
    SCArroyoConversationIdsManager *_arroyoConversationIdsManager;
    SCProfileChatAttachmentDataStore *_chatAttachmentDataStore;
    SCProfileChatMediaDataStore *_chatMediaDataStore;
    SCCharmsDataCoordinator *_charmsDataCoordinator;
    SCCharmsBlizzardLogger *_charmsBlizzardLogger;
    SCLazy *_pinnedConversationsDataCoordinator;
}

- (void).cxx_destruct;
- (id)charmsViewingDataCoordinator;
- (id)groupProfileChatMediaDataSourceWithDataSource:(id)arg1;
- (id)groupProfilePageActionHandlerWithDataSource:(id)arg1 nonFriendFriendStoriesProvider:(id)arg2 replyDelegate:(id)arg3 startChatDelegate:(id)arg4 navigationDelegate:(id)arg5 profileChatMediaDataSource:(id)arg6 myStoriesDataSource:(id)arg7 charmsViewingDataCoordinator:(id)arg8 promptSectionDataCoordinator:(id)arg9;
- (id)groupUnifiedActionMenuActionHandlerWithDataSource:(id)arg1 myStoriesDataSource:(id)arg2;
- (id)groupUnifiedProfileDataSourceWithGroupId:(id)arg1 groupMembers:(id)arg2;
- (id)groupUnifiedProfileMyStoriesDataSourceWithGroupId:(id)arg1;
- (id)groupUnifiedProfilePromptSectionDataCoordinator;
- (id)groupUnifiedProfileSectionCreatorWithDataSource:(id)arg1 groupStoriesDataSource:(id)arg2 profileChatMediaDataSource:(id)arg3 charmsViewingDataCoordinator:(id)arg4 promptSectionDataCoordinator:(id)arg5 actionHandler:(id)arg6 presentingViewController:(id)arg7 navigationDelegate:(id)arg8;
- (id)initWithUserSession:(id)arg1 groupManager:(id)arg2 groupsDataTracker:(id)arg3 groupsDataMutator:(id)arg4 groupSnapchatterRepository:(id)arg5 labelInfoFetcher:(id)arg6 snapchattersDataFetcher:(id)arg7 snapchattersDataMutator:(id)arg8 snapchattersDataTracker:(id)arg9 snapchatterPublicInfoFetcher:(id)arg10 blockedSnapchatterFetcher:(id)arg11 userInfoProvider:(id)arg12 storiesDataAccess:(id)arg13 storiesPlaybackDataProvider:(id)arg14 storiesMediaCoordinator:(id)arg15 myStoriesMediaCoordinator:(id)arg16 customStoriesDataFetcher:(id)arg17 friendsFeedDataAccess:(id)arg18 conversationManager:(id)arg19 arroyoConversationIdsManager:(id)arg20 chatAttachmentDataStore:(id)arg21 chatMediaDataStore:(id)arg22 charmsDataCoordinator:(id)arg23 charmsBlizzardLogger:(id)arg24 pinnedConversationsDataCoordinator:(id)arg25;

@end
