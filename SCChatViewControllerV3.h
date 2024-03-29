//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCChatBaseViewController.h"

#import "SCActionMenuViewControllerDelegate-Protocol.h"
#import "SCActionable-Protocol.h"
#import "SCAddToGroupViewControllerDelegate-Protocol.h"
#import "SCBitmojiAvatarBuilderRouterDelegate-Protocol.h"
#import "SCBlockedExceptionAlertControllerDelegate-Protocol.h"
#import "SCCaptureWorkflowResultDelegate-Protocol.h"
#import "SCChatCellGestureDelegate-Protocol.h"
#import "SCChatConversationUpdaterListener-Protocol.h"
#import "SCChatDrawerSender-Protocol.h"
#import "SCChatEraseMessageControllerDelegate-Protocol.h"
#import "SCChatFullscreenMediaChatTableCellDelegate-Protocol.h"
#import "SCChatInputMediaAccessoryDelegate-Protocol.h"
#import "SCChatInputSnapAccessoryDelegate-Protocol.h"
#import "SCChatInputSnapParameterProvider-Protocol.h"
#import "SCChatInputStateListener-Protocol.h"
#import "SCChatInputStickerAudioDelegate-Protocol.h"
#import "SCChatInputTextViewListener-Protocol.h"
#import "SCChatInputViewControllerDelegate-Protocol.h"
#import "SCChatStickerFavoritesDelegate-Protocol.h"
#import "SCChatTableViewV3PresenterDelegate-Protocol.h"
#import "SCChatTapActionHandlerDataProviding-Protocol.h"
#import "SCChatViewHeaderDataSource-Protocol.h"
#import "SCCommerceOperaPresenterDelegate-Protocol.h"
#import "SCFriendProfilePageActionHandlerDelegate-Protocol.h"
#import "SCGroupProfilePageActionHandlerDelegate-Protocol.h"
#import "SCGroupsDataRequestListener-Protocol.h"
#import "SCHeaderDelegate-Protocol.h"
#import "SCPageNameLogging-Protocol.h"
#import "SCReplyDelegate-Protocol.h"
#import "SCS2RStackDebuggable-Protocol.h"
#import "SCSavableItemChatTableViewCellDelegate-Protocol.h"
#import "SCShakeToReportDelegate-Protocol.h"
#import "SCSnapReplayControllerV3Delegate-Protocol.h"
#import "SCSnapReplayControllerV3Provider-Protocol.h"
#import "SCSnapReplayViewCellDelegate-Protocol.h"
#import "SCSnapchattersDataRequestListener-Protocol.h"
#import "SCTPresencePillTapListener-Protocol.h"
#import "SCTextChatTableViewCellV2Delegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSString, SCAddToGroupViewController, SCBaseMediaOperaPresenter, SCChatBaseTableView, SCChatMediaMessageSenderHelper, SCChatTableViewV3Delegate, SCChatTableViewV3Presenter, SCChatUIActionHandler, SCChatViewLifeCycleListenerAnnouncer, SCCommerceOperaPresenter, SCCustomVolumeController, SCFeedVerticalPresenter, SCLazy, SCMaxGroupSizeAlertView, SCNewGroupAddToGroupDelegateImpl, SCNewGroupViewController, SCSearchStoriesPresenter, SCStartChatIdentifier, SCUnifiedProfilePresenter, SCUserSession, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer, UIWindow;
@protocol SCActionHandling, SCChatConversationViewModel, SCChatMessageReleaser;

