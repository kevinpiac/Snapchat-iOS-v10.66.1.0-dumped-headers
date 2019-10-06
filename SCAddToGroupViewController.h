//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCAddToGroupViewDelegate-Protocol.h"
#import "SCBlockedExceptionAlertControllerDelegate-Protocol.h"
#import "SCChatViewHeaderDataSource-Protocol.h"
#import "SCGroupMiniProfileViewControllerDelegate-Protocol.h"
#import "SCGroupsDataRequestListener-Protocol.h"
#import "SCHeaderDelegate-Protocol.h"
#import "SCInvalidFriendAlertViewDelegate-Protocol.h"
#import "SCMiniProfileViewControllerDelegate-Protocol.h"
#import "SCPageNameLogging-Protocol.h"
#import "SCRecipientBarDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "SwipeView-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class FBKVOController, NSArray, NSMutableArray, NSString, SCAddToGroupView, SCChatViewHeader, SCGroupFilter, SCInvalidFriendAlertView, SCLazy, SCMaxGroupSizeAlertView, SCRecipientBar, SCRegisterV2EnterButton, SCUserSession, UIView;
@protocol SCAddToGroupViewControllerDelegate, SCChatGroup;

@interface SCAddToGroupViewController : UIViewController <SCGroupsDataRequestListener, SCTraceEnabled, UIAlertViewDelegate, SCRecipientBarDelegate, SCAddToGroupViewDelegate, SCChatViewHeaderDataSource, SCHeaderDelegate, SwipeView, SCBlockedExceptionAlertControllerDelegate, SCInvalidFriendAlertViewDelegate, SCMiniProfileViewControllerDelegate, SCGroupMiniProfileViewControllerDelegate, SCPageNameLogging>
{
    SCUserSession *_userSession;
    unsigned long long _chatCreationType;
    SCAddToGroupView *_addToGroupView;
    UIView *_confirmationButtonView;
    SCRegisterV2EnterButton *_confirmationButton;
    SCRegisterV2EnterButton *_arroyoConfirmationButton;
    double _keyboardHeight;
    NSMutableArray *_recipients;
    NSArray *_flattenFriends;
    NSArray *_friends;
    NSArray *_friendKeys;
    NSArray *_allGroups;
    NSArray *_relatedGroups;
    NSArray *_filteredGroups;
    NSArray *_filteredFriends;
    NSArray *_bestFriends;
    NSArray *_recents;
    NSArray *_friendsAndNamedGroups;
    NSArray *_friendAndNamedGroupKeys;
    FBKVOController *_kvoController;
    SCGroupFilter *_groupFilter;
    NSString *_filterString;
    SCInvalidFriendAlertView *_invalidFriendAlertView;
    SCLazy *_blockedExceptionAlertVC;
    SCMaxGroupSizeAlertView *_maxGroupSizeAlertView;
    id <SCChatGroup> _baseGroup;
    NSString *_temporaryGroupName;
    _Bool _isNavigatingStraightToGroup;
    double _startViewingTime;
    SCLazy *_snapchattersDataProvider;
    SCLazy *_groupsDataMutator;
    _Bool _dismissed;
    NSString *_baseGroupId;
    id <SCAddToGroupViewControllerDelegate> _addToGroupDelegate;
    SCRecipientBar *_recipientBar;
    SCChatViewHeader *_header;
}

