//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSearchSectionCreating-Protocol.h"

@class NSString, SCCheetahSendToLogger, SCCheetahSendToPreviewMessageCollector, SCLazy, SCPreviewExporter, SCSendToDocObjectRecipientDataSource, SCSendToImpressionStateManager, SCSendToLatencyMetricLogger, SCSendToStoriesDataSource, SCSendToStoriesThumbnailProvider, SCUserSession, UIColor;
@protocol SCActionHandling, SCImageDownloading, SCSendPreviewViewModel, SCSendToIdentifierMapping, SCSendToScrollViewCoordinating, SCUserSelectionManaging;

@interface SCCheetahSendToSectionCreator : NSObject <SCSearchSectionCreating>
{
    SCUserSession *_userSession;
    id <SCActionHandling> _actionHandler;
    SCSendToDocObjectRecipientDataSource *_docObjectRecipientDataSource;
    SCSendToStoriesThumbnailProvider *_storiesThumbnailProvider;
    SCSendToStoriesDataSource *_storiesDataSource;
    id <SCUserSelectionManaging> _selectionStateManager;
    SCCheetahSendToPreviewMessageCollector *_previewMsgCollector;
    SCCheetahSendToPreviewMessageCollector *_userTextMsgCollector;
    id <SCSendPreviewViewModel> _previewMediaSource;
    _Bool _newUserTooltipEnabled;
    id <SCImageDownloading> _imageDownloader;
    SCCheetahSendToLogger *_logger;
    SCSendToLatencyMetricLogger *_latencyLogger;
    SCLazy *_userInfoProvider;
    SCSendToImpressionStateManager *_impressionStateManager;
    _Bool _showCustomStoryButton;
    _Bool _shouldEnablePostingToAppStories;
    _Bool _includingMyself;
    long long _recipientViewStyle;
    long long _headerViewStyle;
    _Bool _showUpdatedAddFriendsSection;
    UIColor *_headerTextColor;
    SCPreviewExporter *_previewExporter;
    id <SCSendToIdentifierMapping> _identifierMapper;
    id <SCSendToScrollViewCoordinating> _scrollViewCoordinator;
}

- (void).cxx_destruct;
- (id)_alertSectionWithIdentifier:(id)arg1;
- (id)_allFriendsSection;
- (id)_bestFriendsSection;
- (id)_emptyMischiefsSection;
- (id)_findFriendsSection;
- (id)_friendsSectionForIdentifier:(id)arg1;
- (id)_friendsWithoutNonMutualSnapStarsSection;
- (id)_lastRecipientsSectionWithHeader:(id)arg1;
- (id)_listsSectionWithListId:(id)arg1;
- (id)_mischiefsSection;
- (id)_myFriendsSection;
- (id)_newMischiefsSection;
- (id)_previewSection;
- (id)_quickAddSection;
- (id)_recentsSectionWithHeader:(id)arg1;
- (id)_searchAddFriendsSection;
- (id)_searchFriendsSectionForHeader:(id)arg1 identifier:(id)arg2;
- (id)_searchGeneralSection;
- (id)_searchGroupsSectionForHeader:(id)arg1 identifier:(id)arg2;
- (id)_shareSnapSection;
- (id)_snap3dMessageSection;
- (id)_snapBackSection;
- (id)_snapStarsSection;
- (id)_snappableFriendsSection;
- (id)_snappablesMessageSection;
- (id)_storiesListSectionWithHeader:(id)arg1;
- (id)_storiesSection;
- (id)_textSection;
- (id)_thisChatSection;
- (id)initWithUserSession:(id)arg1 actionHandler:(id)arg2 docObjectRecipientDataSource:(id)arg3 storiesThumbnailProvider:(id)arg4 storiesDataSource:(id)arg5 selectionStateManager:(id)arg6 previewMsgCollector:(id)arg7 userTextMsgCollector:(id)arg8 previewMediaSource:(id)arg9 newUserTooltipEnabled:(_Bool)arg10 imageDownloader:(id)arg11 logger:(id)arg12 latencyLogger:(id)arg13 userInfoProvider:(id)arg14 impressionStateManager:(id)arg15 showCustomStoryButton:(_Bool)arg16 previewExporter:(id)arg17 shouldEnableV11Theme:(_Bool)arg18 showUpdatedAddFriendsSection:(_Bool)arg19 shouldEnablePostingToAppStories:(_Bool)arg20 includingMyself:(_Bool)arg21 identifierMapper:(id)arg22 scrollViewCoordinator:(id)arg23;
- (id)sectionForDescriptor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