@interface SCChatViewControllerV3 : SCChatBaseViewController <SCActionMenuViewControllerDelegate, SCGroupsDataRequestListener, SCSnapReplayControllerV3Delegate, SCChatEraseMessageControllerDelegate, SCCommerceOperaPresenterDelegate, SCSnapchattersDataRequestListener, SCSavableItemChatTableViewCellDelegate, SCTextChatTableViewCellV2Delegate, SCChatInputViewControllerDelegate, SCChatInputSnapParameterProvider, SCChatInputSnapAccessoryDelegate, SCChatStickerFavoritesDelegate, SCChatInputStateListener, SCChatInputTextViewListener, SCGroupProfilePageActionHandlerDelegate, SCFriendProfilePageActionHandlerDelegate, SCBitmojiAvatarBuilderRouterDelegate, SCChatTapActionHandlerDataProviding, SCChatInputMediaAccessoryDelegate, SCCaptureWorkflowResultDelegate, SCChatInputStickerAudioDelegate, SCChatFullscreenMediaChatTableCellDelegate, SCChatCellGestureDelegate, SCSnapReplayControllerV3Provider, UIScrollViewDelegate, SCHeaderDelegate, SCTraceEnabled, UIGestureRecognizerDelegate, SCChatDrawerSender, SCBlockedExceptionAlertControllerDelegate, SCAddToGroupViewControllerDelegate, UINavigationControllerDelegate, SCChatTableViewV3PresenterDelegate, SCTPresencePillTapListener, SCReplyDelegate, SCActionable, SCSnapReplayViewCellDelegate, SCChatConversationUpdaterListener, SCS2RStackDebuggable, SCChatViewHeaderDataSource, SCShakeToReportDelegate, SCPageNameLogging>
{
    double _lastYOffset;
    SCUserSession *_userSession;
    NSString *_activeUserId;
    id <SCChatConversationViewModel> _conversationViewModel;
    id <SCChatMessageReleaser> _releaser;
    SCChatTableViewV3Presenter *_tableViewPresenter;
    SCLazy *_actionMenuVC;
    _Bool _actionMenuShown;
    SCLazy *_eraseMessageController;
    SCLazy *_mediaSendController;
    SCAddToGroupViewController *_addToGroupVC;
    SCNewGroupViewController *_newGroupVC;
    SCNewGroupAddToGroupDelegateImpl *_newGroupAddToGroupDelegate;
    SCFeedVerticalPresenter *_verticalPresenter;
    UITapGestureRecognizer *_tapGestureRecognizer;
    SCLazy *_blockedExceptionAlertVC;
    SCMaxGroupSizeAlertView *_maxGroupSizeAlertView;
    _Bool _refreshBitmojisOnAccessoryChange;
    NSString *_lastOneOnOneRecipient;
    SCBaseMediaOperaPresenter *_operaPresenter;
    NSMutableArray *_conversationUpdateListeners;
    SCSearchStoriesPresenter *_searchStoriesPresenter;
    SCCommerceOperaPresenter *_commerceOperaPresenter;
    SCChatUIActionHandler *_chatActionHandler;
    long long _cameraPageSource;
    unsigned long long _deeplinkType;
    _Bool _pendingOpenHamburger;
    SCLazy *_replayController;
    SCLazy *_snapchattersDataProvider;
    SCLazy *_snapchattersDataTracker;
    SCLazy *_snapchattersDataMutator;
    SCLazy *_usernameToSnapchatterFetcher;
    SCLazy *_groupSnapchatterRepository;
    SCLazy *_groupsDataCreator;
    SCLazy *_groupsDataMutator;
    _Bool _viewHasFullyAppeared;
    SCUnifiedProfilePresenter *_unifiedProfilePresenter;
    SCChatMediaMessageSenderHelper *_mediaMessageSenderHelper;
    _Bool _shouldSuppressKeyBoardForProfileDeepLink;
    SCLazy *_typingHandler;
    SCChatViewLifeCycleListenerAnnouncer *_lifeCycleAnnouncer;
    SCStartChatIdentifier *_activeChatIdentifier;
    UIWindow *_mediaFullScreenWindow;
    SCCustomVolumeController *_customVolumeController;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    double _snapViewingChatOffset;
    SCChatTableViewV3Delegate *_tableDelegate;
    SCChatBaseTableView *_tableView;
}