- (void).cxx_destruct;
- (void)_addRecipient:(id)arg1;
- (_Bool)_canGroupChatWithFriend:(id)arg1;
- (void)_didChatWithFriendFromMiniProfile:(id)arg1 deepLinkURL:(id)arg2;
- (void)_didChatWithUserIdFromMiniProfile:(id)arg1 deepLinkURL:(id)arg2;
- (void)_dismiss:(_Bool)arg1;
- (void)_filterResults:(id)arg1;
- (id)_imageForRightDismissButtonInState:(unsigned long long)arg1;
- (_Bool)_isAddingToGroupChat;
- (_Bool)_isRTL;
- (void)_logChatPageChatCreateViewWithExitEvent:(long long)arg1 didSelectGroup:(_Bool)arg2;
- (id)_mutableSnapchattersForParticipants:(id)arg1;
- (double)_pencilIconPadding;
- (void)_recipientBarHeightDidChange:(id)arg1;
- (long long)_recipientsNeededForChatButton;
- (void)_reloadFriendsAndNamedGroups;
- (void)_removeRecipient:(id)arg1;
- (void)_resetToNewChatState;
- (void)_setRecipientsWithSnapchatters:(id)arg1;
- (_Bool)_shouldEnableArroyoChatButton;
- (_Bool)_shouldEnableChatButton;
- (_Bool)_shouldShowArroyoChatButton;
- (_Bool)_shouldShowChatButton;
- (void)_showInvalidFriendAlertWithName:(id)arg1;
- (void)_showMaxGroupSizeAlert;
- (void)_showTeamSnapchatAlert;
- (void)_startNewOneOnOneChatRecipientSelection;
- (id)_titleForArroyoConfirmationButton;
- (id)_titleForHeaderFromRecipientBar;
- (void)_updateGroupsWithRecipients;
- (void)addRecipientsToGroupWithId:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) __weak id <SCAddToGroupViewControllerDelegate> addToGroupDelegate; // @synthesize addToGroupDelegate=_addToGroupDelegate;
- (id)allGroups;
- (id)allPotentialRecipientSectionKeys;
- (id)allPotentialRecipients;
- (void)arroyoConfirmationButtonPressed;
- (_Bool)attemptAddRecipient:(id)arg1 sender:(id)arg2 section:(id)arg3;
- (_Bool)attemptRemoveRecipient:(id)arg1 sender:(id)arg2 section:(id)arg3;
- (id)backgroundColorForHeader;
@property(retain, nonatomic) NSString *baseGroupId; // @synthesize baseGroupId=_baseGroupId;
- (id)bestFriends;
- (id)borderColor;
- (double)borderThickness;
- (unsigned long long)chatCreationType;
- (id)chatRecipientUsername;
- (void)confirmationButtonPressed;
- (id)currentFilterText;
- (id)currentFriendSuggestion;
- (void)didBecomeActive:(id)arg1;
- (void)didChangeHeight:(double)arg1;
- (void)didGrantBlockExceptionForGroup:(id)arg1;
- (void)didSelectGroup:(id)arg1;
- (void)didUpdateGroupsDataRequest:(long long)arg1 groupId:(id)arg2;
- (void)dismiss;
@property(nonatomic) _Bool dismissed; // @synthesize dismissed=_dismissed;
- (id)filteredFriends;
- (id)filteredGroups;
- (id)fontForHeader:(id)arg1;
- (id)fontForPlaceholderInHeader;
- (void)friendDidDelete:(id)arg1;
- (id)getPageViewType;
- (id)getSuggestion:(id)arg1;
- (void)groupMiniProfileController:(id)arg1 wantsToNavigateToChatForFriend:(id)arg2 deepLinkURL:(id)arg3;
- (void)groupMiniProfileControllerDidPressChatButton:(id)arg1;
- (void)groupMiniProfileControllerDidPressSnapButton:(id)arg1;
- (void)groupMiniProfileControllerDidUpdateGroup:(id)arg1;
@property(readonly, nonatomic) SCChatViewHeader *header; // @synthesize header=_header;
- (void)headerTextFieldTextEditingDidBegin;
- (void)headerTextFieldTextEditingDidEnd;
- (void)hideInput;
- (id)iconForPlaceholderAttributedString;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)imageForXButtonInState:(unsigned long long)arg1;
- (void)initAddToGroupView;
- (void)initConfirmationButton;
- (void)initRecipientBar;
- (id)initWithUserSession:(id)arg1 creationType:(unsigned long long)arg2;
- (_Bool)isCreatingGroupAfterTappingRecipientBar;
- (_Bool)isFriendInBaseGroup:(id)arg1;
- (_Bool)isInChatCreationMode;
- (_Bool)isInPreviewMode;
- (_Bool)isSearching;
- (void)keyboardWillChange:(id)arg1 willShow:(_Bool)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)layoutAddToGroupViewTop;
- (void)layoutForRecipientBarChange;
- (void)layoutRecipientBar;
- (void)leftButtonPressed;
- (void)loadView;
- (void)miniProfileController:(id)arg1 wantsToNavigateToChatWithDeepLinkURL:(id)arg2;
- (void)miniProfileViewControllerDidPressSnapButton:(id)arg1;
- (id)pageViewName;
- (void)presentBlockedExceptionsAlertView:(id)arg1;
- (void)presentMiniProfileForFriend:(id)arg1;
- (void)presentMiniProfileForGroup:(id)arg1;
- (id)recents;
@property(readonly, nonatomic) SCRecipientBar *recipientBar; // @synthesize recipientBar=_recipientBar;
- (id)recipients;
- (id)relatedGroups;
- (void)reloadForChatCreationTypeChange;
- (void)reloadFriendsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)reloadGroupsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)reloadRecentsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resetGroupFilter;
- (void)rightButtonPressed;
- (void)setRecipientUserIds:(id)arg1;
- (_Bool)shouldGoStraightToChat;
- (_Bool)shouldShowEditableHeader;
- (void)showInput;
- (void)showKeyboardIfNecessary:(_Bool)arg1;
- (void)startNewGroupChatRecipientSelectionFromCreationType:(unsigned long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)textColorForHeader:(id)arg1;
- (void)textDidChange:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (id)tintColorForHeader;
- (id)titleForConfirmationButton;
- (id)titleForHeader:(id)arg1;
- (unsigned long long)titleTypeForInvalidFriendAlertView;
- (void)updateChatButton;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidFullyAppear;
- (void)viewDidFullyDisappear;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIView *hovaAccessoryView;
@property(readonly) Class superclass;

@end