+ (id)pageViewName;
- (void).cxx_destruct;
- (void)_addConversationUpdateListener:(id)arg1;
- (void)_addCustomVolumeIgnoringNextVolumeChange:(_Bool)arg1;
- (void)_batchToggleSaveForStackedViewModel:(id)arg1;
- (void)_cleanupUnifiedProfile;
- (void)_didDeleteOrBlockSnapchatter;
- (void)_didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)_didLeaveGroupId:(id)arg1;
- (void)_didStartSnapchattersUpdateDataRequest:(id)arg1;
- (void)_dismissChatViewControllerIfInChatWithCompletion:(CDUnknownBlockType)arg1;
- (void)_dismissChatViewsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_goRightWithAnimation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleDeepLinkAfterViewDidSwipeIn;
- (void)_handleDeepLinkBeforeVisible;
- (void)_handleScreenCaptureWithType:(long long)arg1;
- (_Bool)_hasJustViewedSnapMessage;
- (_Bool)_hasSendingMessageInBlockForPath:(id)arg1;
- (_Bool)_hasVisibleImmutableViewModelCells;
- (void)_initChatTable;
- (void)_initGestures;
- (void)_initHeader;
- (void)_initInputController;
- (void)_initLogger;
- (void)_initMixins;
- (_Bool)_isOneOnOneConversationActiveForConversationId:(id)arg1;
- (_Bool)_isPlayingMedia;
- (_Bool)_isPresentedViewControllerUnifiedProfileViewController:(id)arg1;
- (unsigned long long)_messageIndexForTouchPoint:(struct CGPoint)arg1 stackedCell:(id)arg2 includeWhitespace:(_Bool)arg3;
- (id)_messageViewModelForCell:(id)arg1;
- (id)_messageViewModelForIndexPath:(id)arg1;
- (void)_notifyChildrenWithUpdatedViewModel:(id)arg1;
- (void)_notifyGroupInfoComponentsIfNecessaryForOldViewModel:(id)arg1 newViewModel:(id)arg2;
- (double)_pencilIconPadding;
- (void)_playChatSentSoundMaybe;
- (void)_playChatSoundMaybe:(unsigned long long)arg1;
- (void)_presentBlockedExceptionAlertForConversationId:(id)arg1;
- (void)_presentCameraForSnapchatterForUnifiedProfile:(id)arg1;
- (void)_presentGroupUnifiedProfileWithGroupId:(id)arg1;
- (void)_presentNewGroupVC;
- (void)_presentSendToForOwnerId:(id)arg1 mediaChatViewModel:(id)arg2;
- (void)_pressCameraFromUnifiedProfile;
- (void)_refreshSnapchatterData;
- (void)_removeCustomVolume;
- (_Bool)_replyViewModelNeedsLoading:(id)arg1;
- (void)_resetPresenceBar;
- (void)_resumeConversationIfNecessary;
- (void)_retryFailedMessageWithMessageId:(id)arg1 conversationId:(id)arg2;
- (struct CGRect)_screenFrameExcludingHeader;
- (void)_setShouldAnimateOnSave:(_Bool)arg1 forIndexPath:(id)arg2;
- (_Bool)_shouldNotifyParticipantOfChatScreenshot;
- (_Bool)_shouldPresentingOperaContentIgnoreScreenshot;
- (void)_showPendingViewModelForConversationId:(id)arg1 username:(id)arg2 isGroup:(_Bool)arg3;
- (id)_stackedCellIndexPathForViewModel:(id)arg1;
- (void)_switchToGroupChatWithGroupId:(id)arg1 deepLinkURL:(id)arg2;
- (void)_tapToLoadMediaViewModel:(id)arg1;
- (void)_tapToLoadReplyMediaViewModel:(id)arg1;
- (void)_updateBitmojiPackageForConversation:(id)arg1;
- (void)_updateChatTypingStateWithState:(id)arg1;
- (void)_updateFriendmojiIfNecessary;
- (void)_updateFriendmojiInChatIfNecessary;
- (void)_updateGroupFriendmojiImmediately:(_Bool)arg1;
- (void)_updateGroupNameInHeader;
- (id)_updatedViewModelForIndexPath:(id)arg1;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_chatActionHandler;
- (void)actionMenuDidDismiss:(id)arg1;
- (void)actionMenuDidOpen:(id)arg1;
- (void)actionMenuWillDismiss:(id)arg1;
@property(readonly, copy, nonatomic) SCStartChatIdentifier *activeChatIdentifier; // @synthesize activeChatIdentifier=_activeChatIdentifier;
- (id)activeConversationId;
- (id)activeGroupId;
- (void)addLifeCycleListener:(id)arg1;
- (id)additionalS2RDebugOutput;
- (void)allowMessageReleasing;
- (id)backgroundColorForHeader;
- (id)bitmojiAvatarBuilderPresentingViewController;
- (void)blockMessageReleasing;
- (id)borderColor;
- (double)borderThickness;
- (_Bool)canBeShown;
- (void)captureWorkflowDidDismissWithDidSendSnap:(_Bool)arg1;
- (void)cell:(id)arg1 didFinishAnimationForMessage:(id)arg2;
- (id)chatInputController;
- (id)chatMetricsEventInfoForConversationId:(id)arg1;
- (id)chatRecipientUsername;
- (void)commerceOperaViewerDidAppear:(id)arg1;
- (void)commerceOperaViewerDidDisappear:(id)arg1 unlockedLens:(id)arg2 additionalInfo:(id)arg3 wasBackgrounded:(_Bool)arg4;
- (id)conversationId;
- (struct NSDictionary *)conversationStickerUsageHistory;
- (id)conversationViewModel;
- (id)currentGroup;
- (id)currentGroupForGroupConversation;
@property(retain, nonatomic) SCCustomVolumeController *customVolumeController; // @synthesize customVolumeController=_customVolumeController;
- (void)dealloc;
- (id)defaultProjectNameV2;
- (id)defaultSubProjectName;
- (void)didAttemptToSendMessage;
- (void)didBatchSaveOrUnsaveMessageIds:(id)arg1 conversationId:(id)arg2 toSaved:(_Bool)arg3;
- (void)didConversationViewModelChange:(id)arg1;
- (void)didDismissAlertView;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didFollowThrough;
- (void)didGrantBlockExceptionForGroup:(id)arg1;
- (void)didInitialConversationFetchFailForConversationId:(id)arg1;
- (void)didLongPressOnMessageViewModel:(id)arg1 cell:(id)arg2;
- (void)didOverridingMuteSwitch:(_Bool)arg1;
- (void)didPressAddToGroupButton:(id)arg1;
- (void)didPressEraseMessageId:(id)arg1 conversationId:(id)arg2;
- (void)didPressMischiefConfirmationButton:(id)arg1 viewController:(id)arg2 groupName:(id)arg3;
- (void)didPressSendToForForwardableViewModel:(id)arg1;
- (void)didPressSendToForMediaChatViewModel:(id)arg1;
- (void)didPressSnapAccessoryButton;
- (void)didPressSnapReplyForViewModel:(id)arg1 withSticker:(id)arg2;
- (void)didReceiveBitmojiInChat:(id)arg1 stickerId:(id)arg2;
- (void)didRequestRetryFailedMessage:(id)arg1;
- (void)didReturnFromCameraWithoutSendingSnap;
- (void)didSaveCustomSticker:(id)arg1;
- (void)didSaveMediasToCameraRollFromViewModel:(id)arg1;
- (void)didSelectPreserveMessageForMessageId:(id)arg1 conversationId:(id)arg2;
- (void)didShowCompleteDisplayForMessageId:(id)arg1 conversationId:(id)arg2;
- (void)didShowPendingDisplayForMessageId:(id)arg1 conversationId:(id)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (void)didTapAddButtonForUsername:(id)arg1;
- (void)didTapDeepLinkWithUrl:(id)arg1 additionalInfo:(id)arg2;
- (void)didUpdateGroupsDataRequest:(long long)arg1 groupId:(id)arg2;
- (void)didViewModelsChangeForConversationId:(id)arg1;
- (void)disableTableViewInteractionBeforeChatNotesRecording;
- (void)dismissActionMenu:(_Bool)arg1;
- (void)dismissFullScreenView;
- (void)dismissViewControllerAnimated:(_Bool)arg1 viewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)enableKeyboardConditionallyOnChatEntry;
- (void)enableTableViewInteractionAfterChatNotesRecording;
- (void)enterPreviewMode;
- (void)eraseMessageController:(id)arg1 didDismissAlertView:(id)arg2;
- (void)eraseMessageControllerWillDisplayAlertView:(id)arg1;
- (id)fontForHeader:(id)arg1;
- (id)fontForPlaceholderInHeader;
- (void)friendProfilePageActionHandler:(id)arg1 navigatesToChatForGroupId:(id)arg2 deepLinkURL:(id)arg3;
- (void)friendProfilePageActionHandler:(id)arg1 navigatesToChatForSnapchatterUsername:(id)arg2 deepLinkURL:(id)arg3;
- (void)friendProfilePageActionHandler:(id)arg1 showCameraForSnapchatter:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)getPageName;
- (void)groupProfilePageActionHandler:(id)arg1 navigatesToChatForGroupId:(id)arg2 deepLinkURL:(id)arg3;
- (void)groupProfilePageActionHandler:(id)arg1 navigatesToChatForSnapchatterUsername:(id)arg2 deepLinkURL:(id)arg3;
- (void)groupProfilePageActionHandler:(id)arg1 showCameraForGroupId:(id)arg2;
- (void)groupProfilePageActionHandler:(id)arg1 showCameraForSnapchatter:(id)arg2;
- (void)groupProfilePageActionHandler:(id)arg1 showFriendProfileForSnapchatter:(id)arg2;
- (void)handleCommerceDeepLink:(id)arg1 additionalInfo:(id)arg2;
- (void)handleOffsetChangedForCells:(double)arg1;
- (void)headerTextViewTextEditingDidBegin;
- (void)headerTextViewTextEditingDidEnd;
- (void)hideCustomVolumeView;
- (id)iconForPlaceholderAttributedString;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)imageForXButtonInState:(unsigned long long)arg1;
- (id)initWithUserSession:(id)arg1 parentDelegate:(id)arg2 groupsDataTracker:(id)arg3 groupsDataCreator:(id)arg4 groupsDataMutator:(id)arg5 groupSnapchatterRepository:(id)arg6 snapchattersDataMutator:(id)arg7 snapchattersDataProvider:(id)arg8;
- (void)inputController:(id)arg1 didSendText:(id)arg2;
- (void)inputController:(id)arg1 sizeDidChange:(struct CGSize)arg2;
- (_Bool)inputController:(id)arg1 textViewShouldBeginEditing:(id)arg2;
- (void)inputController:(id)arg1 typingStateDidChange:(long long)arg2;
- (void)inputController:(id)arg1 willActivateItem:(id)arg2;
- (void)inputViewController:(id)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)inputViewController:(id)arg1 textView:(id)arg2 didPasteGifData:(id)arg3;
- (void)inputViewController:(id)arg1 textView:(id)arg2 didPasteMemoji:(id)arg3;
- (void)inputViewController:(id)arg1 willTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (_Bool)isFullScreenPlayerShown;
- (_Bool)isGroupConversation;
- (_Bool)isInChatCreationMode;
- (_Bool)isPartiallyVisible;
- (_Bool)isPlayingNYCShare;
- (_Bool)isPlayingSearchShare;
- (_Bool)isPlayingSnap;
- (_Bool)isPlayingStoryShare;
- (void)leavePreviewMode:(_Bool)arg1;
- (void)leftButtonPressed;
- (id)lifeCycleAnnouncer;
- (void)loadView;
- (void)longPress:(id)arg1;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
- (void)mediaAccessoryDidSendMessageFromPreview:(id)arg1;
- (struct CGRect)mediaBoundingFrame;
- (void)mediaDidDismissFullscreen;
- (void)mediaDidGoFullscreen:(_Bool)arg1;
@property(retain, nonatomic) UIWindow *mediaFullScreenWindow; // @synthesize mediaFullScreenWindow=_mediaFullScreenWindow;
- (void)mediaWillGoFullscreen;
- (unsigned long long)messageIndexForTouchPoint:(struct CGPoint)arg1 viewModel:(id)arg2 includeWhitespace:(_Bool)arg3;
- (id)messageViewModelWithMessageId:(id)arg1;
- (void)navigateToChatViewWithFriend:(id)arg1 deepLinkURL:(id)arg2 viewController:(id)arg3;
- (void)navigateToChatViewWithGroupId:(id)arg1;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)onCellTapped:(id)arg1 cell:(id)arg2;
- (void)onTapOnWhitespaceAroundStackedCell:(id)arg1;
- (id)operaPresenter;
- (void)operaPresenterDidDisappear;
- (void)operaPresenterWillAppear;
- (id)pageViewName;
- (void)pan:(id)arg1;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
- (void)performGesture:(long long)arg1 atIndexPath:(id)arg2 selectedIndex:(unsigned long long)arg3;
- (_Bool)prefersStatusBarHidden;
- (void)prepareSideMenuAppear;
- (void)prepareToBeVisible;
- (id)presenceController;
- (void)presentActionMenuViewControllerAtIndexPath:(id)arg1 selectedIndex:(unsigned long long)arg2 viewModel:(id)arg3;
- (void)presentProfileForSnapchatter:(id)arg1 addSource:(long long)arg2;
- (void)presentUnifiedProfileForSnapchatter:(id)arg1 addSourceType:(long long)arg2 completion:(CDUnknownBlockType)arg3 sourcePageType:(id)arg4;
- (void)productViewControllerDidFinish:(id)arg1;
- (id)recipient;
- (void)releaseMemory;
- (void)removeLifeCycleListener:(id)arg1;
- (id)replayController;
- (void)replayControllerConsumedRemainingCredits:(id)arg1 onSnap:(id)arg2 inConversation:(id)arg3;
- (void)replayControllerDidDismissAlertView:(id)arg1;
- (void)replayControllerWillDisplayAlertView:(id)arg1;
- (id)replyParameters;
- (void)replyWithParameter:(id)arg1;
- (_Bool)replyingToStoryWithChat;
- (void)restoreViewAfterSideMenuDisappear;
- (void)resumeConversation;
- (void)saveItemAtIndexPath:(id)arg1 withSelectedIndex:(unsigned long long)arg2;
- (void)saveMessageId:(id)arg1 conversationId:(id)arg2;
- (void)sccpConnectionStatusChanged;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)searchStoriesPresenter;
- (void)sendAudioNoteWithData:(id)arg1 duration:(double)arg2;
- (void)sendBloop:(id)arg1 fromCategory:(id)arg2 fromPosition:(unsigned long long)arg3 fromFullscreen:(_Bool)arg4 fromSource:(long long)arg5;
- (void)sendMediaDrawerMedia:(id)arg1 fromLocation:(CDStruct_1dee9796)arg2;
- (void)sendSticker:(id)arg1 fromPack:(id)arg2 fromPosition:(unsigned long long)arg3 fromSource:(long long)arg4;
- (void)sendVideoNoteWithData:(id)arg1 duration:(double)arg2;
- (void)setActionMenuShown:(_Bool)arg1;
- (void)setActiveConversationById:(id)arg1 deeplinkType:(unsigned long long)arg2 conversationSource:(long long)arg3;
- (void)setActiveTalkSessionForConversationWithId:(id)arg1;
- (void)setChatPageSource:(long long)arg1;
- (void)setChatSubpageName:(id)arg1;
- (void)setDeepLinkType:(unsigned long long)arg1;
- (void)setLifeCycleAnnouncer:(id)arg1;
@property(nonatomic) double snapViewingChatOffset; // @synthesize snapViewingChatOffset=_snapViewingChatOffset;
@property(retain, nonatomic) SCChatTableViewV3Delegate *tableDelegate; // @synthesize tableDelegate=_tableDelegate;
@property(retain, nonatomic) SCChatBaseTableView *tableView; // @synthesize tableView=_tableView;
- (_Bool)shouldDisableFullScreen;
- (_Bool)shouldDisableScrollOut:(id)arg1;
- (_Bool)shouldPopToRootViewController;
- (_Bool)shouldShowEditableHeader;
- (_Bool)shouldSuppressKeyboard;
- (void)showCustomVolumeViewIgnoringNextVolumeChange:(_Bool)arg1;
- (void)showMaxGroupSizeAlert;
- (void)showMigrationStateMessageIfNeeded;
- (void)stackedTableViewCell:(id)arg1 didSelectIndex:(unsigned long long)arg2 viewModel:(id)arg3;
- (void)stackedTableViewCellDidFinishPlayingNoteWithMessageId:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)tableIsFadedOut;
- (void)textChatTableViewCell:(id)arg1 didTapTag:(id)arg2;
- (id)textColorForHeader:(id)arg1;
- (id)textColorForPlaceholderInHeader:(id)arg1;
- (id)tintColorForHeader;
- (id)titleForHeader:(id)arg1;
- (void)unsaveMessageId:(id)arg1 conversationId:(id)arg2;
- (void)unsetActiveConversation;
- (void)updateTableContainerViewBottomConstraint;
- (void)updateTableContentInset:(double)arg1;
- (void)userDidScreenRecord;
- (void)userDidTakeScreenshot;
- (id)userSession;
- (void)view:(id)arg1 didFinishAnimationForMessage:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBecomeActive;
- (void)viewDidFullyAppearFromStack:(_Bool)arg1 fromBackground:(_Bool)arg2;
- (void)viewDidFullyDisappearFromStack:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidPopFromStack;
- (void)viewDidSwipeIn;
- (void)viewDidSwipeOut;
- (void)viewWillEnterBackground;
- (void)viewWillResignActive;
- (void)willDisplayAlertView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

